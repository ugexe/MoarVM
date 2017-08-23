/* This file is generated from src/core/oplist by tools/update_ops.p6. */

/* Op name defines. */
#define MVM_OP_no_op 0
#define MVM_OP_const_i8 1
#define MVM_OP_const_i16 2
#define MVM_OP_const_i32 3
#define MVM_OP_const_i64 4
#define MVM_OP_const_n32 5
#define MVM_OP_const_n64 6
#define MVM_OP_const_s 7
#define MVM_OP_set 8
#define MVM_OP_extend_u8 9
#define MVM_OP_extend_u16 10
#define MVM_OP_extend_u32 11
#define MVM_OP_extend_i8 12
#define MVM_OP_extend_i16 13
#define MVM_OP_extend_i32 14
#define MVM_OP_trunc_u8 15
#define MVM_OP_trunc_u16 16
#define MVM_OP_trunc_u32 17
#define MVM_OP_trunc_i8 18
#define MVM_OP_trunc_i16 19
#define MVM_OP_trunc_i32 20
#define MVM_OP_extend_n32 21
#define MVM_OP_trunc_n32 22
#define MVM_OP_goto 23
#define MVM_OP_if_i 24
#define MVM_OP_unless_i 25
#define MVM_OP_if_n 26
#define MVM_OP_unless_n 27
#define MVM_OP_if_s 28
#define MVM_OP_unless_s 29
#define MVM_OP_if_s0 30
#define MVM_OP_unless_s0 31
#define MVM_OP_if_o 32
#define MVM_OP_unless_o 33
#define MVM_OP_jumplist 34
#define MVM_OP_getlex 35
#define MVM_OP_bindlex 36
#define MVM_OP_getlex_ni 37
#define MVM_OP_getlex_nn 38
#define MVM_OP_getlex_ns 39
#define MVM_OP_getlex_no 40
#define MVM_OP_bindlex_ni 41
#define MVM_OP_bindlex_nn 42
#define MVM_OP_bindlex_ns 43
#define MVM_OP_bindlex_no 44
#define MVM_OP_getlex_ng 45
#define MVM_OP_bindlex_ng 46
#define MVM_OP_getdynlex 47
#define MVM_OP_binddynlex 48
#define MVM_OP_setlexvalue 49
#define MVM_OP_lexprimspec 50
#define MVM_OP_return_i 51
#define MVM_OP_return_n 52
#define MVM_OP_return_s 53
#define MVM_OP_return_o 54
#define MVM_OP_return 55
#define MVM_OP_eq_i 56
#define MVM_OP_ne_i 57
#define MVM_OP_lt_i 58
#define MVM_OP_le_i 59
#define MVM_OP_gt_i 60
#define MVM_OP_ge_i 61
#define MVM_OP_cmp_i 62
#define MVM_OP_add_i 63
#define MVM_OP_sub_i 64
#define MVM_OP_mul_i 65
#define MVM_OP_div_i 66
#define MVM_OP_div_u 67
#define MVM_OP_mod_i 68
#define MVM_OP_mod_u 69
#define MVM_OP_neg_i 70
#define MVM_OP_abs_i 71
#define MVM_OP_inc_i 72
#define MVM_OP_inc_u 73
#define MVM_OP_dec_i 74
#define MVM_OP_dec_u 75
#define MVM_OP_band_i 76
#define MVM_OP_bor_i 77
#define MVM_OP_bxor_i 78
#define MVM_OP_bnot_i 79
#define MVM_OP_blshift_i 80
#define MVM_OP_brshift_i 81
#define MVM_OP_pow_i 82
#define MVM_OP_not_i 83
#define MVM_OP_gcd_i 84
#define MVM_OP_lcm_i 85
#define MVM_OP_eq_n 86
#define MVM_OP_ne_n 87
#define MVM_OP_lt_n 88
#define MVM_OP_le_n 89
#define MVM_OP_gt_n 90
#define MVM_OP_ge_n 91
#define MVM_OP_cmp_n 92
#define MVM_OP_add_n 93
#define MVM_OP_sub_n 94
#define MVM_OP_mul_n 95
#define MVM_OP_div_n 96
#define MVM_OP_mod_n 97
#define MVM_OP_neg_n 98
#define MVM_OP_abs_n 99
#define MVM_OP_pow_n 100
#define MVM_OP_ceil_n 101
#define MVM_OP_floor_n 102
#define MVM_OP_sin_n 103
#define MVM_OP_asin_n 104
#define MVM_OP_cos_n 105
#define MVM_OP_acos_n 106
#define MVM_OP_tan_n 107
#define MVM_OP_atan_n 108
#define MVM_OP_atan2_n 109
#define MVM_OP_sec_n 110
#define MVM_OP_asec_n 111
#define MVM_OP_sinh_n 112
#define MVM_OP_cosh_n 113
#define MVM_OP_tanh_n 114
#define MVM_OP_sech_n 115
#define MVM_OP_sqrt_n 116
#define MVM_OP_log_n 117
#define MVM_OP_exp_n 118
#define MVM_OP_coerce_in 119
#define MVM_OP_coerce_ni 120
#define MVM_OP_coerce_is 121
#define MVM_OP_coerce_ns 122
#define MVM_OP_coerce_si 123
#define MVM_OP_coerce_sn 124
#define MVM_OP_smrt_numify 125
#define MVM_OP_smrt_strify 126
#define MVM_OP_prepargs 127
#define MVM_OP_arg_i 128
#define MVM_OP_arg_n 129
#define MVM_OP_arg_s 130
#define MVM_OP_arg_o 131
#define MVM_OP_argconst_i 132
#define MVM_OP_argconst_n 133
#define MVM_OP_argconst_s 134
#define MVM_OP_invoke_v 135
#define MVM_OP_invoke_i 136
#define MVM_OP_invoke_n 137
#define MVM_OP_invoke_s 138
#define MVM_OP_invoke_o 139
#define MVM_OP_checkarity 140
#define MVM_OP_param_rp_i 141
#define MVM_OP_param_rp_n 142
#define MVM_OP_param_rp_s 143
#define MVM_OP_param_rp_o 144
#define MVM_OP_param_op_i 145
#define MVM_OP_param_op_n 146
#define MVM_OP_param_op_s 147
#define MVM_OP_param_op_o 148
#define MVM_OP_param_rn_i 149
#define MVM_OP_param_rn_n 150
#define MVM_OP_param_rn_s 151
#define MVM_OP_param_rn_o 152
#define MVM_OP_param_on_i 153
#define MVM_OP_param_on_n 154
#define MVM_OP_param_on_s 155
#define MVM_OP_param_on_o 156
#define MVM_OP_param_sp 157
#define MVM_OP_param_sn 158
#define MVM_OP_getcode 159
#define MVM_OP_caller 160
#define MVM_OP_capturelex 161
#define MVM_OP_takeclosure 162
#define MVM_OP_exception 163
#define MVM_OP_bindexmessage 164
#define MVM_OP_bindexpayload 165
#define MVM_OP_bindexcategory 166
#define MVM_OP_getexmessage 167
#define MVM_OP_getexpayload 168
#define MVM_OP_getexcategory 169
#define MVM_OP_throwdyn 170
#define MVM_OP_throwlex 171
#define MVM_OP_throwlexotic 172
#define MVM_OP_throwcatdyn 173
#define MVM_OP_throwcatlex 174
#define MVM_OP_throwcatlexotic 175
#define MVM_OP_die 176
#define MVM_OP_rethrow 177
#define MVM_OP_resume 178
#define MVM_OP_takehandlerresult 179
#define MVM_OP_DEPRECATED_33 180
#define MVM_OP_DEPRECATED_34 181
#define MVM_OP_backtracestrings 182
#define MVM_OP_usecapture 183
#define MVM_OP_savecapture 184
#define MVM_OP_captureposelems 185
#define MVM_OP_captureposarg 186
#define MVM_OP_captureposarg_i 187
#define MVM_OP_captureposarg_n 188
#define MVM_OP_captureposarg_s 189
#define MVM_OP_captureposprimspec 190
#define MVM_OP_captureexistsnamed 191
#define MVM_OP_capturehasnameds 192
#define MVM_OP_invokewithcapture 193
#define MVM_OP_multicacheadd 194
#define MVM_OP_multicachefind 195
#define MVM_OP_null_s 196
#define MVM_OP_isnull_s 197
#define MVM_OP_eq_s 198
#define MVM_OP_ne_s 199
#define MVM_OP_gt_s 200
#define MVM_OP_ge_s 201
#define MVM_OP_lt_s 202
#define MVM_OP_le_s 203
#define MVM_OP_cmp_s 204
#define MVM_OP_eqat_s 205
#define MVM_OP_eqatic_s 206
#define MVM_OP_haveat_s 207
#define MVM_OP_concat_s 208
#define MVM_OP_repeat_s 209
#define MVM_OP_substr_s 210
#define MVM_OP_index_s 211
#define MVM_OP_graphs_s 212
#define MVM_OP_codes_s 213
#define MVM_OP_getcp_s 214
#define MVM_OP_indexcp_s 215
#define MVM_OP_uc 216
#define MVM_OP_lc 217
#define MVM_OP_tc 218
#define MVM_OP_split 219
#define MVM_OP_join 220
#define MVM_OP_getcpbyname 221
#define MVM_OP_indexat 222
#define MVM_OP_indexnat 223
#define MVM_OP_unipropcode 224
#define MVM_OP_unipvalcode 225
#define MVM_OP_hasuniprop 226
#define MVM_OP_hasunipropc 227
#define MVM_OP_chars 228
#define MVM_OP_chr 229
#define MVM_OP_ordfirst 230
#define MVM_OP_ordat 231
#define MVM_OP_rindexfrom 232
#define MVM_OP_escape 233
#define MVM_OP_flip 234
#define MVM_OP_setbuffersize_fh 235
#define MVM_OP_iscclass 236
#define MVM_OP_findcclass 237
#define MVM_OP_findnotcclass 238
#define MVM_OP_nfafromstatelist 239
#define MVM_OP_nfarunproto 240
#define MVM_OP_nfarunalt 241
#define MVM_OP_radix 242
#define MVM_OP_encode 243
#define MVM_OP_decode 244
#define MVM_OP_istrue_s 245
#define MVM_OP_isfalse_s 246
#define MVM_OP_null 247
#define MVM_OP_isnull 248
#define MVM_OP_ifnonnull 249
#define MVM_OP_findmeth 250
#define MVM_OP_findmeth_s 251
#define MVM_OP_can 252
#define MVM_OP_can_s 253
#define MVM_OP_create 254
#define MVM_OP_clone 255
#define MVM_OP_isconcrete 256
#define MVM_OP_rebless 257
#define MVM_OP_istype 258
#define MVM_OP_objprimspec 259
#define MVM_OP_gethow 260
#define MVM_OP_getwhat 261
#define MVM_OP_getwho 262
#define MVM_OP_setwho 263
#define MVM_OP_reprname 264
#define MVM_OP_getwhere 265
#define MVM_OP_eqaddr 266
#define MVM_OP_bindattr_i 267
#define MVM_OP_bindattr_n 268
#define MVM_OP_bindattr_s 269
#define MVM_OP_bindattr_o 270
#define MVM_OP_bindattrs_i 271
#define MVM_OP_bindattrs_n 272
#define MVM_OP_bindattrs_s 273
#define MVM_OP_bindattrs_o 274
#define MVM_OP_getattr_i 275
#define MVM_OP_getattr_n 276
#define MVM_OP_getattr_s 277
#define MVM_OP_getattr_o 278
#define MVM_OP_getattrs_i 279
#define MVM_OP_getattrs_n 280
#define MVM_OP_getattrs_s 281
#define MVM_OP_getattrs_o 282
#define MVM_OP_attrinited 283
#define MVM_OP_box_i 284
#define MVM_OP_box_n 285
#define MVM_OP_box_s 286
#define MVM_OP_unbox_i 287
#define MVM_OP_unbox_n 288
#define MVM_OP_unbox_s 289
#define MVM_OP_atpos_i 290
#define MVM_OP_atpos_n 291
#define MVM_OP_atpos_s 292
#define MVM_OP_atpos_o 293
#define MVM_OP_bindpos_i 294
#define MVM_OP_bindpos_n 295
#define MVM_OP_bindpos_s 296
#define MVM_OP_bindpos_o 297
#define MVM_OP_push_i 298
#define MVM_OP_push_n 299
#define MVM_OP_push_s 300
#define MVM_OP_push_o 301
#define MVM_OP_pop_i 302
#define MVM_OP_pop_n 303
#define MVM_OP_pop_s 304
#define MVM_OP_pop_o 305
#define MVM_OP_shift_i 306
#define MVM_OP_shift_n 307
#define MVM_OP_shift_s 308
#define MVM_OP_shift_o 309
#define MVM_OP_unshift_i 310
#define MVM_OP_unshift_n 311
#define MVM_OP_unshift_s 312
#define MVM_OP_unshift_o 313
#define MVM_OP_splice 314
#define MVM_OP_setelemspos 315
#define MVM_OP_existspos 316
#define MVM_OP_atkey_i 317
#define MVM_OP_atkey_n 318
#define MVM_OP_atkey_s 319
#define MVM_OP_atkey_o 320
#define MVM_OP_bindkey_i 321
#define MVM_OP_bindkey_n 322
#define MVM_OP_bindkey_s 323
#define MVM_OP_bindkey_o 324
#define MVM_OP_existskey 325
#define MVM_OP_deletekey 326
#define MVM_OP_elems 327
#define MVM_OP_knowhow 328
#define MVM_OP_knowhowattr 329
#define MVM_OP_newtype 330
#define MVM_OP_composetype 331
#define MVM_OP_setmethcache 332
#define MVM_OP_setmethcacheauth 333
#define MVM_OP_settypecache 334
#define MVM_OP_settypecheckmode 335
#define MVM_OP_setboolspec 336
#define MVM_OP_istrue 337
#define MVM_OP_isfalse 338
#define MVM_OP_bootint 339
#define MVM_OP_bootnum 340
#define MVM_OP_bootstr 341
#define MVM_OP_bootarray 342
#define MVM_OP_bootintarray 343
#define MVM_OP_bootnumarray 344
#define MVM_OP_bootstrarray 345
#define MVM_OP_boothash 346
#define MVM_OP_isint 347
#define MVM_OP_isnum 348
#define MVM_OP_isstr 349
#define MVM_OP_islist 350
#define MVM_OP_ishash 351
#define MVM_OP_sethllconfig 352
#define MVM_OP_hllboxtype_i 353
#define MVM_OP_hllboxtype_n 354
#define MVM_OP_hllboxtype_s 355
#define MVM_OP_hlllist 356
#define MVM_OP_hllhash 357
#define MVM_OP_getcomp 358
#define MVM_OP_bindcomp 359
#define MVM_OP_getcurhllsym 360
#define MVM_OP_bindcurhllsym 361
#define MVM_OP_gethllsym 362
#define MVM_OP_bindhllsym 363
#define MVM_OP_settypehll 364
#define MVM_OP_settypehllrole 365
#define MVM_OP_hllize 366
#define MVM_OP_hllizefor 367
#define MVM_OP_usecompileehllconfig 368
#define MVM_OP_usecompilerhllconfig 369
#define MVM_OP_iter 370
#define MVM_OP_iterkey_s 371
#define MVM_OP_iterval 372
#define MVM_OP_getcodename 373
#define MVM_OP_iscoderef 374
#define MVM_OP_getcodeobj 375
#define MVM_OP_setcodeobj 376
#define MVM_OP_setcodename 377
#define MVM_OP_forceouterctx 378
#define MVM_OP_setinvokespec 379
#define MVM_OP_isinvokable 380
#define MVM_OP_freshcoderef 381
#define MVM_OP_markcodestatic 382
#define MVM_OP_markcodestub 383
#define MVM_OP_getstaticcode 384
#define MVM_OP_getcodecuid 385
#define MVM_OP_setdispatcher 386
#define MVM_OP_takedispatcher 387
#define MVM_OP_assign 388
#define MVM_OP_assignunchecked 389
#define MVM_OP_iscont 390
#define MVM_OP_decont 391
#define MVM_OP_setcontspec 392
#define MVM_OP_sha1 393
#define MVM_OP_createsc 394
#define MVM_OP_scsetobj 395
#define MVM_OP_scsetcode 396
#define MVM_OP_scgetobj 397
#define MVM_OP_scgethandle 398
#define MVM_OP_scgetobjidx 399
#define MVM_OP_scsetdesc 400
#define MVM_OP_scobjcount 401
#define MVM_OP_setobjsc 402
#define MVM_OP_getobjsc 403
#define MVM_OP_serialize 404
#define MVM_OP_deserialize 405
#define MVM_OP_wval 406
#define MVM_OP_wval_wide 407
#define MVM_OP_scwbdisable 408
#define MVM_OP_scwbenable 409
#define MVM_OP_pushcompsc 410
#define MVM_OP_popcompsc 411
#define MVM_OP_scgetdesc 412
#define MVM_OP_loadbytecode 413
#define MVM_OP_masttofile 414
#define MVM_OP_masttocu 415
#define MVM_OP_iscompunit 416
#define MVM_OP_compunitmainline 417
#define MVM_OP_compunitcodes 418
#define MVM_OP_ctx 419
#define MVM_OP_ctxouter 420
#define MVM_OP_ctxcaller 421
#define MVM_OP_ctxlexpad 422
#define MVM_OP_curcode 423
#define MVM_OP_callercode 424
#define MVM_OP_add_I 425
#define MVM_OP_sub_I 426
#define MVM_OP_mul_I 427
#define MVM_OP_div_I 428
#define MVM_OP_mod_I 429
#define MVM_OP_neg_I 430
#define MVM_OP_abs_I 431
#define MVM_OP_cmp_I 432
#define MVM_OP_eq_I 433
#define MVM_OP_ne_I 434
#define MVM_OP_lt_I 435
#define MVM_OP_le_I 436
#define MVM_OP_gt_I 437
#define MVM_OP_ge_I 438
#define MVM_OP_bor_I 439
#define MVM_OP_bxor_I 440
#define MVM_OP_band_I 441
#define MVM_OP_bnot_I 442
#define MVM_OP_blshift_I 443
#define MVM_OP_brshift_I 444
#define MVM_OP_pow_I 445
#define MVM_OP_gcd_I 446
#define MVM_OP_lcm_I 447
#define MVM_OP_expmod_I 448
#define MVM_OP_isprime_I 449
#define MVM_OP_rand_I 450
#define MVM_OP_coerce_In 451
#define MVM_OP_coerce_Is 452
#define MVM_OP_coerce_nI 453
#define MVM_OP_coerce_sI 454
#define MVM_OP_isbig_I 455
#define MVM_OP_bool_I 456
#define MVM_OP_base_I 457
#define MVM_OP_radix_I 458
#define MVM_OP_div_In 459
#define MVM_OP_copy_f 460
#define MVM_OP_append_f 461
#define MVM_OP_rename_f 462
#define MVM_OP_delete_f 463
#define MVM_OP_chmod_f 464
#define MVM_OP_exists_f 465
#define MVM_OP_mkdir 466
#define MVM_OP_rmdir 467
#define MVM_OP_open_dir 468
#define MVM_OP_read_dir 469
#define MVM_OP_close_dir 470
#define MVM_OP_open_fh 471
#define MVM_OP_close_fh 472
#define MVM_OP_DEPRECATED_23 473
#define MVM_OP_DEPRECATED_27 474
#define MVM_OP_DEPRECATED_28 475
#define MVM_OP_DEPRECATED_18 476
#define MVM_OP_seek_fh 477
#define MVM_OP_lock_fh 478
#define MVM_OP_unlock_fh 479
#define MVM_OP_sync_fh 480
#define MVM_OP_trunc_fh 481
#define MVM_OP_eof_fh 482
#define MVM_OP_getstdin 483
#define MVM_OP_getstdout 484
#define MVM_OP_getstderr 485
#define MVM_OP_connect_sk 486
#define MVM_OP_socket 487
#define MVM_OP_bind_sk 488
#define MVM_OP_DEPRECATED_24 489
#define MVM_OP_accept_sk 490
#define MVM_OP_decodetocodes 491
#define MVM_OP_encodefromcodes 492
#define MVM_OP_DEPRECATED_17 493
#define MVM_OP_print 494
#define MVM_OP_say 495
#define MVM_OP_DEPRECATED_22 496
#define MVM_OP_tell_fh 497
#define MVM_OP_stat 498
#define MVM_OP_DEPRECATED_20 499
#define MVM_OP_DEPRECATED_26 500
#define MVM_OP_chdir 501
#define MVM_OP_srand 502
#define MVM_OP_rand_i 503
#define MVM_OP_rand_n 504
#define MVM_OP_time_i 505
#define MVM_OP_sleep 506
#define MVM_OP_newthread 507
#define MVM_OP_threadjoin 508
#define MVM_OP_time_n 509
#define MVM_OP_exit 510
#define MVM_OP_DEPRECATED_30 511
#define MVM_OP_cwd 512
#define MVM_OP_clargs 513
#define MVM_OP_getenvhash 514
#define MVM_OP_loadlib 515
#define MVM_OP_freelib 516
#define MVM_OP_findsym 517
#define MVM_OP_dropsym 518
#define MVM_OP_loadext 519
#define MVM_OP_backendconfig 520
#define MVM_OP_getlexouter 521
#define MVM_OP_getlexrel 522
#define MVM_OP_getlexreldyn 523
#define MVM_OP_getlexrelcaller 524
#define MVM_OP_getlexcaller 525
#define MVM_OP_bitand_s 526
#define MVM_OP_bitor_s 527
#define MVM_OP_bitxor_s 528
#define MVM_OP_isnanorinf 529
#define MVM_OP_inf 530
#define MVM_OP_neginf 531
#define MVM_OP_nan 532
#define MVM_OP_getpid 533
#define MVM_OP_DEPRECATED_29 534
#define MVM_OP_filereadable 535
#define MVM_OP_filewritable 536
#define MVM_OP_fileexecutable 537
#define MVM_OP_DEPRECATED_19 538
#define MVM_OP_capturenamedshash 539
#define MVM_OP_read_fhb 540
#define MVM_OP_write_fhb 541
#define MVM_OP_replace 542
#define MVM_OP_newexception 543
#define MVM_OP_permit 544
#define MVM_OP_backtrace 545
#define MVM_OP_symlink 546
#define MVM_OP_link 547
#define MVM_OP_gethostname 548
#define MVM_OP_exreturnafterunwind 549
#define MVM_OP_DEPRECATED_13 550
#define MVM_OP_continuationreset 551
#define MVM_OP_continuationcontrol 552
#define MVM_OP_continuationinvoke 553
#define MVM_OP_randscale_n 554
#define MVM_OP_uniisblock 555
#define MVM_OP_assertparamcheck 556
#define MVM_OP_hintfor 557
#define MVM_OP_paramnamesused 558
#define MVM_OP_getuniname 559
#define MVM_OP_getuniprop_int 560
#define MVM_OP_getuniprop_bool 561
#define MVM_OP_getuniprop_str 562
#define MVM_OP_matchuniprop 563
#define MVM_OP_nativecallbuild 564
#define MVM_OP_nativecallinvoke 565
#define MVM_OP_nativecallrefresh 566
#define MVM_OP_threadrun 567
#define MVM_OP_threadid 568
#define MVM_OP_threadyield 569
#define MVM_OP_currentthread 570
#define MVM_OP_lock 571
#define MVM_OP_unlock 572
#define MVM_OP_semacquire 573
#define MVM_OP_semtryacquire 574
#define MVM_OP_semrelease 575
#define MVM_OP_getlockcondvar 576
#define MVM_OP_condwait 577
#define MVM_OP_condsignalone 578
#define MVM_OP_condsignalall 579
#define MVM_OP_queuepoll 580
#define MVM_OP_setmultispec 581
#define MVM_OP_ctxouterskipthunks 582
#define MVM_OP_ctxcallerskipthunks 583
#define MVM_OP_timer 584
#define MVM_OP_cancel 585
#define MVM_OP_signal 586
#define MVM_OP_watchfile 587
#define MVM_OP_asyncconnect 588
#define MVM_OP_asynclisten 589
#define MVM_OP_DEPRECATED_14 590
#define MVM_OP_asyncwritebytes 591
#define MVM_OP_DEPRECATED_16 592
#define MVM_OP_asyncreadbytes 593
#define MVM_OP_getlexstatic_o 594
#define MVM_OP_getlexperinvtype_o 595
#define MVM_OP_execname 596
#define MVM_OP_const_i64_16 597
#define MVM_OP_const_i64_32 598
#define MVM_OP_isnonnull 599
#define MVM_OP_param_rn2_i 600
#define MVM_OP_param_rn2_n 601
#define MVM_OP_param_rn2_s 602
#define MVM_OP_param_rn2_o 603
#define MVM_OP_param_on2_i 604
#define MVM_OP_param_on2_n 605
#define MVM_OP_param_on2_s 606
#define MVM_OP_param_on2_o 607
#define MVM_OP_osrpoint 608
#define MVM_OP_nativecallcast 609
#define MVM_OP_spawnprocasync 610
#define MVM_OP_killprocasync 611
#define MVM_OP_startprofile 612
#define MVM_OP_endprofile 613
#define MVM_OP_objectid 614
#define MVM_OP_settypefinalize 615
#define MVM_OP_force_gc 616
#define MVM_OP_nativecallglobal 617
#define MVM_OP_DEPRECATED_32 618
#define MVM_OP_setparameterizer 619
#define MVM_OP_parameterizetype 620
#define MVM_OP_typeparameterized 621
#define MVM_OP_typeparameters 622
#define MVM_OP_typeparameterat 623
#define MVM_OP_readlink 624
#define MVM_OP_lstat 625
#define MVM_OP_iscont_i 626
#define MVM_OP_iscont_n 627
#define MVM_OP_iscont_s 628
#define MVM_OP_assign_i 629
#define MVM_OP_assign_n 630
#define MVM_OP_assign_s 631
#define MVM_OP_decont_i 632
#define MVM_OP_decont_n 633
#define MVM_OP_decont_s 634
#define MVM_OP_getrusage 635
#define MVM_OP_threadlockcount 636
#define MVM_OP_DEPRECATED_4 637
#define MVM_OP_getlexref_i 638
#define MVM_OP_getlexref_n 639
#define MVM_OP_getlexref_s 640
#define MVM_OP_getlexref_ni 641
#define MVM_OP_getlexref_nn 642
#define MVM_OP_getlexref_ns 643
#define MVM_OP_atposref_i 644
#define MVM_OP_atposref_n 645
#define MVM_OP_atposref_s 646
#define MVM_OP_getattrref_i 647
#define MVM_OP_getattrref_n 648
#define MVM_OP_getattrref_s 649
#define MVM_OP_getattrsref_i 650
#define MVM_OP_getattrsref_n 651
#define MVM_OP_getattrsref_s 652
#define MVM_OP_nativecallsizeof 653
#define MVM_OP_encodenorm 654
#define MVM_OP_normalizecodes 655
#define MVM_OP_strfromcodes 656
#define MVM_OP_strtocodes 657
#define MVM_OP_getcodelocation 658
#define MVM_OP_eqatim_s 659
#define MVM_OP_ordbaseat 660
#define MVM_OP_neverrepossess 661
#define MVM_OP_scdisclaim 662
#define MVM_OP_DEPRECATED_31 663
#define MVM_OP_atpos2d_i 664
#define MVM_OP_atpos2d_n 665
#define MVM_OP_atpos2d_s 666
#define MVM_OP_atpos2d_o 667
#define MVM_OP_atpos3d_i 668
#define MVM_OP_atpos3d_n 669
#define MVM_OP_atpos3d_s 670
#define MVM_OP_atpos3d_o 671
#define MVM_OP_atposnd_i 672
#define MVM_OP_atposnd_n 673
#define MVM_OP_atposnd_s 674
#define MVM_OP_atposnd_o 675
#define MVM_OP_bindpos2d_i 676
#define MVM_OP_bindpos2d_n 677
#define MVM_OP_bindpos2d_s 678
#define MVM_OP_bindpos2d_o 679
#define MVM_OP_bindpos3d_i 680
#define MVM_OP_bindpos3d_n 681
#define MVM_OP_bindpos3d_s 682
#define MVM_OP_bindpos3d_o 683
#define MVM_OP_bindposnd_i 684
#define MVM_OP_bindposnd_n 685
#define MVM_OP_bindposnd_s 686
#define MVM_OP_bindposnd_o 687
#define MVM_OP_dimensions 688
#define MVM_OP_setdimensions 689
#define MVM_OP_numdimensions 690
#define MVM_OP_ctxcode 691
#define MVM_OP_isrwcont 692
#define MVM_OP_fc 693
#define MVM_OP_DEPRECATED_25 694
#define MVM_OP_DEPRECATED_21 695
#define MVM_OP_encoderep 696
#define MVM_OP_istty_fh 697
#define MVM_OP_multidimref_i 698
#define MVM_OP_multidimref_n 699
#define MVM_OP_multidimref_s 700
#define MVM_OP_fileno_fh 701
#define MVM_OP_asyncudp 702
#define MVM_OP_DEPRECATED_15 703
#define MVM_OP_asyncwritebytesto 704
#define MVM_OP_objprimbits 705
#define MVM_OP_objprimunsigned 706
#define MVM_OP_DEPRECATED_5 707
#define MVM_OP_DEPRECATED_6 708
#define MVM_OP_DEPRECATED_7 709
#define MVM_OP_DEPRECATED_8 710
#define MVM_OP_getlexref_i32 711
#define MVM_OP_getlexref_i16 712
#define MVM_OP_getlexref_i8 713
#define MVM_OP_getlexref_n32 714
#define MVM_OP_box_u 715
#define MVM_OP_unbox_u 716
#define MVM_OP_coerce_iu 717
#define MVM_OP_coerce_ui 718
#define MVM_OP_coerce_nu 719
#define MVM_OP_coerce_un 720
#define MVM_OP_decont_u 721
#define MVM_OP_DEPRECATED_9 722
#define MVM_OP_DEPRECATED_10 723
#define MVM_OP_DEPRECATED_11 724
#define MVM_OP_DEPRECATED_12 725
#define MVM_OP_getlexref_u 726
#define MVM_OP_getlexref_u32 727
#define MVM_OP_getlexref_u16 728
#define MVM_OP_getlexref_u8 729
#define MVM_OP_param_rp_u 730
#define MVM_OP_param_op_u 731
#define MVM_OP_param_rn_u 732
#define MVM_OP_param_on_u 733
#define MVM_OP_param_rn2_u 734
#define MVM_OP_param_on2_u 735
#define MVM_OP_stat_time 736
#define MVM_OP_lstat_time 737
#define MVM_OP_setdebugtypename 738
#define MVM_OP_loadbytecodebuffer 739
#define MVM_OP_loadbytecodefh 740
#define MVM_OP_throwpayloadlex 741
#define MVM_OP_throwpayloadlexcaller 742
#define MVM_OP_lastexpayload 743
#define MVM_OP_cancelnotify 744
#define MVM_OP_decoderconfigure 745
#define MVM_OP_decodersetlineseps 746
#define MVM_OP_decoderaddbytes 747
#define MVM_OP_decodertakechars 748
#define MVM_OP_decodertakeallchars 749
#define MVM_OP_decodertakeavailablechars 750
#define MVM_OP_decodertakeline 751
#define MVM_OP_decoderbytesavailable 752
#define MVM_OP_decodertakebytes 753
#define MVM_OP_decoderempty 754
#define MVM_OP_indexingoptimized 755
#define MVM_OP_captureinnerlex 756
#define MVM_OP_unicmp_s 757
#define MVM_OP_setdispatcherfor 758
#define MVM_OP_getstrfromname 759
#define MVM_OP_indexic_s 760
#define MVM_OP_getport_sk 761
#define MVM_OP_cpucores 762
#define MVM_OP_eqaticim_s 763
#define MVM_OP_indexicim_s 764
#define MVM_OP_decodertakecharseof 765
#define MVM_OP_indexim_s 766
#define MVM_OP_cas_o 767
#define MVM_OP_cas_i 768
#define MVM_OP_atomicinc_i 769
#define MVM_OP_atomicdec_i 770
#define MVM_OP_atomicadd_i 771
#define MVM_OP_atomicload_o 772
#define MVM_OP_atomicload_i 773
#define MVM_OP_atomicstore_o 774
#define MVM_OP_atomicstore_i 775
#define MVM_OP_barrierfull 776
#define MVM_OP_coveragecontrol 777
#define MVM_OP_nativecallinvokejit 778
#define MVM_OP_sp_guard 779
#define MVM_OP_sp_guardconc 780
#define MVM_OP_sp_guardtype 781
#define MVM_OP_sp_guardsf 782
#define MVM_OP_sp_guardsfouter 783
#define MVM_OP_sp_rebless 784
#define MVM_OP_sp_resolvecode 785
#define MVM_OP_sp_decont 786
#define MVM_OP_sp_getlex_o 787
#define MVM_OP_sp_getlex_ins 788
#define MVM_OP_sp_getlex_no 789
#define MVM_OP_sp_getarg_o 790
#define MVM_OP_sp_getarg_i 791
#define MVM_OP_sp_getarg_n 792
#define MVM_OP_sp_getarg_s 793
#define MVM_OP_sp_fastinvoke_v 794
#define MVM_OP_sp_fastinvoke_i 795
#define MVM_OP_sp_fastinvoke_n 796
#define MVM_OP_sp_fastinvoke_s 797
#define MVM_OP_sp_fastinvoke_o 798
#define MVM_OP_sp_paramnamesused 799
#define MVM_OP_sp_getspeshslot 800
#define MVM_OP_sp_findmeth 801
#define MVM_OP_sp_fastcreate 802
#define MVM_OP_sp_get_o 803
#define MVM_OP_sp_get_i64 804
#define MVM_OP_sp_get_i32 805
#define MVM_OP_sp_get_i16 806
#define MVM_OP_sp_get_i8 807
#define MVM_OP_sp_get_n 808
#define MVM_OP_sp_get_s 809
#define MVM_OP_sp_bind_o 810
#define MVM_OP_sp_bind_i64 811
#define MVM_OP_sp_bind_i32 812
#define MVM_OP_sp_bind_i16 813
#define MVM_OP_sp_bind_i8 814
#define MVM_OP_sp_bind_n 815
#define MVM_OP_sp_bind_s 816
#define MVM_OP_sp_p6oget_o 817
#define MVM_OP_sp_p6ogetvt_o 818
#define MVM_OP_sp_p6ogetvc_o 819
#define MVM_OP_sp_p6oget_i 820
#define MVM_OP_sp_p6oget_n 821
#define MVM_OP_sp_p6oget_s 822
#define MVM_OP_sp_p6obind_o 823
#define MVM_OP_sp_p6obind_i 824
#define MVM_OP_sp_p6obind_n 825
#define MVM_OP_sp_p6obind_s 826
#define MVM_OP_sp_deref_get_i64 827
#define MVM_OP_sp_deref_get_n 828
#define MVM_OP_sp_deref_bind_i64 829
#define MVM_OP_sp_deref_bind_n 830
#define MVM_OP_sp_getlexvia_o 831
#define MVM_OP_sp_getlexvia_ins 832
#define MVM_OP_sp_jit_enter 833
#define MVM_OP_sp_boolify_iter 834
#define MVM_OP_sp_boolify_iter_arr 835
#define MVM_OP_sp_boolify_iter_hash 836
#define MVM_OP_sp_cas_o 837
#define MVM_OP_sp_atomicload_o 838
#define MVM_OP_sp_atomicstore_o 839
#define MVM_OP_prof_enter 840
#define MVM_OP_prof_enterspesh 841
#define MVM_OP_prof_enterinline 842
#define MVM_OP_prof_enternative 843
#define MVM_OP_prof_exit 844
#define MVM_OP_prof_allocated 845
#define MVM_OP_ctw_check 846
#define MVM_OP_coverage_log 847

#define MVM_OP_EXT_BASE 1024
#define MVM_OP_EXT_CU_LIMIT 1024

MVM_PUBLIC const MVMOpInfo * MVM_op_get_op(unsigned short op);
