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

/* Line 2068 of yacc.c  */
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



/* Line 2068 of yacc.c  */
#line 245 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE pcap_lval;


