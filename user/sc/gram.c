/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 17 "gram.y"

#include <curses.h>
#include <stdlib.h>
#include "sc.h"

#ifdef USELOCALE
#include <locale.h>
#endif

#ifndef MSDOS
#include <unistd.h>
#endif

#define ENULL (struct enode *)0


/* Line 268 of yacc.c  */
#line 88 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 293 of yacc.c  */
#line 33 "gram.y"

    int ival;
    double fval;
    struct ent_ptr ent;
    struct enode *enode;
    char *sval;
    struct range_s rval;



/* Line 293 of yacc.c  */
#line 571 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 583 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  240
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  242
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  424
/* YYNRULES -- Number of states.  */
#define YYNSTATES  891

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   473

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   227,     2,   230,   241,   233,   223,     2,
     236,   237,   231,   228,   238,   229,   239,   232,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   221,   219,
     224,   225,   226,   220,   235,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   234,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   222,     2,   240,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    17,    22,    27,    30,    32,
      35,    37,    40,    42,    45,    49,    52,    54,    62,    68,
      75,    80,    85,    88,    91,    94,    97,   102,   105,   108,
     111,   114,   117,   120,   123,   127,   130,   133,   138,   143,
     147,   150,   152,   156,   159,   162,   165,   167,   171,   174,
     179,   184,   186,   189,   194,   197,   202,   204,   207,   211,
     214,   218,   220,   223,   225,   228,   230,   233,   238,   240,
     243,   247,   251,   253,   256,   258,   261,   265,   268,   272,
     275,   278,   282,   287,   292,   295,   299,   303,   305,   308,
     311,   315,   319,   322,   325,   327,   330,   334,   337,   339,
     343,   346,   350,   353,   357,   360,   364,   367,   370,   372,
     376,   381,   385,   388,   390,   393,   395,   398,   400,   403,
     405,   408,   410,   412,   414,   416,   419,   421,   425,   427,
     431,   433,   437,   439,   443,   445,   449,   452,   457,   459,
     462,   466,   471,   473,   477,   480,   485,   487,   490,   494,
     499,   501,   503,   505,   507,   509,   511,   513,   515,   518,
     520,   524,   527,   532,   534,   538,   541,   546,   548,   552,
     555,   560,   562,   566,   569,   574,   576,   580,   583,   588,
     590,   594,   597,   602,   604,   608,   610,   614,   617,   622,
     625,   629,   635,   638,   642,   648,   651,   656,   658,   662,
     664,   667,   669,   673,   675,   677,   679,   682,   687,   692,
     694,   695,   697,   699,   703,   709,   715,   723,   729,   737,
     743,   751,   757,   765,   771,   779,   785,   793,   801,   807,
     815,   823,   829,   835,   841,   847,   853,   859,   867,   873,
     879,   885,   891,   897,   905,   911,   917,   925,   931,   937,
     943,   949,   955,   961,   969,   979,   989,   999,  1009,  1015,
    1021,  1027,  1033,  1039,  1045,  1048,  1058,  1064,  1074,  1080,
    1088,  1094,  1102,  1110,  1116,  1122,  1128,  1136,  1144,  1154,
    1162,  1170,  1180,  1190,  1200,  1210,  1218,  1226,  1236,  1244,
    1252,  1260,  1270,  1274,  1277,  1280,  1282,  1284,  1287,  1289,
    1292,  1295,  1301,  1304,  1307,  1310,  1313,  1319,  1322,  1325,
    1327,  1330,  1333,  1336,  1339,  1342,  1345,  1348,  1351,  1355,
    1359,  1363,  1367,  1371,  1375,  1377,  1383,  1387,  1391,  1395,
    1399,  1403,  1407,  1412,  1417,  1422,  1427,  1431,  1433,  1437,
    1441,  1443,  1446,  1450,  1454,  1459,  1461,  1463,  1465,  1467,
    1469,  1472,  1475,  1477,  1479,  1480,  1483,  1485,  1487,  1490,
    1493,  1496,  1499,  1501,  1503,  1505,  1508,  1511,  1513,  1516,
    1519,  1521,  1524,  1527,  1529,  1532,  1535,  1537,  1540,  1543,
    1545,  1548,  1551,  1553,  1556,  1559,  1561,  1564,  1567,  1569,
    1572,  1575,  1577,  1580,  1583,  1585,  1588,  1591,  1593,  1596,
    1599,  1601,  1604,  1607,  1611,  1615,  1619,  1623,  1627,  1631,
    1635,  1637,  1640,  1643,  1647,  1651,  1655,  1659,  1661,  1663,
    1666,  1669,  1672,  1674,  1677
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     243,     0,    -1,    20,   249,   225,   245,    -1,    20,   249,
     225,    -1,    21,   249,   225,   245,    -1,    22,   249,   225,
     245,    -1,    23,   249,   225,   245,    -1,    24,   249,    -1,
      24,    -1,    25,   249,    -1,    25,    -1,    26,   249,    -1,
      26,    -1,    28,   248,    -1,    28,   248,   249,    -1,    29,
     248,    -1,    29,    -1,    18,    10,   221,    10,     4,     4,
       4,    -1,    18,    10,     4,     4,     4,    -1,    18,    10,
     221,    10,     4,     4,    -1,    18,    10,     4,     4,    -1,
      18,     4,   225,     3,    -1,    30,   251,    -1,    32,   251,
      -1,    55,   251,    -1,    56,   251,    -1,    57,     4,   225,
     251,    -1,    58,   251,    -1,    59,   251,    -1,    60,   251,
      -1,    61,   251,    -1,    62,   251,    -1,    63,   251,    -1,
      64,   251,    -1,    31,   251,   247,    -1,    31,   251,    -1,
      31,   247,    -1,    31,   247,   232,   249,    -1,    31,   233,
     232,   249,    -1,    31,   232,   249,    -1,    31,   233,    -1,
      31,    -1,    33,   251,   247,    -1,    33,   251,    -1,    33,
     247,    -1,    33,   233,    -1,    33,    -1,    34,   251,   247,
      -1,    34,   251,    -1,    11,    10,   221,    10,    -1,    11,
       4,   221,     4,    -1,    12,    -1,    12,    10,    -1,    12,
      10,   221,    10,    -1,    12,     4,    -1,    12,     4,   221,
       4,    -1,    35,    -1,    35,   247,    -1,    35,   247,   249,
      -1,    36,   248,    -1,    36,   248,   249,    -1,    37,    -1,
      37,   249,    -1,    38,    -1,    38,   249,    -1,    54,    -1,
      54,   249,    -1,    39,   249,   250,   250,    -1,    40,    -1,
      40,   247,    -1,    40,   247,   251,    -1,    19,   249,     3,
      -1,    41,    -1,    41,   249,    -1,    42,    -1,    42,   249,
      -1,    43,   249,   249,    -1,    43,   249,    -1,    43,   250,
     247,    -1,    43,   250,    -1,    43,   254,    -1,    43,     3,
     247,    -1,    43,   230,     3,   247,    -1,    43,   233,     3,
     247,    -1,    43,     3,    -1,    43,   230,     3,    -1,    43,
     233,     3,    -1,    43,    -1,    43,     8,    -1,    44,   251,
      -1,    44,   251,   247,    -1,    44,   251,   248,    -1,    45,
     249,    -1,    46,     3,    -1,    46,    -1,    47,     3,    -1,
      48,   247,   247,    -1,    48,   247,    -1,    48,    -1,    49,
     247,     4,    -1,    49,     4,    -1,    50,   247,     4,    -1,
      50,     4,    -1,    51,   247,     4,    -1,    51,     4,    -1,
      52,   247,     4,    -1,    52,     4,    -1,    53,   247,    -1,
      53,    -1,    27,     4,   225,    -1,    27,     4,   225,   245,
      -1,    27,   247,     4,    -1,    65,   252,    -1,    66,    -1,
      66,     4,    -1,    67,    -1,    67,     4,    -1,    68,    -1,
      68,     4,    -1,    69,    -1,    69,     4,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,     3,    -1,    75,
      -1,    75,   231,     4,    -1,    76,    -1,    76,   231,     4,
      -1,    13,    -1,    13,   231,     4,    -1,    14,    -1,    14,
     231,     4,    -1,    77,    -1,    77,   231,     4,    -1,    77,
       4,    -1,    77,     4,   221,     4,    -1,    15,    -1,    15,
      10,    -1,    15,   231,     4,    -1,    15,    10,   221,    10,
      -1,    78,    -1,    78,   231,     4,    -1,    78,     4,    -1,
      78,     4,   221,     4,    -1,    16,    -1,    16,     4,    -1,
      16,   231,     4,    -1,    16,    10,   221,    10,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    86,   249,    -1,    87,    -1,
      87,   222,     4,    -1,    88,   249,    -1,    88,   249,   222,
       4,    -1,    88,    -1,    88,   222,     4,    -1,    89,   249,
      -1,    89,   249,   222,     4,    -1,    89,    -1,    89,   222,
       4,    -1,    90,   249,    -1,    90,   249,   222,     4,    -1,
      90,    -1,    90,   222,     4,    -1,    91,   249,    -1,    91,
     249,   222,     4,    -1,    91,    -1,    91,   222,     4,    -1,
      17,    10,    -1,    17,    10,   222,     4,    -1,    17,    -1,
      17,   222,     4,    -1,    92,   249,    -1,    92,   249,   222,
       4,    -1,    92,    -1,    92,   222,     4,    -1,    93,    -1,
      93,   222,     4,    -1,    94,     3,    -1,    94,     3,   222,
       4,    -1,    95,   245,    -1,    95,   245,     3,    -1,    95,
     245,     3,   222,     4,    -1,    96,   245,    -1,    97,     3,
       3,    -1,    97,     3,     3,   222,     4,    -1,    97,     3,
      -1,    97,     3,   222,     4,    -1,    97,    -1,    97,   222,
       4,    -1,    98,    -1,    99,     3,    -1,   103,    -1,   103,
     222,     4,    -1,   100,    -1,   101,    -1,   102,    -1,   104,
       3,    -1,   105,     3,   225,     3,    -1,   106,     3,   225,
       3,    -1,     9,    -1,    -1,     1,    -1,   248,    -1,   235,
     109,   244,    -1,   236,   235,   109,   237,   244,    -1,   235,
     110,   236,   249,   237,    -1,   235,   110,   236,   247,   238,
     245,   237,    -1,   235,   111,   236,   249,   237,    -1,   235,
     111,   236,   247,   238,   245,   237,    -1,   235,   112,   236,
     249,   237,    -1,   235,   112,   236,   247,   238,   245,   237,
      -1,   235,   113,   236,   249,   237,    -1,   235,   113,   236,
     247,   238,   245,   237,    -1,   235,   114,   236,   249,   237,
      -1,   235,   114,   236,   247,   238,   245,   237,    -1,   235,
     137,   236,   249,   237,    -1,   235,   137,   236,   247,   238,
     245,   237,    -1,   235,   137,   236,   245,   238,   246,   237,
      -1,   235,   138,   236,   249,   237,    -1,   235,   138,   236,
     247,   238,   245,   237,    -1,   235,   138,   236,   245,   238,
     246,   237,    -1,   235,   115,   236,   249,   237,    -1,   235,
     116,   236,   249,   237,    -1,   235,   117,   236,   245,   237,
      -1,   235,   118,   236,   245,   237,    -1,   235,   119,   236,
     245,   237,    -1,   235,   120,   236,   245,   237,    -1,   235,
     121,   236,   245,   238,   245,   237,    -1,   235,   122,   236,
     245,   237,    -1,   235,   123,   236,   245,   237,    -1,   235,
     124,   236,   245,   237,    -1,   235,   125,   236,   245,   237,
      -1,   235,   126,   236,   245,   237,    -1,   235,   127,   236,
     245,   238,   245,   237,    -1,   235,   128,   236,   245,   237,
      -1,   235,   129,   236,   245,   237,    -1,   235,   131,   236,
     245,   238,   245,   237,    -1,   235,   132,   236,   245,   237,
      -1,   235,   133,   236,   245,   237,    -1,   235,   134,   236,
     245,   237,    -1,   235,   135,   236,   245,   237,    -1,   235,
     136,   236,   245,   237,    -1,   235,   139,   236,   245,   237,
      -1,   235,   140,   236,   245,   238,   245,   237,    -1,   235,
     141,   236,   245,   238,   245,   238,   245,   237,    -1,   235,
     142,   236,   245,   238,   245,   238,   245,   237,    -1,   235,
     143,   236,   245,   238,   245,   238,   245,   237,    -1,   235,
     144,   236,   245,   238,   245,   238,   245,   237,    -1,   235,
     145,   236,   245,   237,    -1,   235,   146,   236,   245,   237,
      -1,   235,   147,   236,   245,   237,    -1,   235,   148,   236,
     245,   237,    -1,   235,   149,   236,   245,   237,    -1,   235,
     150,   236,   245,   237,    -1,   235,   151,    -1,   235,   153,
     236,   245,   238,   245,   238,   245,   237,    -1,     4,   239,
       4,   239,     4,    -1,   235,   154,   236,   245,   238,   245,
     238,   245,   237,    -1,   235,   160,   236,   245,   237,    -1,
     235,   161,   236,   245,   238,   245,   237,    -1,   235,   152,
     236,   245,   237,    -1,   235,   152,   236,   245,   238,   245,
     237,    -1,   235,   155,   236,   245,   238,   245,   237,    -1,
     235,   157,   236,   245,   237,    -1,   235,   158,   236,   245,
     237,    -1,   235,   159,   236,   245,   237,    -1,   235,   168,
     236,   247,   238,   245,   237,    -1,   235,   168,   236,   245,
     238,   247,   237,    -1,   235,   168,   236,   247,   238,   245,
     238,   245,   237,    -1,   235,   165,   236,   247,   238,   245,
     237,    -1,   235,   165,   236,   245,   238,   247,   237,    -1,
     235,   166,   236,   247,   238,   245,   238,   245,   237,    -1,
     235,   166,   236,   245,   238,   247,   238,   245,   237,    -1,
     235,   167,   236,   247,   238,   245,   238,   245,   237,    -1,
     235,   167,   236,   245,   238,   247,   238,   245,   237,    -1,
     235,   169,   236,   247,   238,   245,   237,    -1,   235,   169,
     236,   245,   238,   247,   237,    -1,   235,   169,   236,   247,
     238,   245,   238,   245,   237,    -1,   235,   162,   236,   245,
     238,   245,   237,    -1,   235,   163,   236,   245,   238,   245,
     237,    -1,   235,   164,   236,   245,   238,   245,   237,    -1,
     235,   156,   236,   245,   238,   245,   238,   245,   237,    -1,
     236,   245,   237,    -1,   228,   244,    -1,   229,   244,    -1,
       4,    -1,     5,    -1,   235,   130,    -1,     3,    -1,   240,
     244,    -1,   227,   244,    -1,   235,   203,   236,   245,   237,
      -1,   235,   204,    -1,   235,   205,    -1,   235,   206,    -1,
     235,   207,    -1,   235,   208,   236,   245,   237,    -1,   235,
     215,    -1,   235,   216,    -1,   216,    -1,   235,   188,    -1,
     235,   189,    -1,   235,   190,    -1,   235,   191,    -1,   235,
     192,    -1,   235,   193,    -1,   235,   194,    -1,   235,   195,
      -1,   245,   228,   245,    -1,   245,   229,   245,    -1,   245,
     231,   245,    -1,   245,   232,   245,    -1,   245,   233,   245,
      -1,   245,   234,   245,    -1,   244,    -1,   245,   220,   245,
     221,   245,    -1,   245,   219,   245,    -1,   245,   224,   245,
      -1,   245,   225,   245,    -1,   245,   226,   245,    -1,   245,
     223,   245,    -1,   245,   222,   245,    -1,   245,   224,   225,
     245,    -1,   245,   227,   225,   245,    -1,   245,   224,   226,
     245,    -1,   245,   226,   225,   245,    -1,   245,   230,   245,
      -1,   245,    -1,   246,   238,   245,    -1,   248,   221,   248,
      -1,     6,    -1,    10,     4,    -1,   241,    10,     4,    -1,
      10,   241,     4,    -1,   241,    10,   241,     4,    -1,     7,
      -1,   247,    -1,   248,    -1,     4,    -1,     5,    -1,   229,
     250,    -1,   228,   250,    -1,     3,    -1,   248,    -1,    -1,
     252,   253,    -1,   170,    -1,   171,    -1,   240,   170,    -1,
     240,   171,    -1,   227,   170,    -1,   227,   171,    -1,   176,
      -1,   175,    -1,   177,    -1,   240,   177,    -1,   227,   177,
      -1,   179,    -1,   240,   179,    -1,   227,   179,    -1,   180,
      -1,   240,   180,    -1,   227,   180,    -1,   181,    -1,   240,
     181,    -1,   227,   181,    -1,   182,    -1,   240,   182,    -1,
     227,   182,    -1,   183,    -1,   240,   183,    -1,   227,   183,
      -1,   172,    -1,   240,   172,    -1,   227,   172,    -1,   173,
      -1,   240,   173,    -1,   227,   173,    -1,   174,    -1,   240,
     174,    -1,   227,   174,    -1,   184,    -1,   227,   184,    -1,
     240,   184,    -1,   185,    -1,   227,   185,    -1,   240,   185,
      -1,   186,    -1,   227,   186,    -1,   240,   186,    -1,   187,
      -1,   227,   187,    -1,   240,   187,    -1,   178,   225,     4,
      -1,   196,   225,     4,    -1,   196,   225,   197,    -1,   196,
     225,   198,    -1,   196,   225,   199,    -1,   196,   225,   200,
      -1,   196,   225,   201,    -1,   202,    -1,   227,   202,    -1,
     240,   202,    -1,   209,   225,     4,    -1,   212,   225,     4,
      -1,   213,   225,     4,    -1,   214,   225,     4,    -1,   217,
      -1,   218,    -1,   227,   218,    -1,   240,   218,    -1,   107,
     247,    -1,   107,    -1,   108,   247,    -1,   108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   288,   288,   290,   303,   305,   307,   309,   312,   316,
     319,   323,   326,   330,   345,   354,   355,   361,   363,   365,
     367,   369,   382,   389,   395,   399,   404,   416,   417,   418,
     420,   421,   423,   425,   426,   431,   433,   437,   442,   446,
     449,   451,   453,   457,   459,   462,   464,   466,   470,   472,
     473,   475,   495,   496,   509,   510,   524,   533,   535,   538,
     540,   542,   544,   545,   547,   548,   550,   554,   556,   558,
     559,   561,   563,   565,   567,   569,   571,   575,   578,   582,
     584,   585,   589,   593,   597,   599,   601,   603,   604,   606,
     616,   617,   618,   619,   620,   621,   622,   625,   642,   657,
     660,   667,   670,   677,   680,   687,   690,   697,   699,   706,
     710,   711,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   757,   758,   763,   777,   789,
     794,   795,   808,   820,   821,   826,   838,   850,   855,   856,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   877,
     883,   889,   893,   898,   900,   902,   906,   911,   913,   915,
     920,   925,   927,   929,   933,   938,   940,   942,   943,   945,
     946,   947,   951,   956,   958,   960,   961,   962,   963,   965,
     967,   969,   972,   973,   974,   976,   977,   979,   980,   981,
     982,   983,   984,   985,   989,   997,   998,  1008,  1010,  1012,
    1016,  1017,  1019,  1020,  1021,  1023,  1026,  1029,  1032,  1035,
    1038,  1041,  1044,  1047,  1050,  1053,  1056,  1059,  1061,  1064,
    1067,  1069,  1071,  1073,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
    1090,  1091,  1092,  1093,  1094,  1096,  1097,  1098,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1109,  1113,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1125,  1127,  1130,
    1132,  1134,  1137,  1140,  1143,  1146,  1148,  1150,  1153,  1154,
    1155,  1156,  1158,  1159,  1160,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1204,  1205,  1208,  1209,  1212,
    1213,  1216,  1217,  1219,  1221,  1223,  1226,  1227,  1230,  1231,
    1232,  1233,  1236,  1237,  1249,  1250,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
    1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1296,  1302,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1352,
    1357,  1365,  1369,  1371,  1375
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "NUMBER", "FNUMBER", "RANGE",
  "VAR", "WORD", "PLUGIN", "COL", "S_SHOW", "S_HIDE", "S_INSERTCOL",
  "S_OPENCOL", "S_DELETECOL", "S_YANKCOL", "S_GETFORMAT", "S_FORMAT",
  "S_FMT", "S_LET", "S_LABEL", "S_LEFTSTRING", "S_RIGHTSTRING",
  "S_LEFTJUSTIFY", "S_RIGHTJUSTIFY", "S_CENTER", "S_COLOR", "S_ADDNOTE",
  "S_DELNOTE", "S_GET", "S_PUT", "S_MERGE", "S_WRITE", "S_TBL", "S_COPY",
  "S_MOVE", "S_ERASE", "S_YANK", "S_FILL", "S_SORT", "S_LOCK", "S_UNLOCK",
  "S_GOTO", "S_DEFINE", "S_UNDEFINE", "S_ABBREV", "S_UNABBREV", "S_FRAME",
  "S_FRAMETOP", "S_FRAMEBOTTOM", "S_FRAMELEFT", "S_FRAMERIGHT",
  "S_UNFRAME", "S_VALUE", "S_MDIR", "S_AUTORUN", "S_FKEY", "S_SCEXT",
  "S_ASCEXT", "S_TBL0EXT", "S_TBLEXT", "S_LATEXEXT", "S_SLATEXEXT",
  "S_TEXEXT", "S_SET", "S_UP", "S_DOWN", "S_LEFT", "S_RIGHT", "S_ENDUP",
  "S_ENDDOWN", "S_ENDLEFT", "S_ENDRIGHT", "S_SELECT", "S_INSERTROW",
  "S_OPENROW", "S_DELETEROW", "S_YANKROW", "S_PULL", "S_PULLMERGE",
  "S_PULLROWS", "S_PULLCOLS", "S_PULLXCHG", "S_PULLTP", "S_PULLFMT",
  "S_PULLCOPY", "S_WHEREAMI", "S_GETNUM", "S_FGETNUM", "S_GETSTRING",
  "S_GETEXP", "S_GETFMT", "S_GETFRAME", "S_GETRANGE", "S_EVAL", "S_SEVAL",
  "S_QUERY", "S_GETKEY", "S_ERROR", "S_RECALC", "S_REDRAW", "S_QUIT",
  "S_STATUS", "S_RUN", "S_PLUGIN", "S_PLUGOUT", "K_ERROR", "K_INVALID",
  "K_FIXED", "K_SUM", "K_PROD", "K_AVG", "K_STDDEV", "K_COUNT", "K_ROWS",
  "K_COLS", "K_ABS", "K_ACOS", "K_ASIN", "K_ATAN", "K_ATAN2", "K_CEIL",
  "K_COS", "K_EXP", "K_FABS", "K_FLOOR", "K_HYPOT", "K_LN", "K_LOG",
  "K_PI", "K_POW", "K_SIN", "K_SQRT", "K_TAN", "K_DTR", "K_RTD", "K_MAX",
  "K_MIN", "K_RND", "K_ROUND", "K_IF", "K_PV", "K_FV", "K_PMT", "K_HOUR",
  "K_MINUTE", "K_SECOND", "K_MONTH", "K_DAY", "K_YEAR", "K_NOW", "K_DATE",
  "K_DTS", "K_TTS", "K_FMT", "K_SUBSTR", "K_UPPER", "K_LOWER", "K_CAPITAL",
  "K_STON", "K_EQS", "K_EXT", "K_NVAL", "K_SVAL", "K_LOOKUP", "K_HLOOKUP",
  "K_VLOOKUP", "K_INDEX", "K_STINDEX", "K_AUTO", "K_AUTOCALC",
  "K_AUTOINSERT", "K_AUTOWRAP", "K_CSLOP", "K_BYROWS", "K_BYCOLS",
  "K_OPTIMIZE", "K_ITERATIONS", "K_NUMERIC", "K_PRESCALE", "K_EXTFUN",
  "K_CELLCUR", "K_TOPROW", "K_COLOR", "K_COLORNEG", "K_COLORERR",
  "K_BRAILLE", "K_BLACK", "K_RED", "K_GREEN", "K_YELLOW", "K_BLUE",
  "K_MAGENTA", "K_CYAN", "K_WHITE", "K_TBLSTYLE", "K_TBL", "K_LATEX",
  "K_SLATEX", "K_TEX", "K_FRAME", "K_RNDTOEVEN", "K_FILENAME", "K_MYROW",
  "K_MYCOL", "K_LASTROW", "K_LASTCOL", "K_COLTOA", "K_CRACTION", "K_CRROW",
  "K_CRCOL", "K_ROWLIMIT", "K_COLLIMIT", "K_PAGESIZE", "K_NUMITER",
  "K_ERR", "K_SCRC", "K_LOCALE", "';'", "'?'", "':'", "'|'", "'&'", "'<'",
  "'='", "'>'", "'!'", "'+'", "'-'", "'#'", "'*'", "'/'", "'%'", "'^'",
  "'@'", "'('", "')'", "','", "'.'", "'~'", "'$'", "$accept", "command",
  "term", "e", "expr_list", "range", "var", "var_or_range", "num",
  "strarg", "setlist", "setitem", "errlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,    59,
      63,    58,   124,    38,    60,    61,    62,    33,    43,    45,
      35,    42,    47,    37,    94,    64,    40,    41,    44,    46,
     126,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   247,
     247,   248,   248,   248,   248,   248,   249,   249,   250,   250,
     250,   250,   251,   251,   252,   252,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   254,   254,   254,   254
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     4,     4,     4,     2,     1,     2,
       1,     2,     1,     2,     3,     2,     1,     7,     5,     6,
       4,     4,     2,     2,     2,     2,     4,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     4,     4,     3,
       2,     1,     3,     2,     2,     2,     1,     3,     2,     4,
       4,     1,     2,     4,     2,     4,     1,     2,     3,     2,
       3,     1,     2,     1,     2,     1,     2,     4,     1,     2,
       3,     3,     1,     2,     1,     2,     3,     2,     3,     2,
       2,     3,     4,     4,     2,     3,     3,     1,     2,     2,
       3,     3,     2,     2,     1,     2,     3,     2,     1,     3,
       2,     3,     2,     3,     2,     3,     2,     2,     1,     3,
       4,     3,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     2,     4,     1,     2,
       3,     4,     1,     3,     2,     4,     1,     2,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     4,     1,     3,     2,     4,     1,     3,     2,
       4,     1,     3,     2,     4,     1,     3,     2,     4,     1,
       3,     2,     4,     1,     3,     1,     3,     2,     4,     2,
       3,     5,     2,     3,     5,     2,     4,     1,     3,     1,
       2,     1,     3,     1,     1,     1,     2,     4,     4,     1,
       0,     1,     1,     3,     5,     5,     7,     5,     7,     5,
       7,     5,     7,     5,     7,     5,     7,     7,     5,     7,
       7,     5,     5,     5,     5,     5,     5,     7,     5,     5,
       5,     5,     5,     7,     5,     5,     7,     5,     5,     5,
       5,     5,     5,     7,     9,     9,     9,     9,     5,     5,
       5,     5,     5,     5,     2,     9,     5,     9,     5,     7,
       5,     7,     7,     5,     5,     5,     7,     7,     9,     7,
       7,     9,     9,     9,     9,     7,     7,     9,     7,     7,
       7,     9,     3,     2,     2,     1,     1,     2,     1,     2,
       2,     5,     2,     2,     2,     2,     5,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     5,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     3,     1,     3,     3,
       1,     2,     3,     3,     4,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     0,     2,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     3,     3,     3,     3,     1,     1,     2,
       2,     2,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   211,   209,     0,    51,   130,   132,   138,   146,   179,
       0,     0,     0,     0,     0,     0,     8,    10,    12,     0,
       0,    16,     0,    41,     0,    46,     0,    56,     0,    61,
      63,     0,    68,    72,    74,    87,     0,     0,    94,     0,
      98,     0,     0,     0,     0,   108,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   113,   115,
     117,   119,   121,   122,   123,   124,     0,   126,   128,   134,
     142,   150,   151,   152,   153,   154,   155,   156,   157,   159,
     163,   167,   171,   175,   183,   185,     0,     0,     0,   197,
     199,     0,   203,   204,   205,   201,     0,     0,     0,     0,
       0,     0,    54,    52,     0,     0,   139,     0,   147,     0,
       0,   177,     0,     0,     0,   340,   345,     0,     0,   346,
     347,     0,     0,     0,     0,     0,     7,     9,    11,     0,
       0,     0,    13,    15,   352,   353,    22,     0,    40,    36,
     353,    35,    23,    45,    44,    43,    48,    57,    59,    62,
      64,     0,    69,    73,    75,    84,   348,   349,    88,   422,
     424,     0,     0,     0,     0,    77,    79,    80,    89,    92,
      93,    95,    97,   100,     0,   102,     0,   104,     0,   106,
       0,   107,    66,    24,    25,     0,    27,    28,    29,    30,
      31,    32,    33,   112,   114,   116,   118,   120,   125,     0,
       0,   136,     0,   144,     0,   158,     0,     0,   161,     0,
     165,     0,   169,     0,   173,     0,   181,     0,   187,   298,
     295,   296,   309,     0,     0,     0,     0,     0,     0,   324,
     189,   212,   192,   195,     0,   200,     0,   206,     0,     0,
       1,     0,     0,     0,     0,   131,   133,     0,   140,     0,
     148,     0,   180,     0,     0,     0,   341,     0,     0,     0,
      71,     3,     0,     0,     0,   109,   111,    14,    39,     0,
       0,    34,    42,    47,    58,    60,     0,    70,    81,   421,
     423,   351,   350,    85,    86,    76,    78,    90,    91,    96,
      99,   101,   103,   105,     0,   356,   357,   382,   385,   388,
     363,   362,   364,     0,   367,   370,   373,   376,   379,   391,
     394,   397,   400,     0,   410,     0,     0,     0,     0,   417,
     418,     0,     0,   355,   127,   129,     0,   135,     0,   143,
     160,   164,     0,   168,     0,   172,     0,   176,     0,   184,
       0,   186,     0,     0,   300,   293,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   310,   311,
     312,   313,   314,   315,   316,   317,     0,   302,   303,   304,
     305,     0,   307,   308,     0,     0,   299,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,     0,   198,   202,     0,     0,    50,
      49,    55,    53,   141,   149,   178,    21,    20,     0,   343,
     342,     0,   339,     2,     4,     5,     6,   110,    38,    37,
      67,    82,    83,    26,     0,     0,     0,     0,     0,     0,
     360,   361,   384,   387,   390,   366,   369,   372,   375,   378,
     381,   392,   395,   398,   401,   411,   419,   358,   359,   383,
     386,   389,   365,   368,   371,   374,   377,   380,   393,   396,
     399,   402,   412,   420,   137,   145,   162,   166,   170,   174,
     182,   188,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,   326,     0,   331,
     330,     0,     0,   327,   328,     0,   329,     0,   318,   319,
     336,   320,   321,   322,   323,     0,   196,   207,   208,    18,
       0,   344,   403,   404,   405,   406,   407,   408,   409,   413,
     414,   415,   416,     0,   346,     0,   346,     0,   346,     0,
     346,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   346,   212,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,   332,   334,   335,   333,   194,    19,   266,
       0,   215,     0,   217,     0,   219,     0,   221,     0,   223,
     231,   232,   233,   234,   235,   236,     0,   238,   239,   240,
     241,   242,     0,   244,   245,     0,   247,   248,   249,   250,
     251,     0,     0,   225,     0,     0,   228,   252,     0,     0,
       0,     0,     0,   258,   259,   260,   261,   262,   263,   270,
       0,     0,     0,     0,     0,   273,   274,   275,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,   306,   214,   325,    17,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   218,   220,   222,   224,
     237,   243,   246,   227,     0,   226,   230,   229,   253,     0,
       0,     0,     0,   271,     0,     0,   272,     0,   269,   288,
     289,   290,   280,   279,     0,     0,     0,     0,   277,   276,
       0,   286,   285,     0,   338,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,   255,
     256,   257,   265,   267,   291,   282,   281,   284,   283,   278,
     287
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   229,   796,   797,   119,   231,   121,   166,   136,
     193,   323,   167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -219
static const yytype_int16 yypact[] =
{
    1164,  -219,  -219,    34,    37,  -218,  -191,    -2,    27,     8,
      38,    87,    87,    87,    87,    87,    87,    87,    87,    50,
      89,    89,     4,     9,     4,    20,     4,    87,    89,    87,
      87,    87,    87,    87,    87,   129,     4,    87,    40,    46,
      87,    85,    97,   119,   139,    87,    87,     4,     4,    55,
       4,     4,     4,     4,     4,     4,     4,  -219,    57,    59,
      61,    68,  -219,  -219,  -219,  -219,    70,  -157,  -156,     1,
      29,  -219,  -219,  -219,  -219,  -219,  -219,  -219,    87,  -146,
      22,   155,   162,   182,   304,  -145,    75,   496,   496,    21,
    -219,    99,  -219,  -219,  -219,  -132,   102,   103,   105,   100,
    -110,  -102,  -101,  -100,   118,   120,   -94,   124,  -219,   -91,
     127,   -84,   143,   -77,    30,  -219,  -219,     6,   145,  -219,
     -68,   153,   -67,   -66,   -62,   -61,  -219,  -219,  -219,   -59,
     163,   -68,    87,  -219,  -219,  -219,  -219,    87,   -53,   -51,
     -68,    87,  -219,  -219,  -219,    87,    87,    87,    87,  -219,
    -219,   137,     4,  -219,  -219,    87,  -219,  -219,  -219,    87,
      87,   137,   137,   167,   168,    87,    87,  -219,    87,  -219,
    -219,  -219,    87,  -219,   169,  -219,   178,  -219,   179,  -219,
     183,  -219,  -219,  -219,  -219,   -39,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,   713,  -219,  -219,  -219,  -219,  -219,   186,
     187,   -28,   191,   -25,   193,  -219,   196,   197,   -14,   206,
     -10,   209,    -6,   213,    -4,   215,     0,   216,    11,  -219,
     -18,  -219,  -219,   496,   496,   496,   847,   637,   496,  -219,
     375,  -219,  1139,    33,   219,  -219,   227,  -219,    23,    24,
    -219,   234,   236,   248,   246,  -219,  -219,   247,  -219,   249,
    -219,   258,  -219,   289,   298,   302,  -219,   309,    13,    89,
    -219,   496,   496,   496,   496,   496,  -219,  -219,  -219,    87,
      87,  -219,  -219,  -219,  -219,  -219,   137,  -219,  -219,  -219,
    -219,  -219,  -219,    87,    87,  -219,  -219,  -219,   -68,  -219,
    -219,  -219,  -219,  -219,     4,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,    90,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,    91,  -219,   104,   107,   114,   115,  -219,
    -219,  1105,  1158,  -219,  -219,  -219,   321,  -219,   323,  -219,
    -219,  -219,   344,  -219,   357,  -219,   363,  -219,   364,  -219,
     365,  -219,   367,   369,  -219,  -219,  -219,   496,   150,   156,
     157,   159,   161,   166,   170,   171,   173,   174,   175,   180,
     181,   184,   188,   194,   195,   201,   202,   205,  -219,   207,
     262,   266,   271,   273,   275,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   288,   291,   292,   293,   295,  -219,
     296,   297,   299,   303,   308,   310,   312,   315,   316,   317,
     320,   326,   334,   348,   352,   355,   356,   374,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,   376,  -219,  -219,  -219,
    -219,   377,  -219,  -219,   955,  1702,  -219,   192,   496,   496,
     496,   496,    -1,   496,   147,   154,   496,   496,   496,   496,
     496,   496,   496,   200,   385,  -219,  -219,   388,   426,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,   428,   429,  -219,
    -219,   438,  -219,  1139,  1139,  1139,  1139,  1139,  -219,  -219,
    -219,  -219,  -219,  -219,   521,   360,   530,   534,   536,   581,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,   354,  -219,    87,    87,    87,    87,    87,    87,
      87,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     314,   314,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   314,   314,   314,
     314,   314,   496,   496,   199,  -219,   592,  1139,   906,  1123,
     718,   496,   496,  2676,  2676,   496,  2676,   496,  -181,  -181,
    -181,   380,   380,   380,  -219,   607,  -219,  -219,  -219,  -219,
     618,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,   620,   383,   389,   390,   393,   394,   396,
     397,   399,   400,   406,   409,   412,  1718,  1734,  1750,  1766,
     617,  1782,  1798,  1814,  1830,  1846,  1175,  1862,  1878,  1192,
    1894,  1910,  1926,  1942,  1958,  1209,   413,  -182,   415,  1226,
     416,   419,  1974,  1243,  1260,  1277,  1294,  1311,  1990,  2006,
    2022,  2038,  2054,  2070,   349,  1328,  1345,  1362,  1379,  2086,
    2102,  2118,  2134,  1396,  1413,  1430,  1447,  1464,   421,   -68,
    1481,   422,  1498,   430,  1515,   431,  1532,   432,  2150,  2166,
     496,  -219,   496,  2676,  2676,  2676,  2676,  -219,   630,  -219,
     496,  -219,   496,  -219,   496,  -219,   496,  -219,   496,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,   496,  -219,  -219,  -219,
    -219,  -219,   496,  -219,  -219,   496,  -219,  -219,  -219,  -219,
    -219,   496,   496,  -219,   496,   496,  -219,  -219,   496,   496,
     496,   496,   496,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
     496,   496,   496,   496,   496,  -219,  -219,  -219,  -219,   496,
     496,   496,   496,    87,   496,    87,   496,    87,   496,    87,
     496,    87,   496,  -219,  -219,  -219,  1086,  -219,  2182,  2198,
    2214,  2230,  2246,  2262,  2278,  2294,  1139,  -170,  2310,  -168,
    2326,  2342,  1549,  1566,  1583,  1600,  2358,  1617,  1634,  2374,
    1651,  2390,  2406,  2422,  2438,   420,  2454,   433,  1668,   434,
    1685,   441,   477,   442,  1155,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,   496,  -219,  -219,  -219,  -219,   496,
     496,   496,   496,  -219,   496,   496,  -219,   496,  -219,  -219,
    -219,  -219,  -219,  -219,   496,   496,   496,   496,  -219,  -219,
     496,  -219,  -219,   496,  1139,  2470,  2486,  2502,  2518,  2534,
    2550,  2566,  2582,  2598,  2614,  2630,  2646,  2662,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,  -203,   -87,  -107,    39,   253,   776,  -116,    62,
    -219,  -219,  -219
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -348
static const yytype_int16 yytable[] =
{
     230,   232,   219,   220,   221,   201,   116,   134,   106,   117,
     256,   116,   134,   104,   117,   115,   116,   460,   111,   117,
     344,   345,   346,   134,   233,   426,   115,   116,   115,   116,
     117,   108,   117,   203,   254,   276,   443,   109,   100,   259,
     105,   102,   113,   170,   101,   281,   282,   103,   114,   171,
     439,   440,   441,   442,   129,  -347,   115,   116,   130,   185,
     117,   194,   139,   195,   144,   196,   147,   833,   834,   836,
     834,   152,   197,   198,   199,   200,   206,   217,   218,   172,
     174,   176,   178,   180,   181,   141,   142,   145,   146,   173,
     236,   115,   116,   115,   116,   117,   116,   117,   168,   117,
     240,   175,   235,   115,   116,   237,   238,   117,   239,   183,
     184,   241,   186,   187,   188,   189,   190,   191,   192,   242,
     243,   244,   245,   177,   246,   115,   116,   247,   248,   117,
     249,   250,   155,   156,   157,   115,   116,   158,   251,   117,
     425,   156,   157,   179,   523,   115,   116,   252,   253,   117,
     219,   220,   221,   259,   116,   258,   260,   117,   261,   262,
     470,   115,   116,   263,   264,   117,   265,   266,   115,   116,
     283,   284,   117,   290,   463,   464,   465,   466,   467,   269,
     271,   270,   291,   292,   272,   273,   294,   293,   115,   116,
     324,   325,   117,   326,   278,   327,   328,   329,   279,   280,
     330,   331,   219,   220,   221,   286,   116,   287,   332,   117,
     333,   289,   334,   335,   277,   222,   336,   337,   338,   339,
     341,   343,   340,   445,   591,   592,   223,   224,   225,   107,
     112,   446,   202,   342,   226,   227,   159,   160,   449,   228,
     118,   137,   138,   234,   207,   118,   450,   257,   447,   448,
     118,   255,   451,   143,   461,   444,   452,   453,   110,   454,
     204,   118,   455,   118,   120,   120,   120,   120,   120,   120,
     120,   120,   131,   132,   133,   135,   140,   135,   140,   135,
     131,   148,   120,   120,   120,   131,   120,   120,   120,   135,
     120,   118,   456,   131,   131,   131,   131,   131,   131,   120,
     135,   135,   457,   135,   135,   135,   135,   135,   135,   135,
     115,   116,   458,   459,   117,   474,   475,   219,   220,   221,
     115,   116,   471,   472,   117,   514,   118,   515,   118,   476,
     118,   120,   477,   120,   120,   120,   120,   120,   118,   478,
     479,   587,   588,   589,   590,   593,   594,   596,   516,   598,
     599,   600,   601,   602,   603,   604,   473,   161,   162,   163,
     118,   517,   164,   222,   613,   161,   162,   518,   519,   520,
     118,   521,   595,   522,   223,   224,   225,   209,   427,   597,
     118,   523,   226,   227,   211,   120,   524,   228,   118,   606,
     120,   607,   525,   526,   131,   527,   118,   528,   131,   131,
     120,   120,   529,   118,   213,   135,   530,   531,   131,   532,
     533,   534,   131,   131,   586,   222,   535,   536,   120,   131,
     537,   288,   605,   118,   538,   131,   223,   224,   225,   608,
     539,   540,   609,   610,   226,   227,   700,   541,   542,   228,
     118,   543,   611,   544,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   659,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   690,   692,   694,   696,   698,   699,   785,   545,   219,
     220,   221,   546,   116,   703,   704,   117,   547,   705,   548,
     706,   549,   462,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   120,   120,   559,   612,   215,   560,   561,   562,
     222,   563,   564,   565,   619,   566,   131,   131,   620,   567,
     621,   223,   224,   225,   568,   118,   569,   135,   570,   226,
     227,   571,   572,   573,   228,   118,   574,   614,   615,   616,
     617,   618,   575,   624,   626,   628,   630,   632,   428,   429,
     576,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   577,   622,   759,   760,   578,   656,
     660,   579,   580,   623,   428,   429,   701,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     581,   707,   582,   583,   442,   786,   688,   691,   693,   695,
     697,   710,   708,   788,   709,   789,   711,   790,   712,   791,
     713,   792,   714,   715,   787,   716,   717,   799,   718,   793,
     219,   220,   221,   719,   116,   794,   720,   117,   795,   721,
       0,   742,   743,     0,   745,   798,   746,   852,   800,   774,
     776,   801,   802,   803,   804,   805,     0,     0,   778,   780,
     782,   854,   856,   806,   807,   808,   809,   810,   858,   861,
       0,     0,   811,   812,   813,   814,     0,   816,     0,   818,
       0,   820,     0,   822,     0,   824,   428,   429,     0,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   222,     0,   859,   860,     0,     0,     0,     0,
       0,     0,     0,   223,   224,   225,     0,     0,     0,     0,
       0,   226,   227,     0,     0,     0,   228,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   864,     0,     0,
       0,     0,   865,   866,   867,   868,     0,   869,   870,     0,
     871,     0,     0,     0,     0,     0,     0,   872,   873,   874,
     875,     0,     0,   876,     0,     0,   877,   120,   120,   120,
     120,   120,   120,   120,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,   657,   657,   149,   150,   151,     0,   153,
     154,   165,   815,   169,   817,     0,   819,     0,   821,     0,
     823,     0,   182,     0,     0,     0,     0,     0,     0,     0,
     689,   689,   689,   689,   689,     0,   428,   429,     0,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,     0,   222,   205,   726,   208,   210,   212,   214,
     216,     0,     0,     0,   223,   224,   225,     0,     0,     0,
       0,     0,   424,   227,     0,     0,     0,   228,   118,     0,
       0,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,     0,     0,   267,   313,
       0,     0,     0,   268,     0,   314,     0,     0,     0,     0,
       0,     0,   315,   274,   275,   316,   317,   318,     0,     0,
     319,   320,     0,     0,     0,     0,     0,     0,     0,     0,
     321,   285,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   322,     0,     0,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,     0,   131,     0,
     131,     0,   131,     0,   131,   408,   409,   410,   411,   412,
     413,   414,   415,     0,     0,   468,   469,     0,     0,     0,
     416,   417,   418,   419,   420,   421,     0,     0,     0,     0,
       0,     0,   422,   423,   584,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   428,   429,   702,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,     0,     0,   408,   409,   410,   411,   412,   413,   414,
     415,     0,     0,     0,     0,     0,     0,     0,   416,   417,
     418,   419,   420,   421,  -210,     1,     0,     0,     0,     0,
     422,   423,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,     0,     0,     0,   480,   481,   482,   483,   484,
       0,     0,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,     0,     0,     0,     0,     0,     0,     0,
     625,   627,   629,   631,   633,   634,   635,   495,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,     0,     0,   496,     0,     0,   658,   661,   497,   498,
     499,   500,   501,     0,     0,   502,     0,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   428,   429,
     512,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   428,   429,   513,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
       0,     0,   862,   863,   428,   429,     0,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
       0,   428,   429,   732,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,     0,   428,   429,
     735,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,     0,   428,   429,   741,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,     0,   428,   429,   744,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,     0,   428,
     429,   748,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,     0,   428,   429,   749,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,     0,   428,   429,   750,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,     0,
     428,   429,   751,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,     0,   428,   429,   752,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,     0,   428,   429,   761,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
       0,   428,   429,   762,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,     0,   428,   429,
     763,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,     0,   428,   429,   764,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,     0,   428,   429,   769,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,     0,   428,
     429,   770,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,     0,   428,   429,   771,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,     0,   428,   429,   772,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,     0,
     428,   429,   773,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,     0,   428,   429,   775,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,     0,   428,   429,   777,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
       0,   428,   429,   779,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,     0,   428,   429,
     781,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,     0,   428,   429,   839,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,     0,   428,   429,   840,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,     0,   428,
     429,   841,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,     0,   428,   429,   842,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,     0,   428,   429,   844,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,     0,
     428,   429,   845,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,     0,   428,   429,   847,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,     0,   428,   429,   855,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
       0,   428,   429,   857,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   585,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   722,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   723,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   724,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   725,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   727,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   728,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   729,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   730,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   731,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   733,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   734,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   736,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   737,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   738,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   739,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   740,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   747,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   753,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   754,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   755,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   756,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   757,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   758,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   765,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   766,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   767,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   768,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   783,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   784,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   825,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   826,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   827,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   828,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   829,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   830,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   831,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   832,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   835,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   837,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   838,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   843,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   846,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   848,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   849,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   850,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   851,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   853,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   878,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   879,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   880,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   881,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   882,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   883,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   884,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   428,   429,   885,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   428,   429,   886,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   428,
     429,   887,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   428,   429,   888,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   428,   429,   889,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,     0,     0,   890,
    -348,  -348,  -348,  -348,   436,   437,   438,   439,   440,   441,
     442
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-219))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-348))

static const yytype_int16 yycheck[] =
{
      87,    88,     3,     4,     5,     4,     7,     3,    10,    10,
       4,     7,     3,   231,    10,     6,     7,     4,    10,    10,
     223,   224,   225,     3,     3,   228,     6,     7,     6,     7,
      10,     4,    10,     4,     4,   151,     3,    10,     4,   221,
     231,     4,     4,     3,    10,   161,   162,    10,    10,     3,
     231,   232,   233,   234,     4,   237,     6,     7,    19,     4,
      10,     4,    23,     4,    25,     4,    27,   237,   238,   237,
     238,    32,     4,     3,   231,   231,   222,   222,     3,    40,
      41,    42,    43,    44,    45,    23,    24,    25,    26,     4,
     222,     6,     7,     6,     7,    10,     7,    10,    36,    10,
       0,     4,     3,     6,     7,     3,     3,    10,     3,    47,
      48,   221,    50,    51,    52,    53,    54,    55,    56,   221,
     221,   221,     4,     4,     4,     6,     7,   221,     4,    10,
     221,     4,     3,     4,     5,     6,     7,     8,   222,    10,
     227,     4,     5,     4,   347,     6,     7,     4,   225,    10,
       3,     4,     5,   221,     7,    10,     3,    10,   225,   225,
     276,     6,     7,   225,   225,    10,   225,     4,     6,     7,
       3,     3,    10,     4,   261,   262,   263,   264,   265,   232,
     141,   232,     4,     4,   145,   146,   225,     4,     6,     7,
       4,     4,    10,   221,   155,     4,   221,     4,   159,   160,
       4,     4,     3,     4,     5,   166,     7,   168,   222,    10,
       4,   172,   222,     4,   152,   216,   222,     4,   222,     4,
       4,   239,   222,     4,   225,   226,   227,   228,   229,   231,
     222,     4,   231,   222,   235,   236,   107,   108,     4,   240,
     241,   232,   233,   222,   222,   241,    10,   241,   225,   225,
     241,   221,     4,   233,   241,   222,    10,    10,   231,    10,
     231,   241,     4,   241,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   241,     3,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    50,    51,    52,    53,    54,    55,    56,
       6,     7,    10,     4,    10,   225,   225,     3,     4,     5,
       6,     7,   283,   284,    10,     4,   241,     4,   241,   225,
     241,    78,   225,    80,    81,    82,    83,    84,   241,   225,
     225,   428,   429,   430,   431,   432,   433,   434,     4,   436,
     437,   438,   439,   440,   441,   442,   294,   228,   229,   230,
     241,     4,   233,   216,     4,   228,   229,     4,     4,     4,
     241,     4,   225,     4,   227,   228,   229,   222,     3,   225,
     241,   584,   235,   236,   222,   132,   236,   240,   241,     4,
     137,     3,   236,   236,   141,   236,   241,   236,   145,   146,
     147,   148,   236,   241,   222,   152,   236,   236,   155,   236,
     236,   236,   159,   160,   222,   216,   236,   236,   165,   166,
     236,   168,   222,   241,   236,   172,   227,   228,   229,     3,
     236,   236,     4,     4,   235,   236,   237,   236,   236,   240,
     241,   236,     4,   236,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   700,   236,     3,
       4,     5,   236,     7,   591,   592,    10,   236,   595,   236,
     597,   236,   259,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   269,   270,   236,     4,   222,   236,   236,   236,
     216,   236,   236,   236,     4,   236,   283,   284,     4,   236,
       4,   227,   228,   229,   236,   241,   236,   294,   236,   235,
     236,   236,   236,   236,   240,   241,   236,   197,   198,   199,
     200,   201,   236,   524,   525,   526,   527,   528,   219,   220,
     236,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   236,     4,   237,   238,   236,   550,
     551,   236,   236,   239,   219,   220,     4,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     236,     4,   236,   236,   234,   702,   577,   578,   579,   580,
     581,   238,     4,   710,     4,   712,   237,   714,   238,   716,
     237,   718,   238,   237,     4,   238,   237,   744,   238,   726,
       3,     4,     5,   237,     7,   732,   237,    10,   735,   237,
      -1,   238,   237,    -1,   238,   742,   237,   237,   745,   238,
     238,   748,   749,   750,   751,   752,    -1,    -1,   238,   238,
     238,   238,   238,   760,   761,   762,   763,   764,   237,   237,
      -1,    -1,   769,   770,   771,   772,    -1,   774,    -1,   776,
      -1,   778,    -1,   780,    -1,   782,   219,   220,    -1,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   216,    -1,   237,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,   235,   236,    -1,    -1,    -1,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   834,    -1,    -1,
      -1,    -1,   839,   840,   841,   842,    -1,   844,   845,    -1,
     847,    -1,    -1,    -1,    -1,    -1,    -1,   854,   855,   856,
     857,    -1,    -1,   860,    -1,    -1,   863,   524,   525,   526,
     527,   528,   529,   530,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   550,   551,    29,    30,    31,    -1,    33,
      34,    35,   773,    37,   775,    -1,   777,    -1,   779,    -1,
     781,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     577,   578,   579,   580,   581,    -1,   219,   220,    -1,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,    -1,   216,    78,   238,    80,    81,    82,    83,
      84,    -1,    -1,    -1,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,   235,   236,    -1,    -1,    -1,   240,   241,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   196,
      -1,    -1,    -1,   137,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,   209,   147,   148,   212,   213,   214,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,   165,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   240,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,   775,    -1,
     777,    -1,   779,    -1,   781,   188,   189,   190,   191,   192,
     193,   194,   195,    -1,    -1,   269,   270,    -1,    -1,    -1,
     203,   204,   205,   206,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,    -1,   188,   189,   190,   191,   192,   193,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
     205,   206,   207,   208,     0,     1,    -1,    -1,    -1,    -1,
     215,   216,    -1,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
      -1,    -1,   177,    -1,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     524,   525,   526,   527,   528,   529,   530,   202,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,    -1,   218,    -1,    -1,   550,   551,   170,   171,
     172,   173,   174,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   219,   220,
     202,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   219,   220,   218,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
      -1,    -1,   237,   238,   219,   220,    -1,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
      -1,   219,   220,   238,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,   219,   220,
     238,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,    -1,   219,   220,   238,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,   219,   220,   238,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,    -1,   219,
     220,   238,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,    -1,   219,   220,   238,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,    -1,   219,   220,   238,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
     219,   220,   238,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,    -1,   219,   220,   238,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,    -1,   219,   220,   238,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
      -1,   219,   220,   238,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,   219,   220,
     238,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,    -1,   219,   220,   238,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,   219,   220,   238,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,    -1,   219,
     220,   238,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,    -1,   219,   220,   238,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,    -1,   219,   220,   238,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
     219,   220,   238,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,    -1,   219,   220,   238,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,    -1,   219,   220,   238,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
      -1,   219,   220,   238,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,   219,   220,
     238,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,    -1,   219,   220,   238,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,   219,   220,   238,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,    -1,   219,
     220,   238,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,    -1,   219,   220,   238,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,    -1,   219,   220,   238,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
     219,   220,   238,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,    -1,   219,   220,   238,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,    -1,   219,   220,   238,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
      -1,   219,   220,   238,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   219,   220,   237,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   219,   220,   237,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   219,
     220,   237,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   219,   220,   237,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   219,   220,   237,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,    -1,   237,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   243,
       4,    10,     4,    10,   231,   231,    10,   231,     4,    10,
     231,    10,   222,     4,    10,     6,     7,    10,   241,   247,
     248,   249,   249,   249,   249,   249,   249,   249,   249,     4,
     247,   248,   248,   248,     3,   248,   251,   232,   233,   247,
     248,   251,   251,   233,   247,   251,   251,   247,   248,   249,
     249,   249,   247,   249,   249,     3,     4,     5,     8,   107,
     108,   228,   229,   230,   233,   249,   250,   254,   251,   249,
       3,     3,   247,     4,   247,     4,   247,     4,   247,     4,
     247,   247,   249,   251,   251,     4,   251,   251,   251,   251,
     251,   251,   251,   252,     4,     4,     4,     4,     3,   231,
     231,     4,   231,     4,   231,   249,   222,   222,   249,   222,
     249,   222,   249,   222,   249,   222,   249,   222,     3,     3,
       4,     5,   216,   227,   228,   229,   235,   236,   240,   244,
     245,   248,   245,     3,   222,     3,   222,     3,     3,     3,
       0,   221,   221,   221,   221,     4,     4,   221,     4,   221,
       4,   222,     4,   225,     4,   221,     4,   241,    10,   221,
       3,   225,   225,   225,   225,   225,     4,   249,   249,   232,
     232,   247,   247,   247,   249,   249,   250,   251,   247,   247,
     247,   250,   250,     3,     3,   249,   247,   247,   248,   247,
       4,     4,     4,     4,   225,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   196,   202,   209,   212,   213,   214,   217,
     218,   227,   240,   253,     4,     4,   221,     4,   221,     4,
       4,     4,   222,     4,   222,     4,   222,     4,   222,     4,
     222,     4,   222,   239,   244,   244,   244,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   188,   189,
     190,   191,   192,   193,   194,   195,   203,   204,   205,   206,
     207,   208,   215,   216,   235,   245,   244,     3,   219,   220,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     3,   222,     4,     4,   225,   225,     4,
      10,     4,    10,    10,    10,     4,     3,     4,    10,     4,
       4,   241,   248,   245,   245,   245,   245,   245,   249,   249,
     250,   247,   247,   251,   225,   225,   225,   225,   225,   225,
     170,   171,   172,   173,   174,   177,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   202,   218,   170,   171,   172,
     173,   174,   177,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   202,   218,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   244,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   109,   237,   222,   245,   245,   245,
     245,   225,   226,   245,   245,   225,   245,   225,   245,   245,
     245,   245,   245,   245,   245,   222,     4,     3,     3,     4,
       4,     4,     4,     4,   197,   198,   199,   200,   201,     4,
       4,     4,     4,   239,   247,   249,   247,   249,   247,   249,
     247,   249,   247,   249,   249,   249,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   247,   248,   249,   245,
     247,   249,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   247,   248,
     245,   247,   245,   247,   245,   247,   245,   247,   245,   245,
     237,     4,   221,   245,   245,   245,   245,     4,     4,     4,
     238,   237,   238,   237,   238,   237,   238,   237,   238,   237,
     237,   237,   237,   237,   237,   237,   238,   237,   237,   237,
     237,   237,   238,   237,   237,   238,   237,   237,   237,   237,
     237,   238,   238,   237,   238,   238,   237,   237,   238,   238,
     238,   238,   238,   237,   237,   237,   237,   237,   237,   237,
     238,   238,   238,   238,   238,   237,   237,   237,   237,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   237,   237,   244,   245,     4,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   245,   246,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   247,   245,   247,   245,   247,
     245,   247,   245,   247,   245,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   238,   237,   237,   237,   237,   238,
     238,   238,   238,   237,   238,   238,   237,   238,   237,   237,
     237,   237,   237,   237,   238,   238,   238,   238,   237,   237,
     238,   237,   237,   238,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 289 "gram.y"
    { let((yyvsp[(2) - (4)].rval).left.vp, (yyvsp[(4) - (4)].enode)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 291 "gram.y"
    { (yyvsp[(2) - (3)].rval).left.vp->v = (double) 0.0;
				  if ((yyvsp[(2) - (3)].rval).left.vp->expr &&
					!((yyvsp[(2) - (3)].rval).left.vp->flags & is_strexpr)) {
				    efree((yyvsp[(2) - (3)].rval).left.vp->expr);
				    (yyvsp[(2) - (3)].rval).left.vp->expr = NULL;
				  }
				  (yyvsp[(2) - (3)].rval).left.vp->cellerror = CELLOK;
				  (yyvsp[(2) - (3)].rval).left.vp->flags &= ~is_valid;
				  (yyvsp[(2) - (3)].rval).left.vp->flags |= is_changed;
				  changed++;
				  FullUpdate++;
				  modflg++; }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 304 "gram.y"
    { slet((yyvsp[(2) - (4)].rval).left.vp, (yyvsp[(4) - (4)].enode), 0); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 306 "gram.y"
    { slet((yyvsp[(2) - (4)].rval).left.vp, (yyvsp[(4) - (4)].enode), -1); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 308 "gram.y"
    { slet((yyvsp[(2) - (4)].rval).left.vp, (yyvsp[(4) - (4)].enode), 1); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 310 "gram.y"
    { ljustify((yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
				    (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 313 "gram.y"
    { if (showrange)
				    ljustify(showsr, showsc, currow, curcol);
				}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 317 "gram.y"
    { rjustify((yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
				    (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 320 "gram.y"
    { if (showrange)
				    rjustify(showsr, showsc, currow, curcol);
				}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 324 "gram.y"
    { center((yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
				    (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 327 "gram.y"
    { if (showrange)
				    center(showsr, showsc, currow, curcol);
				}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 330 "gram.y"
    { if (showrange) {
				    (yyvsp[(2) - (2)].ent).vp->nrow=currow<showsr?currow:showsr;
				    (yyvsp[(2) - (2)].ent).vp->ncol=curcol<showsc?curcol:showsc;
				    (yyvsp[(2) - (2)].ent).vp->nlastrow=currow<showsr?showsr:currow;
				    (yyvsp[(2) - (2)].ent).vp->nlastcol=curcol<showsc?showsc:curcol;
				  } else {
				    (yyvsp[(2) - (2)].ent).vp->nrow=currow;
				    (yyvsp[(2) - (2)].ent).vp->ncol=curcol;
				    (yyvsp[(2) - (2)].ent).vp->nlastrow=currow;
				    (yyvsp[(2) - (2)].ent).vp->nlastcol=curcol;
				  }
				  (yyvsp[(2) - (2)].ent).vp->flags |= is_changed;
				  FullUpdate++;
				  modflg++;
				}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 346 "gram.y"
    { (yyvsp[(2) - (3)].ent).vp->nrow = (yyvsp[(3) - (3)].rval).left.vp->row;
				  (yyvsp[(2) - (3)].ent).vp->ncol = (yyvsp[(3) - (3)].rval).left.vp->col;
				  (yyvsp[(2) - (3)].ent).vp->nlastrow = (yyvsp[(3) - (3)].rval).right.vp->row;
				  (yyvsp[(2) - (3)].ent).vp->nlastcol = (yyvsp[(3) - (3)].rval).right.vp->col;
				  (yyvsp[(2) - (3)].ent).vp->flags |= is_changed;
				  FullUpdate++;
				  modflg++;
				}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 354 "gram.y"
    { (yyvsp[(2) - (2)].ent).vp->nrow = (yyvsp[(2) - (2)].ent).vp->ncol = -1; }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 355 "gram.y"
    { struct ent *p;
				  p = lookat(currow, curcol);
				  p->nrow = p->ncol = -1;
				  p->flags |= is_changed;
				  modflg++;
				}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 362 "gram.y"
    { doformat((yyvsp[(2) - (7)].ival),(yyvsp[(4) - (7)].ival),(yyvsp[(5) - (7)].ival),(yyvsp[(6) - (7)].ival),(yyvsp[(7) - (7)].ival)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 364 "gram.y"
    { doformat((yyvsp[(2) - (5)].ival),(yyvsp[(2) - (5)].ival),(yyvsp[(3) - (5)].ival),(yyvsp[(4) - (5)].ival),(yyvsp[(5) - (5)].ival)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 366 "gram.y"
    { doformat((yyvsp[(2) - (6)].ival),(yyvsp[(4) - (6)].ival),(yyvsp[(5) - (6)].ival),(yyvsp[(6) - (6)].ival), REFMTFIX); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 368 "gram.y"
    { doformat((yyvsp[(2) - (4)].ival),(yyvsp[(2) - (4)].ival),(yyvsp[(3) - (4)].ival),(yyvsp[(4) - (4)].ival), REFMTFIX); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 370 "gram.y"
    { if ((yyvsp[(2) - (4)].ival) >= 0 && (yyvsp[(2) - (4)].ival) < 10) {
				    if (colformat[(yyvsp[(2) - (4)].ival)])
					scxfree(colformat[(yyvsp[(2) - (4)].ival)]);
				    if (strlen((yyvsp[(4) - (4)].sval)))
					colformat[(yyvsp[(2) - (4)].ival)] = (yyvsp[(4) - (4)].sval);
				    else
					colformat[(yyvsp[(2) - (4)].ival)] = NULL;
				    FullUpdate++;
				    modflg++;
				  } else
				    error("Invalid format number");
				}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 382 "gram.y"
    {  /* This tmp hack is because readfile
				    * recurses back through yyparse. */
				    char *tmp;
				    tmp = (yyvsp[(2) - (2)].sval);
				    readfile(tmp, 1);
				    scxfree(tmp);
				}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 389 "gram.y"
    {
				    char *tmp;
				    tmp = (yyvsp[(2) - (2)].sval);
				    readfile(tmp, 0);
				    scxfree(tmp);
				}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 395 "gram.y"
    { if (mdir) scxfree(mdir);
				  if (strlen((yyvsp[(2) - (2)].sval)))
				    mdir = (yyvsp[(2) - (2)].sval);
				  modflg++; }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 400 "gram.y"
    { if (autorun) scxfree(autorun);
				  if (strlen((yyvsp[(2) - (2)].sval)))
				    autorun = (yyvsp[(2) - (2)].sval);
				  modflg++; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 405 "gram.y"
    { if ((yyvsp[(2) - (4)].ival) > 0 && (yyvsp[(2) - (4)].ival) <= FKEYS) {
				    if (fkey[(yyvsp[(2) - (4)].ival) - 1]) {
					scxfree(fkey[(yyvsp[(2) - (4)].ival) - 1]);
					fkey[(yyvsp[(2) - (4)].ival) - 1] = NULL;
				    }
				    if (strlen((yyvsp[(4) - (4)].sval)))
					fkey[(yyvsp[(2) - (4)].ival) - 1] = (yyvsp[(4) - (4)].sval);
				    modflg++;
				  } else
				    error("Invalid function key");
				}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 416 "gram.y"
    { if (scext) scxfree(scext); scext = (yyvsp[(2) - (2)].sval); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 417 "gram.y"
    { if (ascext) scxfree(ascext); ascext = (yyvsp[(2) - (2)].sval); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 419 "gram.y"
    { if (tbl0ext) scxfree(tbl0ext); tbl0ext = (yyvsp[(2) - (2)].sval); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 420 "gram.y"
    { if (tblext) scxfree(tblext); tblext = (yyvsp[(2) - (2)].sval); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 421 "gram.y"
    { if (latexext) scxfree(latexext);
					    latexext = (yyvsp[(2) - (2)].sval); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 423 "gram.y"
    { if (slatexext) scxfree(slatexext);
					    slatexext = (yyvsp[(2) - (2)].sval); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 425 "gram.y"
    { if (texext) scxfree(texext); texext = (yyvsp[(2) - (2)].sval); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 427 "gram.y"
    { (void) writefile((yyvsp[(2) - (3)].sval), ((yyvsp[(3) - (3)].rval).left.vp)->row, 
					((yyvsp[(3) - (3)].rval).left.vp)->col, ((yyvsp[(3) - (3)].rval).right.vp)->row,
					((yyvsp[(3) - (3)].rval).right.vp)->col);
					    scxfree((yyvsp[(2) - (3)].sval)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 431 "gram.y"
    { (void) writefile((yyvsp[(2) - (2)].sval), 0, 0, maxrow, maxcol);
					    scxfree((yyvsp[(2) - (2)].sval)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 433 "gram.y"
    { (void) write_cells(stdout,
					  (yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
					  (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col,
					  (yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 438 "gram.y"
    { (void) write_cells(stdout,
					  (yyvsp[(2) - (4)].rval).left.vp->row, (yyvsp[(2) - (4)].rval).left.vp->col,
					  (yyvsp[(2) - (4)].rval).right.vp->row, (yyvsp[(2) - (4)].rval).right.vp->col,
					  (yyvsp[(4) - (4)].rval).left.vp->row, (yyvsp[(4) - (4)].rval).left.vp->col); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 443 "gram.y"
    { (void) write_cells(stdout, 0, 0,
					  maxrow, maxcol,
					  (yyvsp[(4) - (4)].rval).left.vp->row, (yyvsp[(4) - (4)].rval).left.vp->col); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 446 "gram.y"
    { (void) write_cells(stdout,
					  showsr, showsc, currow, curcol,
					  (yyvsp[(3) - (3)].rval).left.vp->row, (yyvsp[(3) - (3)].rval).left.vp->col); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 449 "gram.y"
    { (void) write_cells(stdout, 0, 0,
					    maxrow, maxcol, 0, 0); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 451 "gram.y"
    { (void) write_cells(stdout, 0, 0,
					    maxrow, maxcol, 0, 0); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 453 "gram.y"
    { (void) printfile((yyvsp[(2) - (3)].sval), ((yyvsp[(3) - (3)].rval).left.vp)->row, 
					((yyvsp[(3) - (3)].rval).left.vp)->col, ((yyvsp[(3) - (3)].rval).right.vp)->row,
					((yyvsp[(3) - (3)].rval).right.vp)->col);
					    scxfree((yyvsp[(2) - (3)].sval)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 457 "gram.y"
    { (void) printfile((yyvsp[(2) - (2)].sval), 0, 0, maxrow, maxcol);
					    scxfree((yyvsp[(2) - (2)].sval)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 459 "gram.y"
    { (void) printfile(NULL,
					  (yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
					  (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 462 "gram.y"
    { (void) printfile(NULL, 0, 0,
					    maxrow, maxcol); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 464 "gram.y"
    { (void) printfile(NULL, 0, 0,
					    maxrow, maxcol); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 466 "gram.y"
    { (void) tblprintfile((yyvsp[(2) - (3)].sval), ((yyvsp[(3) - (3)].rval).left.vp)->row, 
					((yyvsp[(3) - (3)].rval).left.vp)->col, ((yyvsp[(3) - (3)].rval).right.vp)->row,
					((yyvsp[(3) - (3)].rval).right.vp)->col);
					    scxfree((yyvsp[(2) - (3)].sval)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 470 "gram.y"
    { (void)tblprintfile((yyvsp[(2) - (2)].sval), 0, 0, maxrow, maxcol);
					    scxfree((yyvsp[(2) - (2)].sval)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 472 "gram.y"
    { showcol((yyvsp[(2) - (4)].ival), (yyvsp[(4) - (4)].ival)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 474 "gram.y"
    { showrow((yyvsp[(2) - (4)].ival), (yyvsp[(4) - (4)].ival)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 475 "gram.y"
    { int arg;
	    				  if (showrange == SHOWROWS) {
					    if (showsr < currow) {
						int r = currow;
						currow = showsr;
						showsr = r;
					    }
					    arg = showsr - currow + 1;
					    hiderow(arg);
					  } else if (showrange == SHOWCOLS) {
					    if (showsc < curcol) {
						int c = curcol;
						curcol = showsc;
						showsc = c;
					    }
					    arg = showsc - curcol + 1;
					    hidecol(arg);
					  } else
					    arg = 1;
					}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 495 "gram.y"
    { hide_col((yyvsp[(2) - (2)].ival)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 496 "gram.y"
    { int c = curcol, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    curcol = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      curcol = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  hidecol(arg);
					  curcol = c < curcol ? c :
					      c < curcol + arg ? curcol :
					      c - arg;
					}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 509 "gram.y"
    { hide_row((yyvsp[(2) - (2)].ival)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 511 "gram.y"
    { int r = currow, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    currow = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      currow = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  hiderow(arg);
					  currow = r < currow ? r :
					      r < currow + arg ? currow :
					      r - arg;
					}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 524 "gram.y"
    { if (showrange) {
					    showrange = 0;
					    copy(lookat(showsr, showsc),
					    lookat(currow, curcol),
					    NULL, NULL);
					  } else
					    copy(lookat(currow, curcol),
					    lookat(currow, curcol),
					    NULL, NULL); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 533 "gram.y"
    { copy((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp,
					    NULL, NULL); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 536 "gram.y"
    { copy((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
					    (yyvsp[(3) - (3)].rval).left.vp, (yyvsp[(3) - (3)].rval).right.vp); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 538 "gram.y"
    { mover((yyvsp[(2) - (2)].ent).vp, lookat(showsr, showsc),
					    lookat(currow, curcol)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 540 "gram.y"
    { mover((yyvsp[(2) - (3)].ent).vp, (yyvsp[(3) - (3)].rval).left.vp,
					    (yyvsp[(3) - (3)].rval).right.vp); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 542 "gram.y"
    { eraser(lookat(showsr, showsc),
					    lookat(currow, curcol)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 544 "gram.y"
    { eraser((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 545 "gram.y"
    { yankr(lookat(showsr, showsc),
					    lookat(currow, curcol)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 547 "gram.y"
    { yankr((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 548 "gram.y"
    { valueize_area(showsr, showsc, currow, curcol);
					    modflg++; }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 550 "gram.y"
    { valueize_area(((yyvsp[(2) - (2)].rval).left.vp)->row,
					    ((yyvsp[(2) - (2)].rval).left.vp)->col,
					    ((yyvsp[(2) - (2)].rval).right.vp)->row,
					    ((yyvsp[(2) - (2)].rval).right.vp)->col); modflg++; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 555 "gram.y"
    { fill((yyvsp[(2) - (4)].rval).left.vp, (yyvsp[(2) - (4)].rval).right.vp, (yyvsp[(3) - (4)].fval), (yyvsp[(4) - (4)].fval)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 556 "gram.y"
    { sortrange(lookat(showsr, showsc),
				  lookat(currow, curcol), NULL); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 558 "gram.y"
    { sortrange((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp, NULL); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 560 "gram.y"
    { sortrange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp, (yyvsp[(3) - (3)].sval)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 562 "gram.y"
    { format_cell((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp, (yyvsp[(3) - (3)].sval)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 563 "gram.y"
    { lock_cells(lookat(showsr, showsc),
				    lookat(currow, curcol)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 566 "gram.y"
    { lock_cells((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 567 "gram.y"
    { unlock_cells(lookat(showsr, showsc),
					    lookat(currow, curcol)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 570 "gram.y"
    { unlock_cells((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 572 "gram.y"
    { moveto((yyvsp[(2) - (3)].rval).left.vp->row, (yyvsp[(2) - (3)].rval).left.vp->col,
					    (yyvsp[(2) - (3)].rval).right.vp->row, (yyvsp[(2) - (3)].rval).right.vp->col,
					    (yyvsp[(3) - (3)].rval).left.vp->row, (yyvsp[(3) - (3)].rval).left.vp->col); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 575 "gram.y"
    { moveto((yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
					    (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col,
					    -1, -1); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 578 "gram.y"
    { num_search((yyvsp[(2) - (3)].fval),
					  (yyvsp[(3) - (3)].rval).left.vp->row, (yyvsp[(3) - (3)].rval).left.vp->col,
					  (yyvsp[(3) - (3)].rval).right.vp->row,
					  (yyvsp[(3) - (3)].rval).right.vp->col, 0); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 582 "gram.y"
    { num_search((yyvsp[(2) - (2)].fval), 0, 0,
					  maxrow, maxcol, 0); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 585 "gram.y"
    { str_search((yyvsp[(2) - (3)].sval),
					  (yyvsp[(3) - (3)].rval).left.vp->row, (yyvsp[(3) - (3)].rval).left.vp->col,
					  (yyvsp[(3) - (3)].rval).right.vp->row,
					  (yyvsp[(3) - (3)].rval).right.vp->col, 0); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 589 "gram.y"
    { str_search((yyvsp[(3) - (4)].sval),
					  (yyvsp[(4) - (4)].rval).left.vp->row, (yyvsp[(4) - (4)].rval).left.vp->col,
					  (yyvsp[(4) - (4)].rval).right.vp->row,
					  (yyvsp[(4) - (4)].rval).right.vp->col, 1); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 593 "gram.y"
    { str_search((yyvsp[(3) - (4)].sval),
					  (yyvsp[(4) - (4)].rval).left.vp->row, (yyvsp[(4) - (4)].rval).left.vp->col,
					  (yyvsp[(4) - (4)].rval).right.vp->row,
					  (yyvsp[(4) - (4)].rval).right.vp->col, 2); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 597 "gram.y"
    { str_search((yyvsp[(2) - (2)].sval), 0, 0,
					  maxrow, maxcol, 0); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 599 "gram.y"
    { str_search((yyvsp[(3) - (3)].sval), 0, 0,
					  maxrow, maxcol, 1); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 601 "gram.y"
    { str_search((yyvsp[(3) - (3)].sval), 0, 0,
					  maxrow, maxcol, 2); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 603 "gram.y"
    { go_last(); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 604 "gram.y"
    { /* don't repeat last goto on
						"unintelligible word" */ ; }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 606 "gram.y"
    { struct ent_ptr arg1, arg2;
					  arg1.vp = lookat(showsr, showsc);
					  arg1.vf = 0;
					  arg2.vp = lookat(currow, curcol);
					  arg2.vf = 0;
                                          if (arg1.vp == arg2.vp || !showrange)
                                             add_range((yyvsp[(2) - (2)].sval), arg2, arg2, 0);
                                          else
                                             add_range((yyvsp[(2) - (2)].sval), arg1, arg2, 1); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 616 "gram.y"
    { add_range((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].rval).left, (yyvsp[(3) - (3)].rval).right, 1); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 617 "gram.y"
    { add_range((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].ent), (yyvsp[(3) - (3)].ent), 0); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 618 "gram.y"
    { del_range((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 619 "gram.y"
    { add_abbr((yyvsp[(2) - (2)].sval)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 620 "gram.y"
    { add_abbr(NULL); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 621 "gram.y"
    { del_abbr((yyvsp[(2) - (2)].sval)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 622 "gram.y"
    { add_frange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						(yyvsp[(3) - (3)].rval).left.vp, (yyvsp[(3) - (3)].rval).right.vp,
						0, 0, 0, 0); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 625 "gram.y"
    { if (showrange) {
					    showrange = 0;
					    add_frange((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp,
						lookat(showsr, showsc),
						lookat(currow, curcol),
						0, 0, 0, 0);
					  } else {
					    struct frange *cfr;
					    cfr = find_frange(currow, curcol);
					    if (cfr) {
						add_frange(cfr->or_left,
						    cfr->or_right,
						    (yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp,
						    0, 0, 0, 0);
					    }
					  }
					}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 642 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (showrange && cfr) {
					    showrange = 0;
					    add_frange(cfr->or_left,
						cfr->or_right,
						lookat(showsr, showsc),
						lookat(currow, curcol),
						0, 0, 0, 0);
					  } else {
					    error("Need both outer and inner"
						    " ranges to create frame");
					  }
					}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 658 "gram.y"
    { add_frange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						NULL, NULL, (yyvsp[(3) - (3)].ival), -1, -1, -1); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 660 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (cfr)
					    add_frange(cfr->or_left,
						cfr->or_right,
						NULL, NULL, (yyvsp[(2) - (2)].ival), -1, -1, -1); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 668 "gram.y"
    { add_frange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						NULL, NULL, -1, (yyvsp[(3) - (3)].ival), -1, -1); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 670 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (cfr)
					    add_frange(cfr->or_left,
						cfr->or_right,
						NULL, NULL, -1, (yyvsp[(2) - (2)].ival), -1, -1); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 678 "gram.y"
    { add_frange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						NULL, NULL, -1, -1, (yyvsp[(3) - (3)].ival), -1); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 680 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (cfr)
					    add_frange(cfr->or_left,
						cfr->or_right,
						NULL, NULL, -1, -1, (yyvsp[(2) - (2)].ival), -1); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 688 "gram.y"
    { add_frange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						NULL, NULL, -1, -1, -1, (yyvsp[(3) - (3)].ival)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 690 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (cfr)
					    add_frange(cfr->or_left,
						cfr->or_right,
						NULL, NULL, -1, -1, -1, (yyvsp[(2) - (2)].ival)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 697 "gram.y"
    { add_frange((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp,
						NULL, NULL, 0, 0, 0, 0); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 699 "gram.y"
    { struct frange *cfr;
					  /* cfr points to current frange */
					  cfr = find_frange(currow, curcol);
					  if (cfr)
					    add_frange(cfr->or_left,
						cfr->or_right,
						NULL, NULL, 0, 0, 0, 0); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 706 "gram.y"
    { if ((yyvsp[(2) - (3)].ival) > 0 && (yyvsp[(2) - (3)].ival) < 9)
					    initcolor((yyvsp[(2) - (3)].ival));
					  else
					    error("Invalid color number"); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 710 "gram.y"
    { change_color((yyvsp[(2) - (4)].ival), (yyvsp[(4) - (4)].enode)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 711 "gram.y"
    { add_crange((yyvsp[(2) - (3)].rval).left.vp, (yyvsp[(2) - (3)].rval).right.vp,
						(yyvsp[(3) - (3)].ival)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 713 "gram.y"
    { modflg++; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 714 "gram.y"
    { backrow( 1); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 715 "gram.y"
    { backrow((yyvsp[(2) - (2)].ival)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 716 "gram.y"
    { forwrow( 1); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 717 "gram.y"
    { forwrow((yyvsp[(2) - (2)].ival)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 718 "gram.y"
    { backcol( 1); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 719 "gram.y"
    { backcol((yyvsp[(2) - (2)].ival)); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 720 "gram.y"
    { forwcol( 1); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 721 "gram.y"
    { forwcol((yyvsp[(2) - (2)].ival)); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 722 "gram.y"
    { doend(-1, 0); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 723 "gram.y"
    { doend( 1, 0); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 724 "gram.y"
    { doend( 0,-1); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 725 "gram.y"
    { doend( 0, 1); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 726 "gram.y"
    { int c;
					  if ((c = *(yyvsp[(2) - (2)].sval)) >= '0' && c <= '9') {
					    qbuf = c - '0' + (DELBUFSIZE - 10);
					  } else if (c >= 'a' && c <= 'z') {
					    qbuf = c - 'a' + (DELBUFSIZE - 36);
					  } else if (c == '"') {
					    qbuf = 0;
					  } else
					    error("Invalid buffer");
					  scxfree((yyvsp[(2) - (2)].sval));
					}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 737 "gram.y"
    { insertrow( 1, 0); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 738 "gram.y"
    { insertrow((yyvsp[(3) - (3)].ival), 0); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 739 "gram.y"
    { insertrow( 1, 1); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 740 "gram.y"
    { insertrow((yyvsp[(3) - (3)].ival), 1); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 741 "gram.y"
    { insertcol( 1, 0); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 742 "gram.y"
    { insertcol((yyvsp[(3) - (3)].ival), 0); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 743 "gram.y"
    { insertcol( 1, 1); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 744 "gram.y"
    { insertcol((yyvsp[(3) - (3)].ival), 1); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 745 "gram.y"
    { int arg;
	    				  if (showrange == SHOWROWS) {
					    if (showsr < currow) {
						int r = currow;
						currow = showsr;
						showsr = r;
					    }
					    arg = showsr - currow + 1;
					  } else
					    arg = 1;
					  deleterow(arg);
					}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 757 "gram.y"
    { deleterow((yyvsp[(3) - (3)].ival)); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 758 "gram.y"
    { int r = currow;
					  currow = (yyvsp[(2) - (2)].ival);
					  deleterow(1);
					  currow = r <= currow ? r : r - 1;
					}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 764 "gram.y"
    { int r = currow, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    currow = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      currow = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  deleterow(arg);
					  currow = r < currow ? r :
					      r < currow + arg ? currow :
					      r - arg;
					}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 777 "gram.y"
    { int arg;
	    				  if (showrange == SHOWCOLS) {
					    if (showsc < curcol) {
						int c = curcol;
						curcol = showsc;
						showsc = c;
					    }
					    arg = showsc - curcol + 1;
					  } else
					    arg = 1;
					  closecol(arg);
					}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 789 "gram.y"
    { int r = curcol;
					  curcol = (yyvsp[(2) - (2)].ival);
					  closecol(1);
					  curcol = r <= curcol ? r : r - 1;
					}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 794 "gram.y"
    { closecol((yyvsp[(3) - (3)].ival)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 795 "gram.y"
    { int c = curcol, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    curcol = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      curcol = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  closecol(arg);
					  curcol = c < curcol ? c :
					      c < curcol + arg ? curcol :
					      c - arg;
					}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 808 "gram.y"
    { int r = currow, arg;
	    				  if (showrange == SHOWROWS) {
					    if (showsr < currow) {
						currow = showsr;
						showsr = r;
					    }
					    arg = showsr - currow + 1;
					  } else
					    arg = 1;
					  yankrow(arg);
					  currow = r;
					}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 820 "gram.y"
    { yankrow((yyvsp[(3) - (3)].ival)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 821 "gram.y"
    { int r = currow;
					  currow = (yyvsp[(2) - (2)].ival);
					  yankrow(1);
					  currow = r;
					}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 827 "gram.y"
    { int r = currow, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    currow = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      currow = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  yankrow(arg);
					  currow = r;
					}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 838 "gram.y"
    { int c = curcol, arg;
	    				  if (showrange == SHOWCOLS) {
					    if (showsc < curcol) {
						curcol = showsc;
						showsc = c;
					    }
					    arg = showsc - curcol + 1;
					  } else
					    arg = 1;
					  yankcol(arg);
					  curcol = c;
					}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 850 "gram.y"
    { int c = curcol;
					  curcol = (yyvsp[(2) - (2)].ival);
					  yankcol(1);
					  curcol = c;
					}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 855 "gram.y"
    { yankcol((yyvsp[(3) - (3)].ival)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 856 "gram.y"
    { int c = curcol, arg;
					  if ((yyvsp[(2) - (4)].ival) < (yyvsp[(4) - (4)].ival)) {
					    curcol = (yyvsp[(2) - (4)].ival);
					    arg = (yyvsp[(4) - (4)].ival) - (yyvsp[(2) - (4)].ival) + 1;
					  } else {
					      curcol = (yyvsp[(4) - (4)].ival);
					      arg = (yyvsp[(2) - (4)].ival) - (yyvsp[(4) - (4)].ival) + 1;
					  }
					  yankcol(arg);
					  curcol = c;
					}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 867 "gram.y"
    { pullcells('p'); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 868 "gram.y"
    { pullcells('m'); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 869 "gram.y"
    { pullcells('r'); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 870 "gram.y"
    { pullcells('c'); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 871 "gram.y"
    { pullcells('x'); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 872 "gram.y"
    { pullcells('t'); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 873 "gram.y"
    { pullcells('f'); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 874 "gram.y"
    { copy(NULL, NULL, NULL, NULL); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 875 "gram.y"
    { copy((yyvsp[(2) - (2)].rval).left.vp, (yyvsp[(2) - (2)].rval).right.vp,
					     NULL, (struct ent *)1); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 877 "gram.y"
    { sprintf(line, "%s%d ",
					     coltoa(curcol), currow);
					  sprintf(line + strlen(line), "%s%d\n",
					     coltoa(stcol), strow);
					  write(macrofd, line, strlen(line));
					  line[0] = '\0'; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 883 "gram.y"
    { sprintf(line, "%s%d ",
					     coltoa(curcol), currow);
					  sprintf(line + strlen(line), "%s%d\n",
					     coltoa(stcol), strow);
					  write((yyvsp[(3) - (3)].ival), line, strlen(line));
					  line[0] = '\0'; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 889 "gram.y"
    { getnum((yyvsp[(2) - (2)].rval).left.vp->row,
						(yyvsp[(2) - (2)].rval).left.vp->col,
						(yyvsp[(2) - (2)].rval).right.vp->row,
						(yyvsp[(2) - (2)].rval).right.vp->col, macrofd); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 894 "gram.y"
    { getnum((yyvsp[(2) - (4)].rval).left.vp->row,
						(yyvsp[(2) - (4)].rval).left.vp->col,
						(yyvsp[(2) - (4)].rval).right.vp->row,
						(yyvsp[(2) - (4)].rval).right.vp->col, (yyvsp[(4) - (4)].ival)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 898 "gram.y"
    { getnum(currow, curcol,
						currow, curcol, macrofd); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 900 "gram.y"
    { getnum(currow, curcol,
						currow, curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 902 "gram.y"
    { fgetnum((yyvsp[(2) - (2)].rval).left.vp->row,
						(yyvsp[(2) - (2)].rval).left.vp->col,
						(yyvsp[(2) - (2)].rval).right.vp->row,
						(yyvsp[(2) - (2)].rval).right.vp->col, macrofd); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 907 "gram.y"
    { fgetnum((yyvsp[(2) - (4)].rval).left.vp->row,
						(yyvsp[(2) - (4)].rval).left.vp->col,
						(yyvsp[(2) - (4)].rval).right.vp->row,
						(yyvsp[(2) - (4)].rval).right.vp->col, (yyvsp[(4) - (4)].ival)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 911 "gram.y"
    { fgetnum(currow, curcol,
						currow, curcol, macrofd); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 913 "gram.y"
    { fgetnum(currow, curcol,
						currow, curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 916 "gram.y"
    { getstring((yyvsp[(2) - (2)].rval).left.vp->row,
						(yyvsp[(2) - (2)].rval).left.vp->col,
						(yyvsp[(2) - (2)].rval).right.vp->row,
						(yyvsp[(2) - (2)].rval).right.vp->col, macrofd); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 921 "gram.y"
    { getstring((yyvsp[(2) - (4)].rval).left.vp->row,
						(yyvsp[(2) - (4)].rval).left.vp->col,
						(yyvsp[(2) - (4)].rval).right.vp->row,
						(yyvsp[(2) - (4)].rval).right.vp->col, (yyvsp[(4) - (4)].ival)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 925 "gram.y"
    { getstring(currow, curcol,
						currow, curcol, macrofd); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 927 "gram.y"
    { getstring(currow, curcol,
						currow, curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 929 "gram.y"
    { getexp((yyvsp[(2) - (2)].rval).left.vp->row,
						(yyvsp[(2) - (2)].rval).left.vp->col,
						(yyvsp[(2) - (2)].rval).right.vp->row,
						(yyvsp[(2) - (2)].rval).right.vp->col, macrofd); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 934 "gram.y"
    { getexp((yyvsp[(2) - (4)].rval).left.vp->row,
						(yyvsp[(2) - (4)].rval).left.vp->col,
						(yyvsp[(2) - (4)].rval).right.vp->row,
						(yyvsp[(2) - (4)].rval).right.vp->col, (yyvsp[(4) - (4)].ival)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 938 "gram.y"
    { getexp(currow, curcol,
						currow, curcol, macrofd); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 940 "gram.y"
    { getexp(currow, curcol,
						currow, curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 942 "gram.y"
    { getformat((yyvsp[(2) - (2)].ival), macrofd); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 944 "gram.y"
    { getformat((yyvsp[(2) - (4)].ival), (yyvsp[(4) - (4)].ival)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 945 "gram.y"
    { getformat(curcol, macrofd); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 946 "gram.y"
    { getformat(curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 947 "gram.y"
    { getfmt((yyvsp[(2) - (2)].rval).left.vp->row,
						(yyvsp[(2) - (2)].rval).left.vp->col,
						(yyvsp[(2) - (2)].rval).right.vp->row,
						(yyvsp[(2) - (2)].rval).right.vp->col, macrofd); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 952 "gram.y"
    { getfmt((yyvsp[(2) - (4)].rval).left.vp->row,
						(yyvsp[(2) - (4)].rval).left.vp->col,
						(yyvsp[(2) - (4)].rval).right.vp->row,
						(yyvsp[(2) - (4)].rval).right.vp->col, (yyvsp[(4) - (4)].ival)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 956 "gram.y"
    { getfmt(currow, curcol,
						currow, curcol, macrofd); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 958 "gram.y"
    { getfmt(currow, curcol,
						currow, curcol, (yyvsp[(3) - (3)].ival)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 960 "gram.y"
    { getframe(macrofd); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 961 "gram.y"
    { getframe((yyvsp[(3) - (3)].ival)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 962 "gram.y"
    { getrange((yyvsp[(2) - (2)].sval), macrofd); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 964 "gram.y"
    { getrange((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 965 "gram.y"
    { doeval((yyvsp[(2) - (2)].enode), NULL, currow, curcol,
						macrofd); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 967 "gram.y"
    { doeval((yyvsp[(2) - (3)].enode), (yyvsp[(3) - (3)].sval), currow, curcol,
						macrofd); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 970 "gram.y"
    { doeval((yyvsp[(2) - (5)].enode), (yyvsp[(3) - (5)].sval), currow, curcol,
						(yyvsp[(3) - (5)].sval)); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 972 "gram.y"
    { doseval((yyvsp[(2) - (2)].enode), currow, curcol, macrofd); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 973 "gram.y"
    { doquery((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval), macrofd); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 975 "gram.y"
    { doquery((yyvsp[(2) - (5)].sval), (yyvsp[(3) - (5)].sval), (yyvsp[(5) - (5)].ival)); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 976 "gram.y"
    { doquery((yyvsp[(2) - (2)].sval), NULL, macrofd); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 978 "gram.y"
    { doquery((yyvsp[(2) - (4)].sval), NULL, (yyvsp[(4) - (4)].ival)); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 979 "gram.y"
    { doquery(NULL, NULL, macrofd); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 980 "gram.y"
    { doquery(NULL, NULL, (yyvsp[(3) - (3)].ival)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 981 "gram.y"
    { dogetkey(); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 982 "gram.y"
    { error((yyvsp[(2) - (2)].sval)); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 983 "gram.y"
    { dostat(macrofd); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 984 "gram.y"
    { dostat((yyvsp[(3) - (3)].ival)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 985 "gram.y"
    { EvalAll();
					  update(1);
					  changed = 0;
					}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 989 "gram.y"
    { if (usecurses) {
					    clearok(stdscr, TRUE);
					    linelim = -1;
					    update(1);
					    refresh();
					    changed = 0;
					  }
					}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 997 "gram.y"
    { stopdisp(); exit(0); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 998 "gram.y"
    { deraw(1);
					  system((yyvsp[(2) - (2)].sval));
					  if (*((yyvsp[(2) - (2)].sval) + strlen((yyvsp[(2) - (2)].sval)) - 1) != '&') {
					    printf("Press any key to continue ");
					    fflush(stdout);
					    cbreak();
					    nmgetch();
					  }
					  goraw();
					  scxfree((yyvsp[(2) - (2)].sval)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1009 "gram.y"
    { addplugin((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval), 'r'); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 1011 "gram.y"
    { addplugin((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval), 'w'); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1012 "gram.y"
    { *line = '|';
					  sprintf(line + 1, (yyvsp[(1) - (1)].sval));
					  readfile(line, 0);
					  scxfree((yyvsp[(1) - (1)].sval)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1019 "gram.y"
    { (yyval.enode) = new_var(O_VAR, (yyvsp[(1) - (1)].ent)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 1020 "gram.y"
    { (yyval.enode) = new('f', (yyvsp[(3) - (3)].enode), ENULL); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1022 "gram.y"
    { (yyval.enode) = new('F', (yyvsp[(5) - (5)].enode), ENULL); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1024 "gram.y"
    { (yyval.enode) = new(SUM,
					new_range(REDUCE | SUM, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1027 "gram.y"
    { (yyval.enode) = new(SUM,
					new_range(REDUCE | SUM, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1030 "gram.y"
    { (yyval.enode) = new(PROD,
					new_range(REDUCE | PROD, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1033 "gram.y"
    { (yyval.enode) = new(PROD,
					new_range(REDUCE | PROD, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1036 "gram.y"
    { (yyval.enode) = new(AVG,
					new_range(REDUCE | AVG, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1039 "gram.y"
    { (yyval.enode) = new(AVG,
					new_range(REDUCE | AVG, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 1042 "gram.y"
    { (yyval.enode) = new(STDDEV,
					new_range(REDUCE | STDDEV, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1045 "gram.y"
    { (yyval.enode) = new(STDDEV,
					new_range(REDUCE | STDDEV, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1048 "gram.y"
    { (yyval.enode) = new(COUNT,
					new_range(REDUCE | COUNT, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1051 "gram.y"
    { (yyval.enode) = new(COUNT,
					new_range(REDUCE | COUNT, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1054 "gram.y"
    { (yyval.enode) = new(MAX,
					new_range(REDUCE | MAX, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1057 "gram.y"
    { (yyval.enode) = new(MAX,
					new_range(REDUCE | MAX, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1060 "gram.y"
    { (yyval.enode) = new(LMAX, (yyvsp[(6) - (7)].enode), (yyvsp[(4) - (7)].enode)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1062 "gram.y"
    { (yyval.enode) = new(MIN,
					new_range(REDUCE | MIN, (yyvsp[(4) - (5)].rval)), ENULL); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1065 "gram.y"
    { (yyval.enode) = new(MIN,
					new_range(REDUCE | MIN, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1068 "gram.y"
    { (yyval.enode) = new(LMIN, (yyvsp[(6) - (7)].enode), (yyvsp[(4) - (7)].enode)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1070 "gram.y"
    { (yyval.enode) = new_range(REDUCE | 'R', (yyvsp[(4) - (5)].rval)); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1072 "gram.y"
    { (yyval.enode) = new_range(REDUCE | 'C', (yyvsp[(4) - (5)].rval)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1073 "gram.y"
    { (yyval.enode) = new(ABS, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1074 "gram.y"
    { (yyval.enode) = new(ACOS, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1075 "gram.y"
    { (yyval.enode) = new(ASIN, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1076 "gram.y"
    { (yyval.enode) = new(ATAN, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1077 "gram.y"
    { (yyval.enode) = new(ATAN2, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1078 "gram.y"
    { (yyval.enode) = new(CEIL, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1079 "gram.y"
    { (yyval.enode) = new(COS, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1080 "gram.y"
    { (yyval.enode) = new(EXP, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1081 "gram.y"
    { (yyval.enode) = new(FABS, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1082 "gram.y"
    { (yyval.enode) = new(FLOOR, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1083 "gram.y"
    { (yyval.enode) = new(HYPOT, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1084 "gram.y"
    { (yyval.enode) = new(LOG, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1085 "gram.y"
    { (yyval.enode) = new(LOG10, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1086 "gram.y"
    { (yyval.enode) = new(POW, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1087 "gram.y"
    { (yyval.enode) = new(SIN, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1088 "gram.y"
    { (yyval.enode) = new(SQRT, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1089 "gram.y"
    { (yyval.enode) = new(TAN, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1090 "gram.y"
    { (yyval.enode) = new(DTR, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1091 "gram.y"
    { (yyval.enode) = new(RTD, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1092 "gram.y"
    { (yyval.enode) = new(RND, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1093 "gram.y"
    { (yyval.enode) = new(ROUND, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1094 "gram.y"
    { (yyval.enode) = new(IF,  (yyvsp[(4) - (9)].enode),new(',',(yyvsp[(6) - (9)].enode),(yyvsp[(8) - (9)].enode))); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1096 "gram.y"
    { (yyval.enode) = new(PV,  (yyvsp[(4) - (9)].enode),new(':',(yyvsp[(6) - (9)].enode),(yyvsp[(8) - (9)].enode))); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1097 "gram.y"
    { (yyval.enode) = new(FV,  (yyvsp[(4) - (9)].enode),new(':',(yyvsp[(6) - (9)].enode),(yyvsp[(8) - (9)].enode))); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1098 "gram.y"
    { (yyval.enode) = new(PMT, (yyvsp[(4) - (9)].enode),new(':',(yyvsp[(6) - (9)].enode),(yyvsp[(8) - (9)].enode))); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1100 "gram.y"
    { (yyval.enode) = new(HOUR, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1101 "gram.y"
    { (yyval.enode) = new(MINUTE, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1102 "gram.y"
    { (yyval.enode) = new(SECOND, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1103 "gram.y"
    { (yyval.enode) = new(MONTH, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1104 "gram.y"
    { (yyval.enode) = new(DAY, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1105 "gram.y"
    { (yyval.enode) = new(YEAR, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1106 "gram.y"
    { (yyval.enode) = new(NOW, ENULL, ENULL);}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1108 "gram.y"
    { (yyval.enode) = new(DTS, (yyvsp[(4) - (9)].enode), new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode)));}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1109 "gram.y"
    { (yyval.enode) = new(DTS,
				new_const(O_CONST, (double) (yyvsp[(1) - (5)].ival)),
				new(',', new_const(O_CONST, (double) (yyvsp[(3) - (5)].ival)),
				new_const(O_CONST, (double) (yyvsp[(5) - (5)].ival))));}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1114 "gram.y"
    { (yyval.enode) = new(TTS, (yyvsp[(4) - (9)].enode), new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode)));}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1115 "gram.y"
    { (yyval.enode) = new(STON, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1116 "gram.y"
    { (yyval.enode) = new(EQS, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1117 "gram.y"
    { (yyval.enode) = new(DATE, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1118 "gram.y"
    { (yyval.enode) = new(DATE, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1119 "gram.y"
    { (yyval.enode) = new(FMT, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1120 "gram.y"
    { (yyval.enode) = new(UPPER, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1121 "gram.y"
    { (yyval.enode) = new(LOWER, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1122 "gram.y"
    { (yyval.enode) = new(CAPITAL, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1124 "gram.y"
    { (yyval.enode) = new(INDEX, new_range(REDUCE | INDEX, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1126 "gram.y"
    { (yyval.enode) = new(INDEX, new_range(REDUCE | INDEX, (yyvsp[(6) - (7)].rval)), (yyvsp[(4) - (7)].enode)); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1128 "gram.y"
    { (yyval.enode) = new(INDEX, new_range(REDUCE | INDEX, (yyvsp[(4) - (9)].rval)),
		    new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1131 "gram.y"
    { (yyval.enode) = new(LOOKUP, new_range(REDUCE | LOOKUP, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1133 "gram.y"
    { (yyval.enode) = new(LOOKUP, new_range(REDUCE | LOOKUP, (yyvsp[(6) - (7)].rval)), (yyvsp[(4) - (7)].enode)); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1135 "gram.y"
    { (yyval.enode) = new(HLOOKUP, new_range(REDUCE | HLOOKUP, (yyvsp[(4) - (9)].rval)),
		    new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1138 "gram.y"
    { (yyval.enode) = new(HLOOKUP, new_range(REDUCE | HLOOKUP, (yyvsp[(6) - (9)].rval)),
		    new(',', (yyvsp[(4) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1141 "gram.y"
    { (yyval.enode) = new(VLOOKUP, new_range(REDUCE | VLOOKUP, (yyvsp[(4) - (9)].rval)),
		    new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1144 "gram.y"
    { (yyval.enode) = new(VLOOKUP, new_range(REDUCE | VLOOKUP, (yyvsp[(6) - (9)].rval)),
		    new(',', (yyvsp[(4) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1147 "gram.y"
    { (yyval.enode) = new(STINDEX, new_range(REDUCE | STINDEX, (yyvsp[(4) - (7)].rval)), (yyvsp[(6) - (7)].enode)); }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1149 "gram.y"
    { (yyval.enode) = new(STINDEX, new_range(REDUCE | STINDEX, (yyvsp[(6) - (7)].rval)), (yyvsp[(4) - (7)].enode)); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1151 "gram.y"
    { (yyval.enode) = new(STINDEX, new_range(REDUCE | STINDEX, (yyvsp[(4) - (9)].rval)),
		    new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1153 "gram.y"
    { (yyval.enode) = new(EXT, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1154 "gram.y"
    { (yyval.enode) = new(NVAL, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1155 "gram.y"
    { (yyval.enode) = new(SVAL, (yyvsp[(4) - (7)].enode), (yyvsp[(6) - (7)].enode)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1157 "gram.y"
    { (yyval.enode) = new(SUBSTR, (yyvsp[(4) - (9)].enode), new(',', (yyvsp[(6) - (9)].enode), (yyvsp[(8) - (9)].enode))); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1158 "gram.y"
    { (yyval.enode) = (yyvsp[(2) - (3)].enode); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1159 "gram.y"
    { (yyval.enode) = (yyvsp[(2) - (2)].enode); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1160 "gram.y"
    { (yyval.enode) = new('m', (yyvsp[(2) - (2)].enode), ENULL); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1161 "gram.y"
    { (yyval.enode) = new_const(O_CONST, (double) (yyvsp[(1) - (1)].ival)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1162 "gram.y"
    { (yyval.enode) = new_const(O_CONST, (yyvsp[(1) - (1)].fval)); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1163 "gram.y"
    { (yyval.enode) = new(PI_, ENULL, ENULL); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1164 "gram.y"
    { (yyval.enode) = new_str((yyvsp[(1) - (1)].sval)); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1165 "gram.y"
    { (yyval.enode) = new('!', (yyvsp[(2) - (2)].enode), ENULL); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1166 "gram.y"
    { (yyval.enode) = new('!', (yyvsp[(2) - (2)].enode), ENULL); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1167 "gram.y"
    { (yyval.enode) = new(FILENAME, (yyvsp[(4) - (5)].enode), ENULL); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1168 "gram.y"
    { (yyval.enode) = new(MYROW, ENULL, ENULL);}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1169 "gram.y"
    { (yyval.enode) = new(MYCOL, ENULL, ENULL);}
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1170 "gram.y"
    { (yyval.enode) = new(LASTROW, ENULL, ENULL);}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1171 "gram.y"
    { (yyval.enode) = new(LASTCOL, ENULL, ENULL);}
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1172 "gram.y"
    { (yyval.enode) = new(COLTOA, (yyvsp[(4) - (5)].enode), ENULL);}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1173 "gram.y"
    { (yyval.enode) = new(NUMITER, ENULL, ENULL);}
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1174 "gram.y"
    { (yyval.enode) = new(ERR_, ENULL, ENULL); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1175 "gram.y"
    { (yyval.enode) = new(ERR_, ENULL, ENULL); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1176 "gram.y"
    { (yyval.enode) = new(BLACK, ENULL, ENULL); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1177 "gram.y"
    { (yyval.enode) = new(RED, ENULL, ENULL); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1178 "gram.y"
    { (yyval.enode) = new(GREEN, ENULL, ENULL); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1179 "gram.y"
    { (yyval.enode) = new(YELLOW, ENULL, ENULL); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1180 "gram.y"
    { (yyval.enode) = new(BLUE, ENULL, ENULL); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1181 "gram.y"
    { (yyval.enode) = new(MAGENTA, ENULL, ENULL); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1182 "gram.y"
    { (yyval.enode) = new(CYAN, ENULL, ENULL); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1183 "gram.y"
    { (yyval.enode) = new(WHITE, ENULL, ENULL); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1187 "gram.y"
    { (yyval.enode) = new('+', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1188 "gram.y"
    { (yyval.enode) = new('-', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1189 "gram.y"
    { (yyval.enode) = new('*', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1190 "gram.y"
    { (yyval.enode) = new('/', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1191 "gram.y"
    { (yyval.enode) = new('%', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1192 "gram.y"
    { (yyval.enode) = new('^', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1194 "gram.y"
    { (yyval.enode) = new('?', (yyvsp[(1) - (5)].enode), new(':', (yyvsp[(3) - (5)].enode), (yyvsp[(5) - (5)].enode))); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1195 "gram.y"
    { (yyval.enode) = new(';', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1196 "gram.y"
    { (yyval.enode) = new('<', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1197 "gram.y"
    { (yyval.enode) = new('=', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1198 "gram.y"
    { (yyval.enode) = new('>', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1199 "gram.y"
    { (yyval.enode) = new('&', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1200 "gram.y"
    { (yyval.enode) = new('|', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1201 "gram.y"
    { (yyval.enode) = new('!', new('>', (yyvsp[(1) - (4)].enode), (yyvsp[(4) - (4)].enode)), ENULL); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1202 "gram.y"
    { (yyval.enode) = new('!', new('=', (yyvsp[(1) - (4)].enode), (yyvsp[(4) - (4)].enode)), ENULL); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1203 "gram.y"
    { (yyval.enode) = new('!', new('=', (yyvsp[(1) - (4)].enode), (yyvsp[(4) - (4)].enode)), ENULL); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1204 "gram.y"
    { (yyval.enode) = new('!', new('<', (yyvsp[(1) - (4)].enode), (yyvsp[(4) - (4)].enode)), ENULL); }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1205 "gram.y"
    { (yyval.enode) = new('#', (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1208 "gram.y"
    { (yyval.enode) = new(ELIST, ENULL, (yyvsp[(1) - (1)].enode)); }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1209 "gram.y"
    { (yyval.enode) = new(ELIST, (yyvsp[(1) - (3)].enode), (yyvsp[(3) - (3)].enode)); }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1212 "gram.y"
    { (yyval.rval).left = (yyvsp[(1) - (3)].ent); (yyval.rval).right = (yyvsp[(3) - (3)].ent); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1213 "gram.y"
    { (yyval.rval) = (yyvsp[(1) - (1)].rval); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1216 "gram.y"
    { (yyval.ent).vp = lookat((yyvsp[(2) - (2)].ival), (yyvsp[(1) - (2)].ival)); (yyval.ent).vf = 0; }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1217 "gram.y"
    { (yyval.ent).vp = lookat((yyvsp[(3) - (3)].ival), (yyvsp[(2) - (3)].ival));
					(yyval.ent).vf = FIX_COL; }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1219 "gram.y"
    { (yyval.ent).vp = lookat((yyvsp[(3) - (3)].ival), (yyvsp[(1) - (3)].ival));
					(yyval.ent).vf = FIX_ROW; }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1221 "gram.y"
    { (yyval.ent).vp = lookat((yyvsp[(4) - (4)].ival), (yyvsp[(2) - (4)].ival));
					(yyval.ent).vf = FIX_ROW | FIX_COL; }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1223 "gram.y"
    { (yyval.ent) = (yyvsp[(1) - (1)].rval).left; }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1226 "gram.y"
    { (yyval.rval) = (yyvsp[(1) - (1)].rval); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1227 "gram.y"
    { (yyval.rval).left = (yyvsp[(1) - (1)].ent); (yyval.rval).right = (yyvsp[(1) - (1)].ent); }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1230 "gram.y"
    { (yyval.fval) = (double) (yyvsp[(1) - (1)].ival); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1231 "gram.y"
    { (yyval.fval) = (yyvsp[(1) - (1)].fval); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1232 "gram.y"
    { (yyval.fval) = -(yyvsp[(2) - (2)].fval); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1233 "gram.y"
    { (yyval.fval) = (yyvsp[(2) - (2)].fval); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1236 "gram.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1237 "gram.y"
    {
				    char *s, *s1;
				    s1 = (yyvsp[(1) - (1)].ent).vp->label;
				    if (!s1)
					s1 = "NULL_STRING";
				    s = scxmalloc((unsigned)strlen(s1)+1);
				    (void) strcpy(s, s1);
				    (yyval.sval) = s;
				}
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1254 "gram.y"
    { setauto(1); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1255 "gram.y"
    { setauto(1); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1256 "gram.y"
    { setauto(0); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1257 "gram.y"
    { setauto(0); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1258 "gram.y"
    { setauto(0); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1259 "gram.y"
    { setauto(0); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1260 "gram.y"
    { setorder(BYCOLS); }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1261 "gram.y"
    { setorder(BYROWS); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1262 "gram.y"
    { optimize = 1; }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1263 "gram.y"
    { optimize = 0; }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1264 "gram.y"
    { optimize = 0; }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1265 "gram.y"
    { numeric = 1; }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1266 "gram.y"
    { numeric = 0; }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1267 "gram.y"
    { numeric = 0; }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1268 "gram.y"
    { prescale = 0.01; }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1269 "gram.y"
    { prescale = 1.0; }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1270 "gram.y"
    { prescale = 1.0; }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1271 "gram.y"
    { extfunc = 1; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1272 "gram.y"
    { extfunc = 0; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1273 "gram.y"
    { extfunc = 0; }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1274 "gram.y"
    { showcell = 1; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1275 "gram.y"
    { showcell = 0; }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1276 "gram.y"
    { showcell = 0; }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1277 "gram.y"
    { showtop = 1; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1278 "gram.y"
    { showtop = 0; }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1279 "gram.y"
    { showtop = 0; }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1280 "gram.y"
    { autoinsert = 1; }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1281 "gram.y"
    { autoinsert = 0; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1282 "gram.y"
    { autoinsert = 0; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1283 "gram.y"
    { autowrap = 1; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1284 "gram.y"
    { autowrap = 0; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1285 "gram.y"
    { autowrap = 0; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1286 "gram.y"
    { cslop = 0; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1287 "gram.y"
    { cslop = 1; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1288 "gram.y"
    { cslop = 1; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1289 "gram.y"
    { color = 1;
					  if (usecurses && has_colors()) {
					    color_set(1, NULL);
					    bkgd(COLOR_PAIR(1) | ' ');
					    FullUpdate++;
					  }
					}
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1296 "gram.y"
    { color = 0;
					  if (usecurses && has_colors()) {
					    color_set(0, NULL);
					    bkgd(COLOR_PAIR(0) | ' ');
					  }
					}
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1302 "gram.y"
    { color = 0;
					  if (usecurses && has_colors()) {
					    color_set(0, NULL);
					    bkgd(COLOR_PAIR(0) | ' ');
					  }
					}
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1308 "gram.y"
    { colorneg = 1; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1309 "gram.y"
    { colorneg = 0; }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1310 "gram.y"
    { colorneg = 0; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1311 "gram.y"
    { colorerr = 1; }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1312 "gram.y"
    { colorerr = 0; }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1313 "gram.y"
    { colorerr = 0; }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1314 "gram.y"
    { braille = 1; }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1315 "gram.y"
    { braille = 0; }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1316 "gram.y"
    { braille = 0; }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1317 "gram.y"
    { setiterations((yyvsp[(3) - (3)].ival)); }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1318 "gram.y"
    { tbl_style = (yyvsp[(3) - (3)].ival); }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1319 "gram.y"
    { tbl_style = TBL; }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1320 "gram.y"
    { tbl_style = LATEX; }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1321 "gram.y"
    { tbl_style = SLATEX; }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1322 "gram.y"
    { tbl_style = TEX; }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1323 "gram.y"
    { tbl_style = FRAME; }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1324 "gram.y"
    { rndtoeven = 1; FullUpdate++; }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1325 "gram.y"
    { rndtoeven = 0; FullUpdate++; }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1326 "gram.y"
    { rndtoeven = 0; FullUpdate++; }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1327 "gram.y"
    { craction = (yyvsp[(3) - (3)].ival); }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1328 "gram.y"
    { rowlimit = (yyvsp[(3) - (3)].ival); }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1329 "gram.y"
    { collimit = (yyvsp[(3) - (3)].ival); }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1330 "gram.y"
    { pagesize = (yyvsp[(3) - (3)].ival); }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1331 "gram.y"
    { scrc++; }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1332 "gram.y"
    {
#ifdef USELOCALE
					  struct  lconv *locstruct;
					  char    *loc;

					  loc = setlocale(LC_ALL, "");
					  if (loc != NULL) {
					    locstruct = localeconv();
					    dpoint = (locstruct->decimal_point)[0];
					    thsep = (locstruct->thousands_sep)[0];
					  }
					  else {
					    dpoint = '.';
					    thsep = ',';
					  }
					  FullUpdate++;
#else
					  error("Locale support not available");
#endif
					}
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1352 "gram.y"
    {
					  dpoint = '.';
					  thsep = ',';
					  FullUpdate++;
					}
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1357 "gram.y"
    {
					  dpoint = '.';
					  thsep = ',';
					  FullUpdate++;
					}
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1365 "gram.y"
    { num_search((double)0,
					  (yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
					  (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col,
					  CELLERROR); }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1369 "gram.y"
    { num_search((double)0, 0, 0,
					  maxrow, maxcol, CELLERROR); }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1371 "gram.y"
    { num_search((double)0,
					  (yyvsp[(2) - (2)].rval).left.vp->row, (yyvsp[(2) - (2)].rval).left.vp->col,
					  (yyvsp[(2) - (2)].rval).right.vp->row, (yyvsp[(2) - (2)].rval).right.vp->col,
					  CELLINVALID); }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1375 "gram.y"
    { num_search((double)0, 0, 0,
					  maxrow, maxcol, CELLINVALID); }
    break;



/* Line 1806 of yacc.c  */
#line 6535 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



