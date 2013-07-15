#include "moarvm.h"
#include <math.h>

static MVMnum64 mp_get_double(mp_int *a) {
    MVMnum64 d    = 0.0;
    MVMnum64 sign = SIGN(a) == MP_NEG ? -1.0 : 1.0;
    int i;
    if (USED(a) == 0)
        return d;
    if (USED(a) == 1)
        return sign * (MVMnum64) DIGIT(a, 0);

    mp_clamp(a);
    i = USED(a) - 1;
    d = (MVMnum64) DIGIT(a, i);
    i--;
    if (i == -1) {
        return sign * d;
    }
    d *= pow(2.0, DIGIT_BIT);
    d += (MVMnum64) DIGIT(a, i);

    if (USED(a) > 2) {
        i--;
        d *= pow(2.0, DIGIT_BIT);
        d += (MVMnum64) DIGIT(a, i);
    }

    d *= pow(2.0, DIGIT_BIT * i);
    return sign * d;
}

static void from_num(MVMnum64 d, mp_int *a) {
    MVMnum64 d_digit = pow(2, DIGIT_BIT);
    MVMnum64 da      = fabs(d);
    MVMnum64 upper;
    MVMnum64 lower;
    MVMnum64 lowest;
    MVMnum64 rest;
    int      digits  = 0;

    mp_zero(a);

    while (da > d_digit * d_digit * d_digit) {;
        da /= d_digit;
        digits++;
    }
    mp_grow(a, digits + 3);

    /* populate the top 3 digits */
    upper = da / (d_digit*d_digit);
    rest = fmod(da, d_digit*d_digit);
    lower = rest / d_digit;
    lowest = fmod(rest,d_digit );
    if (upper >= 1) {
        mp_set_long(a, (unsigned long) upper);
        mp_mul_2d(a, DIGIT_BIT , a);
        DIGIT(a, 0) = (mp_digit) lower;
        mp_mul_2d(a, DIGIT_BIT , a);
    } else {
        if (lower >= 1) {
            mp_set_long(a, (unsigned long) lower);
            mp_mul_2d(a, DIGIT_BIT , a);
            a->used = 2;
        } else {
            a->used = 1;
        }
    }
    DIGIT(a, 0) = (mp_digit) lowest;

    /* shift the rest */
    mp_mul_2d(a, DIGIT_BIT * digits, a);
    if (d < 0)
        mp_neg(a, a);
    mp_clamp(a);
    mp_shrink(a);
}

static mp_int * MVM_get_bigint(MVMObject *obj) {
  return &((P6bigint *)obj)->body.i;
}

#define MVM_BIGINT_UNARY_OP(opname) \
void MVM_bigint_##opname(MVMObject *b, MVMObject *a) { \
    mp_int *ia = MVM_get_bigint(a); \
    mp_int *ib = MVM_get_bigint(b); \
    mp_##opname(ia, ib); \
}

#define MVM_BIGINT_BINARY_OP(opname) \
void MVM_bigint_##opname(MVMObject *c, MVMObject *a, MVMObject *b) { \
    mp_int *ia = MVM_get_bigint(a); \
    mp_int *ib = MVM_get_bigint(b); \
    mp_int *ic = MVM_get_bigint(c); \
    mp_##opname(ia, ib, ic); \
}

#define MVM_BIGINT_COMPARE_OP(opname) \
MVMint64 MVM_bigint_##opname(MVMObject *a, MVMObject *b) { \
    mp_int *ia = MVM_get_bigint(a); \
    mp_int *ib = MVM_get_bigint(b); \
    return (MVMint64) mp_##opname(ia, ib); \
}

MVM_BIGINT_UNARY_OP(abs)
MVM_BIGINT_UNARY_OP(neg)
/* unused */
/* MVM_BIGINT_UNARY_OP(sqrt) */

MVM_BIGINT_BINARY_OP(add)
MVM_BIGINT_BINARY_OP(sub)
MVM_BIGINT_BINARY_OP(mul)
MVM_BIGINT_BINARY_OP(mod)
MVM_BIGINT_BINARY_OP(gcd)
MVM_BIGINT_BINARY_OP(lcm)

MVM_BIGINT_BINARY_OP(or)
MVM_BIGINT_BINARY_OP(xor)
MVM_BIGINT_BINARY_OP(and)

MVM_BIGINT_COMPARE_OP(cmp)


void MVM_bigint_div(MVMObject *c, MVMObject *a, MVMObject *b) {
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);
    mp_int *ic = MVM_get_bigint(c);
    mp_div(ia, ib, ic, NULL);
}

void MVM_bigint_pow(MVMObject *c, MVMObject *a, MVMObject *b) {
    mp_int *base = MVM_get_bigint(a);
    mp_int *exponent = MVM_get_bigint(b);
    mp_int *ic = MVM_get_bigint(c);
    mp_digit exponent_d = 0;
    int cmp = mp_cmp_d(exponent, 0);
    mp_init(ic);

    if (((cmp == MP_EQ) || (MP_EQ == mp_cmp_d(base, 1)))) {
        mp_set_int(ic, 1);
    }
    else {
        if ((cmp == MP_GT)) {
            exponent_d = mp_get_int(exponent);
            if ((MP_GT == mp_cmp_d(exponent, exponent_d))) {
                cmp = mp_cmp_d(base, 0);
                if (((MP_EQ == cmp) || (MP_EQ == mp_cmp_d(base, 1)))) {
                    mp_copy(base, ic);
                }
                else {
                    MVMnum64 ZERO = 0.0;
                    if ((MP_GT == cmp)) {
                        mp_set_int(ic, (MVMnum64)1.0 / ZERO);
                    }
                    else {
                        mp_set_int(ic, (MVMnum64)(-1.0) / ZERO);
                    }
                }
            }
            else {
                mp_expt_d(base, exponent_d, ic);
            }
        }
        else {
            MVMnum64 f_base = mp_get_double(base);
            MVMnum64 f_exp = mp_get_double(exponent);
            mp_set_int(ic, pow(f_base, f_exp));
        }
    }
}

void MVM_bigint_shl(MVMObject *b, MVMObject *a, MVMint64 n) {
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);
    mp_mul_2d(ia, n, ib);
}

void MVM_bigint_shr(MVMObject *b, MVMObject *a, MVMint64 n) {
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);
    mp_div_2d(ia, n, ib, NULL);
}

void MVM_bigint_not(MVMObject *b, MVMObject *a) {
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);
    /* two's complement not: add 1 and negate */
    mp_add_d(ia, 1, ib);
    mp_neg(ib, ib);
}

void MVM_bigint_expmod(MVMObject *d, MVMObject *a, MVMObject *b, MVMObject *c) {
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);
    mp_int *ic = MVM_get_bigint(c);
    mp_int *id = MVM_get_bigint(d);
    mp_exptmod(ia, ib, ic, id);
}

void MVM_bigint_from_str(MVMObject *a, MVMuint8 *buf) {
    mp_int *i = MVM_get_bigint(a);
    char   *c = (char *)buf;
    mp_read_radix(i, buf, 10);
}

/* XXXX: This feels wrongly factored and possibly GC-unsafe */
MVMString * MVM_bigint_to_str(MVMThreadContext *tc, MVMObject *a, int base) {
    mp_int *i = MVM_get_bigint(a);
    int len;
    char *buf;
    MVMString *result;
    mp_radix_size(i, base, &len);
    buf = (char *) malloc(len);
    mp_toradix_n(i, buf, base, len);
    result = MVM_string_ascii_decode(tc, tc->instance->VMString, buf, len - 1);
    free(buf);
    return result;
}

MVMnum64 MVM_bigint_to_num(MVMThreadContext *tc, MVMObject *a) {
    mp_int *ia = MVM_get_bigint(a);
    return mp_get_double(ia);
}

void MVM_bigint_from_num(MVMThreadContext *tc, MVMObject *a, MVMnum64 n) {
    mp_int *ia = MVM_get_bigint(a);
    from_num(n, ia);
}

MVMnum64 nqp_bigint_div_num(MVMThreadContext *tc, MVMObject *a, MVMObject *b) {
    MVMnum64 c;
    mp_int *ia = MVM_get_bigint(a);
    mp_int *ib = MVM_get_bigint(b);

    int max_size = DIGIT_BIT * MAX(USED(ia), USED(ib));
    if (max_size > 1023) {
        mp_int reduced_a, reduced_b;
        mp_init(&reduced_a);
        mp_init(&reduced_b);
        mp_div_2d(ia, max_size - 1023, &reduced_a, NULL);
        mp_div_2d(ib, max_size - 1023, &reduced_b, NULL);
        c = mp_get_double(&reduced_a) / mp_get_double(&reduced_b);
        mp_clear(&reduced_a);
        mp_clear(&reduced_b);
    } else {
        c = mp_get_double(ia) / mp_get_double(ib);
    }
    return c;
}

