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

/* Substitute the variable and function names.  */
#define yyparse         pcap_parse
#define yylex           pcap_lex
#define yyerror         pcap_error
#define yylval          pcap_lval
#define yychar          pcap_char
#define yydebug         pcap_debug
#define yynerrs         pcap_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "../grammar.y"

/*
 * Copyright (c) 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that: (1) source code distributions
 * retain the above copyright notice and this paragraph in its entirety, (2)
 * distributions including binary code include the above copyright notice and
 * this paragraph in its entirety in the documentation or other materials
 * provided with the distribution, and (3) all advertising materials mentioning
 * features or use of this software display the following acknowledgement:
 * ``This product includes software developed by the University of California,
 * Lawrence Berkeley Laboratory and its contributors.'' Neither the name of
 * the University nor the names of its contributors may be used to endorse
 * or promote products derived from this software without specific prior
 * written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef lint
static const char rcsid[] =
    "@(#) $Header$ (LBL)";
#endif

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef WIN32
#include <pcap-stdinc.h>
#else /* WIN32 */
#include <sys/types.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <linux/autoconf.h>
#endif /* WIN32 */

#include <stdlib.h>

#ifndef WIN32
#if __STDC__
struct mbuf;
struct rtentry;
#endif

#include <netinet/in.h>
#endif /* WIN32 */

#include <stdio.h>

#include "pcap-int.h"

#include "gencode.h"
#include "pf.h"
#include <pcap-namedb.h>

#ifdef HAVE_OS_PROTO_H
#include "os-proto.h"
#endif

#define QSET(q, p, d, a) (q).proto = (p),\
			 (q).dir = (d),\
			 (q).addr = (a)

int n_errors = 0;

static struct qual qerr = { Q_UNDEF, Q_UNDEF, Q_UNDEF
#if !CONFIG_SH_SECUREEDGE5410
, Q_UNDEF 
#endif
};

static void
yyerror(char *msg)
{
	++n_errors;
	bpf_error("%s", msg);
	/* NOTREACHED */
}

#ifndef YYBISON
int yyparse(void);

int
pcap_parse()
{
	return (yyparse());
}
#endif



/* Line 268 of yacc.c  */
#line 175 "y.tab.c"

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
     DST = 258,
     SRC = 259,
     HOST = 260,
     GATEWAY = 261,
     NET = 262,
     NETMASK = 263,
     PORT = 264,
     LESS = 265,
     GREATER = 266,
     PROTO = 267,
     PROTOCHAIN = 268,
     CBYTE = 269,
     ARP = 270,
     RARP = 271,
     IP = 272,
     SCTP = 273,
     TCP = 274,
     UDP = 275,
     ICMP = 276,
     IGMP = 277,
     IGRP = 278,
     PIM = 279,
     VRRP = 280,
     ATALK = 281,
     AARP = 282,
     DECNET = 283,
     LAT = 284,
     SCA = 285,
     MOPRC = 286,
     MOPDL = 287,
     TK_BROADCAST = 288,
     TK_MULTICAST = 289,
     NUM = 290,
     INBOUND = 291,
     OUTBOUND = 292,
     PF_IFNAME = 293,
     PF_RNR = 294,
     PF_REASON = 295,
     PF_ACTION = 296,
     LINK = 297,
     GEQ = 298,
     LEQ = 299,
     NEQ = 300,
     ID = 301,
     EID = 302,
     HID = 303,
     HID6 = 304,
     AID = 305,
     LSH = 306,
     RSH = 307,
     LEN = 308,
     IPV6 = 309,
     ICMPV6 = 310,
     AH = 311,
     ESP = 312,
     VLAN = 313,
     ISO = 314,
     ESIS = 315,
     CLNP = 316,
     ISIS = 317,
     L1 = 318,
     L2 = 319,
     IIH = 320,
     LSP = 321,
     SNP = 322,
     CSNP = 323,
     PSNP = 324,
     STP = 325,
     IPX = 326,
     NETBEUI = 327,
     LANE = 328,
     LLC = 329,
     METAC = 330,
     BCC = 331,
     SC = 332,
     ILMIC = 333,
     OAMF4EC = 334,
     OAMF4SC = 335,
     OAM = 336,
     OAMF4 = 337,
     CONNECTMSG = 338,
     METACONNECT = 339,
     VPI = 340,
     VCI = 341,
     AND = 342,
     OR = 343,
     UMINUS = 344
   };
#endif
/* Tokens.  */
#define DST 258
#define SRC 259
#define HOST 260
#define GATEWAY 261
#define NET 262
#define NETMASK 263
#define PORT 264
#define LESS 265
#define GREATER 266
#define PROTO 267
#define PROTOCHAIN 268
#define CBYTE 269
#define ARP 270
#define RARP 271
#define IP 272
#define SCTP 273
#define TCP 274
#define UDP 275
#define ICMP 276
#define IGMP 277
#define IGRP 278
#define PIM 279
#define VRRP 280
#define ATALK 281
#define AARP 282
#define DECNET 283
#define LAT 284
#define SCA 285
#define MOPRC 286
#define MOPDL 287
#define TK_BROADCAST 288
#define TK_MULTICAST 289
#define NUM 290
#define INBOUND 291
#define OUTBOUND 292
#define PF_IFNAME 293
#define PF_RNR 294
#define PF_REASON 295
#define PF_ACTION 296
#define LINK 297
#define GEQ 298
#define LEQ 299
#define NEQ 300
#define ID 301
#define EID 302
#define HID 303
#define HID6 304
#define AID 305
#define LSH 306
#define RSH 307
#define LEN 308
#define IPV6 309
#define ICMPV6 310
#define AH 311
#define ESP 312
#define VLAN 313
#define ISO 314
#define ESIS 315
#define CLNP 316
#define ISIS 317
#define L1 318
#define L2 319
#define IIH 320
#define LSP 321
#define SNP 322
#define CSNP 323
#define PSNP 324
#define STP 325
#define IPX 326
#define NETBEUI 327
#define LANE 328
#define LLC 329
#define METAC 330
#define BCC 331
#define SC 332
#define ILMIC 333
#define OAMF4EC 334
#define OAMF4SC 335
#define OAM 336
#define OAMF4 337
#define CONNECTMSG 338
#define METACONNECT 339
#define VPI 340
#define VCI 341
#define AND 342
#define OR 343
#define UMINUS 344




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 96 "../grammar.y"

	int i;
	bpf_u_int32 h;
	u_char *e;
	char *s;
	struct stmt *stmt;
	struct arth *a;
	struct {
		struct qual q;
		int atmfieldtype;
		struct block *b;
	} blk;
	struct block *rblk;



/* Line 293 of yacc.c  */
#line 406 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 418 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  222

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,     2,     2,     2,    91,     2,
      98,    97,    94,    92,     2,    93,     2,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   104,     2,
     101,   100,    99,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   102,     2,   103,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    90,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    11,    15,    19,    23,
      27,    29,    31,    33,    35,    39,    41,    45,    49,    51,
      55,    57,    59,    61,    64,    66,    68,    70,    74,    78,
      80,    82,    84,    87,    91,    94,    97,   100,   103,   106,
     109,   113,   115,   119,   123,   125,   127,   129,   132,   134,
     135,   137,   139,   143,   147,   151,   155,   157,   159,   161,
     163,   165,   167,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   221,
     223,   225,   227,   229,   231,   233,   235,   237,   240,   243,
     246,   249,   254,   256,   258,   261,   263,   265,   268,   271,
     274,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   304,   311,   315,   319,   323,   327,   331,
     335,   339,   343,   346,   350,   352,   354,   356,   358,   360,
     362,   364,   368,   370,   372,   374,   376,   378,   380,   382,
     384,   386,   388,   390,   392,   394,   396,   398,   401,   404,
     408,   410,   412
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,   107,   108,    -1,   107,    -1,    -1,   117,
      -1,   108,   109,   117,    -1,   108,   109,   111,    -1,   108,
     110,   117,    -1,   108,   110,   111,    -1,    87,    -1,    88,
      -1,   112,    -1,   134,    -1,   114,   115,    97,    -1,    46,
      -1,    48,    95,    35,    -1,    48,     8,    48,    -1,    48,
      -1,    49,    95,    35,    -1,    49,    -1,    47,    -1,    50,
      -1,   113,   111,    -1,    89,    -1,    98,    -1,   112,    -1,
     116,   109,   111,    -1,   116,   110,   111,    -1,   134,    -1,
     115,    -1,   119,    -1,   113,   117,    -1,   120,   121,   122,
      -1,   120,   121,    -1,   120,   122,    -1,   120,    12,    -1,
     120,    13,    -1,   120,   123,    -1,   118,   111,    -1,   114,
     108,    97,    -1,   124,    -1,   131,   129,   131,    -1,   131,
     130,   131,    -1,   125,    -1,   135,    -1,   136,    -1,   137,
     138,    -1,   124,    -1,    -1,     4,    -1,     3,    -1,     4,
      88,     3,    -1,     3,    88,     4,    -1,     4,    87,     3,
      -1,     3,    87,     4,    -1,     5,    -1,     7,    -1,     9,
      -1,     6,    -1,    42,    -1,    17,    -1,    15,    -1,    16,
      -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    32,    -1,    31,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    59,
      -1,    60,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    67,    -1,    69,    -1,    68,    -1,    61,
      -1,    70,    -1,    71,    -1,    72,    -1,   120,    33,    -1,
     120,    34,    -1,    10,    35,    -1,    11,    35,    -1,    14,
      35,   133,    35,    -1,    36,    -1,    37,    -1,    58,   134,
      -1,    58,    -1,   126,    -1,    38,    46,    -1,    39,    35,
      -1,    40,   127,    -1,    41,   128,    -1,    35,    -1,    46,
      -1,    46,    -1,    99,    -1,    43,    -1,   100,    -1,    44,
      -1,   101,    -1,    45,    -1,   134,    -1,   132,    -1,   124,
     102,   131,   103,    -1,   124,   102,   131,   104,    35,   103,
      -1,   131,    92,   131,    -1,   131,    93,   131,    -1,   131,
      94,   131,    -1,   131,    95,   131,    -1,   131,    91,   131,
      -1,   131,    90,   131,    -1,   131,    51,   131,    -1,   131,
      52,   131,    -1,    93,   131,    -1,   114,   132,    97,    -1,
      53,    -1,    91,    -1,    90,    -1,   101,    -1,    99,    -1,
     100,    -1,    35,    -1,   114,   134,    97,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    79,    -1,    80,    -1,
      77,    -1,    78,    -1,    81,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,   139,    -1,   129,    35,
      -1,   130,    35,    -1,   114,   140,    97,    -1,    35,    -1,
     139,    -1,   140,   110,   139,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   159,   159,   163,   165,   167,   168,   169,   170,   171,
     173,   175,   177,   178,   180,   182,   183,   185,   187,   192,
     201,   210,   219,   228,   230,   232,   234,   235,   236,   238,
     240,   242,   243,   245,   246,   247,   248,   249,   250,   252,
     253,   254,   255,   257,   259,   260,   261,   262,   265,   266,
     269,   270,   271,   272,   273,   274,   277,   278,   279,   282,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   334,   335,   336,
     337,   340,   341,   354,   365,   366,   367,   369,   370,   371,
     373,   374,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   390,   391,   392,   393,   394,
     396,   397,   399,   400,   401,   402,   403,   404,   405,   406,
     408,   409,   410,   411,   414,   415,   417,   418,   419,   420,
     422,   429,   430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DST", "SRC", "HOST", "GATEWAY", "NET",
  "NETMASK", "PORT", "LESS", "GREATER", "PROTO", "PROTOCHAIN", "CBYTE",
  "ARP", "RARP", "IP", "SCTP", "TCP", "UDP", "ICMP", "IGMP", "IGRP", "PIM",
  "VRRP", "ATALK", "AARP", "DECNET", "LAT", "SCA", "MOPRC", "MOPDL",
  "TK_BROADCAST", "TK_MULTICAST", "NUM", "INBOUND", "OUTBOUND",
  "PF_IFNAME", "PF_RNR", "PF_REASON", "PF_ACTION", "LINK", "GEQ", "LEQ",
  "NEQ", "ID", "EID", "HID", "HID6", "AID", "LSH", "RSH", "LEN", "IPV6",
  "ICMPV6", "AH", "ESP", "VLAN", "ISO", "ESIS", "CLNP", "ISIS", "L1", "L2",
  "IIH", "LSP", "SNP", "CSNP", "PSNP", "STP", "IPX", "NETBEUI", "LANE",
  "LLC", "METAC", "BCC", "SC", "ILMIC", "OAMF4EC", "OAMF4SC", "OAM",
  "OAMF4", "CONNECTMSG", "METACONNECT", "VPI", "VCI", "AND", "OR", "'!'",
  "'|'", "'&'", "'+'", "'-'", "'*'", "'/'", "UMINUS", "')'", "'('", "'>'",
  "'='", "'<'", "'['", "']'", "':'", "$accept", "prog", "null", "expr",
  "and", "or", "id", "nid", "not", "paren", "pid", "qid", "term", "head",
  "rterm", "pqual", "dqual", "aqual", "ndaqual", "pname", "other", "pfvar",
  "reason", "action", "relop", "irelop", "arth", "narth", "byteop", "pnum",
  "atmtype", "atmmultitype", "atmfield", "atmvalue", "atmfieldvalue",
  "atmlistvalue", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,    33,
     124,    38,    43,    45,    42,    47,   344,    41,    40,    62,
      61,    60,    91,    93,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   108,   108,   108,   108,   108,
     109,   110,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   122,   122,   122,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     126,   127,   127,   128,   129,   129,   129,   130,   130,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   133,   133,   133,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   138,
     139,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     1,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       3,     1,     3,     3,     1,     1,     1,     2,     1,     0,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     4,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    49,     1,     0,     0,     0,    62,    63,    61,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    78,    77,   140,   102,   103,     0,     0,
       0,     0,    60,   134,    79,    80,    81,    82,   105,    83,
      84,    93,    85,    86,    87,    88,    89,    90,    92,    91,
      94,    95,    96,   142,   143,   144,   145,   148,   149,   146,
     147,   150,   151,   152,   153,   154,   155,    24,     0,    25,
       2,    49,    49,     5,     0,    31,     0,    48,    44,   106,
       0,   121,   120,    45,    46,     0,    99,   100,     0,   107,
     108,   111,   112,   109,   113,   110,     0,   104,     0,     0,
     132,    10,    11,    49,    49,    32,     0,   121,   120,    15,
      21,    18,    20,    22,    39,    12,     0,     0,    13,    51,
      50,    56,    59,    57,    58,    36,    37,    97,    98,    34,
      35,    38,     0,   115,   117,   119,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   116,   118,     0,     0,   160,
       0,     0,     0,    47,   156,   136,   135,   138,   139,   137,
       0,     0,     0,     7,    49,    49,     6,   120,     9,     8,
      40,   133,   141,     0,     0,     0,    23,    26,    30,     0,
      29,     0,     0,     0,     0,    33,     0,   130,   131,   129,
     128,   124,   125,   126,   127,    42,    43,   161,     0,   157,
     158,   101,   120,    17,    16,    19,    14,     0,     0,    55,
      53,    54,    52,   122,     0,   159,     0,    27,    28,     0,
     162,   123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   106,   103,   104,   176,   115,   116,    98,
     178,   179,    73,    74,    75,    76,   129,   130,   131,    99,
      78,    79,    93,    95,   147,   148,    80,    81,   160,    82,
      83,    84,    85,   153,   154,   198
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -171
static const yytype_int16 yypact[] =
{
    -171,    25,   172,  -171,    -6,     6,     8,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,     0,    12,
     -20,    14,  -171,  -171,  -171,  -171,  -171,  -171,   -27,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,   426,  -171,
     -31,   342,   342,  -171,    49,  -171,   522,    16,  -171,  -171,
     421,  -171,  -171,  -171,  -171,    42,  -171,  -171,   -77,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,   -27,  -171,   426,   -44,
    -171,  -171,  -171,   257,   257,  -171,   -67,   -29,   -15,  -171,
    -171,    -3,    24,  -171,  -171,  -171,    49,    49,  -171,     1,
      29,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,    35,
    -171,  -171,   426,  -171,  -171,  -171,   426,   426,   426,   426,
     426,   426,   426,   426,  -171,  -171,  -171,   426,   426,  -171,
      58,    74,    85,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
      86,   -15,   125,  -171,   257,   257,  -171,     3,  -171,  -171,
    -171,  -171,  -171,    75,    87,    89,  -171,  -171,    28,   -31,
     -15,   122,   126,   128,   129,  -171,   448,   -30,   -30,   296,
     -41,   -61,   -61,  -171,  -171,   125,   125,  -171,   -70,  -171,
    -171,  -171,   -49,  -171,  -171,  -171,  -171,    49,    49,  -171,
    -171,  -171,  -171,  -171,    94,  -171,    58,  -171,  -171,    30,
    -171,  -171
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   132,   -42,  -170,   -72,  -110,     2,    -2,
    -171,  -171,   -54,  -171,  -171,  -171,  -171,    10,  -171,     4,
    -171,  -171,  -171,  -171,    59,    61,    13,   -53,  -171,   -37,
    -171,  -171,  -171,  -171,  -138,  -171
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      72,    97,   114,   -13,    71,   173,    77,   177,    25,   208,
     136,   137,   197,   155,   156,    91,   -41,   105,   102,   107,
     101,   102,   157,   158,   159,     3,    92,   215,   216,    86,
     170,   163,   168,   142,   143,   108,    96,   118,   -29,   -29,
     121,    87,   123,    88,   124,   107,    89,    90,   172,   166,
     169,   140,   141,   142,   143,   177,   101,   102,   132,   161,
      94,   108,   140,   141,   142,   143,   167,   167,   171,    72,
      72,    69,   117,    71,    71,    77,    77,   149,   220,   118,
     180,   100,   172,   150,    25,   133,   134,   135,   181,   182,
     -13,   -13,   174,   149,    96,   109,   110,   111,   112,   113,
     -13,   165,   165,   -41,   -41,   164,   164,    77,    77,   199,
     105,   162,   107,   -41,   117,    96,   183,   184,   132,   175,
     200,   201,   204,   203,   205,   206,   209,   167,   202,   219,
     210,   211,   212,   221,    70,   217,   218,   207,    67,   185,
      69,   144,   145,   146,   151,   186,   152,    69,     0,   187,
     188,   189,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   196,   165,    72,     0,     0,   164,   164,    77,    77,
     118,   118,    -3,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     4,     5,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   117,   117,    25,    26,    27,
      28,    29,    30,    31,    32,   138,   139,   140,   141,   142,
     143,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,    67,     0,     0,     0,    68,     0,     4,     5,     0,
      69,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,   109,   110,   111,   112,   113,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,    67,   136,   137,     0,
      68,     0,     4,     5,     0,    69,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,   139,   140,   141,
     142,   143,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,    67,     0,     0,     0,    68,     0,     0,     0,     0,
      69,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,    25,     0,     0,   133,   134,   135,     0,    32,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,   140,   141,   142,   143,     0,     0,    68,
     144,   145,   146,     0,    69,   119,   120,   121,   122,   123,
       0,   124,     0,     0,   125,   126,     0,     0,   138,   139,
     140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
       0,   213,   214,     0,     0,   127,   128
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-171))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,    38,    74,     0,     2,     8,     2,   117,    35,   179,
      51,    52,   150,    90,    91,    35,     0,    71,    88,    72,
      87,    88,    99,   100,   101,     0,    46,    97,   198,    35,
      97,   103,   104,    94,    95,    72,    38,    74,    87,    88,
       5,    35,     7,    35,     9,    98,    46,    35,    97,   103,
     104,    92,    93,    94,    95,   165,    87,    88,   102,    96,
      46,    98,    92,    93,    94,    95,   103,   104,    97,    71,
      72,    98,    74,    71,    72,    71,    72,    35,   216,   116,
     117,    68,    97,    85,    35,    43,    44,    45,    87,    88,
      87,    88,    95,    35,    96,    46,    47,    48,    49,    50,
      97,   103,   104,    87,    88,   103,   104,   103,   104,    35,
     164,    98,   165,    97,   116,   117,    87,    88,   102,    95,
      35,    35,    35,    48,    35,    97,     4,   164,   165,    35,
       4,     3,     3,   103,     2,   207,   208,   179,    89,   129,
      98,    99,   100,   101,    85,   132,    85,    98,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,    -1,
     147,   148,   164,   165,    -1,    -1,   164,   165,   164,   165,
     207,   208,     0,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   207,   208,    35,    36,    37,
      38,    39,    40,    41,    42,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    10,    11,    -1,
      98,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    89,    51,    52,    -1,
      93,    -1,    10,    11,    -1,    98,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    43,    44,    45,    -1,    42,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    -1,    93,
      99,   100,   101,    -1,    98,     3,     4,     5,     6,     7,
      -1,     9,    -1,    -1,    12,    13,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,    -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,   107,     0,    10,    11,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    35,    36,    37,    38,    39,
      40,    41,    42,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    89,    93,    98,
     108,   113,   114,   117,   118,   119,   120,   124,   125,   126,
     131,   132,   134,   135,   136,   137,    35,    35,    35,    46,
      35,    35,    46,   127,    46,   128,   114,   134,   114,   124,
     131,    87,    88,   109,   110,   117,   108,   132,   134,    46,
      47,    48,    49,    50,   111,   112,   113,   114,   134,     3,
       4,     5,     6,     7,     9,    12,    13,    33,    34,   121,
     122,   123,   102,    43,    44,    45,    51,    52,    90,    91,
      92,    93,    94,    95,    99,   100,   101,   129,   130,    35,
     114,   129,   130,   138,   139,    90,    91,    99,   100,   101,
     133,   134,   131,   111,   113,   114,   117,   134,   111,   117,
      97,    97,    97,     8,    95,    95,   111,   112,   115,   116,
     134,    87,    88,    87,    88,   122,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   139,   140,    35,
      35,    35,   134,    48,    35,    35,    97,   109,   110,     4,
       4,     3,     3,   103,   104,    97,   110,   111,   111,    35,
     139,   103
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
#line 160 "../grammar.y"
    {
	finish_parse((yyvsp[(2) - (2)].blk).b);
}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 165 "../grammar.y"
    { (yyval.blk).q = qerr; }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 168 "../grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 169 "../grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 170 "../grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 171 "../grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 173 "../grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 175 "../grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 178 "../grammar.y"
    { (yyval.blk).b = gen_ncode(NULL, (bpf_u_int32)(yyvsp[(1) - (1)].i),
						   (yyval.blk).q = (yyvsp[(0) - (1)].blk).q); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 180 "../grammar.y"
    { (yyval.blk) = (yyvsp[(2) - (3)].blk); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 182 "../grammar.y"
    { (yyval.blk).b = gen_scode((yyvsp[(1) - (1)].s), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 183 "../grammar.y"
    { (yyval.blk).b = gen_mcode((yyvsp[(1) - (3)].s), NULL, (yyvsp[(3) - (3)].i),
				    (yyval.blk).q = (yyvsp[(0) - (3)].blk).q); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 185 "../grammar.y"
    { (yyval.blk).b = gen_mcode((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s), 0,
				    (yyval.blk).q = (yyvsp[(0) - (3)].blk).q); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 187 "../grammar.y"
    {
				  /* Decide how to parse HID based on proto */
				  (yyval.blk).q = (yyvsp[(0) - (1)].blk).q;
				  (yyval.blk).b = gen_ncode((yyvsp[(1) - (1)].s), 0, (yyval.blk).q);
				}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 192 "../grammar.y"
    {
#ifdef INET6
				  (yyval.blk).b = gen_mcode6((yyvsp[(1) - (3)].s), NULL, (yyvsp[(3) - (3)].i),
				    (yyval.blk).q = (yyvsp[(0) - (3)].blk).q);
#else
				  bpf_error("'ip6addr/prefixlen' not supported "
					"in this configuration");
#endif /*INET6*/
				}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 201 "../grammar.y"
    {
#ifdef INET6
				  (yyval.blk).b = gen_mcode6((yyvsp[(1) - (1)].s), 0, 128,
				    (yyval.blk).q = (yyvsp[(0) - (1)].blk).q);
#else
				  bpf_error("'ip6addr' not supported "
					"in this configuration");
#endif /*INET6*/
				}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 210 "../grammar.y"
    { 
				  (yyval.blk).b = gen_ecode((yyvsp[(1) - (1)].e), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q);
				  /*
				   * $1 was allocated by "pcap_ether_aton()",
				   * so we must free it now that we're done
				   * with it.
				   */
				  free((yyvsp[(1) - (1)].e));
				}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 219 "../grammar.y"
    {
				  (yyval.blk).b = gen_acode((yyvsp[(1) - (1)].e), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q);
				  /*
				   * $1 was allocated by "pcap_ether_aton()",
				   * so we must free it now that we're done
				   * with it.
				   */
				  free((yyvsp[(1) - (1)].e));
				}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 228 "../grammar.y"
    { gen_not((yyvsp[(2) - (2)].blk).b); (yyval.blk) = (yyvsp[(2) - (2)].blk); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 230 "../grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 232 "../grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 235 "../grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 236 "../grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 238 "../grammar.y"
    { (yyval.blk).b = gen_ncode(NULL, (bpf_u_int32)(yyvsp[(1) - (1)].i),
						   (yyval.blk).q = (yyvsp[(0) - (1)].blk).q); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 243 "../grammar.y"
    { gen_not((yyvsp[(2) - (2)].blk).b); (yyval.blk) = (yyvsp[(2) - (2)].blk); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 245 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (3)].i), (yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].i)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 246 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i), Q_DEFAULT); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 247 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, (yyvsp[(2) - (2)].i)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 248 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, Q_PROTO); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 249 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, Q_PROTOCHAIN); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 250 "../grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, (yyvsp[(2) - (2)].i)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 252 "../grammar.y"
    { (yyval.blk) = (yyvsp[(2) - (2)].blk); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 253 "../grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (3)].blk).b; (yyval.blk).q = (yyvsp[(1) - (3)].blk).q; }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 254 "../grammar.y"
    { (yyval.blk).b = gen_proto_abbrev((yyvsp[(1) - (1)].i)); (yyval.blk).q = qerr; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 255 "../grammar.y"
    { (yyval.blk).b = gen_relation((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), 0);
				  (yyval.blk).q = qerr; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 257 "../grammar.y"
    { (yyval.blk).b = gen_relation((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), 1);
				  (yyval.blk).q = qerr; }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 259 "../grammar.y"
    { (yyval.blk).b = (yyvsp[(1) - (1)].rblk); (yyval.blk).q = qerr; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 260 "../grammar.y"
    { (yyval.blk).b = gen_atmtype_abbrev((yyvsp[(1) - (1)].i)); (yyval.blk).q = qerr; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 261 "../grammar.y"
    { (yyval.blk).b = gen_atmmulti_abbrev((yyvsp[(1) - (1)].i)); (yyval.blk).q = qerr; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 262 "../grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (2)].blk).b; (yyval.blk).q = qerr; }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 266 "../grammar.y"
    { (yyval.i) = Q_DEFAULT; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 269 "../grammar.y"
    { (yyval.i) = Q_SRC; }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 270 "../grammar.y"
    { (yyval.i) = Q_DST; }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 271 "../grammar.y"
    { (yyval.i) = Q_OR; }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 272 "../grammar.y"
    { (yyval.i) = Q_OR; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 273 "../grammar.y"
    { (yyval.i) = Q_AND; }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 274 "../grammar.y"
    { (yyval.i) = Q_AND; }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 277 "../grammar.y"
    { (yyval.i) = Q_HOST; }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 278 "../grammar.y"
    { (yyval.i) = Q_NET; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 279 "../grammar.y"
    { (yyval.i) = Q_PORT; }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 282 "../grammar.y"
    { (yyval.i) = Q_GATEWAY; }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 284 "../grammar.y"
    { (yyval.i) = Q_LINK; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 285 "../grammar.y"
    { (yyval.i) = Q_IP; }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 286 "../grammar.y"
    { (yyval.i) = Q_ARP; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 287 "../grammar.y"
    { (yyval.i) = Q_RARP; }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 288 "../grammar.y"
    { (yyval.i) = Q_SCTP; }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 289 "../grammar.y"
    { (yyval.i) = Q_TCP; }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 290 "../grammar.y"
    { (yyval.i) = Q_UDP; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 291 "../grammar.y"
    { (yyval.i) = Q_ICMP; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 292 "../grammar.y"
    { (yyval.i) = Q_IGMP; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 293 "../grammar.y"
    { (yyval.i) = Q_IGRP; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 294 "../grammar.y"
    { (yyval.i) = Q_PIM; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 295 "../grammar.y"
    { (yyval.i) = Q_VRRP; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 296 "../grammar.y"
    { (yyval.i) = Q_ATALK; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 297 "../grammar.y"
    { (yyval.i) = Q_AARP; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 298 "../grammar.y"
    { (yyval.i) = Q_DECNET; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 299 "../grammar.y"
    { (yyval.i) = Q_LAT; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 300 "../grammar.y"
    { (yyval.i) = Q_SCA; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 301 "../grammar.y"
    { (yyval.i) = Q_MOPDL; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 302 "../grammar.y"
    { (yyval.i) = Q_MOPRC; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 303 "../grammar.y"
    { (yyval.i) = Q_IPV6; }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 304 "../grammar.y"
    { (yyval.i) = Q_ICMPV6; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 305 "../grammar.y"
    { (yyval.i) = Q_AH; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 306 "../grammar.y"
    { (yyval.i) = Q_ESP; }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 307 "../grammar.y"
    { (yyval.i) = Q_ISO; }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 308 "../grammar.y"
    { (yyval.i) = Q_ESIS; }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 309 "../grammar.y"
    { (yyval.i) = Q_ISIS; }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 310 "../grammar.y"
    { (yyval.i) = Q_ISIS_L1; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 311 "../grammar.y"
    { (yyval.i) = Q_ISIS_L2; }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 312 "../grammar.y"
    { (yyval.i) = Q_ISIS_IIH; }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 313 "../grammar.y"
    { (yyval.i) = Q_ISIS_LSP; }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 314 "../grammar.y"
    { (yyval.i) = Q_ISIS_SNP; }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 315 "../grammar.y"
    { (yyval.i) = Q_ISIS_PSNP; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 316 "../grammar.y"
    { (yyval.i) = Q_ISIS_CSNP; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 317 "../grammar.y"
    { (yyval.i) = Q_CLNP; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 318 "../grammar.y"
    { (yyval.i) = Q_STP; }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 319 "../grammar.y"
    { (yyval.i) = Q_IPX; }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 320 "../grammar.y"
    { (yyval.i) = Q_NETBEUI; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 322 "../grammar.y"
    { (yyval.rblk) = gen_broadcast((yyvsp[(1) - (2)].i)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 323 "../grammar.y"
    { (yyval.rblk) = gen_multicast((yyvsp[(1) - (2)].i)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 324 "../grammar.y"
    { (yyval.rblk) = gen_less((yyvsp[(2) - (2)].i)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 325 "../grammar.y"
    { (yyval.rblk) = gen_greater((yyvsp[(2) - (2)].i)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 326 "../grammar.y"
    { (yyval.rblk) = gen_byteop((yyvsp[(3) - (4)].i), (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 327 "../grammar.y"
    { (yyval.rblk) = gen_inbound(0); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 328 "../grammar.y"
    { (yyval.rblk) = gen_inbound(1); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 329 "../grammar.y"
    { (yyval.rblk) = gen_vlan((yyvsp[(2) - (2)].i)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 330 "../grammar.y"
    { (yyval.rblk) = gen_vlan(-1); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 331 "../grammar.y"
    { (yyval.rblk) = (yyvsp[(1) - (1)].rblk); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 334 "../grammar.y"
    { (yyval.rblk) = gen_pf_ifname((yyvsp[(2) - (2)].s)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 335 "../grammar.y"
    { (yyval.rblk) = gen_pf_rnr((yyvsp[(2) - (2)].i)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 336 "../grammar.y"
    { (yyval.rblk) = gen_pf_reason((yyvsp[(2) - (2)].i)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 337 "../grammar.y"
    { (yyval.rblk) = gen_pf_action((yyvsp[(2) - (2)].i)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 340 "../grammar.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 341 "../grammar.y"
    { const char *reasons[] = PFRES_NAMES;
				  int i;
				  for (i = 0; reasons[i]; i++) {
					  if (pcap_strcasecmp((yyvsp[(1) - (1)].s), reasons[i]) == 0) {
						  (yyval.i) = i;
						  break;
					  }
				  }
				  if (reasons[i] == NULL)
					  bpf_error("unknown PF reason");
				}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 354 "../grammar.y"
    { if (pcap_strcasecmp((yyvsp[(1) - (1)].s), "pass") == 0 ||
				      pcap_strcasecmp((yyvsp[(1) - (1)].s), "accept") == 0)
					(yyval.i) = PF_PASS;
				  else if (pcap_strcasecmp((yyvsp[(1) - (1)].s), "drop") == 0 ||
				      pcap_strcasecmp((yyvsp[(1) - (1)].s), "block") == 0)
					(yyval.i) = PF_DROP;
				  else
					  bpf_error("unknown PF action");
				}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 365 "../grammar.y"
    { (yyval.i) = BPF_JGT; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 366 "../grammar.y"
    { (yyval.i) = BPF_JGE; }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 367 "../grammar.y"
    { (yyval.i) = BPF_JEQ; }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 369 "../grammar.y"
    { (yyval.i) = BPF_JGT; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 370 "../grammar.y"
    { (yyval.i) = BPF_JGE; }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 371 "../grammar.y"
    { (yyval.i) = BPF_JEQ; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 373 "../grammar.y"
    { (yyval.a) = gen_loadi((yyvsp[(1) - (1)].i)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 376 "../grammar.y"
    { (yyval.a) = gen_load((yyvsp[(1) - (4)].i), (yyvsp[(3) - (4)].a), 1); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 377 "../grammar.y"
    { (yyval.a) = gen_load((yyvsp[(1) - (6)].i), (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].i)); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 378 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_ADD, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 379 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_SUB, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 380 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_MUL, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 381 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_DIV, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 382 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_AND, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 383 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_OR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 384 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_LSH, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 385 "../grammar.y"
    { (yyval.a) = gen_arth(BPF_RSH, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 386 "../grammar.y"
    { (yyval.a) = gen_neg((yyvsp[(2) - (2)].a)); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 387 "../grammar.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 388 "../grammar.y"
    { (yyval.a) = gen_loadlen(); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 390 "../grammar.y"
    { (yyval.i) = '&'; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 391 "../grammar.y"
    { (yyval.i) = '|'; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 392 "../grammar.y"
    { (yyval.i) = '<'; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 393 "../grammar.y"
    { (yyval.i) = '>'; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 394 "../grammar.y"
    { (yyval.i) = '='; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 397 "../grammar.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 399 "../grammar.y"
    { (yyval.i) = A_LANE; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 400 "../grammar.y"
    { (yyval.i) = A_LLC; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 401 "../grammar.y"
    { (yyval.i) = A_METAC;	}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 402 "../grammar.y"
    { (yyval.i) = A_BCC; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 403 "../grammar.y"
    { (yyval.i) = A_OAMF4EC; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 404 "../grammar.y"
    { (yyval.i) = A_OAMF4SC; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 405 "../grammar.y"
    { (yyval.i) = A_SC; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 406 "../grammar.y"
    { (yyval.i) = A_ILMIC; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 408 "../grammar.y"
    { (yyval.i) = A_OAM; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 409 "../grammar.y"
    { (yyval.i) = A_OAMF4; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 410 "../grammar.y"
    { (yyval.i) = A_CONNECTMSG; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 411 "../grammar.y"
    { (yyval.i) = A_METACONNECT; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 414 "../grammar.y"
    { (yyval.blk).atmfieldtype = A_VPI; }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 415 "../grammar.y"
    { (yyval.blk).atmfieldtype = A_VCI; }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 418 "../grammar.y"
    { (yyval.blk).b = gen_atmfield_code((yyvsp[(0) - (2)].blk).atmfieldtype, (u_int)(yyvsp[(2) - (2)].i), (u_int)(yyvsp[(1) - (2)].i), 0); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 419 "../grammar.y"
    { (yyval.blk).b = gen_atmfield_code((yyvsp[(0) - (2)].blk).atmfieldtype, (u_int)(yyvsp[(2) - (2)].i), (u_int)(yyvsp[(1) - (2)].i), 1); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 420 "../grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (3)].blk).b; (yyval.blk).q = qerr; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 422 "../grammar.y"
    {
	(yyval.blk).atmfieldtype = (yyvsp[(0) - (1)].blk).atmfieldtype;
	if ((yyval.blk).atmfieldtype == A_VPI ||
	    (yyval.blk).atmfieldtype == A_VCI)
		(yyval.blk).b = gen_atmfield_code((yyval.blk).atmfieldtype, (u_int) (yyvsp[(1) - (1)].i), BPF_JEQ, 0);
	}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 430 "../grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); }
    break;



/* Line 1806 of yacc.c  */
#line 3066 "y.tab.c"
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



/* Line 2067 of yacc.c  */
#line 432 "../grammar.y"


