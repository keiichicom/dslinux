/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     NUMBER = 259,
     FNUMBER = 260,
     RANGE = 261,
     VAR = 262,
     WORD = 263,
     PLUGIN = 264,
     COL = 265,
     S_SHOW = 266,
     S_HIDE = 267,
     S_INSERTCOL = 268,
     S_OPENCOL = 269,
     S_DELETECOL = 270,
     S_YANKCOL = 271,
     S_GETFORMAT = 272,
     S_FORMAT = 273,
     S_FMT = 274,
     S_LET = 275,
     S_LABEL = 276,
     S_LEFTSTRING = 277,
     S_RIGHTSTRING = 278,
     S_LEFTJUSTIFY = 279,
     S_RIGHTJUSTIFY = 280,
     S_CENTER = 281,
     S_COLOR = 282,
     S_ADDNOTE = 283,
     S_DELNOTE = 284,
     S_GET = 285,
     S_PUT = 286,
     S_MERGE = 287,
     S_WRITE = 288,
     S_TBL = 289,
     S_COPY = 290,
     S_MOVE = 291,
     S_ERASE = 292,
     S_YANK = 293,
     S_FILL = 294,
     S_SORT = 295,
     S_LOCK = 296,
     S_UNLOCK = 297,
     S_GOTO = 298,
     S_DEFINE = 299,
     S_UNDEFINE = 300,
     S_ABBREV = 301,
     S_UNABBREV = 302,
     S_FRAME = 303,
     S_FRAMETOP = 304,
     S_FRAMEBOTTOM = 305,
     S_FRAMELEFT = 306,
     S_FRAMERIGHT = 307,
     S_UNFRAME = 308,
     S_VALUE = 309,
     S_MDIR = 310,
     S_AUTORUN = 311,
     S_FKEY = 312,
     S_SCEXT = 313,
     S_ASCEXT = 314,
     S_TBL0EXT = 315,
     S_TBLEXT = 316,
     S_LATEXEXT = 317,
     S_SLATEXEXT = 318,
     S_TEXEXT = 319,
     S_SET = 320,
     S_UP = 321,
     S_DOWN = 322,
     S_LEFT = 323,
     S_RIGHT = 324,
     S_ENDUP = 325,
     S_ENDDOWN = 326,
     S_ENDLEFT = 327,
     S_ENDRIGHT = 328,
     S_SELECT = 329,
     S_INSERTROW = 330,
     S_OPENROW = 331,
     S_DELETEROW = 332,
     S_YANKROW = 333,
     S_PULL = 334,
     S_PULLMERGE = 335,
     S_PULLROWS = 336,
     S_PULLCOLS = 337,
     S_PULLXCHG = 338,
     S_PULLTP = 339,
     S_PULLFMT = 340,
     S_PULLCOPY = 341,
     S_WHEREAMI = 342,
     S_GETNUM = 343,
     S_FGETNUM = 344,
     S_GETSTRING = 345,
     S_GETEXP = 346,
     S_GETFMT = 347,
     S_GETFRAME = 348,
     S_GETRANGE = 349,
     S_EVAL = 350,
     S_SEVAL = 351,
     S_QUERY = 352,
     S_GETKEY = 353,
     S_ERROR = 354,
     S_RECALC = 355,
     S_REDRAW = 356,
     S_QUIT = 357,
     S_STATUS = 358,
     S_RUN = 359,
     S_PLUGIN = 360,
     S_PLUGOUT = 361,
     K_ERROR = 362,
     K_INVALID = 363,
     K_FIXED = 364,
     K_SUM = 365,
     K_PROD = 366,
     K_AVG = 367,
     K_STDDEV = 368,
     K_COUNT = 369,
     K_ROWS = 370,
     K_COLS = 371,
     K_ABS = 372,
     K_ACOS = 373,
     K_ASIN = 374,
     K_ATAN = 375,
     K_ATAN2 = 376,
     K_CEIL = 377,
     K_COS = 378,
     K_EXP = 379,
     K_FABS = 380,
     K_FLOOR = 381,
     K_HYPOT = 382,
     K_LN = 383,
     K_LOG = 384,
     K_PI = 385,
     K_POW = 386,
     K_SIN = 387,
     K_SQRT = 388,
     K_TAN = 389,
     K_DTR = 390,
     K_RTD = 391,
     K_MAX = 392,
     K_MIN = 393,
     K_RND = 394,
     K_ROUND = 395,
     K_IF = 396,
     K_PV = 397,
     K_FV = 398,
     K_PMT = 399,
     K_HOUR = 400,
     K_MINUTE = 401,
     K_SECOND = 402,
     K_MONTH = 403,
     K_DAY = 404,
     K_YEAR = 405,
     K_NOW = 406,
     K_DATE = 407,
     K_DTS = 408,
     K_TTS = 409,
     K_FMT = 410,
     K_SUBSTR = 411,
     K_UPPER = 412,
     K_LOWER = 413,
     K_CAPITAL = 414,
     K_STON = 415,
     K_EQS = 416,
     K_EXT = 417,
     K_NVAL = 418,
     K_SVAL = 419,
     K_LOOKUP = 420,
     K_HLOOKUP = 421,
     K_VLOOKUP = 422,
     K_INDEX = 423,
     K_STINDEX = 424,
     K_AUTO = 425,
     K_AUTOCALC = 426,
     K_AUTOINSERT = 427,
     K_AUTOWRAP = 428,
     K_CSLOP = 429,
     K_BYROWS = 430,
     K_BYCOLS = 431,
     K_OPTIMIZE = 432,
     K_ITERATIONS = 433,
     K_NUMERIC = 434,
     K_PRESCALE = 435,
     K_EXTFUN = 436,
     K_CELLCUR = 437,
     K_TOPROW = 438,
     K_COLOR = 439,
     K_COLORNEG = 440,
     K_COLORERR = 441,
     K_BRAILLE = 442,
     K_BLACK = 443,
     K_RED = 444,
     K_GREEN = 445,
     K_YELLOW = 446,
     K_BLUE = 447,
     K_MAGENTA = 448,
     K_CYAN = 449,
     K_WHITE = 450,
     K_TBLSTYLE = 451,
     K_TBL = 452,
     K_LATEX = 453,
     K_SLATEX = 454,
     K_TEX = 455,
     K_FRAME = 456,
     K_RNDTOEVEN = 457,
     K_FILENAME = 458,
     K_MYROW = 459,
     K_MYCOL = 460,
     K_LASTROW = 461,
     K_LASTCOL = 462,
     K_COLTOA = 463,
     K_CRACTION = 464,
     K_CRROW = 465,
     K_CRCOL = 466,
     K_ROWLIMIT = 467,
     K_COLLIMIT = 468,
     K_PAGESIZE = 469,
     K_NUMITER = 470,
     K_ERR = 471,
     K_SCRC = 472,
     K_LOCALE = 473
   };
#endif
/* Tokens.  */
#define STRING 258
#define NUMBER 259
#define FNUMBER 260
#define RANGE 261
#define VAR 262
#define WORD 263
#define PLUGIN 264
#define COL 265
#define S_SHOW 266
#define S_HIDE 267
#define S_INSERTCOL 268
#define S_OPENCOL 269
#define S_DELETECOL 270
#define S_YANKCOL 271
#define S_GETFORMAT 272
#define S_FORMAT 273
#define S_FMT 274
#define S_LET 275
#define S_LABEL 276
#define S_LEFTSTRING 277
#define S_RIGHTSTRING 278
#define S_LEFTJUSTIFY 279
#define S_RIGHTJUSTIFY 280
#define S_CENTER 281
#define S_COLOR 282
#define S_ADDNOTE 283
#define S_DELNOTE 284
#define S_GET 285
#define S_PUT 286
#define S_MERGE 287
#define S_WRITE 288
#define S_TBL 289
#define S_COPY 290
#define S_MOVE 291
#define S_ERASE 292
#define S_YANK 293
#define S_FILL 294
#define S_SORT 295
#define S_LOCK 296
#define S_UNLOCK 297
#define S_GOTO 298
#define S_DEFINE 299
#define S_UNDEFINE 300
#define S_ABBREV 301
#define S_UNABBREV 302
#define S_FRAME 303
#define S_FRAMETOP 304
#define S_FRAMEBOTTOM 305
#define S_FRAMELEFT 306
#define S_FRAMERIGHT 307
#define S_UNFRAME 308
#define S_VALUE 309
#define S_MDIR 310
#define S_AUTORUN 311
#define S_FKEY 312
#define S_SCEXT 313
#define S_ASCEXT 314
#define S_TBL0EXT 315
#define S_TBLEXT 316
#define S_LATEXEXT 317
#define S_SLATEXEXT 318
#define S_TEXEXT 319
#define S_SET 320
#define S_UP 321
#define S_DOWN 322
#define S_LEFT 323
#define S_RIGHT 324
#define S_ENDUP 325
#define S_ENDDOWN 326
#define S_ENDLEFT 327
#define S_ENDRIGHT 328
#define S_SELECT 329
#define S_INSERTROW 330
#define S_OPENROW 331
#define S_DELETEROW 332
#define S_YANKROW 333
#define S_PULL 334
#define S_PULLMERGE 335
#define S_PULLROWS 336
#define S_PULLCOLS 337
#define S_PULLXCHG 338
#define S_PULLTP 339
#define S_PULLFMT 340
#define S_PULLCOPY 341
#define S_WHEREAMI 342
#define S_GETNUM 343
#define S_FGETNUM 344
#define S_GETSTRING 345
#define S_GETEXP 346
#define S_GETFMT 347
#define S_GETFRAME 348
#define S_GETRANGE 349
#define S_EVAL 350
#define S_SEVAL 351
#define S_QUERY 352
#define S_GETKEY 353
#define S_ERROR 354
#define S_RECALC 355
#define S_REDRAW 356
#define S_QUIT 357
#define S_STATUS 358
#define S_RUN 359
#define S_PLUGIN 360
#define S_PLUGOUT 361
#define K_ERROR 362
#define K_INVALID 363
#define K_FIXED 364
#define K_SUM 365
#define K_PROD 366
#define K_AVG 367
#define K_STDDEV 368
#define K_COUNT 369
#define K_ROWS 370
#define K_COLS 371
#define K_ABS 372
#define K_ACOS 373
#define K_ASIN 374
#define K_ATAN 375
#define K_ATAN2 376
#define K_CEIL 377
#define K_COS 378
#define K_EXP 379
#define K_FABS 380
#define K_FLOOR 381
#define K_HYPOT 382
#define K_LN 383
#define K_LOG 384
#define K_PI 385
#define K_POW 386
#define K_SIN 387
#define K_SQRT 388
#define K_TAN 389
#define K_DTR 390
#define K_RTD 391
#define K_MAX 392
#define K_MIN 393
#define K_RND 394
#define K_ROUND 395
#define K_IF 396
#define K_PV 397
#define K_FV 398
#define K_PMT 399
#define K_HOUR 400
#define K_MINUTE 401
#define K_SECOND 402
#define K_MONTH 403
#define K_DAY 404
#define K_YEAR 405
#define K_NOW 406
#define K_DATE 407
#define K_DTS 408
#define K_TTS 409
#define K_FMT 410
#define K_SUBSTR 411
#define K_UPPER 412
#define K_LOWER 413
#define K_CAPITAL 414
#define K_STON 415
#define K_EQS 416
#define K_EXT 417
#define K_NVAL 418
#define K_SVAL 419
#define K_LOOKUP 420
#define K_HLOOKUP 421
#define K_VLOOKUP 422
#define K_INDEX 423
#define K_STINDEX 424
#define K_AUTO 425
#define K_AUTOCALC 426
#define K_AUTOINSERT 427
#define K_AUTOWRAP 428
#define K_CSLOP 429
#define K_BYROWS 430
#define K_BYCOLS 431
#define K_OPTIMIZE 432
#define K_ITERATIONS 433
#define K_NUMERIC 434
#define K_PRESCALE 435
#define K_EXTFUN 436
#define K_CELLCUR 437
#define K_TOPROW 438
#define K_COLOR 439
#define K_COLORNEG 440
#define K_COLORERR 441
#define K_BRAILLE 442
#define K_BLACK 443
#define K_RED 444
#define K_GREEN 445
#define K_YELLOW 446
#define K_BLUE 447
#define K_MAGENTA 448
#define K_CYAN 449
#define K_WHITE 450
#define K_TBLSTYLE 451
#define K_TBL 452
#define K_LATEX 453
#define K_SLATEX 454
#define K_TEX 455
#define K_FRAME 456
#define K_RNDTOEVEN 457
#define K_FILENAME 458
#define K_MYROW 459
#define K_MYCOL 460
#define K_LASTROW 461
#define K_LASTCOL 462
#define K_COLTOA 463
#define K_CRACTION 464
#define K_CRROW 465
#define K_CRCOL 466
#define K_ROWLIMIT 467
#define K_COLLIMIT 468
#define K_PAGESIZE 469
#define K_NUMITER 470
#define K_ERR 471
#define K_SCRC 472
#define K_LOCALE 473




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 33 "gram.y"

    int ival;
    double fval;
    struct ent_ptr ent;
    struct enode *enode;
    char *sval;
    struct range_s rval;



/* Line 2068 of yacc.c  */
#line 497 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


