/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0

/* Substitute the type names.  */
#define YYSTYPE         YYCHPL_STYPE
#define YYLTYPE         YYCHPL_LTYPE
/* Substitute the variable and function names.  */
#define yypush_parse    yychpl_push_parse
#define yypstate_new    yychpl_pstate_new
#define yypstate_clear  yychpl_pstate_clear
#define yypstate_delete yychpl_pstate_delete
#define yypstate        yychpl_pstate
#define yylex           yychpl_lex
#define yyerror         yychpl_error
#define yydebug         yychpl_debug
#define yynerrs         yychpl_nerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison-chpl-lib.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENT = 3,                     /* TIDENT  */
  YYSYMBOL_TQUERIEDIDENT = 4,              /* TQUERIEDIDENT  */
  YYSYMBOL_INTLITERAL = 5,                 /* INTLITERAL  */
  YYSYMBOL_REALLITERAL = 6,                /* REALLITERAL  */
  YYSYMBOL_IMAGLITERAL = 7,                /* IMAGLITERAL  */
  YYSYMBOL_STRINGLITERAL = 8,              /* STRINGLITERAL  */
  YYSYMBOL_BYTESLITERAL = 9,               /* BYTESLITERAL  */
  YYSYMBOL_CSTRINGLITERAL = 10,            /* CSTRINGLITERAL  */
  YYSYMBOL_EXTERNCODE = 11,                /* EXTERNCODE  */
  YYSYMBOL_TALIGN = 12,                    /* TALIGN  */
  YYSYMBOL_TAS = 13,                       /* TAS  */
  YYSYMBOL_TATOMIC = 14,                   /* TATOMIC  */
  YYSYMBOL_TBEGIN = 15,                    /* TBEGIN  */
  YYSYMBOL_TBREAK = 16,                    /* TBREAK  */
  YYSYMBOL_TBOOL = 17,                     /* TBOOL  */
  YYSYMBOL_TBORROWED = 18,                 /* TBORROWED  */
  YYSYMBOL_TBY = 19,                       /* TBY  */
  YYSYMBOL_TBYTES = 20,                    /* TBYTES  */
  YYSYMBOL_TCATCH = 21,                    /* TCATCH  */
  YYSYMBOL_TCLASS = 22,                    /* TCLASS  */
  YYSYMBOL_TCOBEGIN = 23,                  /* TCOBEGIN  */
  YYSYMBOL_TCOFORALL = 24,                 /* TCOFORALL  */
  YYSYMBOL_TCOMPLEX = 25,                  /* TCOMPLEX  */
  YYSYMBOL_TCONFIG = 26,                   /* TCONFIG  */
  YYSYMBOL_TCONST = 27,                    /* TCONST  */
  YYSYMBOL_TCONTINUE = 28,                 /* TCONTINUE  */
  YYSYMBOL_TDEFER = 29,                    /* TDEFER  */
  YYSYMBOL_TDELETE = 30,                   /* TDELETE  */
  YYSYMBOL_TDMAPPED = 31,                  /* TDMAPPED  */
  YYSYMBOL_TDO = 32,                       /* TDO  */
  YYSYMBOL_TDOMAIN = 33,                   /* TDOMAIN  */
  YYSYMBOL_TELSE = 34,                     /* TELSE  */
  YYSYMBOL_TENUM = 35,                     /* TENUM  */
  YYSYMBOL_TEXCEPT = 36,                   /* TEXCEPT  */
  YYSYMBOL_TEXPORT = 37,                   /* TEXPORT  */
  YYSYMBOL_TEXTERN = 38,                   /* TEXTERN  */
  YYSYMBOL_TFALSE = 39,                    /* TFALSE  */
  YYSYMBOL_TFOR = 40,                      /* TFOR  */
  YYSYMBOL_TFORALL = 41,                   /* TFORALL  */
  YYSYMBOL_TFOREACH = 42,                  /* TFOREACH  */
  YYSYMBOL_TFORWARDING = 43,               /* TFORWARDING  */
  YYSYMBOL_TIF = 44,                       /* TIF  */
  YYSYMBOL_TIMAG = 45,                     /* TIMAG  */
  YYSYMBOL_TIMPORT = 46,                   /* TIMPORT  */
  YYSYMBOL_TIN = 47,                       /* TIN  */
  YYSYMBOL_TINCLUDE = 48,                  /* TINCLUDE  */
  YYSYMBOL_TINDEX = 49,                    /* TINDEX  */
  YYSYMBOL_TINLINE = 50,                   /* TINLINE  */
  YYSYMBOL_TINOUT = 51,                    /* TINOUT  */
  YYSYMBOL_TINT = 52,                      /* TINT  */
  YYSYMBOL_TITER = 53,                     /* TITER  */
  YYSYMBOL_TINITEQUALS = 54,               /* TINITEQUALS  */
  YYSYMBOL_TIMPLEMENTS = 55,               /* TIMPLEMENTS  */
  YYSYMBOL_TINTERFACE = 56,                /* TINTERFACE  */
  YYSYMBOL_TLABEL = 57,                    /* TLABEL  */
  YYSYMBOL_TLAMBDA = 58,                   /* TLAMBDA  */
  YYSYMBOL_TLET = 59,                      /* TLET  */
  YYSYMBOL_TLIFETIME = 60,                 /* TLIFETIME  */
  YYSYMBOL_TLOCAL = 61,                    /* TLOCAL  */
  YYSYMBOL_TLOCALE = 62,                   /* TLOCALE  */
  YYSYMBOL_TMANAGE = 63,                   /* TMANAGE  */
  YYSYMBOL_TMINUSMINUS = 64,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 65,                   /* TMODULE  */
  YYSYMBOL_TNEW = 66,                      /* TNEW  */
  YYSYMBOL_TNIL = 67,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 68,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 69,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 70,                  /* TNOTHING  */
  YYSYMBOL_TON = 71,                       /* TON  */
  YYSYMBOL_TONLY = 72,                     /* TONLY  */
  YYSYMBOL_TOPERATOR = 73,                 /* TOPERATOR  */
  YYSYMBOL_TOTHERWISE = 74,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 75,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 76,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 77,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 78,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 79,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 80,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 81,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 82,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 83,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 84,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 85,                   /* TPUBLIC  */
  YYSYMBOL_TPROCLP = 86,                   /* TPROCLP  */
  YYSYMBOL_TREAL = 87,                     /* TREAL  */
  YYSYMBOL_TRECORD = 88,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 89,                   /* TREDUCE  */
  YYSYMBOL_TREF = 90,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 91,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 92,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 93,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 94,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 95,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 96,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 97,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 98,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 99,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 100,               /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 101,                    /* TSYNC  */
  YYSYMBOL_TTHEN = 102,                    /* TTHEN  */
  YYSYMBOL_TTHIS = 103,                    /* TTHIS  */
  YYSYMBOL_TTHROW = 104,                   /* TTHROW  */
  YYSYMBOL_TTHROWS = 105,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 106,                    /* TTRUE  */
  YYSYMBOL_TTRY = 107,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 108,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 109,                    /* TTYPE  */
  YYSYMBOL_TUINT = 110,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 111,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 112,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 113,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 114,                     /* TUSE  */
  YYSYMBOL_TVAR = 115,                     /* TVAR  */
  YYSYMBOL_TVOID = 116,                    /* TVOID  */
  YYSYMBOL_TWHEN = 117,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 118,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 119,                   /* TWHILE  */
  YYSYMBOL_TWITH = 120,                    /* TWITH  */
  YYSYMBOL_TYIELD = 121,                   /* TYIELD  */
  YYSYMBOL_TZIP = 122,                     /* TZIP  */
  YYSYMBOL_TALIAS = 123,                   /* TALIAS  */
  YYSYMBOL_TAND = 124,                     /* TAND  */
  YYSYMBOL_TASSIGN = 125,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 126,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 127,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 128,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 129,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 130,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 131,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 132,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 133,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 134,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 135,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 136,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 137,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 138,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 139,                /* TASSIGNSR  */
  YYSYMBOL_TATMARK = 140,                  /* TATMARK  */
  YYSYMBOL_TBANG = 141,                    /* TBANG  */
  YYSYMBOL_TBAND = 142,                    /* TBAND  */
  YYSYMBOL_TBNOT = 143,                    /* TBNOT  */
  YYSYMBOL_TBOR = 144,                     /* TBOR  */
  YYSYMBOL_TBXOR = 145,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 146,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 147,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 148,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 149,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 150,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 151,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 152,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 153,                     /* TEXP  */
  YYSYMBOL_TGREATER = 154,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 155,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 156,                    /* THASH  */
  YYSYMBOL_TLESS = 157,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 158,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 159,                   /* TMINUS  */
  YYSYMBOL_TMOD = 160,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 161,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 162,                      /* TOR  */
  YYSYMBOL_TPLUS = 163,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 164,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 165,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 166,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 167,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 168,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 169,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 170,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 171,                    /* TRCBR  */
  YYSYMBOL_TLP = 172,                      /* TLP  */
  YYSYMBOL_TRP = 173,                      /* TRP  */
  YYSYMBOL_TLSBR = 174,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 175,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 176,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 177,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 178,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 179,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 180,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 181,                 /* $accept  */
  YYSYMBOL_program = 182,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 183,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 184,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 185,                /* pragma_ls  */
  YYSYMBOL_stmt = 186,                     /* stmt  */
  YYSYMBOL_stmt_base = 187,                /* stmt_base  */
  YYSYMBOL_tryable_stmt = 188,             /* tryable_stmt  */
  YYSYMBOL_decl_base = 189,                /* decl_base  */
  YYSYMBOL_collect_attributes = 190,       /* collect_attributes  */
  YYSYMBOL_attribute_receiver = 191,       /* attribute_receiver  */
  YYSYMBOL_attribute_group = 192,          /* attribute_group  */
  YYSYMBOL_attribute_decl_stmt_ls = 193,   /* attribute_decl_stmt_ls  */
  YYSYMBOL_attribute_decl_stmt = 194,      /* attribute_decl_stmt  */
  YYSYMBOL_attribute_decl_begin = 195,     /* attribute_decl_begin  */
  YYSYMBOL_opt_attribute_decl_toolspace = 196, /* opt_attribute_decl_toolspace  */
  YYSYMBOL_opt_attribute_actuals = 197,    /* opt_attribute_actuals  */
  YYSYMBOL_attribute_actuals_ls = 198,     /* attribute_actuals_ls  */
  YYSYMBOL_attribute_actual = 199,         /* attribute_actual  */
  YYSYMBOL_module_decl_start = 200,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 201,         /* module_decl_stmt  */
  YYSYMBOL_opt_access_control = 202,       /* opt_access_control  */
  YYSYMBOL_opt_prototype = 203,            /* opt_prototype  */
  YYSYMBOL_include_module_stmt = 204,      /* include_module_stmt  */
  YYSYMBOL_block_stmt_body = 205,          /* block_stmt_body  */
  YYSYMBOL_block_stmt = 206,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 207,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 208,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 209,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 210,              /* opt_only_ls  */
  YYSYMBOL_use_stmt = 211,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 212,              /* import_stmt  */
  YYSYMBOL_import_internal_type_ident = 213, /* import_internal_type_ident  */
  YYSYMBOL_import_expr = 214,              /* import_expr  */
  YYSYMBOL_import_ls = 215,                /* import_ls  */
  YYSYMBOL_require_stmt = 216,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 217,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 218,          /* opt_label_ident  */
  YYSYMBOL_reserved_word_ident = 219,      /* reserved_word_ident  */
  YYSYMBOL_ident_def = 220,                /* ident_def  */
  YYSYMBOL_ident_use = 221,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 222,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 223,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 224,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 225,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 226,              /* return_stmt  */
  YYSYMBOL_class_level_stmt = 227,         /* class_level_stmt  */
  YYSYMBOL_228_1 = 228,                    /* $@1  */
  YYSYMBOL_229_2 = 229,                    /* $@2  */
  YYSYMBOL_inner_class_level_stmt = 230,   /* inner_class_level_stmt  */
  YYSYMBOL_forwarding_decl_stmt = 231,     /* forwarding_decl_stmt  */
  YYSYMBOL_forwarding_decl_start = 232,    /* forwarding_decl_start  */
  YYSYMBOL_extern_or_export = 233,         /* extern_or_export  */
  YYSYMBOL_extern_export_decl_stmt_start = 234, /* extern_export_decl_stmt_start  */
  YYSYMBOL_extern_export_decl_stmt = 235,  /* extern_export_decl_stmt  */
  YYSYMBOL_236_3 = 236,                    /* $@3  */
  YYSYMBOL_237_4 = 237,                    /* $@4  */
  YYSYMBOL_extern_block_stmt = 238,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 239,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 240,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 241,                  /* if_stmt  */
  YYSYMBOL_ifvar = 242,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 243,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 244,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 245,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 246,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 247, /* implements_type_error_ident  */
  YYSYMBOL_unary_implements_stmt = 248,    /* unary_implements_stmt  */
  YYSYMBOL_binary_implements_stmt = 249,   /* binary_implements_stmt  */
  YYSYMBOL_ifc_constraint = 250,           /* ifc_constraint  */
  YYSYMBOL_try_stmt = 251,                 /* try_stmt  */
  YYSYMBOL_catch_expr_ls = 252,            /* catch_expr_ls  */
  YYSYMBOL_catch_expr = 253,               /* catch_expr  */
  YYSYMBOL_catch_expr_inner = 254,         /* catch_expr_inner  */
  YYSYMBOL_throw_stmt = 255,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 256,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 257,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 258,                /* when_stmt  */
  YYSYMBOL_manager_expr = 259,             /* manager_expr  */
  YYSYMBOL_manager_expr_ls = 260,          /* manager_expr_ls  */
  YYSYMBOL_manage_stmt = 261,              /* manage_stmt  */
  YYSYMBOL_class_decl_stmt = 262,          /* class_decl_stmt  */
  YYSYMBOL_class_start = 263,              /* class_start  */
  YYSYMBOL_class_tag = 264,                /* class_tag  */
  YYSYMBOL_opt_inherit = 265,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 266,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 267,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header_lcbr = 268,         /* enum_header_lcbr  */
  YYSYMBOL_enum_ls = 269,                  /* enum_ls  */
  YYSYMBOL_270_5 = 270,                    /* $@5  */
  YYSYMBOL_271_6 = 271,                    /* $@6  */
  YYSYMBOL_enum_item = 272,                /* enum_item  */
  YYSYMBOL_lambda_decl_start = 273,        /* lambda_decl_start  */
  YYSYMBOL_lambda_decl_expr = 274,         /* lambda_decl_expr  */
  YYSYMBOL_275_7 = 275,                    /* $@7  */
  YYSYMBOL_linkage_spec_empty = 276,       /* linkage_spec_empty  */
  YYSYMBOL_linkage_spec = 277,             /* linkage_spec  */
  YYSYMBOL_opt_fn_type_formal_ls = 278,    /* opt_fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal_ls = 279,        /* fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal = 280,           /* fn_type_formal  */
  YYSYMBOL_opt_fn_type_ret_type = 281,     /* opt_fn_type_ret_type  */
  YYSYMBOL_fn_type = 282,                  /* fn_type  */
  YYSYMBOL_fn_expr = 283,                  /* fn_expr  */
  YYSYMBOL_284_8 = 284,                    /* $@8  */
  YYSYMBOL_285_9 = 285,                    /* $@9  */
  YYSYMBOL_fn_decl_stmt_complete = 286,    /* fn_decl_stmt_complete  */
  YYSYMBOL_fn_decl_stmt = 287,             /* fn_decl_stmt  */
  YYSYMBOL_288_10 = 288,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 289,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_stmt_start = 290,       /* fn_decl_stmt_start  */
  YYSYMBOL_fn_decl_receiver_expr = 291,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 292,                 /* fn_ident  */
  YYSYMBOL_op_ident = 293,                 /* op_ident  */
  YYSYMBOL_assignop_ident = 294,           /* assignop_ident  */
  YYSYMBOL_all_op_name = 295,              /* all_op_name  */
  YYSYMBOL_formal_var_arg_expr = 296,      /* formal_var_arg_expr  */
  YYSYMBOL_opt_formal_ls = 297,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 298,            /* req_formal_ls  */
  YYSYMBOL_formal_ls_inner = 299,          /* formal_ls_inner  */
  YYSYMBOL_formal_ls = 300,                /* formal_ls  */
  YYSYMBOL_formal = 301,                   /* formal  */
  YYSYMBOL_formal_ident_def = 302,         /* formal_ident_def  */
  YYSYMBOL_named_formal = 303,             /* named_formal  */
  YYSYMBOL_opt_formal_intent_tag = 304,    /* opt_formal_intent_tag  */
  YYSYMBOL_required_intent_tag = 305,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 306,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 307,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 308,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 309,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 310,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 311,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 312,               /* query_expr  */
  YYSYMBOL_opt_lifetime_where = 313,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 314, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 315,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 316,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 317,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_start = 318, /* type_alias_decl_stmt_start  */
  YYSYMBOL_type_alias_decl_stmt_inner_ls = 319, /* type_alias_decl_stmt_inner_ls  */
  YYSYMBOL_type_alias_decl_stmt_inner = 320, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 321,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 322,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 323,            /* var_decl_stmt  */
  YYSYMBOL_324_11 = 324,                   /* $@11  */
  YYSYMBOL_var_decl_stmt_inner_ls = 325,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 326,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 327, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 328, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 329,            /* opt_init_expr  */
  YYSYMBOL_formal_or_ret_type_expr = 330,  /* formal_or_ret_type_expr  */
  YYSYMBOL_ret_type = 331,                 /* ret_type  */
  YYSYMBOL_colon_ret_type = 332,           /* colon_ret_type  */
  YYSYMBOL_opt_ret_type = 333,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 334,                 /* opt_type  */
  YYSYMBOL_formal_type = 335,              /* formal_type  */
  YYSYMBOL_colon_formal_type = 336,        /* colon_formal_type  */
  YYSYMBOL_opt_colon_formal_type = 337,    /* opt_colon_formal_type  */
  YYSYMBOL_expr_ls = 338,                  /* expr_ls  */
  YYSYMBOL_tuple_component = 339,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 340,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 341,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 342,                /* actual_ls  */
  YYSYMBOL_actual_expr = 343,              /* actual_expr  */
  YYSYMBOL_ident_expr = 344,               /* ident_expr  */
  YYSYMBOL_sub_type_level_expr = 345,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 346,                 /* for_expr  */
  YYSYMBOL_bracket_loop_expr = 347,        /* bracket_loop_expr  */
  YYSYMBOL_cond_expr = 348,                /* cond_expr  */
  YYSYMBOL_nil_expr = 349,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 350,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 351,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 352,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 353,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 354,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 355,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 356,              /* intent_expr  */
  YYSYMBOL_task_var_prefix = 357,          /* task_var_prefix  */
  YYSYMBOL_new_maybe_decorated = 358,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 359,                 /* new_expr  */
  YYSYMBOL_let_expr = 360,                 /* let_expr  */
  YYSYMBOL_range_literal_expr = 361,       /* range_literal_expr  */
  YYSYMBOL_cast_expr = 362,                /* cast_expr  */
  YYSYMBOL_tuple_expand_expr = 363,        /* tuple_expand_expr  */
  YYSYMBOL_super_expr = 364,               /* super_expr  */
  YYSYMBOL_expr = 365,                     /* expr  */
  YYSYMBOL_opt_expr = 366,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 367,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 368,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 369,           /* call_base_expr  */
  YYSYMBOL_call_expr = 370,                /* call_expr  */
  YYSYMBOL_dot_expr = 371,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 372,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 373,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 374,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 375,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 376,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 377,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 378,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 379,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 380,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 381       /* reduce_scan_op_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 328 "chpl.ypp"

  // include the definition of methods for ParserContext
  #include "ParserContextImpl.h"
  // include helper macros for use in writing productions
  #include "parser-help.h"
  // include implementation of error logging hook
  #include "parser-yyerror.h"

#line 505 "bison-chpl-lib.cpp"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL \
             && defined YYCHPL_STYPE_IS_TRIVIAL && YYCHPL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   19203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  181
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  201
/* YYNRULES -- Number of rules.  */
#define YYNRULES  744
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1320

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   435


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
     175,   176,   177,   178,   179,   180
};

#if YYCHPL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   636,   636,   640,   641,   646,   647,   655,   659,   669,
     674,   681,   682,   683,   684,   685,   686,   687,   688,   690,
     691,   692,   705,   706,   707,   716,   725,   729,   736,   744,
     745,   746,   747,   748,   749,   750,   751,   765,   780,   788,
     800,   811,   823,   835,   846,   862,   863,   867,   877,   878,
     879,   883,   887,   888,   892,   896,   903,   915,   923,   926,
     936,   938,   945,   950,   959,   963,   983,   998,  1013,  1029,
    1030,  1032,  1037,  1038,  1043,  1061,  1065,  1069,  1080,  1099,
    1100,  1104,  1108,  1112,  1117,  1121,  1125,  1135,  1140,  1146,
    1153,  1158,  1165,  1176,  1177,  1181,  1186,  1194,  1203,  1213,
    1221,  1230,  1243,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1279,  1283,  1288,  1293,  1299,  1308,  1309,  1313,  1322,  1326,
    1330,  1334,  1338,  1342,  1351,  1352,  1356,  1357,  1358,  1359,
    1360,  1364,  1365,  1377,  1378,  1383,  1384,  1385,  1386,  1387,
    1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,
    1398,  1399,  1400,  1401,  1405,  1406,  1407,  1408,  1409,  1410,
    1411,  1412,  1413,  1414,  1415,  1416,  1423,  1424,  1425,  1426,
    1430,  1431,  1435,  1442,  1452,  1456,  1462,  1462,  1468,  1468,
    1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,  1488,  1493,
    1498,  1503,  1510,  1518,  1519,  1523,  1532,  1538,  1546,  1565,
    1564,  1574,  1573,  1586,  1593,  1613,  1628,  1643,  1647,  1651,
    1655,  1659,  1663,  1667,  1671,  1692,  1696,  1700,  1704,  1708,
    1712,  1716,  1720,  1724,  1728,  1732,  1736,  1740,  1744,  1748,
    1752,  1756,  1760,  1764,  1768,  1772,  1776,  1780,  1785,  1793,
    1802,  1806,  1810,  1814,  1818,  1822,  1826,  1830,  1834,  1839,
    1844,  1849,  1857,  1872,  1890,  1894,  1901,  1902,  1907,  1912,
    1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1933,  1934,  1935,  1936,  1945,  1946,  1950,  1954,
    1961,  1965,  1972,  1976,  1980,  1987,  1991,  1995,  1999,  2006,
    2007,  2011,  2015,  2019,  2026,  2039,  2055,  2063,  2067,  2076,
    2077,  2081,  2085,  2090,  2098,  2103,  2107,  2114,  2115,  2119,
    2128,  2133,  2144,  2151,  2152,  2153,  2157,  2158,  2162,  2166,
    2170,  2174,  2178,  2185,  2202,  2215,  2222,  2227,  2234,  2233,
    2243,  2249,  2248,  2263,  2270,  2282,  2300,  2297,  2325,  2329,
    2330,  2332,  2337,  2338,  2342,  2343,  2347,  2350,  2352,  2357,
    2358,  2369,  2389,  2388,  2404,  2403,  2421,  2431,  2428,  2462,
    2470,  2478,  2489,  2500,  2509,  2524,  2525,  2529,  2530,  2531,
    2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,  2548,  2549,
    2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,  2559,
    2560,  2561,  2562,  2563,  2564,  2568,  2569,  2570,  2571,  2572,
    2573,  2574,  2575,  2576,  2577,  2578,  2579,  2584,  2585,  2589,
    2590,  2594,  2595,  2599,  2600,  2604,  2605,  2609,  2610,  2614,
    2618,  2619,  2623,  2627,  2632,  2637,  2642,  2647,  2655,  2659,
    2667,  2668,  2669,  2670,  2671,  2672,  2673,  2674,  2675,  2679,
    2680,  2681,  2682,  2683,  2684,  2688,  2689,  2690,  2694,  2695,
    2696,  2697,  2698,  2699,  2700,  2704,  2705,  2708,  2709,  2713,
    2714,  2715,  2719,  2724,  2725,  2727,  2729,  2731,  2736,  2738,
    2743,  2745,  2747,  2749,  2751,  2753,  2755,  2760,  2761,  2765,
    2774,  2778,  2786,  2790,  2797,  2818,  2819,  2824,  2825,  2826,
    2827,  2828,  2833,  2832,  2841,  2849,  2853,  2860,  2878,  2897,
    2901,  2905,  2912,  2914,  2916,  2923,  2924,  2925,  2929,  2933,
    2934,  2935,  2939,  2940,  2944,  2945,  2949,  2950,  2951,  2952,
    2956,  2957,  2961,  2965,  2966,  2972,  2973,  2977,  2978,  2982,
    2986,  2993,  2994,  2998,  3003,  3012,  3013,  3017,  3018,  3025,
    3026,  3027,  3028,  3029,  3030,  3032,  3034,  3036,  3038,  3044,
    3046,  3049,  3051,  3053,  3055,  3057,  3059,  3061,  3063,  3065,
    3067,  3072,  3083,  3094,  3104,  3120,  3136,  3152,  3161,  3170,
    3178,  3192,  3206,  3223,  3227,  3231,  3235,  3239,  3243,  3247,
    3254,  3272,  3280,  3281,  3282,  3283,  3284,  3285,  3286,  3290,
    3291,  3295,  3304,  3305,  3309,  3318,  3319,  3323,  3337,  3341,
    3348,  3349,  3350,  3351,  3352,  3353,  3357,  3359,  3361,  3363,
    3365,  3371,  3378,  3390,  3402,  3415,  3432,  3439,  3444,  3449,
    3454,  3460,  3466,  3496,  3503,  3510,  3511,  3515,  3517,  3518,
    3520,  3522,  3523,  3524,  3525,  3528,  3529,  3530,  3531,  3532,
    3533,  3534,  3535,  3536,  3540,  3541,  3545,  3546,  3547,  3551,
    3552,  3553,  3554,  3563,  3564,  3567,  3568,  3569,  3573,  3585,
    3597,  3604,  3606,  3608,  3610,  3612,  3618,  3631,  3632,  3636,
    3640,  3647,  3648,  3652,  3653,  3657,  3658,  3659,  3660,  3661,
    3662,  3663,  3664,  3669,  3674,  3678,  3682,  3686,  3694,  3699,
    3708,  3709,  3710,  3711,  3712,  3713,  3714,  3715,  3716,  3717,
    3718,  3719,  3720,  3721,  3722,  3723,  3724,  3725,  3726,  3727,
    3728,  3729,  3730,  3734,  3735,  3736,  3737,  3738,  3739,  3742,
    3746,  3750,  3754,  3758,  3765,  3769,  3773,  3777,  3785,  3786,
    3787,  3788,  3789,  3790,  3791
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYCHPL_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENT",
  "TQUERIEDIDENT", "INTLITERAL", "REALLITERAL", "IMAGLITERAL",
  "STRINGLITERAL", "BYTESLITERAL", "CSTRINGLITERAL", "EXTERNCODE",
  "TALIGN", "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBOOL", "TBORROWED",
  "TBY", "TBYTES", "TCATCH", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCOMPLEX",
  "TCONFIG", "TCONST", "TCONTINUE", "TDEFER", "TDELETE", "TDMAPPED", "TDO",
  "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE",
  "TFOR", "TFORALL", "TFOREACH", "TFORWARDING", "TIF", "TIMAG", "TIMPORT",
  "TIN", "TINCLUDE", "TINDEX", "TINLINE", "TINOUT", "TINT", "TITER",
  "TINITEQUALS", "TIMPLEMENTS", "TINTERFACE", "TLABEL", "TLAMBDA", "TLET",
  "TLIFETIME", "TLOCAL", "TLOCALE", "TMANAGE", "TMINUSMINUS", "TMODULE",
  "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY",
  "TOPERATOR", "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM",
  "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE",
  "TPUBLIC", "TPROCLP", "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE",
  "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSHARED", "TSINGLE",
  "TSPARSE", "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW",
  "TTHROWS", "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE",
  "TUNION", "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN", "TWHERE",
  "TWHILE", "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN",
  "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TATMARK", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR",
  "TCOLON", "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL",
  "TEXP", "TGREATER", "TGREATEREQUAL", "THASH", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "stmt_base", "tryable_stmt",
  "decl_base", "collect_attributes", "attribute_receiver",
  "attribute_group", "attribute_decl_stmt_ls", "attribute_decl_stmt",
  "attribute_decl_begin", "opt_attribute_decl_toolspace",
  "opt_attribute_actuals", "attribute_actuals_ls", "attribute_actual",
  "module_decl_start", "module_decl_stmt", "opt_access_control",
  "opt_prototype", "include_module_stmt", "block_stmt_body", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "use_stmt",
  "import_stmt", "import_internal_type_ident", "import_expr", "import_ls",
  "require_stmt", "assignment_stmt", "opt_label_ident",
  "reserved_word_ident", "ident_def", "ident_use",
  "internal_type_ident_def", "scalar_type", "reserved_type_ident_use",
  "do_stmt", "return_stmt", "class_level_stmt", "$@1", "$@2",
  "inner_class_level_stmt", "forwarding_decl_stmt",
  "forwarding_decl_start", "extern_or_export",
  "extern_export_decl_stmt_start", "extern_export_decl_stmt", "$@3", "$@4",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "ifvar", "interface_stmt", "ifc_formal_ls", "ifc_formal",
  "implements_type_ident", "implements_type_error_ident",
  "unary_implements_stmt", "binary_implements_stmt", "ifc_constraint",
  "try_stmt", "catch_expr_ls", "catch_expr", "catch_expr_inner",
  "throw_stmt", "select_stmt", "when_stmt_ls", "when_stmt", "manager_expr",
  "manager_expr_ls", "manage_stmt", "class_decl_stmt", "class_start",
  "class_tag", "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_header_lcbr", "enum_ls", "$@5", "$@6", "enum_item",
  "lambda_decl_start", "lambda_decl_expr", "$@7", "linkage_spec_empty",
  "linkage_spec", "opt_fn_type_formal_ls", "fn_type_formal_ls",
  "fn_type_formal", "opt_fn_type_ret_type", "fn_type", "fn_expr", "$@8",
  "$@9", "fn_decl_stmt_complete", "fn_decl_stmt", "$@10",
  "fn_decl_stmt_inner", "fn_decl_stmt_start", "fn_decl_receiver_expr",
  "fn_ident", "op_ident", "assignop_ident", "all_op_name",
  "formal_var_arg_expr", "opt_formal_ls", "req_formal_ls",
  "formal_ls_inner", "formal_ls", "formal", "formal_ident_def",
  "named_formal", "opt_formal_intent_tag", "required_intent_tag",
  "opt_this_intent_tag", "proc_iter_or_op", "opt_ret_tag",
  "opt_throws_error", "opt_function_body_stmt", "function_body_stmt",
  "query_expr", "opt_lifetime_where", "lifetime_components_expr",
  "lifetime_expr", "lifetime_ident", "type_alias_decl_stmt",
  "type_alias_decl_stmt_start", "type_alias_decl_stmt_inner_ls",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_type",
  "var_decl_stmt", "$@11", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "formal_or_ret_type_expr", "ret_type", "colon_ret_type",
  "opt_ret_type", "opt_type", "formal_type", "colon_formal_type",
  "opt_colon_formal_type", "expr_ls", "tuple_component", "tuple_expr_ls",
  "opt_actual_ls", "actual_ls", "actual_expr", "ident_expr",
  "sub_type_level_expr", "for_expr", "bracket_loop_expr", "cond_expr",
  "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "task_var_prefix",
  "new_maybe_decorated", "new_expr", "let_expr", "range_literal_expr",
  "cast_expr", "tuple_expand_expr", "super_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "call_base_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "str_bytes_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-745)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1136,   100,  4194, -1136,   120,   194, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, 11544,   173,   330,   259, 13945,   288, 18957,
     173, 11544,   299,   301,   277,   330,  5594, 11544,  5594,   250,
   19032, -1136,   450,   428,  9094,  9969,  9969, -1136,  9269,   433,
     381,   297, -1136,   436, 19032, 19032, 19032, -1136,  3487, 10144,
     444, 11544, 11544,   164, -1136,   474,   489, 11544, -1136, 13945,
   -1136, 11544,   502,   365,   320,   414, 13293,   513, 19087, -1136,
   11544,  8569, 11544, 10144, 13945, 11544,   471,   524,   410,  5594,
     539, 11544,   544,  7694,  7694, -1136,   548, -1136, 13945, -1136,
     553,  9269,  9444, -1136,   611, 11544, -1136, 11544, -1136, -1136,
   13773, 11544, -1136, 11544, -1136, -1136, -1136,  4544,  7869,  9619,
   11544, -1136,  5244, -1136, -1136, -1136, -1136, 18544,   475, -1136,
      34,   457, -1136,    43, -1136, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136,  3942, -1136, 10319,
   -1136, -1136, -1136, -1136, -1136,   565, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136,   487, 19032, -1136, 18659,   456,
     190, -1136,   238, -1136, -1136, -1136,   455,   298, -1136, -1136,
   19032,  3487, -1136,   483,   472, -1136, -1136, -1136,   490,   496,
   11544,   501,   506, -1136, -1136, -1136, 18237,  3637,   421,   509,
     527, -1136, -1136,   452, -1136, -1136, -1136, -1136, -1136,   445,
   -1136, -1136, -1136, 11544, 11544, 11544, 19032, -1136, 11544, 11544,
   10494,   594,   465, -1136, -1136, -1136, -1136, 18237,   482, -1136,
   -1136,   488,  5594, -1136, -1136,   541,   117,   531, 15657, -1136,
     230, -1136,   546, -1136,   150, 18237,   564,  9444, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136,   542, -1136, -1136, 19032,   543,    76,  2099,
      19, 15093,    19, 15169, 19032, 19032,   -17,  3698, -1136, -1136,
     630,  9444,   246,   495,  5594,  1473,   104,    25, -1136,  5594,
   -1136, -1136, 15733, -1136,    91, 16321,   691, -1136,   545,   549,
   -1136, 15733,   117,   691, -1136,  9444,  4053,  4053,   186,     9,
   -1136,    54, -1136, -1136, -1136, -1136, 11544, 11544, -1136,   283,
   -1136,   547,   569, -1136, -1136,  3290,   577, -1136, -1136, 18237,
     188, 11544, 11544, -1136,   -22, -1136, -1136, 18237,   560, 16366,
   -1136, 15733,   117, 18237,   552,  9444, -1136, 18237, 16473, -1136,
   -1136, -1136, -1136,   117,    76, 15733,   562, -1136,   470,   470,
    1284,   691,   691,   255, -1136, -1136,  4719,   115, -1136, 11544,
     -56,   126, -1136, 14088,   -39,    18, 16519,   -32,  1284,   720,
   -1136, -1136, 19032, -1136, 19032, -1136,  4544, -1136,    79, -1136,
     630, -1136, -1136, -1136,   726,   561,  4894, 11544, -1136, 11544,
     666, -1136, -1136, 15337,    58,   487, 18237,   559, 19032, 11544,
     566, -1136,   563, 18746,   610,   175, -1136,    98,   455, -1136,
   -1136, -1136, -1136,   649, -1136, -1136, -1136, -1136,    82,   650,
   -1136, -1136, -1136, 13603,   616,   224, -1136,   256,   516, -1136,
     593, 11544, 11544, 11544,  9969,  9969, 11544,   519, 11544, 11544,
   11544, 11544, 11544,   269, 13773, 11544, 11544, 11544, 11544, 11544,
   11544, 11544, 11544, 11544, 11544, 11544, 11544, 11544, 11544, 11544,
   11544,   675, -1136, -1136, -1136, -1136, -1136,  9444,  9444, -1136,
   -1136, -1136, -1136,  9444, -1136, -1136,  9444,  9444,  9444,  9444,
    9969,  9969, 15809, 15885, 16560,   572,     5, 19032,  8044, -1136,
   -1136, -1136,  9969,    76,  3487, -1136, 11544, -1136, 11544,   620,
     574,   612, -1136, -1136, -1136,   710, 11544, -1136,  5769,  9969,
   -1136,   586, -1136,    76,  5944,  9969, -1136,    76, -1136,    76,
    9969, -1136,    76,   635,   638,  5594,   731,  5594, -1136,   734,
   11544,   704,   597, -1136,  9444, 19032, -1136, -1136, -1136,  1473,
   -1136, -1136,   127, -1136, 11719,   646, 11544,  3487, -1136, -1136,
   11544, -1136, 18801, 11544, 11544, -1136,   600, -1136, -1136, -1136,
   -1136, 18902, -1136,   455, 13467, -1136,  1473, -1136,   632, 11719,
   -1136, 18237, 18237, -1136,   531, -1136,    44, -1136,  9444,   606,
   -1136,   761,   761, -1136, -1136, -1136, -1136, -1136, -1136, 10669,
   -1136, 16676,  8219, -1136,  8394, -1136, 18237,  5594,   613,  9969,
   10844,  4369,   614, 11544, 11019, -1136, -1136,   247,  9094,  9969,
    9969, -1136,   636,  8744, -1136,   331, -1136,  5069, -1136,   258,
   16717,   339, 15429, 19032,  7519,  7519, -1136,   487,   617, -1136,
     230, -1136,   360,   639,  2341, -1136, -1136, 11544,   123, -1136,
   -1136,   134, -1136, -1136,   109, -1136, -1136,  7344, -1136,   686,
   -1136,   622,   647, -1136,   648, -1136,   651,   652,   653,   654,
   -1136,   655,   656,   657,   658,   659,   660,   661, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,
   11544,   671,   664,   622, -1136,   622, -1136, 11544, -1136, 19032,
   -1136, -1136, 13164, 13164,   504, -1136,   504, -1136,   504,  2762,
    1591,   249,  1300,   117,   470, -1136,   533, -1136, -1136, -1136,
   -1136, -1136,  1284,  1803,   504,   536,   536, 13164,   536,   536,
    1452,   470,  1803, 13338,  1452,   691,   691,   470,  1284,   633,
     634,   663,   665,   668,   669,   641,   640, -1136,   504, -1136,
     504, 11894,  9969, 12069,  9969, 11544,  9444,  9969, 14088,   623,
     198, -1136, -1136, -1136,   136, -1136,  1612, 18282,   446,   173,
   16762, -1136,   361, 18237, 16869,  9444, -1136,  9444, 11544,   151,
    9269, 18237,    84, 15961,  8044, -1136,  9269, 18237,   105,  2543,
   -1136, -1136,    19, 15505, -1136, 11544, 11544,   783,  5594,   785,
   16914,  5594, 16037, 19032, -1136,   166, -1136,   202, -1136,   204,
    1473,   104, -1136, 18237,  8919, -1136, 18237, -1136, -1136, -1136,
   19032, 16954, 17030, -1136,   632,   674, -1136,   210, 11719, -1136,
     131, -1136, 11544, -1136,   667,    94,   662, -1136,  3035, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136,  5594,   -28, 16113,
   -1136, -1136, 18237,  5594, 18237, -1136, 17106,  9444, 15581, 15245,
     112, -1136, -1136,   227, -1136, -1136, -1136, -1136, 11544, -1136,
      53, 14193, 11544, -1136, 11194,  7519,  7519, -1136, 11544,   453,
   11544,   484,   491, 11544,  9794,   492,   393, -1136, -1136, -1136,
   17146,   677,   678,   672, -1136, 19032,  3487, -1136,  9444,   676,
    3584, 18237, 19032,   475,   290, -1136,   686, -1136, -1136, -1136,
   -1136, -1136,    16,   128, -1136, 17192, -1136, 14352, -1136, -1136,
   18237, -1136,   673,   680, -1136, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, 11544,   790, 17298, 11544,   799, 17344,   240,   681,
   17384,  9444, -1136, -1136,  8044, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136,    39,  9969,  9969,
      76,    76, -1136, -1136, -1136, -1136, 15733, -1136, 14433,  6119,
   -1136,  6294, -1136,   254, -1136, 14513,  6469, -1136,    76,  6644,
   -1136,    76, -1136,    76, -1136,    76, 18237, 18237,  5594, -1136,
    5594, 11544, -1136,  5594,   802,   685,   687, 19032,   531, -1136,
   -1136,   646, -1136, -1136, -1136,   689,   690,   131, 11544,   686,
     632, -1136, 11544, -1136, -1136, 18237, -1136,  6819, 11544, -1136,
   -1136, -1136, 19032, -1136,   707,   531, -1136,  6994,   682,  7169,
     688, -1136, 11544,   267,  9969,  9969,  9969,  5594,  9444, -1136,
   -1136, -1136, -1136, -1136,   533, -1136, -1136, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,  7519,
   -1136, -1136, 17504,   212, 16205,   418,   699,  7519, -1136, 11544,
   -1136, -1136, 18425,   422,   423,   311, -1136, -1136, -1136, -1136,
   18611,  1223, -1136, -1136, 18746, -1136,    16,    68, 11544, -1136,
     719,   694, -1136,   622,   622, -1136, -1136, 17464, 12244, 12419,
   17580, 12594, 12769, -1136, 12944, 13119,   324, -1136,   646,   334,
     343, -1136, -1136, -1136,  5594,  9269, 18237,  9269, 18237,  8044,
   -1136,  5594,  9269, 18237, -1136,  9269, 18237, -1136, -1136, -1136,
   -1136, -1136, 18237,   834,  5594, -1136, -1136, -1136, -1136, -1136,
    9444,  9444, -1136, -1136, -1136, -1136,   131, 18237,  5594, -1136,
      97,   701, 11544, -1136,  9269, -1136, 18237,  5594,  9269, -1136,
   18237,  5594, 18237,   687,    76, 15733,    19, 15505,   -21, 16281,
   -1136,   179, 11369,  7519,  7519,  7519,  7519, -1136, -1136, -1136,
   17665, 18237, 18471, -1136, -1136, -1136,   711,  1223, -1136, -1136,
   -1136, -1136, -1136,    74, -1136,   -12, -1136,   518, 17741,    66,
   -1136, -1136, -1136, 11544, 11544, 11544, 11544, 11544, 11544, 11544,
   11544, -1136, -1136, 16914, 14593, 14673, -1136, 16914, 14753, 14833,
    5594, -1136,   709,   712, -1136, -1136,   564, -1136,   531, 18237,
   14913, -1136, 14993, -1136,  5594,  5594, -1136, -1136, 18237,   425,
     718,   427,   721, 11544, -1136, -1136, -1136,    70, -1136, 11544,
      68,    74,    74,    74,    74,    74,    74,    68,  5419, -1136,
   -1136, -1136, -1136, -1136, 17817, 17893, 17969, 18045, 18121, 18197,
    5594,  5594,  5594,  5594, -1136,   723,   724, -1136,  5594,  5594,
   -1136, -1136, -1136, -1136, 18237, -1136, 18237, -1136, -1136, -1136,
   -1136, -1136, -1136, -1136,   737, -1136, 11544, 11544, 11544, 11544,
   11544, 11544, 16914, 16914, 16914, 16914, -1136, -1136, 16914, 16914
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   143,   472,   687,   688,   689,
     683,   684,   690,     0,   599,   134,   164,   567,   171,   569,
     599,     0,   170,   502,   500,   134,     0,     0,     0,   286,
     165,   204,   203,   681,     0,     0,     0,   202,     0,   169,
      69,   287,   350,   166,     0,     0,     0,   345,     0,     0,
     173,     0,     0,   616,   591,   691,   174,     0,   351,   561,
     497,     0,     0,     0,   188,   186,   438,   168,   570,   499,
       0,     0,     0,     0,   565,     0,     0,   172,     0,     0,
     144,     0,   682,     0,     0,   490,   167,   325,   563,   501,
     175,     0,     0,   740,     0,     0,   742,     0,   743,   744,
     632,     0,   741,   738,   640,   184,   739,     0,     0,     0,
       0,     4,     0,     5,    10,    11,    12,    47,    51,    52,
      58,     0,    45,    72,    13,    78,    14,    15,    16,    17,
      29,   547,   548,    23,    46,   185,   195,     0,   205,   654,
     196,    18,    31,    30,    20,     0,   281,   197,    19,   650,
      22,    35,    32,    33,   194,   326,     0,   192,     0,     0,
     647,   349,     0,   644,   190,   366,   458,   449,   642,   193,
       0,     0,   191,   659,   638,   637,   641,   551,   549,     0,
       0,   648,   649,   653,   652,   651,     0,   550,     0,   660,
     661,   662,   685,   686,   643,   553,   552,   645,   646,     0,
      28,   569,   165,     0,     0,     0,     0,   570,     0,     0,
       0,     0,   647,   659,   549,   648,   649,   559,   550,   660,
     661,     0,     0,   600,   135,     0,   568,     0,   599,   491,
       0,   498,     0,    21,     0,   535,     0,   541,   141,   145,
     157,   151,   150,   159,   138,   149,   160,   146,   161,   136,
     162,   155,   148,   156,   154,   152,   153,   137,   139,   147,
     158,   163,   142,     0,   140,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    70,
      72,   541,     0,     0,     0,     0,     0,     0,   505,     0,
     181,    40,     0,   317,     0,   316,   725,   620,   617,   618,
     619,     0,   562,   726,     7,   541,   348,   348,   445,   178,
     440,   179,   441,   442,   446,   447,   177,   176,   448,   438,
     531,     0,   353,   354,   356,     0,   439,   530,   358,   518,
       0,     0,     0,   182,   644,   635,   658,   636,     0,     0,
      43,     0,   566,   554,     0,   541,    44,   560,     0,   295,
     299,   296,   299,   564,     0,     0,     0,    57,   727,   729,
     630,   724,   723,     0,    75,    79,     0,     0,   537,     0,
       0,     0,   538,   583,     0,     0,   535,     0,   631,     0,
       6,   323,     0,   203,     0,   324,     0,    49,     0,     9,
      72,    50,    53,    56,     0,    55,     0,     0,    73,     0,
       0,   502,   201,     0,   683,   326,   655,   209,     0,     0,
       0,   322,     0,     0,   343,     0,   336,   438,   458,   456,
     457,   455,   374,   460,   459,   463,   462,   464,     0,   453,
     450,   451,   454,     0,   495,     0,   492,     0,   639,    34,
     621,     0,     0,     0,     0,     0,     0,   728,     0,     0,
       0,     0,     0,     0,   629,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   405,   412,   413,   414,   409,   411,     0,     0,   407,
     410,   408,   406,     0,   416,   415,     0,     0,   541,   541,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      24,    37,     0,     0,     0,    25,     0,    38,     0,   547,
       0,   542,   543,   546,   335,     0,     0,   223,     0,     0,
     222,     0,   231,     0,     0,     0,   229,     0,   239,     0,
       0,   237,     0,     0,     0,     0,   255,     0,   405,   251,
       0,     0,     0,   289,     0,     0,   265,    26,   509,     0,
     510,   512,     0,   529,     0,   515,     0,     0,   180,    39,
       0,   319,     0,     0,     0,    41,     0,   189,   187,   443,
     444,     0,   439,   458,   438,   431,     0,   430,   533,     0,
     127,   656,   657,   364,     0,   183,     0,    42,     0,     0,
     306,   297,   298,   216,   215,    27,    77,    76,    80,     0,
     692,     0,     0,   677,     0,   679,   584,     0,     0,     0,
       0,     0,     0,     0,     0,   696,     8,     0,     0,     0,
       0,    48,    58,     0,    54,     0,    66,     0,   125,     0,
     120,     0,    87,     0,     0,    93,   198,   326,     0,   211,
       0,   208,   293,   327,     0,   334,   340,     0,   338,   333,
     423,     0,   425,   429,     0,   461,   523,     0,   525,   465,
     452,   421,   141,   401,   145,   399,   151,   150,   149,   146,
     403,   161,   162,   148,   152,   137,   147,   163,   398,   380,
     383,   381,   382,   404,   393,   384,   397,   389,   387,   400,
     388,   386,   391,   396,   385,   390,   394,   395,   392,   402,
       0,   377,     0,   421,   378,   421,   375,     0,   494,     0,
     489,   504,   720,   719,   722,   731,   730,   735,   734,   716,
     713,   714,   715,   633,   703,   143,     0,   673,   674,   144,
     672,   671,   627,   707,   718,   712,   710,   721,   711,   709,
     701,   706,   708,   717,   700,   704,   705,   702,   628,     0,
       0,     0,     0,     0,     0,     0,     0,   733,   732,   737,
     736,     0,     0,     0,     0,     0,     0,     0,   694,   293,
     610,   611,   613,   615,     0,   602,     0,     0,     0,   599,
     599,   219,     0,   536,     0,     0,   556,     0,     0,     0,
       0,   573,     0,     0,     0,   232,     0,   579,     0,     0,
     230,   240,     0,     0,   238,     0,     0,   254,     0,   250,
       0,     0,     0,     0,   555,     0,   268,     0,   266,     0,
     513,     0,   528,   527,     0,   507,   626,   506,   318,   315,
       0,     0,     0,   670,   533,   359,   355,     0,     0,   534,
     515,   357,     0,   363,     0,     0,     0,   557,     0,   300,
     693,   634,   678,   539,   680,   540,   247,     0,     0,     0,
     695,   245,   585,     0,   698,   697,     0,     0,     0,     0,
       0,    59,    60,     0,    62,    64,    68,    67,     0,   102,
       0,     0,     0,    95,     0,     0,    93,    65,   398,   380,
     383,   381,   382,   391,   390,   392,     0,   417,   418,    82,
      81,    94,     0,     0,   328,     0,     0,   290,     0,     0,
     348,   344,     0,     0,   438,   424,   465,   521,   520,   519,
     522,   466,   473,   438,   373,     0,   379,     0,   369,   370,
     496,   493,     0,     0,   133,   131,   132,   130,   129,   128,
     668,   669,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   612,   614,     0,   601,   164,   171,   170,   169,
     166,   173,   174,   168,   172,   167,   175,     0,     0,     0,
       0,     0,   503,   214,   545,   544,     0,   249,     0,     0,
     221,     0,   220,     0,   605,     0,     0,   227,     0,     0,
     225,     0,   235,     0,   233,     0,   263,   262,     0,   257,
       0,     0,   253,     0,   259,     0,   292,     0,     0,   511,
     514,   515,   516,   517,   314,     0,     0,   515,     0,   465,
     533,   532,   419,   434,   432,   365,   308,     0,     0,   307,
     310,   558,     0,   301,   304,     0,   248,     0,     0,     0,
       0,   246,     0,     0,     0,     0,     0,     0,     0,    61,
     126,   123,   103,   115,   109,   108,   107,   117,   104,   118,
     113,   106,   114,   112,   110,   111,   105,   116,   119,     0,
     122,   121,    90,    89,    88,     0,     0,     0,   199,     0,
     200,   328,   348,     0,     0,     0,   321,   188,   186,   320,
     348,   348,   329,   339,     0,   426,   473,     0,     0,   367,
     428,     0,   376,   421,   421,   675,   676,     0,     0,     0,
       0,     0,     0,   292,     0,     0,     0,   603,   515,   659,
     659,   218,   217,   224,     0,     0,   572,     0,   571,     0,
     604,     0,     0,   578,   228,     0,   577,   226,   236,   234,
     256,   252,   590,   258,     0,    74,   288,   267,   264,   508,
     541,   541,   435,   433,   360,   361,   515,   420,     0,   312,
       0,     0,     0,   302,     0,   243,   587,     0,     0,   241,
     586,     0,   699,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,    93,     0,    93,    96,    99,    85,
      84,    83,   348,   206,   212,   210,   294,   348,   331,   330,
     342,   346,   487,     0,   488,   475,   478,     0,   474,     0,
     422,   371,   372,     0,     0,     0,     0,     0,     0,     0,
       0,   294,   607,   576,     0,     0,   606,   582,     0,     0,
       0,   261,     0,     0,   437,   436,   313,   311,     0,   305,
       0,   244,     0,   242,     0,     0,   124,    92,    91,     0,
       0,     0,     0,     0,   207,   291,   332,     0,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   467,
     469,   471,   368,   468,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   260,   622,   623,   303,     0,     0,
      98,   101,    97,   100,    86,   347,   477,   479,   480,   483,
     484,   485,   481,   482,   476,   470,     0,     0,     0,     0,
       0,     0,   575,   574,   581,   580,   624,   625,   589,   588
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1136, -1136, -1136,     3,   -65,  2513, -1136,    29,   772, -1136,
   -1136, -1136,  -146,  -108, -1136,   268, -1136, -1136,  -157, -1136,
   -1136,    46,   619, -1136,  -578,  2949,   497,  -607, -1136,  -857,
   -1136, -1136, -1136,    14, -1136, -1136, -1136,   872, -1136,  3234,
     869, -1136, -1136,  -507,  2017, -1135,  -869, -1136, -1136,   242,
   -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,   514,   207,
   -1136,   810, -1136, -1136,  -104,   380, -1136, -1136, -1136, -1136,
   -1136,   554, -1136,  -127, -1136, -1136, -1136, -1136,   347, -1136,
   -1136, -1136,  -109, -1136,  -373,  -861, -1136, -1136, -1136, -1136,
   -1136,  -394, -1136,   868, -1136, -1136, -1136, -1136, -1136,   335,
   -1136,  1816, -1136, -1136, -1136, -1136,   503, -1136, -1136, -1136,
   -1136,   -19,  -407,  -137,  -847,  -947,  -636, -1136,   -11, -1136,
      -3,   342,   -59,   595,   -53, -1136, -1136,  -369,  -853, -1136,
    -341, -1136,  -178,  -348,  -339,  -709, -1136, -1136,    17,   214,
   -1136,  -215,   787, -1136,  -168,   368,   107,  -445,  -812,  -639,
   -1136, -1136, -1136,  -619,  -548, -1136,  -797,   -16,   106, -1136,
    -272,  -527,  -568,   534, -1136, -1136, -1136, -1136,   937, -1136,
     -18, -1136, -1136,  -140, -1136,  -770, -1136, -1136,  1327,  1602,
   -1136, -1136, -1136, -1136,   -13, -1136,    36,  1979, -1136,  2127,
    2438, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136, -1136,
    -482
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,   365,   112,   809,   114,   115,   116,   388,
     389,   117,   118,   119,   120,   395,   624,   873,   874,   121,
     122,   123,   400,   124,   125,   126,   366,   901,   631,   902,
     127,   128,  1070,   628,   629,   129,   130,   225,   262,   286,
     131,   264,   132,   320,   520,   133,   134,   307,   306,   135,
     136,   137,   138,   139,   140,   640,   905,   141,   142,   268,
     143,   276,   144,   817,   818,   211,   146,   147,   148,   149,
     150,   591,   849,  1035,   151,   152,   845,  1030,   293,   294,
     153,   154,   155,   156,   410,   910,   157,   158,   415,   912,
     913,   416,   159,   212,  1257,   161,   162,   321,   322,   323,
    1019,   163,   335,   584,   842,   164,   165,  1209,   166,   167,
     702,   703,   897,   898,   899,  1023,   924,   418,   651,  1101,
     652,   578,   653,   325,   572,   433,   422,   428,   922,  1272,
    1273,   168,  1099,  1205,  1206,  1207,   169,   170,   435,   436,
     708,   171,   172,   230,   287,   288,   551,   552,   825,   327,
     920,   658,   659,   555,   328,   839,   840,   367,   370,   371,
     510,   511,   512,   213,   174,   175,   176,   177,   214,   179,
     222,   223,   774,   527,   983,   775,   776,   180,   215,   216,
     183,   184,   185,   336,   186,   407,   513,   218,   188,   219,
     220,   191,   192,   193,   194,   377,   195,   196,   197,   198,
     199
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     217,   319,   227,   437,   226,   111,   843,   324,   228,   542,
     392,   234,   413,   326,   235,   504,   778,   815,   919,   646,
     846,   269,   271,   273,   984,   277,   704,   896,  1024,  1076,
     405,   841,   638,   566,  1071,   916,   292,  1017,   295,   296,
     553,  1092,   393,  1082,   301,   844,   302,   822,   303,   654,
     487,   289,   767,   329,   330,   875,   725,   235,   337,   339,
     341,   342,   343,  1096,  -286,   609,   347,   928,   348,   929,
    1152,  1202,   556,   589,  1271,   353,  1097,  1202,   355,   337,
     381,   521,   358,   656,   359,   535,   280,   360,   361,   397,
     362,   602,   521,   375,   235,   337,   376,   378,  1268,   521,
       3,   583,  1268,    21,   819,   553,  1259,   338,   289,  -287,
     553,    28,   349,   351,  -524,   614,   979,   603,  -309,   618,
     619,    36,  1271,   289,   403,   308,   406,   398,   356,   289,
     523,   837,   529,   532,  1098,  1260,   607,   986,   521,   521,
     540,  -526,  -524,   615,   372,   310,   385,  1037,  -362,   312,
     918,  -526,   610,   386,  1244,   308,   729,   399,    71,  1046,
    1203,  -309,    71,   390,  -526,   610,  1155,   440,  1027,  -526,
      87,  1204,   557,   313,  -524,   310,   314,  1204,    62,   312,
     768,   237,   297,   394,  1117,   554,  -526,  -524,   315,   386,
     492,   493,   494,   611,   496,   347,   235,   376,    91,  1149,
    -524,  -526,  1011,   313,   835,  1153,   314,   318,    62,  1234,
     503,  1028,  -526,  1092,  -526,  -309,   755,   756,   315,   975,
    1192,  1198,  1199,  1156,   337,   521,   281,  -526,   657,  -526,
    1189,  1269,   521,   569,   608,   612,   386,   318,   560,   948,
     386,   298,   270,   272,   506,   952,   386,  -524,  1183,  -269,
     554,  -526,  -524,   620,   386,   554,   824,    24,   447,   506,
     299,   386,   599,  -341,   903,  1029,   453,   386,   337,  -526,
    -337,   650,   725,   604,   820,   386,   570,   300,  1075,  -526,
     443,   914,  1022,   954,  1184,   200,   600,  1047,   953,   726,
    1021,   419,   337,   221,  -337,   637,   705,   506,   506,   605,
     821,  -427,   727,   343,   347,   392,  1222,   915,    60,   955,
     308,   420,   778,   787,  -270,   507,   374,   308,   581,   582,
      69,   421,   648,  1092,   977,   429,  1077,  1250,  1256,  1252,
     310,   728,   337,   224,   312,   506,   782,   310,   444,  1006,
    1043,   312,   445,  -276,  1235,    89,   649,   830,  1118,  1007,
    1246,   820,   319,   580,  -275,  -596,   601,   820,   313,  1226,
     606,   314,  -666,   379,  -666,   313,   -71,   231,   314,   598,
      62,   709,   729,   315,  1048,  1008,   430,  1009,   730,  1154,
     315,  1085,   145,  1020,   630,   -71,   632,   787,   431,   710,
     447,   448,   318,   643,   450,   451,   235,   452,   453,   318,
    1049,  1129,   456,   557,   -71,   878,   145,   432,   145,   463,
     229,   543,   543,  1113,   787,   467,   468,   469,   544,   867,
     200,   711,   237,   879,  1116,   906,   596,  1130,   712,   713,
     714,   716,   718,   719,   -71,   720,   721,   722,   723,   724,
    1173,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   787,   145,
     -70,   265,  1181,   278,   337,   337,   279,  1211,  1212,   281,
     337,   787,   778,   337,   337,   337,   337,   758,   760,   -70,
     875,  -609,   423,  -284,  1196,   777,   882,   145,  -274,   780,
    -608,  -271,   145,   783,  1258,   784,   200,  1221,   -70,  -278,
     789,   443,   876,   235,   883,   791,   793,  -609,   557,   319,
     304,   797,   799,   750,   751,   324,  -608,   803,  1093,   752,
     704,   326,   753,   754,   810,   907,   972,   812,   -70,  -282,
     424,   337,   908,   425,   490,   969,   173,   305,   491,   491,
    1077,   823,  -742,   826,  -279,   426,  -742,   295,   567,   568,
     831,   832,  1298,  1299,  1300,  1301,  1302,  1303,  1078,   444,
     173,   329,   173,   445,   427,  1077,   329,   443,  -273,   709,
     557,   344,  1077,  -743,  1077,   337,  1249,  -743,  1251,  -277,
    -744,  -739,   345,  1187,  -744,  -739,   783,  1194,  1195,   337,
    1290,   337,  1292,   488,  -283,   489,   859,   783,   862,  -285,
     864,   866,   145,  -272,   870,   868,   869,   235,  -280,    42,
     337,   447,  -348,   173,   357,    94,   451,   173,   173,   453,
     408,   900,   900,   456,  -667,   444,  -667,   396,   417,   445,
     598,  1270,  -348,   409,   911,    58,   438,  -666,   372,  -666,
     372,   173,  -348,  1261,   329,   447,   173,   778,  -593,   497,
     451,   715,   717,   453,  -663,  -592,  -663,   456,   988,   991,
     498,   439,   993,   995,   145,   386,  -597,   545,   639,   145,
    1262,  -598,  1263,  1264,  -595,  1265,  1266,   447,   448,  1270,
     449,   450,   451,   508,   452,   453,   454,   925,  -665,   456,
    -665,  -664,  -594,  -664,   930,   462,   463,   757,   759,   466,
    1200,   386,   467,   468,   469,   932,   500,   933,   853,   779,
     855,   505,   514,   470,   398,   516,   574,   563,  1038,  1040,
     573,   564,   443,   579,   588,   585,   792,   595,   616,   622,
     612,   633,   798,   623,   645,   647,   644,   802,  1084,   655,
     660,   707,   453,   749,   766,   785,   145,   786,   791,   944,
     797,   947,   810,   337,   950,   862,   173,   788,   794,   787,
     805,   970,   971,   806,  1091,   808,   145,  1094,   811,   813,
     814,   824,   337,   833,   337,   976,   145,   978,   838,   847,
     444,   777,   848,   985,   445,   394,   506,   904,   857,   863,
    1104,   921,   996,   997,   923,   951,  -143,  -164,   934,   935,
    -171,  -170,  -169,  -166,  -173,  -174,  -168,  -172,  -144,  -167,
    -175,   337,   926,   927,   940,   941,   858,   998,   173,  1000,
    1018,   974,  1108,   173,  1077,   329,   270,   374,   936,  1025,
     937,  1111,   447,   938,   939,  1031,  1144,   451,  1026,   452,
     453,   540,  1081,  1080,   456,  1090,  1105,  1086,   540,   319,
    1145,   463,  1146,  1162,   337,  1106,  1114,  1167,   319,   469,
    1013,  1150,  1151,  1171,  1188,   630,   914,  1210,  1230,  1072,
     160,  1074,   900,   900,  1238,   358,  1255,   359,  1232,  1233,
     361,   362,  1285,  1291,  1260,  1286,  1293,  1316,  1317,   387,
     871,  1180,  1050,   627,   160,   337,   160,   232,   145,   541,
     173,   354,   621,  1147,   145,  1161,   592,   828,  1103,   836,
     641,  1095,  1100,   834,   571,   145,  1295,   145,  1201,  1304,
     173,  1297,  1083,   931,   402,   827,     0,  1010,     0,  1107,
     173,     0,  1110,     0,     0,     0,  1091,     0,   337,   178,
       0,   777,     0,     0,  1197,     0,     0,   160,     0,     0,
       0,   160,   160,     0,     0,   716,   758,     0,     0,     0,
       0,     0,     0,   178,     0,   178,  1126,   706,  1128,   943,
       0,   946,     0,  1133,   949,   160,  1136,     0,     0,     0,
     160,     0,     0,   392,     0,     0,   392,   145,  1142,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     0,   145,     0,  1157,
       0,     0,  1160,     0,     0,   235,   178,  1090,     0,     0,
     178,   178,     0,     0,  1166,     0,  1170,     0,     0,  1172,
       0,  1175,  1177,  1179,     0,   337,   988,   991,  1038,  1040,
       0,     0,     0,     0,   178,     0,  1091,     0,     0,   178,
       0,     0,   173,     0,     0,     0,   900,     0,   173,     0,
       0,     0,     0,     0,  1190,     0,  1191,     0,     0,   173,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1208,     0,   540,   540,   392,
     160,   540,   540,     0,     0,  1126,  1128,     0,  1133,  1136,
       0,  1166,  1170,   540,     0,   540,   509,     0,     0,     0,
       0,  1223,  1224,     0,  1225,     0,   777,     0,  1227,  1228,
       0,     0,  1229,     0,     0,     0,     0,  1090,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   337,   337,     0,
       0,   173,     0,     0,     0,   173,     0,     0,     0,  1239,
     509,  1240,   160,     0,     0,  1242,     0,   160,     0,   178,
       0,   173,     0,     0,     0,     0,     0,     0,     0,  1248,
     900,   900,   900,   900,   509,   715,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
    1223,  1274,  1275,  1227,  1276,  1277,  1278,  1279,     0,     0,
       0,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,   178,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,   160,     0,     0,   145,     0,     0,
    1294,     0,     0,   145,     0,   381,  1296,     0,     0,    23,
      24,  1174,  1176,  1178,   160,     0,     0,     0,   382,     0,
      31,   383,     0,     0,   160,     0,    37,  1312,  1313,  1314,
    1315,  1305,     0,    42,     0,  1318,  1319,     0,   384,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1312,  1313,  1314,  1315,  1318,  1319,    58,
       0,    60,     0,   178,     0,  1087,     0,     0,  1088,     0,
     967,   385,     0,    69,     0,   443,     0,     0,     0,     0,
       0,     0,   731,   178,     0,     0,     0,     0,     0,   181,
       0,   443,    85,   178,     0,    87,     0,     0,    89,     0,
       0,     0,   173,     0,     0,   173,     0,     0,     0,     0,
       0,     0,     0,   181,     0,   181,     0,   509,   509,   145,
       0,   145,     0,    94,     0,     0,   145,     0,     0,   145,
       0,     0,     0,   444,     0,     0,     0,   445,   145,     0,
     145,     0,     0,   145,     0,     0,   160,     0,   105,   444,
       0,   173,   160,   445,     0,     0,     0,   173,     0,     0,
       0,     0,     0,   160,     0,   160,   181,   145,     0,     0,
     181,   181,     0,   509,     0,     0,     0,   145,     0,   145,
       0,     0,     0,     0,     0,   447,   448,   145,   449,   450,
     451,     0,   452,   453,   181,     0,     0,   456,     0,   181,
       0,   447,   448,   462,   463,     0,   451,   466,   452,   453,
     467,   468,   469,   456,     0,   178,     0,   509,     0,     0,
     463,   178,     0,     0,     0,     0,   467,   468,   469,     0,
       0,     0,   178,     0,   178,   160,   238,     0,     0,   160,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
     239,   240,   509,   241,     0,   160,     0,     0,   242,     0,
       0,     0,  1119,  1120,   145,     0,   243,     0,     0,     0,
       0,   145,   244,   173,     0,   173,     0,     0,   245,     0,
     173,     0,   246,   173,   145,   247,     0,     0,     0,     0,
       0,     0,   173,     0,   173,   248,     0,   173,   145,     0,
       0,   444,   249,   250,   178,   445,     0,   145,   178,   181,
     251,   145,     0,     0,     0,     0,     0,     0,     0,     0,
     252,   173,     0,     0,   178,     0,     0,     0,     0,   253,
     254,   173,   255,   173,   256,     0,   257,     0,     0,   258,
       0,   173,     0,   259,   548,     0,   260,     0,     0,   261,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,     0,     0,   182,   456,     0,     0,     0,     0,
     145,   181,   463,     0,     0,   725,   181,     0,   467,   468,
     469,     0,   443,     0,   145,   145,     0,     0,   182,   956,
     182,     0,   957,     0,     0,   509,     0,   958,     0,     0,
       0,     0,     0,     0,     0,   549,     0,   202,   145,     0,
       0,     0,     0,     0,     0,     0,   509,   959,   173,     0,
     145,   145,   145,   145,   960,   173,     0,     0,   145,   145,
       0,     0,     0,     0,   961,     0,   160,     0,   173,   160,
     444,   182,   962,     0,   445,   182,   182,     0,     0,     0,
       0,     0,   173,   181,     0,     0,     0,     0,     0,   963,
       0,   173,     0,     0,     0,   173,     0,     0,     0,   182,
       0,   964,     0,   181,   182,   729,     0,     0,     0,     0,
       0,     0,   965,   181,     0,   160,     0,     0,   966,     0,
       0,   160,   447,     0,     0,     0,   509,   451,     0,   452,
     453,     0,     0,     0,   456,   178,     0,     0,   178,  1051,
     731,   463,     0,     0,     0,     0,     0,   467,   468,   469,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   509,   173,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
     178,     0,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   173,   173,   173,     0,     0,
     509,     0,   173,   173,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,     0,   160,     0,   160,
       0,   181,     0,     0,   160,     0,     0,   160,     0,     0,
       0,     0,   181,     0,   181,     0,   160,     0,   160,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,   334,     0,     0,
       0,   182,   444,     0,     0,   160,   445,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,   160,   334,     0,
       0,     0,     0,     0,     0,   160,   178,   509,   178,     0,
       0,     0,     0,   178,   334,     0,   178,     0,     0,     0,
       0,     0,     0,     0,   181,   178,     0,   178,   181,     0,
     178,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,   181,     0,   456,   457,   458,     0,
     460,   461,   462,   463,   178,     0,   466,     0,   182,   467,
     468,   469,     0,     0,   178,     0,   178,     0,     0,     0,
     470,   187,     0,     0,   178,     0,     0,     0,   182,     0,
       0,     0,   160,     0,     0,     0,     0,     0,   182,   160,
       0,     0,     0,     0,     0,   187,     0,   187,     0,     0,
       0,     0,   160,     0,     0,     0,     0,     0,     0,   509,
     509,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,     0,     0,     0,     0,   187,     0,
       0,   178,   187,   187,     0,     0,   291,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,     0,     0,     0,     0,   187,     0,     0,     0,
     340,   187,     0,     0,     0,   178,     0,   334,   160,     0,
       0,     0,     0,     0,   178,     0,     0,     0,   178,     0,
       0,   441,   160,   160,     0,     0,     0,     0,   442,     0,
     182,   334,     0,     0,     0,     0,   182,     0,     0,   189,
     443,   518,     0,     0,     0,   181,   160,   182,   181,   182,
       0,     0,     0,     0,     0,     0,   519,     0,   160,   160,
     160,   160,     0,   189,     0,   189,   160,   160,     0,     0,
       0,   334,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   178,     0,   181,     0,     0,     0,   444,     0,
     181,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,     0,     0,   178,   189,     0,     0,   182,
     189,   189,     0,   182,     0,     0,     0,   178,   178,   178,
     178,     0,     0,   446,     0,   178,   178,     0,     0,   182,
       0,     0,     0,     0,   189,     0,     0,     0,     0,   189,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   187,     0,   467,   468,   469,   187,   386,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,   517,     0,   522,   526,   528,
     531,     0,     0,   334,   334,     0,     0,     0,     0,   334,
       0,     0,   334,   334,   334,   334,   181,     0,   181,   559,
       0,   561,     0,   181,     0,     0,   181,     0,   565,     0,
       0,     0,     0,     0,     0,   181,     0,   181,     0,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   909,     0,     0,   187,     0,     0,     0,   189,
       0,     0,     0,     0,   181,     0,     0,     0,   587,     0,
     334,     0,     0,  -328,   181,   187,   181,  -328,  -328,     0,
       0,   593,   594,     0,   181,   187,  -328,     0,  -328,  -328,
       0,     0,     0,     0,  -328,     0,     0,     0,     0,     0,
       0,  -328,     0,     0,  -328,     0,  -328,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
     182,   189,     0,   182,  -328,     0,   189,  -328,   334,  -328,
     334,  -328,     0,  -328,  -328,     0,  -328,     0,     0,  -328,
       0,  -328,     0,     0,     0,     0,     0,     0,     0,   334,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -328,   181,     0,  -328,     0,     0,  -328,     0,   181,   182,
       0,     0,     0,     0,   190,   182,   190,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -328,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,   189,   181,     0,     0,   187,   181,     0,
       0,     0,     0,   187,     0,     0,  -328,     0,     0,     0,
       0,     0,  -328,   189,   187,   113,   187,   190,     0,     0,
     781,   190,   190,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
     795,   236,     0,     0,   800,   190,   801,     0,     0,   804,
     190,     0,     0,     0,     0,   441,     0,   181,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   181,     0,   443,   989,     0,     0,     0,     0,
       0,   182,   334,   182,     0,     0,   187,     0,   182,     0,
     187,   182,   346,     0,     0,   181,     0,     0,     0,     0,
     182,   334,   182,   334,     0,   182,   187,   181,   181,   181,
     181,     0,     0,     0,     0,   181,   181,     0,     0,     0,
     113,     0,     0,     0,     0,   380,     0,     0,     0,   182,
       0,     0,   444,     0,     0,     0,   445,     0,     0,   182,
     334,   182,     0,     0,     0,   189,     0,     0,     0,   182,
       0,   189,     0,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   189,   521,   189,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   386,     0,     0,     0,     0,     0,     0,
     470,     0,   190,     0,   334,     0,   182,   190,     0,     0,
       0,     0,     0,   182,   189,   499,     0,     0,   189,     0,
       0,     0,     0,     0,     0,     0,   182,     0,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
     182,     0,     0,     0,     0,     0,     0,   334,     0,   182,
       0,     0,     0,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
     187,     0,     0,   443,     0,     0,     0,   547,     0,     0,
       0,     0,   558,     0,   190,     0,     0,     0,     0,   980,
     982,     0,     0,     0,     0,   987,   990,     0,     0,   992,
     994,     0,     0,     0,   190,     0,     0,     0,     0,     0,
       0,     0,   182,     0,   190,     0,   187,     0,     0,     0,
       0,     0,   187,     0,     0,     0,   182,   182,     0,     0,
       0,   444,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
     182,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,   182,   182,   182,   182,   526,     0,     0,     0,
     182,   182,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,   447,   448,     0,   449,   450,   451,   113,
     452,   453,   454,     0,   455,   456,   457,   458,     0,   460,
     461,   462,   463,   464,     0,   466,     0,     0,   467,   468,
     469,     0,     0,     0,     0,   189,     0,     0,   189,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,   187,     0,
     187,     0,   190,     0,     0,   187,   334,   334,   187,     0,
       0,     0,     0,   190,     0,   190,     0,   187,     0,   187,
       0,     0,   187,     0,   189,     0,     0,  1121,  1122,     0,
     189,     0,     0,  1123,     0,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,  1134,   187,     0,  1137,     0,
    1138,     0,  1139,     0,     0,     0,   187,     0,   187,     0,
       0,     0,   290,     0,     0,     0,   187,     0,     0,     0,
       0,   558,   350,   352,     0,     0,     0,   558,   238,     0,
       0,     0,     0,     0,     0,   190,     0,     0,   807,   190,
       0,     0,   239,   240,     0,   241,     0,     0,     0,     0,
     242,     0,     0,     0,     0,   190,   391,     0,   243,     0,
       0,     0,     0,     0,   244,     0,     0,     0,     0,     0,
     245,     0,     0,     0,   246,     0,     0,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,   187,   249,   250,   189,     0,   189,     0,
     187,     0,   251,   189,     0,     0,   189,     0,     0,     0,
     856,     0,   252,   187,   861,   189,     0,   189,     0,     0,
     189,   253,   254,     0,   255,     0,   256,   187,   257,     0,
     113,   258,     0,     0,     0,   259,   187,     0,   260,     0,
     187,   261,     0,     0,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   189,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   501,  1237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   980,   982,   987,   990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   386,     0,  1032,     0,   187,
       0,     0,     0,     0,     0,     0,     0,   290,   290,   290,
     290,   290,   290,   187,   187,   536,   539,     0,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,   290,     0,   290,     0,     0,   190,   187,     0,   190,
     290,   189,     0,     0,     0,     0,     0,     0,   189,   187,
     187,   187,   187,     0,   263,     0,     0,   187,   187,     0,
       0,   189,     0,     0,     0,     0,     0,     0,   282,   283,
     284,     0,     0,     0,     0,   189,     0,     0,     0,     0,
     290,     0,     0,   238,   189,   190,     0,     0,   189,     0,
       0,   190,     0,   290,   290,     0,     0,   239,   240,     0,
     241,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,   999,     0,   243,  1002,     0,     0,     0,     0,   244,
       0,     0,     0,     0,     0,   245,     0,     0,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,   189,     0,   249,
     250,     0,     0,     0,     0,     0,     0,   251,     0,     0,
    1036,   189,   189,     0,     0,     0,  1041,   252,     0,     0,
       0,     0,     0,     0,     0,     0,   253,   254,     0,   255,
     411,   256,   414,   257,     0,   189,   258,     0,     0,     0,
     259,   575,     0,   260,   434,     0,   261,   189,   189,   189,
     189,     0,     0,     0,     0,   189,   189,   190,     0,   190,
       0,     0,     0,     0,   190,     0,     0,   190,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,   190,     0,
     495,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,   190,     0,     0,     0,     0,
       0,     0,   290,     0,     0,   190,   290,   190,   290,     0,
       0,   290,     0,     0,     0,   190,     0,     0,     0,     0,
     238,     0,   558,     0,   558,     0,     0,     0,     0,   558,
     515,     0,   558,     0,   239,   240,     0,   241,   533,   534,
       0,  1140,   242,  1141,     0,     0,  1143,     0,     0,   550,
     243,     0,     0,     0,     0,     0,   244,     0,     0,     0,
       0,     0,   245,     0,     0,     0,   246,     0,     0,   247,
    1159,     0,     0,     0,     0,     0,     0,     0,     0,   248,
    1165,     0,  1169,     0,     0,     0,   249,   250,     0,   577,
     861,     0,   190,     0,   251,     0,     0,     0,     0,   190,
       0,     0,     0,     0,   252,     0,     0,     0,     0,     0,
       0,     0,   190,   253,   254,     0,   255,     0,   256,     0,
     257,     0,     0,   258,     0,     0,   190,   259,     0,     0,
     260,     0,     0,   261,     0,   190,   381,     0,     0,   190,
      23,    24,     0,     0,     0,     0,   263,     0,   617,   382,
       0,    31,   383,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,   384,
       0,     0,   642,     0,     0,     0,     0,   414,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1231,     0,   285,
      58,     0,    60,     0,    62,     0,  1087,   701,   190,  1088,
       0,  1236,   385,     0,    69,     0,     0,     0,     0,     0,
    1241,     0,   190,   190,  1243,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    87,     0,     0,    89,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,   442,   190,   190,
     190,   190,     0,     0,    94,     0,   190,   190,     0,   443,
       0,   769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   290,   290,  1284,     0,     0,     0,   290,   290,   105,
       0,   290,   290,     0,     0,  1089,     0,  1165,  1169,     0,
       0,  1004,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,     0,     0,   816,
       0,   113,     0,   550,     0,     0,     0,   444,     0,     0,
       0,   445,     0,     0,     0,     0,   829,  1033,     0,     0,
     537,     0,     0,     0,     0,   577,   486,     0,     0,  -663,
     550,  -663,     0,     0,     0,     0,     0,   290,   290,     0,
       0,     0,   446,   538,   472,   473,   474,   475,   476,     0,
       0,   479,   480,   481,   482,     0,   484,   485,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,   887,   386,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   290,
     290,     0,     0,     0,     0,   290,     0,   539,     0,     0,
       0,     0,     0,     0,   539,     0,     0,   290,     0,     0,
     290,     0,   290,   434,   290,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,  1148,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,   401,    24,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,  1163,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   206,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
      60,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     207,     0,    69,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   208,     0,    80,     0,  1005,    82,     0,
       0,     0,    86,     0,   550,    88,     0,    89,    90,     0,
       0,     0,     0,     0,  1014,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,     0,    23,
      24,     0,  1034,    95,    96,    97,    98,    99,   382,     0,
      31,   383,   100,     0,     0,     0,    37,     0,     0,     0,
       0,   101,     0,    42,   102,   103,   104,     0,   384,   290,
     106,     0,   209,     0,   108,     0,   210,     0,     0,   110,
       0,     0,     0,   290,   290,   290,   290,     0,     0,    58,
       0,    60,     0,     0,     0,     0,     0,     0,     0,   434,
       0,   385,     0,    69,     0,     0,   414,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   701,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,   539,   539,     0,     0,   539,   539,     0,
       0,     0,     0,     0,     0,     0,     0,  1287,     0,   539,
       0,   539,     0,     0,    -2,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,   816,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,  1034,  -348,     0,     0,
      58,    59,    60,    61,    62,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   414,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,  -694,     0,    13,    14,    15,    16,    17,  -694,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    -694,    28,    29,  -694,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,  -694,    69,
      70,    71,  -694,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,  -694,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,  -694,    97,  -694,  -694,  -694,  -694,  -694,  -694,  -694,
       0,  -694,  -694,  -694,  -694,  -694,  -694,  -694,  -694,  -694,
    -694,  -694,  -694,   104,   105,  -694,  -694,  -694,     0,   107,
    -694,   108,     0,   109,     0,   363,  -694,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,    62,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,   364,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,    62,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
     597,   108,     0,   109,     0,   625,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,    62,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,   626,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,    62,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
     877,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,   379,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,    62,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,   790,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,   796,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,  1125,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,  1127,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,  1132,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,  1135,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,  1158,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,  1164,    39,
     -69,     0,    40,    41,    42,     0,    43,  -348,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -348,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -348,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,   105,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       4,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,  1168,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,   917,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,   309,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,   311,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,   316,    76,    77,    78,   317,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,   663,     0,    13,     0,     0,    16,    17,   665,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,   670,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,   538,   472,   473,   474,   475,   476,
       0,     0,   479,   480,   481,   482,     0,   484,   485,     0,
     888,   889,   890,   891,   892,   683,     0,   684,     0,   100,
       0,   685,   686,   687,   688,   689,   690,   691,   893,   693,
     694,   102,   894,   104,     0,   696,   697,   895,   699,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
       0,    16,    17,     0,    18,     0,   201,    20,    21,    22,
       0,     0,     0,     0,    27,     0,    28,    29,     0,   202,
       0,     0,     0,    33,    34,    35,    36,     0,    38,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,    49,    50,    51,    52,     0,
      53,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,    91,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   331,   332,     0,    86,
     368,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
     369,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,   770,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,   771,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,   772,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,   773,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   331,   332,     0,    86,
     368,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,   852,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,   331,   332,     0,    86,   368,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,   854,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   331,   332,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   333,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,   331,   332,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,   872,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,  1012,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   331,   332,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,   266,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,   267,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,   274,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,   275,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,   331,   332,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,   267,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,   373,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,  -738,     0,     0,     0,  -738,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,   267,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,   289,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   107,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,   404,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,    19,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,    87,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,   373,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
     850,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,   860,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,   865,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,  1073,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
    1247,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,   309,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,   311,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,   316,    76,    77,    78,
     317,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   942,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   945,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,  1214,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,  1215,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,  1217,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,  1218,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   209,
       0,   108,     0,   210,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   201,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,  1219,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,   103,   104,     0,
       0,     0,   106,     0,   209,     0,   108,     0,   210,     0,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,  1220,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,   443,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,   446,   209,
       0,   108,     0,   210,     0,     0,   110,     6,     7,     8,
       9,    10,    11,    12,     0,   447,   448,    13,   449,   450,
     451,    17,   452,   453,   454,   201,   455,   456,   457,   458,
     308,   460,   461,   462,   463,   464,   465,   466,   202,     0,
     467,   468,   469,   203,   204,     0,     0,   205,     0,     0,
     310,   470,     0,     0,   312,     0,     0,     0,   206,     0,
       0,    47,    48,     0,     0,     0,     0,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,   313,   443,
      59,   314,    61,    62,    63,     0,     0,     0,     0,    66,
       0,   207,     0,   315,     0,     0,     0,     0,     0,    74,
       0,    76,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,   445,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,   446,   209,     0,   108,  -352,   210,     0,     0,
     110,     6,     7,     8,     9,    10,    11,    12,     0,   447,
     448,    13,   449,   450,   451,    17,   452,   453,   454,   201,
     455,   456,   457,   458,   308,   460,   461,   462,   463,   464,
       0,   466,   202,     0,   467,   468,   469,   203,   204,     0,
       0,   205,     0,     0,   310,   470,     0,     0,   312,     0,
       0,     0,   206,     0,     0,    47,    48,     0,     0,     0,
       0,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,   313,     0,    59,   314,    61,    62,    63,     0,
       0,     0,     0,    66,     0,   207,     0,   315,     0,     0,
       0,     0,     0,    74,     0,    76,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,   318,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   661,     0,   662,     0,    95,    96,
      97,    98,    99,     0,     0,   663,     0,   100,     0,     0,
     664,   240,   665,   666,     0,     0,   101,     0,   667,   102,
     103,   104,     0,     0,     0,   106,   243,   209,   202,   108,
       0,   210,   244,     0,   110,     0,     0,     0,   668,     0,
       0,     0,   246,     0,     0,   669,     0,   670,     0,     0,
       0,     0,     0,     0,     0,   671,     0,     0,     0,     0,
       0,     0,   249,   672,     0,     0,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     673,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     254,     0,   674,     0,   256,     0,   675,     0,     0,   258,
       0,     0,     0,   676,     0,     0,   260,     0,     0,   677,
       0,     0,     0,     0,     0,     0,     0,     0,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   678,   679,   680,   681,   682,   683,
       0,   684,     0,     0,     0,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,     0,   695,     0,     0,   696,
     697,   698,   699,     0,     0,   700,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,   103,   104,     0,     0,
       0,   106,     0,   209,     0,   108,     0,   210,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,    97,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,   104,
     201,     0,     0,    22,     0,   209,     0,   108,     0,   210,
       0,    29,     0,   202,     0,     0,     0,    33,   203,   204,
       0,     0,   205,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   206,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   207,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   208,
       0,    80,     0,     0,    82,     0,   725,     0,    86,     0,
       0,    88,     0,     0,    90,   663,     0,     0,     0,     0,
    1052,  1053,   665,  1054,     0,     0,     0,     0,  1055,     0,
       0,     0,     0,     0,     0,     0,   727,     0,     0,    95,
       0,    97,     0,     0,     0,     0,     0,     0,  1056,     0,
       0,     0,  1057,     0,     0,  1058,     0,   670,     0,     0,
       0,     0,   104,     0,     0,   728,     0,     0,     0,     0,
     108,     0,   210,  1059,     0,     0,     0,     0,     0,     0,
    1060,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1061,     0,     0,     0,     0,     0,     0,     0,     0,  1062,
    1063,     0,  1064,     0,  1065,     0,   729,     0,     0,     0,
       0,     0,   730,  1066,     0,     0,  1067,     0,     0,  1068,
       0,     0,     0,     0,     0,     0,     0,     0,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   678,   679,   680,   681,   682,   683,
       0,   684,     0,     0,     0,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   238,   695,     0,     0,   696,
     697,   698,   699,  1069,   663,     0,     0,     0,     0,   239,
     240,   665,   241,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
       0,   244,     0,     0,     0,     0,     0,   245,     0,     0,
       0,   246,     0,     0,   247,     0,   670,     0,     0,     0,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   249,   250,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,   441,     0,     0,   253,   254,
       0,   255,   442,   256,     0,   257,     0,     0,   258,     0,
       0,     0,   259,     0,   443,   260,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,     0,   538,   472,   473,
     474,   475,   476,     0,     0,   479,   480,   481,   482,     0,
     484,   485,     0,   678,   679,   680,   681,   682,   683,     0,
     684,     0,     0,     0,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,     0,   695,     0,     0,   696,   697,
     698,   699,   444,     0,     0,   441,   445,     0,     0,     0,
       0,     0,   442,     0,     0,  1124,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1131,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1280,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1281,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1282,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1283,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,   441,   445,     0,     0,     0,
     470,     0,   442,     0,     0,  1288,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,   444,   386,     0,     0,   445,     0,     0,     0,
     470,     0,     0,     0,     0,  1289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,   443,   524,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
     525,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   386,     0,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   441,   444,     0,     0,     0,   445,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   289,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   521,     0,     0,   530,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,   386,   442,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   443,   289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   521,
       0,     0,  1045,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,   444,   467,   468,   469,   445,   386,
       0,     0,     0,     0,     0,     0,   470,     0,     0,   441,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,   521,     0,     0,   443,   446,
       0,     0,     0,   634,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   635,
       0,   467,   468,   469,     0,   386,     0,     0,     0,     0,
       0,     0,   470,     0,     0,     0,   444,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   441,   884,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   446,     0,     0,     0,   885,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   886,   636,   467,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,   441,   444,     0,
       0,     0,   445,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,   289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,     0,
     442,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   443,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   521,     0,     0,  1044,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,   386,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,   386,   442,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,   443,   289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   444,   467,   468,   469,   445,     0,   442,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     443,   761,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,   386,   442,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   443,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,     0,
     442,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   443,   981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,     0,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,   386,   442,     0,     0,     0,     0,     0,   470,  1003,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,   444,   467,   468,   469,   445,   386,     0,     0,
       0,     0,     0,     0,   470,     0,     0,   441,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,   521,     0,     0,   443,   446,     0,     0,
       0,  1185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,  1186,     0,   467,
     468,   469,     0,     0,     0,     0,     0,     0,  1039,     0,
     470,     0,     0,   441,   444,     0,     0,     0,   445,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,   441,   562,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,   443,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
     444,   467,   468,   469,   445,     0,     0,     0,   441,     0,
       0,     0,   470,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,     0,
       0,   521,     0,     0,     0,   446,     0,     0,     0,     0,
     444,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   446,     0,   467,   468,   469,
       0,     0,     0,     0,     0,   444,  1245,     0,   470,   445,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,     0,   467,   468,   469,
     446,     0,   442,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,   443,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,   441,   467,   468,   469,     0,   586,     0,   442,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   444,     0,     0,     0,   445,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,   445,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,   590,   467,
     468,   469,   613,   446,     0,     0,     0,     0,     0,   444,
     470,     0,     0,   445,     0,     0,     0,     0,     0,     0,
     447,   448,   765,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,   446,   467,   468,   469,   441,     0,
       0,     0,     0,     0,     0,   442,   470,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,   443,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,   441,
     880,     0,     0,     0,     0,     0,   442,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,   445,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,   444,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,   446,   467,   468,   469,     0,     0,     0,     0,   851,
       0,   444,     0,   470,     0,   445,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   881,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   221,   467,   468,   469,   446,     0,   442,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     443,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   441,     0,   467,   468,
     469,     0,     0,   442,     0,     0,     0,     0,     0,   470,
       0,     0,     0,     0,     0,   443,     0,     0,  1001,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,   445,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,   973,   467,   468,   469,   446,     0,
       0,     0,   441,   444,     0,     0,   470,   445,     0,   442,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,   443,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   446,     0,
     467,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   441,   444,
     467,   468,   469,   445,     0,   442,     0,  1015,     0,     0,
       0,   470,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,   441,  1079,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,   443,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,   444,   467,   468,   469,   445,
       0,     0,     0,  1016,   441,     0,     0,   470,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,  1042,
     446,     0,     0,     0,     0,   444,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     446,     0,   467,   468,   469,     0,     0,     0,     0,     0,
       0,   444,     0,   470,     0,   445,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     441,     0,   467,   468,   469,     0,   446,   442,     0,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,   443,
    1109,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   441,     0,   467,   468,
     469,     0,     0,   442,     0,  1102,     0,     0,     0,   470,
       0,     0,     0,     0,     0,   443,  1112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,   445,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,   446,     0,
       0,     0,     0,   444,     0,   470,   441,   445,     0,     0,
       0,     0,     0,   442,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,   443,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   446,     0,
     467,   468,   469,     0,     0,     0,   441,  1182,     0,     0,
       0,   470,     0,   442,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,   443,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,   444,     0,     0,     0,   445,     0,  1115,
       0,   470,     0,     0,     0,     0,  1213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,   441,   444,     0,     0,     0,   445,     0,   442,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,   443,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   446,     0,
     467,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,   444,
     467,   468,   469,   445,     0,     0,     0,   441,  1253,     0,
       0,   470,  1216,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
       0,     0,     0,   441,   444,     0,     0,   470,   445,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1267,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,     0,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,     0,   442,     0,     0,     0,     0,     0,   470,  1306,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   444,   467,   468,   469,   445,     0,   442,     0,
       0,     0,     0,     0,   470,  1307,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,     0,   442,     0,     0,     0,     0,     0,
     470,  1308,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,     0,
     442,     0,     0,     0,     0,     0,   470,  1309,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,     0,   442,     0,     0,     0,
       0,     0,   470,  1310,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,   441,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,   443,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,   444,   467,   468,   469,
     445,     0,     0,     0,   441,     0,     0,     0,   470,  1311,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,   444,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   446,     0,   467,   468,   469,     0,     0,     0,     0,
       0,   968,     0,     0,   470,   445,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,     0,   467,   468,   469,   446,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,   381,   467,   468,
     469,    23,    24,     0,     0,     0,     0,     0,     0,   470,
     382,     0,    31,   383,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
     384,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   381,     0,     0,     0,    23,    24,     0,
       0,    58,     0,    60,     0,    62,   382,  1087,    31,   383,
    1088,     0,     0,   385,    37,    69,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,   384,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    87,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,  1087,     0,     0,  1088,     0,     0,   385,
       0,    69,     0,     0,     0,    94,   381,     0,     0,     0,
      23,    24,     0,     0,     0,     0,     0,     0,     0,   382,
      85,    31,   383,    87,     0,     0,    89,    37,     0,     0,
     105,     0,     0,     0,    42,     0,  1193,  -348,     0,   384,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,    94,     0,     0,     0,     0,     0,  -348,     0,     0,
      58,     0,    60,     0,     0,     0,    64,  -348,   -69,    65,
       0,     0,   385,   381,    69,     0,   105,    23,    24,     0,
       0,     0,  1254,     0,     0,     0,   382,     0,    31,   383,
       0,     0,     0,    85,    37,     0,    87,     0,     0,    89,
     412,    42,   238,     0,     0,     0,   384,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,     0,   241,
       0,     0,     0,     0,   242,     0,     0,    58,     0,    60,
       0,   379,   243,  1087,     0,     0,  1088,     0,   244,   385,
       0,    69,     0,     0,   245,     0,     0,     0,   246,   105,
       0,   247,     0,     0,   386,     0,     0,     0,     0,     0,
      85,   248,     0,    87,     0,     0,    89,     0,   249,   250,
       0,     0,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,     0,   238,
       0,    94,     0,     0,     0,   253,   254,     0,   255,     0,
     256,     0,   257,   239,   240,   258,   241,     0,     0,   259,
       0,   242,   260,     0,     0,   261,   105,     0,     0,   243,
       0,     0,     0,     0,     0,   244,     0,     0,     0,     0,
       0,   245,     0,     0,     0,   246,     0,     0,   247,    94,
       0,     0,     0,     0,   238,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,   249,   250,     0,   239,   240,
       0,   241,     0,   251,     0,     0,   242,     0,    24,     0,
       0,     0,     0,   252,   243,     0,     0,     0,     0,     0,
     244,     0,   253,   254,     0,   255,   245,   256,     0,   257,
     246,     0,   258,   247,     0,     0,   259,     0,     0,   260,
       0,     0,   261,   248,     0,     0,     0,     0,     0,     0,
     249,   250,     0,     0,     0,     0,     0,     0,   251,    60,
       0,     0,     0,     0,     0,     0,    94,     0,   252,     0,
       0,    69,     0,     0,     0,     0,     0,   253,   254,     0,
     255,     0,   256,     0,   257,   238,     0,   258,     0,     0,
       0,   259,     0,     0,   260,     0,    89,   261,     0,   239,
     240,     0,   241,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
       0,   244,     0,     0,     0,     0,     0,   245,     0,     0,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
    -323,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   249,   250,     0,  -323,  -323,     0,  -323,     0,   251,
       0,     0,  -323,     0,     0,     0,     0,     0,     0,   252,
    -323,     0,     0,     0,     0,     0,  -323,     0,   253,   254,
       0,   255,  -323,   256,     0,   257,  -323,     0,   258,  -323,
       0,     0,   259,   575,     0,   260,     0,     0,   261,  -323,
       0,     0,     0,     0,     0,     0,  -323,  -323,     0,     0,
       0,     0,     0,     0,  -323,   238,     0,     0,     0,     0,
       0,     0,     0,     0,  -323,     0,     0,     0,     0,   239,
     240,     0,   241,  -323,  -323,     0,  -323,   242,  -323,     0,
    -323,     0,     0,  -323,     0,   243,     0,  -323,     0,     0,
    -323,   244,     0,  -323,     0,     0,     0,   245,     0,     0,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
    -324,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   249,   250,     0,  -324,  -324,     0,  -324,     0,   251,
       0,     0,  -324,     0,     0,     0,     0,     0,     0,   252,
    -324,     0,     0,     0,     0,     0,  -324,     0,   253,   254,
       0,   255,  -324,   256,     0,   257,  -324,     0,   258,  -324,
       0,     0,   259,     0,     0,   260,     0,     0,   261,  -324,
       0,     0,     0,     0,     0,     0,  -324,  -324,     0,     0,
       0,     0,     0,     0,  -324,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -324,     0,     0,     0,     0,     0,
       0,     0,     0,  -324,  -324,     0,  -324,     0,  -324,     0,
    -324,     0,     0,  -324,     0,     0,     0,  -324,     0,     0,
    -324,     0,     0,  -324
};

static const yytype_int16 yycheck[] =
{
      13,    66,    20,   171,    17,     2,   584,    66,    21,   281,
     118,    27,   158,    66,    27,   230,   498,   544,   657,   413,
     588,    34,    35,    36,   794,    38,   433,   634,   840,   886,
     139,   579,   405,   305,   881,   654,    49,   834,    51,    52,
       1,   910,     8,   904,    57,     1,    59,   554,    61,   418,
     187,    32,    47,    66,    70,   623,     3,    70,    71,    72,
      73,    74,    75,   916,    55,    47,    79,   703,    81,   705,
    1017,     3,    47,   345,  1209,    88,    60,     3,    91,    92,
      22,   120,    95,     1,    97,   102,    40,   100,   101,    46,
     103,   147,   120,   109,   107,   108,   109,   110,    32,   120,
       0,   123,    32,    24,   549,     1,   118,    71,    32,    55,
       1,    32,    83,    84,    32,   147,    32,   173,    74,    40,
      41,    42,  1257,    32,   137,    27,   139,    84,    92,    32,
     270,   576,   272,   273,   118,   147,   175,    32,   120,   120,
     277,    32,    60,   175,   108,    47,    88,   175,   170,    51,
     657,    47,   147,   170,   175,    27,   103,   114,    92,    47,
      92,   117,    92,   117,   125,   147,  1019,   180,    74,    60,
     112,   103,   147,    75,    92,    47,    78,   103,    80,    51,
     175,   172,    18,   149,   954,   146,   147,   105,    90,   170,
     203,   204,   205,   175,   210,   208,   209,   210,   119,  1011,
     118,    92,   821,    75,   573,  1017,    78,   109,    80,  1156,
     228,   117,   173,  1082,   105,   171,   488,   489,    90,   787,
    1081,  1090,  1091,  1020,   237,   120,   172,   118,   146,   125,
    1077,   165,   120,    47,   374,   375,   170,   109,   147,   766,
     170,    77,    35,    36,   147,    47,   170,   165,    36,    55,
     146,   147,   170,   174,   170,   146,   125,    27,   141,   147,
      96,   170,   147,   140,   637,   171,   149,   170,   281,   165,
     147,   173,     3,   147,   147,   170,    90,   113,   885,   170,
      31,   147,   151,   147,    72,   165,   171,   175,    90,    20,
     838,    53,   305,   120,   171,   404,   433,   147,   147,   173,
     173,   173,    33,   316,   317,   413,  1118,   173,    78,   173,
      27,    73,   794,   147,    55,   165,   109,    27,   331,   332,
      90,    83,   147,  1192,   173,    27,   147,  1184,  1197,  1186,
      47,    62,   345,     3,    51,   147,   504,    47,    89,   173,
     867,    51,    93,    55,  1156,   115,   171,   562,   967,   147,
     171,   147,   417,   165,    55,   165,   369,   147,    75,  1129,
     373,    78,   172,    80,   174,    75,    46,    90,    78,   366,
      80,   147,   103,    90,   147,   173,    78,   173,   109,  1018,
      90,   908,     2,   173,   397,    65,   399,   147,    90,   165,
     141,   142,   109,   409,   145,   146,   409,   148,   149,   109,
     173,   147,   153,   147,    84,   147,    26,   109,    28,   160,
     109,   165,   165,   173,   147,   166,   167,   168,   172,   172,
     165,   165,   172,   165,   951,   640,   171,   173,   441,   442,
     443,   444,   445,   446,   114,   448,   449,   450,   451,   452,
     173,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   147,    79,
      46,    11,  1069,    82,   477,   478,    85,  1103,  1104,   172,
     483,   147,   954,   486,   487,   488,   489,   490,   491,    65,
    1048,   147,    27,    55,   173,   498,   147,   107,    55,   502,
     147,    55,   112,   506,  1203,   508,   165,   173,    84,    55,
     516,    31,   171,   516,   165,   518,   519,   173,   147,   574,
       8,   524,   525,   477,   478,   574,   173,   530,   912,   483,
     927,   574,   486,   487,   537,   165,   165,   540,   114,    55,
      75,   544,   172,    78,    89,    89,     2,   172,    93,    93,
     147,   554,    89,   556,    55,    90,    93,   560,   306,   307,
     563,   564,  1261,  1262,  1263,  1264,  1265,  1266,   165,    89,
      26,   574,    28,    93,   109,   147,   579,    31,    55,   147,
     147,   100,   147,    89,   147,   588,  1183,    93,  1185,    55,
      89,    89,   172,   165,    93,    93,   599,   165,   165,   602,
     165,   604,   165,   172,    55,   174,   609,   610,   611,    55,
     613,   614,   222,    55,   620,   618,   619,   620,    55,    50,
     623,   141,    53,    79,     3,   140,   146,    83,    84,   149,
      55,   634,   635,   153,   172,    89,   174,   170,   172,    93,
     627,  1209,    73,   146,   647,    76,   164,   172,   602,   174,
     604,   107,    83,   125,   657,   141,   112,  1129,   165,    55,
     146,   444,   445,   149,   172,   165,   174,   153,   798,   799,
     172,   165,   802,   803,   284,   170,   165,   172,   109,   289,
     152,   165,   154,   155,   165,   157,   158,   141,   142,  1257,
     144,   145,   146,   119,   148,   149,   150,   700,   172,   153,
     174,   172,   165,   174,   707,   159,   160,   490,   491,   163,
    1094,   170,   166,   167,   168,   172,   165,   174,   602,   502,
     604,   165,   170,   177,    84,   172,   147,   172,   858,   859,
     173,   172,    31,   146,   172,   165,   519,   165,     8,     3,
     870,    65,   525,   172,   171,   125,   170,   530,   906,    90,
      90,   125,   149,    68,   172,   125,   366,   173,   761,   762,
     763,   764,   765,   766,   767,   768,   222,    47,   172,   147,
     125,   779,   780,   125,   910,    34,   386,   913,    34,    65,
     173,   125,   785,   173,   787,   788,   396,   790,   146,   173,
      89,   794,    21,   796,    93,   149,   147,   170,   175,   175,
     927,   105,   805,   806,   172,   172,   149,   149,   165,   165,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   824,   141,   149,   173,   175,   609,    34,   284,    34,
     146,   785,    32,   289,   147,   838,   619,   620,   165,   842,
     165,    32,   141,   165,   165,   173,    34,   146,   171,   148,
     149,   978,   170,   165,   153,   910,   173,   171,   985,   914,
     165,   160,   165,   146,   867,   175,   175,   175,   923,   168,
     824,   172,   172,   175,   165,   878,   147,   173,    34,   882,
       2,   884,   885,   886,   173,   888,   165,   890,  1150,  1151,
     893,   894,   173,   165,   147,   173,   165,   164,   164,   117,
     622,  1048,   878,   396,    26,   908,    28,    25,   518,   280,
     366,    91,   388,  1007,   524,  1032,   352,   560,   927,   574,
     407,   914,   923,   571,   319,   535,  1257,   537,  1096,  1267,
     386,  1260,   905,   709,   137,   557,    -1,   820,    -1,   942,
     396,    -1,   945,    -1,    -1,    -1,  1082,    -1,   951,     2,
      -1,   954,    -1,    -1,  1090,    -1,    -1,    79,    -1,    -1,
      -1,    83,    84,    -1,    -1,   968,   969,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,   979,   433,   981,   762,
      -1,   764,    -1,   986,   767,   107,   989,    -1,    -1,    -1,
     112,    -1,    -1,  1091,    -1,    -1,  1094,   607,  1001,    -1,
      -1,   611,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1018,    -1,   627,    -1,  1022,
      -1,    -1,  1028,    -1,    -1,  1028,    79,  1082,    -1,    -1,
      83,    84,    -1,    -1,  1037,    -1,  1039,    -1,    -1,  1042,
      -1,  1044,  1045,  1046,    -1,  1048,  1176,  1177,  1178,  1179,
      -1,    -1,    -1,    -1,   107,    -1,  1192,    -1,    -1,   112,
      -1,    -1,   518,    -1,    -1,    -1,  1069,    -1,   524,    -1,
      -1,    -1,    -1,    -1,  1077,    -1,  1079,    -1,    -1,   535,
      -1,   537,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1098,    -1,  1224,  1225,  1197,
     222,  1228,  1229,    -1,    -1,  1108,  1109,    -1,  1111,  1112,
      -1,  1114,  1115,  1240,    -1,  1242,   237,    -1,    -1,    -1,
      -1,  1124,  1125,    -1,  1127,    -1,  1129,    -1,  1131,  1132,
      -1,    -1,  1135,    -1,    -1,    -1,    -1,  1192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1150,  1151,    -1,
      -1,   607,    -1,    -1,    -1,   611,    -1,    -1,    -1,  1162,
     281,  1164,   284,    -1,    -1,  1168,    -1,   289,    -1,   222,
      -1,   627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1182,
    1183,  1184,  1185,  1186,   305,   968,   969,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   808,    -1,
      -1,   811,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1213,  1214,  1215,  1216,  1217,  1218,  1219,  1220,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,   857,    -1,    -1,
    1253,    -1,    -1,   863,    -1,    22,  1259,    -1,    -1,    26,
      27,  1044,  1045,  1046,   386,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,   396,    -1,    43,  1280,  1281,  1282,
    1283,  1268,    -1,    50,    -1,  1288,  1289,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1306,  1307,  1308,  1309,  1310,  1311,    76,
      -1,    78,    -1,   366,    -1,    82,    -1,    -1,    85,    -1,
     776,    88,    -1,    90,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   453,   386,    -1,    -1,    -1,    -1,    -1,     2,
      -1,    31,   109,   396,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,   808,    -1,    -1,   811,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,   488,   489,   979,
      -1,   981,    -1,   140,    -1,    -1,   986,    -1,    -1,   989,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,   998,    -1,
    1000,    -1,    -1,  1003,    -1,    -1,   518,    -1,   165,    89,
      -1,   857,   524,    93,    -1,    -1,    -1,   863,    -1,    -1,
      -1,    -1,    -1,   535,    -1,   537,    79,  1027,    -1,    -1,
      83,    84,    -1,   544,    -1,    -1,    -1,  1037,    -1,  1039,
      -1,    -1,    -1,    -1,    -1,   141,   142,  1047,   144,   145,
     146,    -1,   148,   149,   107,    -1,    -1,   153,    -1,   112,
      -1,   141,   142,   159,   160,    -1,   146,   163,   148,   149,
     166,   167,   168,   153,    -1,   518,    -1,   588,    -1,    -1,
     160,   524,    -1,    -1,    -1,    -1,   166,   167,   168,    -1,
      -1,    -1,   535,    -1,   537,   607,     3,    -1,    -1,   611,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   623,    20,    -1,   627,    -1,    -1,    25,    -1,
      -1,    -1,   968,   969,  1124,    -1,    33,    -1,    -1,    -1,
      -1,  1131,    39,   979,    -1,   981,    -1,    -1,    45,    -1,
     986,    -1,    49,   989,  1144,    52,    -1,    -1,    -1,    -1,
      -1,    -1,   998,    -1,  1000,    62,    -1,  1003,  1158,    -1,
      -1,    89,    69,    70,   607,    93,    -1,  1167,   611,   222,
      77,  1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,  1027,    -1,    -1,   627,    -1,    -1,    -1,    -1,    96,
      97,  1037,    99,  1039,   101,    -1,   103,    -1,    -1,   106,
      -1,  1047,    -1,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,    -1,    -1,     2,   153,    -1,    -1,    -1,    -1,
    1230,   284,   160,    -1,    -1,     3,   289,    -1,   166,   167,
     168,    -1,    31,    -1,  1244,  1245,    -1,    -1,    26,    17,
      28,    -1,    20,    -1,    -1,   766,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    35,  1268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   787,    45,  1124,    -1,
    1280,  1281,  1282,  1283,    52,  1131,    -1,    -1,  1288,  1289,
      -1,    -1,    -1,    -1,    62,    -1,   808,    -1,  1144,   811,
      89,    79,    70,    -1,    93,    83,    84,    -1,    -1,    -1,
      -1,    -1,  1158,   366,    -1,    -1,    -1,    -1,    -1,    87,
      -1,  1167,    -1,    -1,    -1,  1171,    -1,    -1,    -1,   107,
      -1,    99,    -1,   386,   112,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   396,    -1,   857,    -1,    -1,   116,    -1,
      -1,   863,   141,    -1,    -1,    -1,   867,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,   808,    -1,    -1,   811,   880,
     881,   160,    -1,    -1,    -1,    -1,    -1,   166,   167,   168,
      -1,    -1,    -1,    -1,  1230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   908,  1244,  1245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   857,    -1,    -1,    -1,    -1,    -1,
     863,    -1,  1268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1280,  1281,  1282,  1283,    -1,    -1,
     951,    -1,  1288,  1289,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   518,    -1,   979,    -1,   981,
      -1,   524,    -1,    -1,   986,    -1,    -1,   989,    -1,    -1,
      -1,    -1,   535,    -1,   537,    -1,   998,    -1,  1000,    -1,
      -1,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    71,    -1,    -1,
      -1,   289,    89,    -1,    -1,  1027,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1037,    -1,  1039,    92,    -1,
      -1,    -1,    -1,    -1,    -1,  1047,   979,  1048,   981,    -1,
      -1,    -1,    -1,   986,   108,    -1,   989,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   607,   998,    -1,  1000,   611,    -1,
    1003,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,   627,    -1,   153,   154,   155,    -1,
     157,   158,   159,   160,  1027,    -1,   163,    -1,   366,   166,
     167,   168,    -1,    -1,  1037,    -1,  1039,    -1,    -1,    -1,
     177,     2,    -1,    -1,  1047,    -1,    -1,    -1,   386,    -1,
      -1,    -1,  1124,    -1,    -1,    -1,    -1,    -1,   396,  1131,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,  1144,    -1,    -1,    -1,    -1,    -1,    -1,  1150,
    1151,    -1,    -1,    -1,    -1,    -1,  1158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1167,    -1,    -1,    -1,  1171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    79,    -1,
      -1,  1124,    83,    84,    -1,    -1,    49,    -1,  1131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1144,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      73,   112,    -1,    -1,    -1,  1158,    -1,   281,  1230,    -1,
      -1,    -1,    -1,    -1,  1167,    -1,    -1,    -1,  1171,    -1,
      -1,    12,  1244,  1245,    -1,    -1,    -1,    -1,    19,    -1,
     518,   305,    -1,    -1,    -1,    -1,   524,    -1,    -1,     2,
      31,    32,    -1,    -1,    -1,   808,  1268,   535,   811,   537,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,  1280,  1281,
    1282,  1283,    -1,    26,    -1,    28,  1288,  1289,    -1,    -1,
      -1,   345,    -1,    -1,    -1,    -1,    -1,  1230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1244,  1245,    -1,   857,    -1,    -1,    -1,    89,    -1,
     863,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   222,    -1,    -1,    -1,  1268,    79,    -1,    -1,   607,
      83,    84,    -1,   611,    -1,    -1,    -1,  1280,  1281,  1282,
    1283,    -1,    -1,   124,    -1,  1288,  1289,    -1,    -1,   627,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   284,    -1,   166,   167,   168,   289,   170,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   268,    -1,   270,   271,   272,
     273,    -1,    -1,   477,   478,    -1,    -1,    -1,    -1,   483,
      -1,    -1,   486,   487,   488,   489,   979,    -1,   981,   292,
      -1,   294,    -1,   986,    -1,    -1,   989,    -1,   301,    -1,
      -1,    -1,    -1,    -1,    -1,   998,    -1,  1000,    -1,    -1,
    1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,   366,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,  1027,    -1,    -1,    -1,   341,    -1,
     544,    -1,    -1,    22,  1037,   386,  1039,    26,    27,    -1,
      -1,   354,   355,    -1,  1047,   396,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   588,    -1,    -1,    -1,    -1,    -1,
     808,   284,    -1,   811,    73,    -1,   289,    76,   602,    78,
     604,    80,    -1,    82,    83,    -1,    85,    -1,    -1,    88,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   623,
       2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,  1124,    -1,   112,    -1,    -1,   115,    -1,  1131,   857,
      -1,    -1,    -1,    -1,    26,   863,    28,    -1,    -1,    -1,
      -1,  1144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,  1158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   366,  1167,    -1,    -1,   518,  1171,    -1,
      -1,    -1,    -1,   524,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,   386,   535,     2,   537,    79,    -1,    -1,
     503,    83,    84,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     523,    28,    -1,    -1,   527,   107,   529,    -1,    -1,   532,
     112,    -1,    -1,    -1,    -1,    12,    -1,  1230,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1244,  1245,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   979,   766,   981,    -1,    -1,   607,    -1,   986,    -1,
     611,   989,    79,    -1,    -1,  1268,    -1,    -1,    -1,    -1,
     998,   785,  1000,   787,    -1,  1003,   627,  1280,  1281,  1282,
    1283,    -1,    -1,    -1,    -1,  1288,  1289,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,  1027,
      -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,  1037,
     824,  1039,    -1,    -1,    -1,   518,    -1,    -1,    -1,  1047,
      -1,   524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     222,    -1,   535,   120,   537,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   867,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,   284,    -1,   908,    -1,  1124,   289,    -1,    -1,
      -1,    -1,    -1,  1131,   607,   222,    -1,    -1,   611,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   627,    -1,    -1,    -1,    -1,    -1,
    1158,    -1,    -1,    -1,    -1,    -1,    -1,   951,    -1,  1167,
      -1,    -1,    -1,  1171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   808,    -1,    -1,
     811,    -1,    -1,    31,    -1,    -1,    -1,   284,    -1,    -1,
      -1,    -1,   289,    -1,   366,    -1,    -1,    -1,    -1,   792,
     793,    -1,    -1,    -1,    -1,   798,   799,    -1,    -1,   802,
     803,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1230,    -1,   396,    -1,   857,    -1,    -1,    -1,
      -1,    -1,   863,    -1,    -1,    -1,  1244,  1245,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1048,    -1,    -1,    -1,    -1,    -1,
    1268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,
      -1,    -1,  1280,  1281,  1282,  1283,   869,    -1,    -1,    -1,
    1288,  1289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,   396,
     148,   149,   150,    -1,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,   163,    -1,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,   808,    -1,    -1,   811,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   518,    -1,   979,    -1,
     981,    -1,   524,    -1,    -1,   986,  1150,  1151,   989,    -1,
      -1,    -1,    -1,   535,    -1,   537,    -1,   998,    -1,  1000,
      -1,    -1,  1003,    -1,   857,    -1,    -1,   970,   971,    -1,
     863,    -1,    -1,   976,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,   988,  1027,    -1,   991,    -1,
     993,    -1,   995,    -1,    -1,    -1,  1037,    -1,  1039,    -1,
      -1,    -1,    73,    -1,    -1,    -1,  1047,    -1,    -1,    -1,
      -1,   518,    83,    84,    -1,    -1,    -1,   524,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   607,    -1,    -1,   535,   611,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,   627,   117,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,  1124,    69,    70,   979,    -1,   981,    -1,
    1131,    -1,    77,   986,    -1,    -1,   989,    -1,    -1,    -1,
     607,    -1,    87,  1144,   611,   998,    -1,  1000,    -1,    -1,
    1003,    96,    97,    -1,    99,    -1,   101,  1158,   103,    -1,
     627,   106,    -1,    -1,    -1,   110,  1167,    -1,   113,    -1,
    1171,   116,    -1,    -1,  1027,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1037,    -1,  1039,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1047,    -1,   227,  1160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1174,  1175,  1176,  1177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,  1230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,   269,   270,
     271,   272,   273,  1244,  1245,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,   294,    -1,    -1,   808,  1268,    -1,   811,
     301,  1124,    -1,    -1,    -1,    -1,    -1,    -1,  1131,  1280,
    1281,  1282,  1283,    -1,    30,    -1,    -1,  1288,  1289,    -1,
      -1,  1144,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,  1158,    -1,    -1,    -1,    -1,
     341,    -1,    -1,     3,  1167,   857,    -1,    -1,  1171,    -1,
      -1,   863,    -1,   354,   355,    -1,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,   808,    -1,    33,   811,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,  1230,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
     857,  1244,  1245,    -1,    -1,    -1,   863,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    99,
     156,   101,   158,   103,    -1,  1268,   106,    -1,    -1,    -1,
     110,   111,    -1,   113,   170,    -1,   116,  1280,  1281,  1282,
    1283,    -1,    -1,    -1,    -1,  1288,  1289,   979,    -1,   981,
      -1,    -1,    -1,    -1,   986,    -1,    -1,   989,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   998,    -1,  1000,    -1,
     206,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,  1027,    -1,    -1,    -1,    -1,
      -1,    -1,   523,    -1,    -1,  1037,   527,  1039,   529,    -1,
      -1,   532,    -1,    -1,    -1,  1047,    -1,    -1,    -1,    -1,
       3,    -1,   979,    -1,   981,    -1,    -1,    -1,    -1,   986,
     266,    -1,   989,    -1,    17,    18,    -1,    20,   274,   275,
      -1,   998,    25,  1000,    -1,    -1,  1003,    -1,    -1,   285,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
    1027,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
    1037,    -1,  1039,    -1,    -1,    -1,    69,    70,    -1,   325,
    1047,    -1,  1124,    -1,    77,    -1,    -1,    -1,    -1,  1131,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1144,    96,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,  1158,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,  1167,    22,    -1,    -1,  1171,
      26,    27,    -1,    -1,    -1,    -1,   382,    -1,   384,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   408,    -1,    -1,    -1,    -1,   413,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1144,    -1,   172,
      76,    -1,    78,    -1,    80,    -1,    82,   433,  1230,    85,
      -1,  1158,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
    1167,    -1,  1244,  1245,  1171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,  1268,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,  1280,  1281,
    1282,  1283,    -1,    -1,   140,    -1,  1288,  1289,    -1,    31,
      -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   792,   793,  1230,    -1,    -1,    -1,   798,   799,   165,
      -1,   802,   803,    -1,    -1,   171,    -1,  1244,  1245,    -1,
      -1,   812,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   545,
      -1,  1268,    -1,   549,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,   562,   848,    -1,    -1,
     102,    -1,    -1,    -1,    -1,   571,   169,    -1,    -1,   172,
     576,   174,    -1,    -1,    -1,    -1,    -1,   868,   869,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,    -1,   138,   139,    -1,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,   166,   167,   168,   633,   170,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   970,
     971,    -1,    -1,    -1,    -1,   976,    -1,   978,    -1,    -1,
      -1,    -1,    -1,    -1,   985,    -1,    -1,   988,    -1,    -1,
     991,    -1,   993,   709,   995,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,  1008,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,  1035,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,   813,   106,    -1,
      -1,    -1,   110,    -1,   820,   113,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,   830,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,   848,   141,   142,   143,   144,   145,    35,    -1,
      37,    38,   150,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,   159,    -1,    50,   162,   163,   164,    -1,    55,  1160,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
      -1,    -1,    -1,  1174,  1175,  1176,  1177,    -1,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   905,
      -1,    88,    -1,    90,    -1,    -1,   912,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   927,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,  1224,  1225,    -1,    -1,  1228,  1229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1238,    -1,  1240,
      -1,  1242,    -1,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,  1007,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,  1032,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1094,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,    -1,   170,
     171,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,   171,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
     171,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,   171,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
     171,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    54,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,    -1,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,    -1,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,   166,   167,   168,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    61,    62,    63,    64,    -1,
      66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    47,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,   173,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,   107,   108,    -1,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,   173,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,   173,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,   175,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,   175,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
     171,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,   175,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,   175,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    31,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,   124,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     4,     5,     6,
       7,     8,     9,    10,    -1,   141,   142,    14,   144,   145,
     146,    18,   148,   149,   150,    22,   152,   153,   154,   155,
      27,   157,   158,   159,   160,   161,   162,   163,    35,    -1,
     166,   167,   168,    40,    41,    -1,    -1,    44,    -1,    -1,
      47,   177,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    31,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    86,
      -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,   141,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,   168,   124,   170,    -1,   172,   173,   174,    -1,    -1,
     177,     4,     5,     6,     7,     8,     9,    10,    -1,   141,
     142,    14,   144,   145,   146,    18,   148,   149,   150,    22,
     152,   153,   154,   155,    27,   157,   158,   159,   160,   161,
      -1,   163,    35,    -1,   166,   167,   168,    40,    41,    -1,
      -1,    44,    -1,    -1,    47,   177,    -1,    -1,    51,    -1,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    12,    -1,   150,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,   159,    -1,    25,   162,
     163,   164,    -1,    -1,    -1,   168,    33,   170,    35,   172,
      -1,   174,    39,    -1,   177,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,    -1,    -1,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,    -1,   163,    -1,    -1,   166,
     167,   168,   169,    -1,    -1,   172,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,   174,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,   164,
      22,    -1,    -1,    25,    -1,   170,    -1,   172,    -1,   174,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,     3,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,   141,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    62,    -1,    -1,    -1,    -1,
     172,    -1,   174,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,   109,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,    -1,    -1,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     3,   163,    -1,    -1,   166,
     167,   168,   169,   170,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    96,    97,
      -1,    99,    19,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    31,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,    -1,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,    -1,
     148,    -1,    -1,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,    -1,   163,    -1,    -1,   166,   167,
     168,   169,    89,    -1,    -1,    12,    93,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    12,    93,    -1,    -1,    -1,
     177,    -1,    19,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    89,   170,    -1,    -1,    93,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    31,    32,   133,   134,   135,   136,
      -1,   138,   139,    -1,   141,   142,    -1,   144,   145,   146,
      47,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    89,    -1,    -1,    -1,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    47,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,   170,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,    47,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,    89,   166,   167,   168,    93,   170,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    31,   124,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    72,
      -1,   166,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,   124,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    72,   165,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    12,    89,    -1,
      -1,    -1,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    47,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,   170,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,   170,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,   102,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,    89,   166,   167,   168,    93,   170,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    31,   124,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    72,    -1,   166,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    12,    89,    -1,    -1,    -1,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    31,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      89,   166,   167,   168,    93,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   177,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,   120,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   124,    -1,   166,   167,   168,
      -1,    -1,    -1,    -1,    -1,    89,   175,    -1,   177,    93,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    -1,   166,   167,   168,
     124,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    12,   166,   167,   168,    -1,   170,    -1,    19,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,   168,   123,   124,    -1,    -1,    -1,    -1,    -1,    89,
     177,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   102,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,   124,   166,   167,   168,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,   177,    -1,    -1,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    31,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,   166,   167,   168,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,   124,   166,   167,   168,    -1,    -1,    -1,    -1,   173,
      -1,    89,    -1,   177,    -1,    93,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    12,   120,   166,   167,   168,   124,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    12,    -1,   166,   167,
     168,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,   168,   124,    -1,
      -1,    -1,    12,    89,    -1,    -1,   177,    93,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    31,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   124,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    12,    89,
     166,   167,   168,    93,    -1,    19,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    31,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    89,   166,   167,   168,    93,
      -1,    -1,    -1,   173,    12,    -1,    -1,   177,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     124,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,   177,    -1,    93,    -1,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      12,    -1,   166,   167,   168,    -1,   124,    19,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    12,    -1,   166,   167,
     168,    -1,    -1,    19,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,   166,   167,   168,    -1,   124,    -1,
      -1,    -1,    -1,    89,    -1,   177,    12,    93,    -1,    -1,
      -1,    -1,    -1,    19,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    31,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   124,    -1,
     166,   167,   168,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,   177,    -1,    19,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    31,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
     166,   167,   168,    89,    -1,    -1,    -1,    93,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    12,    89,    -1,    -1,    -1,    93,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    31,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   124,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    89,
     166,   167,   168,    93,    -1,    -1,    -1,    12,    13,    -1,
      -1,   177,   102,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    12,    89,    -1,    -1,   177,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,   102,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,   102,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     177,   102,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,   102,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,   102,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    31,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,    89,   166,   167,   168,
      93,    -1,    -1,    -1,    12,    -1,    -1,    -1,   177,   102,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   124,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,   177,    93,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,    -1,   166,   167,   168,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    -1,    22,   166,   167,
     168,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    76,    -1,    78,    -1,    80,    35,    82,    37,    38,
      85,    -1,    -1,    88,    43,    90,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,    88,
      -1,    90,    -1,    -1,    -1,   140,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
     109,    37,    38,   112,    -1,    -1,   115,    43,    -1,    -1,
     165,    -1,    -1,    -1,    50,    -1,   171,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    22,    90,    -1,   165,    26,    27,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,   109,    43,    -1,   112,    -1,    -1,   115,
       1,    50,     3,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    76,    -1,    78,
      -1,    80,    33,    82,    -1,    -1,    85,    -1,    39,    88,
      -1,    90,    -1,    -1,    45,    -1,    -1,    -1,    49,   165,
      -1,    52,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
     109,    62,    -1,   112,    -1,    -1,   115,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,     3,
      -1,   140,    -1,    -1,    -1,    96,    97,    -1,    99,    -1,
     101,    -1,   103,    17,    18,   106,    20,    -1,    -1,   110,
      -1,    25,   113,    -1,    -1,   116,   165,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,   140,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    17,    18,
      -1,    20,    -1,    77,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    87,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    96,    97,    -1,    99,    45,   101,    -1,   103,
      49,    -1,   106,    52,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      99,    -1,   101,    -1,   103,     3,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,    77,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    96,    97,
      -1,    99,    45,   101,    -1,   103,    49,    -1,   106,    52,
      -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    96,    97,    -1,    99,    25,   101,    -1,
     103,    -1,    -1,   106,    -1,    33,    -1,   110,    -1,    -1,
     113,    39,    -1,   116,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,    77,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    96,    97,
      -1,    99,    45,   101,    -1,   103,    49,    -1,   106,    52,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   182,   183,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    14,    15,    16,    17,    18,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    32,    33,
      35,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      48,    49,    50,    52,    55,    56,    57,    58,    59,    61,
      62,    63,    64,    66,    67,    69,    70,    71,    76,    77,
      78,    79,    80,    81,    82,    85,    86,    87,    88,    90,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   106,   107,   108,   109,   110,   112,   113,   115,
     116,   119,   121,   124,   140,   141,   142,   143,   144,   145,
     150,   159,   162,   163,   164,   165,   168,   170,   172,   174,
     177,   184,   185,   186,   187,   188,   189,   192,   193,   194,
     195,   200,   201,   202,   204,   205,   206,   211,   212,   216,
     217,   221,   223,   226,   227,   230,   231,   232,   233,   234,
     235,   238,   239,   241,   243,   246,   247,   248,   249,   250,
     251,   255,   256,   261,   262,   263,   264,   267,   268,   273,
     274,   276,   277,   282,   286,   287,   289,   290,   312,   317,
     318,   322,   323,   344,   345,   346,   347,   348,   349,   350,
     358,   359,   360,   361,   362,   363,   365,   368,   369,   370,
     371,   372,   373,   374,   375,   377,   378,   379,   380,   381,
     165,    22,    35,    40,    41,    44,    55,    88,   101,   170,
     174,   246,   274,   344,   349,   359,   360,   365,   368,   370,
     371,   120,   351,   352,     3,   218,   365,   351,   365,   109,
     324,    90,   218,   186,   338,   365,   186,   172,     3,    17,
      18,    20,    25,    33,    39,    45,    49,    52,    62,    69,
      70,    77,    87,    96,    97,    99,   101,   103,   106,   110,
     113,   116,   219,   220,   222,    11,    78,   122,   240,   365,
     240,   365,   240,   365,    27,   115,   242,   365,    82,    85,
     202,   172,   220,   220,   220,   172,   220,   325,   326,    32,
     206,   225,   365,   259,   260,   365,   365,    18,    77,    96,
     113,   365,   365,   365,     8,   172,   229,   228,    27,    33,
      47,    49,    51,    75,    78,    90,    97,   101,   109,   185,
     224,   278,   279,   280,   303,   304,   305,   330,   335,   365,
     338,   107,   108,   165,   282,   283,   364,   365,   367,   365,
     225,   365,   365,   365,   100,   172,   186,   365,   365,   188,
     206,   188,   206,   365,   242,   365,   367,     3,   365,   365,
     365,   365,   365,     1,   171,   184,   207,   338,   111,   151,
     339,   340,   367,   175,   240,   338,   365,   376,   365,    80,
     186,    22,    35,    38,    55,    88,   170,   189,   190,   191,
     202,   206,   194,     8,   149,   196,   170,    46,    84,   114,
     203,    26,   323,   365,     8,   263,   365,   366,    55,   146,
     265,   220,     1,   193,   220,   269,   272,   172,   298,    53,
      73,    83,   307,    27,    75,    78,    90,   109,   308,    27,
      78,    90,   109,   306,   220,   319,   320,   325,   164,   165,
     365,    12,    19,    31,    89,    93,   124,   141,   142,   144,
     145,   146,   148,   149,   150,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   166,   167,   168,
     177,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   169,   294,   172,   174,
      89,    93,   365,   365,   365,   220,   338,    55,   172,   186,
     165,   206,    47,   351,   322,   165,   147,   165,   119,   221,
     341,   342,   343,   367,   170,   220,   172,   225,    32,    47,
     225,   120,   225,   354,    32,    47,   225,   354,   225,   354,
      47,   225,   354,   220,   220,   102,   206,   102,   125,   206,
     294,   203,   341,   165,   172,   172,   206,   186,   111,   172,
     220,   327,   328,     1,   146,   334,    47,   147,   186,   225,
     147,   225,    13,   172,   172,   225,   341,   230,   230,    47,
      90,   304,   305,   173,   147,   111,   172,   220,   302,   146,
     165,   365,   365,   123,   284,   165,   170,   225,   172,   341,
     165,   252,   252,   225,   225,   165,   171,   171,   184,   147,
     171,   365,   147,   173,   147,   173,   365,   175,   354,    47,
     147,   175,   354,   123,   147,   175,     8,   220,    40,    41,
     174,   239,     3,   172,   197,     1,   171,   207,   214,   215,
     365,   209,   365,    65,    36,    72,   165,   263,   265,   109,
     236,   287,   220,   338,   170,   171,   272,   125,   147,   171,
     173,   299,   301,   303,   308,    90,     1,   146,   332,   333,
      90,     1,     3,    12,    17,    19,    20,    25,    45,    52,
      54,    62,    70,    87,    99,   103,   110,   116,   141,   142,
     143,   144,   145,   146,   148,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   163,   166,   167,   168,   169,
     172,   220,   291,   292,   293,   294,   344,   125,   321,   147,
     165,   165,   365,   365,   365,   240,   365,   240,   365,   365,
     365,   365,   365,   365,   365,     3,    20,    33,    62,   103,
     109,   221,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,    68,
     367,   367,   367,   367,   367,   341,   341,   240,   365,   240,
     365,    32,    47,    32,    47,   102,   172,    47,   175,   220,
      27,    47,    90,   115,   353,   356,   357,   365,   381,   240,
     365,   225,   325,   365,   365,   125,   173,   147,    47,   338,
      44,   365,   240,   365,   172,   225,    44,   365,   240,   365,
     225,   225,   240,   365,   225,   125,   125,   186,    34,   186,
     365,    34,   365,    65,   173,   342,   220,   244,   245,   328,
     147,   173,   224,   365,   125,   329,   365,   326,   259,   220,
     322,   365,   365,   173,   302,   308,   280,   328,   146,   336,
     337,   335,   285,   205,     1,   257,   343,   173,    21,   253,
     171,   173,   173,   339,   173,   339,   186,   175,   240,   365,
     175,   186,   365,   175,   365,   175,   365,   172,   365,   365,
     338,   196,   173,   198,   199,   343,   171,   171,   147,   165,
      13,   149,   147,   165,    13,    36,    72,   220,   141,   142,
     143,   144,   145,   159,   163,   168,   208,   293,   294,   295,
     365,   208,   210,   265,   170,   237,   322,   165,   172,     1,
     266,   365,   270,   271,   147,   173,   334,     1,   224,   330,
     331,   105,   309,   172,   297,   365,   141,   149,   297,   297,
     365,   320,   172,   174,   165,   165,   165,   165,   165,   165,
     173,   175,    44,   240,   365,    44,   240,   365,   342,   240,
     365,   172,    47,    90,   147,   173,    17,    20,    25,    45,
      52,    62,    70,    87,    99,   110,   116,   344,    89,    89,
     351,   351,   165,   165,   367,   343,   365,   173,   365,    32,
     225,    32,   225,   355,   356,   365,    32,   225,   354,    32,
     225,   354,   225,   354,   225,   354,   365,   365,    34,   186,
      34,    34,   186,   102,   206,   220,   173,   147,   173,   173,
     327,   334,    68,   367,   220,   173,   173,   337,   146,   281,
     173,   335,   151,   296,   329,   365,   171,    74,   117,   171,
     258,   173,   172,   206,   220,   254,   186,   175,   354,   175,
     354,   186,   123,   342,    47,    47,    47,   175,   147,   173,
     214,   221,    17,    18,    20,    25,    45,    49,    52,    70,
      77,    87,    96,    97,    99,   101,   110,   113,   116,   170,
     213,   295,   365,   111,   365,   208,   210,   147,   165,    13,
     165,   170,   266,   319,   325,   342,   171,    82,    85,   171,
     185,   193,   227,   272,   193,   301,   309,    60,   118,   313,
     299,   300,   173,   292,   294,   173,   175,   365,    32,    32,
     365,    32,    32,   173,   175,   175,   342,   356,   334,   344,
     344,   225,   225,   225,   102,    44,   365,    44,   365,   147,
     173,   102,    44,   365,   225,    44,   365,   225,   225,   225,
     186,   186,   365,   186,    34,   165,   165,   245,   206,   329,
     172,   172,   296,   329,   330,   309,   337,   365,    32,   186,
     338,   254,   146,   206,    44,   186,   365,   175,    44,   186,
     365,   175,   365,   173,   240,   365,   240,   365,   240,   365,
     199,   208,    13,    36,    72,    36,    72,   165,   165,   295,
     365,   365,   266,   171,   165,   165,   173,   193,   227,   227,
     272,   313,     3,    92,   103,   314,   315,   316,   365,   288,
     173,   297,   297,   102,    44,    44,   102,    44,    44,    44,
      44,   173,   329,   365,   365,   365,   356,   365,   365,   365,
      34,   186,   341,   341,   296,   329,   186,   225,   173,   365,
     365,   186,   365,   186,   175,   175,   171,   111,   365,   208,
     210,   208,   210,    13,   171,   165,   227,   275,   316,   118,
     147,   125,   152,   154,   155,   157,   158,    60,    32,   165,
     205,   226,   310,   311,   365,   365,   365,   365,   365,   365,
     102,   102,   102,   102,   186,   173,   173,   206,   102,   102,
     165,   165,   165,   165,   365,   311,   365,   315,   316,   316,
     316,   316,   316,   316,   314,   184,   102,   102,   102,   102,
     102,   102,   365,   365,   365,   365,   164,   164,   365,   365
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   181,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   189,   189,   190,   191,   191,
     191,   192,   193,   193,   194,   194,   194,   195,   196,   196,
     197,   197,   198,   198,   199,   200,   201,   201,   201,   202,
     202,   202,   203,   203,   204,   205,   205,   205,   206,   207,
     207,   208,   208,   208,   208,   208,   208,   209,   209,   209,
     209,   209,   209,   210,   210,   211,   211,   211,   211,   211,
     211,   211,   212,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     214,   214,   214,   214,   214,   215,   215,   216,   217,   217,
     217,   217,   217,   217,   218,   218,   219,   219,   219,   219,
     219,   220,   220,   221,   221,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   227,   229,   227,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     231,   231,   232,   233,   233,   234,   235,   235,   235,   236,
     235,   237,   235,   238,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   247,   247,   247,   247,   248,   248,
     249,   249,   250,   250,   250,   251,   251,   251,   251,   252,
     252,   253,   253,   253,   254,   254,   255,   256,   256,   257,
     257,   258,   258,   258,   259,   259,   259,   260,   260,   261,
     262,   262,   263,   264,   264,   264,   265,   265,   266,   266,
     266,   266,   266,   267,   267,   268,   269,   269,   270,   269,
     269,   271,   269,   272,   272,   273,   275,   274,   276,   277,
     277,   277,   278,   278,   279,   279,   280,   280,   280,   281,
     281,   282,   284,   283,   285,   283,   286,   288,   287,   289,
     289,   289,   289,   289,   290,   291,   291,   292,   292,   292,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     302,   302,   303,   303,   303,   303,   303,   303,   304,   304,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   306,
     306,   306,   306,   306,   306,   307,   307,   307,   308,   308,
     308,   308,   308,   308,   308,   309,   309,   310,   310,   311,
     311,   311,   312,   313,   313,   313,   313,   313,   314,   314,
     315,   315,   315,   315,   315,   315,   315,   316,   316,   317,
     318,   318,   319,   319,   320,   321,   321,   322,   322,   322,
     322,   322,   324,   323,   323,   325,   325,   326,   326,   327,
     327,   327,   328,   328,   328,   329,   329,   329,   330,   331,
     331,   331,   332,   332,   333,   333,   334,   334,   334,   334,
     335,   335,   336,   337,   337,   338,   338,   339,   339,   340,
     340,   341,   341,   342,   342,   343,   343,   344,   344,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   347,   347,   347,   347,   347,   347,   347,
     348,   349,   350,   350,   350,   350,   350,   350,   350,   351,
     351,   352,   353,   353,   354,   355,   355,   356,   356,   356,
     357,   357,   357,   357,   357,   357,   358,   358,   358,   358,
     358,   359,   359,   359,   359,   359,   360,   361,   361,   361,
     361,   361,   361,   362,   363,   364,   364,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   366,   366,   367,   367,   367,   368,
     368,   368,   368,   369,   369,   369,   369,   369,   370,   370,
     370,   371,   371,   371,   371,   371,   371,   372,   372,   372,
     372,   373,   373,   374,   374,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   376,   376,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   378,   378,   378,   378,   378,   378,   378,
     379,   379,   379,   379,   380,   380,   380,   380,   381,   381,
     381,   381,   381,   381,   381
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       2,     3,     3,     2,     2,     1,     1,     0,     2,     1,
       1,     1,     1,     2,     3,     2,     2,     2,     0,     3,
       2,     3,     1,     3,     1,     4,     3,     4,     4,     0,
       1,     1,     0,     1,     6,     2,     3,     3,     1,     1,
       2,     1,     1,     3,     3,     3,     5,     1,     3,     3,
       3,     5,     5,     0,     1,     4,     6,     8,     8,     6,
       8,     8,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     5,     1,     3,     3,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     3,     1,     1,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     2,     1,     1,     1,     1,     6,     7,     3,     0,
       6,     0,     6,     2,     5,     3,     3,     6,     6,     4,
       5,     5,     3,     3,     6,     5,     6,     5,     6,     3,
       4,     3,     4,     5,     6,     5,     6,     3,     4,     3,
       4,     6,     7,     6,     7,     4,     5,     4,     5,     4,
       4,     3,     6,     5,     4,     3,     6,     5,     6,     5,
       8,     7,     4,     4,     6,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     3,
       4,     7,     5,     3,     6,     2,     2,     3,     3,     0,
       2,     2,     3,     5,     1,     3,     3,     5,     5,     0,
       2,     3,     2,     3,     4,     3,     1,     1,     3,     3,
       5,     5,     2,     1,     1,     1,     0,     2,     0,     2,
       3,     3,     4,     3,     3,     3,     1,     2,     0,     4,
       2,     0,     5,     1,     3,     1,     0,     8,     0,     1,
       1,     1,     0,     1,     1,     3,     1,     3,     1,     0,
       2,     6,     0,     3,     0,     4,     1,     0,     7,     4,
       4,     6,     6,     4,     2,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     3,     2,     3,     1,     3,     0,     1,     1,
       1,     1,     4,     5,     4,     5,     6,     6,     0,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     0,     1,     1,     1,     1,
       2,     1,     1,     0,     2,     2,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     3,
       1,     2,     1,     3,     2,     0,     2,     1,     2,     1,
       1,     1,     0,     5,     3,     1,     3,     3,     5,     1,
       1,     3,     1,     2,     3,     0,     2,     2,     1,     1,
       1,     1,     2,     1,     0,     1,     0,     2,     2,     1,
       1,     1,     2,     0,     1,     1,     3,     1,     1,     3,
       3,     0,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     5,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     6,     6,     4,     9,     9,     7,     6,     6,     4,
       9,     9,     7,     2,     3,     4,     6,     6,     9,     9,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     4,     1,     3,     4,     1,     3,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     8,     8,     9,     9,     4,     3,     3,     2,
       2,     2,     1,     3,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     4,     4,
       4,     3,     3,     3,     3,     5,     5,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     3,     4,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYCHPL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYCHPL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYCHPL_error or YYCHPL_UNDEF. */
#define YYERRCODE YYCHPL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYCHPL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (context);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, context);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ParserContext* context)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYCHPL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYCHPL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





#define yychpl_nerrs yyps->yychpl_nerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, YYMALLOC (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      YYFREE (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;

    case 2:
      yypstate_clear (yyps);
      break;

    default:
      break;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYCHPL_EMPTY; /* Cause a token to be read.  */

  yylsp[0] = *yypushed_loc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYCHPL_EMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYCHPL_EOF)
    {
      yychar = YYCHPL_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYCHPL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYCHPL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYCHPL_EMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: toplevel_stmt_ls  */
#line 636 "chpl.ypp"
                                      { context->topLevelStatements = (yyvsp[0].exprList); }
#line 6241 "bison-chpl-lib.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 640 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList(); }
#line 6247 "bison-chpl-lib.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 641 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6253 "bison-chpl-lib.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 648 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 6261 "bison-chpl-lib.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 656 "chpl.ypp"
  {
    context->notePragma((yyloc), (yyvsp[0].expr));
  }
#line 6269 "bison-chpl-lib.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 660 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-1]), (yylsp[0]));
    context->notePragma(loc, (yyvsp[0].expr));
  }
#line 6278 "bison-chpl-lib.cpp"
    break;

  case 9: /* stmt: attribute_group attribute_receiver  */
#line 670 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6286 "bison-chpl-lib.cpp"
    break;

  case 10: /* stmt: stmt_base  */
#line 675 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6294 "bison-chpl-lib.cpp"
    break;

  case 12: /* stmt_base: decl_base  */
#line 682 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6300 "bison-chpl-lib.cpp"
    break;

  case 13: /* stmt_base: include_module_stmt  */
#line 683 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6306 "bison-chpl-lib.cpp"
    break;

  case 14: /* stmt_base: block_stmt  */
#line 684 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6312 "bison-chpl-lib.cpp"
    break;

  case 15: /* stmt_base: use_stmt  */
#line 685 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6318 "bison-chpl-lib.cpp"
    break;

  case 16: /* stmt_base: import_stmt  */
#line 686 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6324 "bison-chpl-lib.cpp"
    break;

  case 17: /* stmt_base: require_stmt  */
#line 687 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6330 "bison-chpl-lib.cpp"
    break;

  case 18: /* stmt_base: extern_block_stmt  */
#line 688 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6336 "bison-chpl-lib.cpp"
    break;

  case 19: /* stmt_base: binary_implements_stmt  */
#line 690 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6342 "bison-chpl-lib.cpp"
    break;

  case 20: /* stmt_base: interface_stmt  */
#line 691 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6348 "bison-chpl-lib.cpp"
    break;

  case 21: /* stmt_base: TDEFER stmt  */
#line 693 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Defer::build(BUILDER, LOC((yyloc)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6365 "bison-chpl-lib.cpp"
    break;

  case 22: /* stmt_base: try_stmt  */
#line 705 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyloc), (yyvsp[0].commentsAndStmt)); }
#line 6371 "bison-chpl-lib.cpp"
    break;

  case 23: /* stmt_base: return_stmt  */
#line 706 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6377 "bison-chpl-lib.cpp"
    break;

  case 24: /* stmt_base: TBREAK opt_label_ident TSEMI  */
#line 708 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Break::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6390 "bison-chpl-lib.cpp"
    break;

  case 25: /* stmt_base: TCONTINUE opt_label_ident TSEMI  */
#line 717 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Continue::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6403 "bison-chpl-lib.cpp"
    break;

  case 26: /* stmt_base: TLABEL ident_def stmt  */
#line 726 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildLabelStmt((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].commentsAndStmt));
  }
#line 6411 "bison-chpl-lib.cpp"
    break;

  case 27: /* stmt_base: TYIELD opt_try_expr TSEMI  */
#line 730 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Yield::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6422 "bison-chpl-lib.cpp"
    break;

  case 28: /* stmt_base: error TSEMI  */
#line 737 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = STMT((yyloc), ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
    context->resetDeclStateOnError();
  }
#line 6431 "bison-chpl-lib.cpp"
    break;

  case 29: /* tryable_stmt: assignment_stmt  */
#line 744 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6437 "bison-chpl-lib.cpp"
    break;

  case 30: /* tryable_stmt: if_stmt  */
#line 745 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6443 "bison-chpl-lib.cpp"
    break;

  case 31: /* tryable_stmt: loop_stmt  */
#line 746 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6449 "bison-chpl-lib.cpp"
    break;

  case 32: /* tryable_stmt: select_stmt  */
#line 747 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6455 "bison-chpl-lib.cpp"
    break;

  case 33: /* tryable_stmt: manage_stmt  */
#line 748 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6461 "bison-chpl-lib.cpp"
    break;

  case 34: /* tryable_stmt: stmt_level_expr TSEMI  */
#line 749 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt(STMT((yyloc),(yyvsp[-1].expr))); }
#line 6467 "bison-chpl-lib.cpp"
    break;

  case 35: /* tryable_stmt: throw_stmt  */
#line 750 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6473 "bison-chpl-lib.cpp"
    break;

  case 36: /* tryable_stmt: TBEGIN opt_task_intent_ls stmt  */
#line 752 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Begin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6491 "bison-chpl-lib.cpp"
    break;

  case 37: /* tryable_stmt: TCOBEGIN opt_task_intent_ls block_stmt  */
#line 766 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    CHPL_ASSERT(blockStyle == BlockStyle::EXPLICIT);
    auto taskBodies = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Cobegin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)),
                               std::move(taskBodies));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6510 "bison-chpl-lib.cpp"
    break;

  case 38: /* tryable_stmt: TDELETE expr_ls TSEMI  */
#line 781 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Delete::build(BUILDER, LOC((yyloc)), std::move(exprs));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6522 "bison-chpl-lib.cpp"
    break;

  case 39: /* tryable_stmt: TLOCAL expr do_stmt  */
#line 789 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6538 "bison-chpl-lib.cpp"
    break;

  case 40: /* tryable_stmt: TLOCAL do_stmt  */
#line 801 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6553 "bison-chpl-lib.cpp"
    break;

  case 41: /* tryable_stmt: TON expr do_stmt  */
#line 812 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = On::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                          std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6569 "bison-chpl-lib.cpp"
    break;

  case 42: /* tryable_stmt: TSERIAL expr do_stmt  */
#line 824 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                              std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6585 "bison-chpl-lib.cpp"
    break;

  case 43: /* tryable_stmt: TSERIAL do_stmt  */
#line 836 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6600 "bison-chpl-lib.cpp"
    break;

  case 44: /* tryable_stmt: TSYNC stmt  */
#line 847 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Sync::build(BUILDER, LOC((yyloc)), blockStyle,
                            std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6617 "bison-chpl-lib.cpp"
    break;

  case 47: /* collect_attributes: %empty  */
#line 867 "chpl.ypp"
  {
    auto attributeGroup = context->buildAttributeGroup((yyloc));
    if (attributeGroup != nullptr) {
      context->resetAttributeGroupPartsState();
    }
    context->loopAttributes = attributeGroup.release();
  }
#line 6629 "bison-chpl-lib.cpp"
    break;

  case 48: /* attribute_receiver: collect_attributes loop_stmt  */
#line 877 "chpl.ypp"
                               { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6635 "bison-chpl-lib.cpp"
    break;

  case 54: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace opt_attribute_actuals  */
#line 893 "chpl.ypp"
 {
  context->noteAttribute((yylsp[-2]), (yyvsp[-2].expr), true, (yyvsp[-1].exprList), (yyvsp[0].maybeNamedActualList));
 }
#line 6643 "bison-chpl-lib.cpp"
    break;

  case 55: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace  */
#line 897 "chpl.ypp"
 {
  // this allows us to distinguish between @attribute() and @attribute
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, (yyvsp[0].exprList), lst);
 }
#line 6654 "bison-chpl-lib.cpp"
    break;

  case 56: /* attribute_decl_stmt: attribute_decl_begin STRINGLITERAL  */
#line 904 "chpl.ypp"
 {
  // this allows us to maintain @unstable "message" without requiring parens
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  auto actual = makeMaybeNamedActual((yyvsp[0].expr));
  lst->push_back(actual);
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, context->makeList(), lst);
 }
#line 6667 "bison-chpl-lib.cpp"
    break;

  case 57: /* attribute_decl_begin: TATMARK TIDENT  */
#line 916 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    (yyval.expr) = ident;
  }
#line 6676 "bison-chpl-lib.cpp"
    break;

  case 58: /* opt_attribute_decl_toolspace: %empty  */
#line 923 "chpl.ypp"
  {
    (yyval.exprList)=context->makeList();
  }
#line 6684 "bison-chpl-lib.cpp"
    break;

  case 59: /* opt_attribute_decl_toolspace: TDOT TIDENT opt_attribute_decl_toolspace  */
#line 927 "chpl.ypp"
  {
    // had to create this as a list first, otherwise they get inserted in the
    // wrong order.
    auto lst = context->makeList(context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr)));
    (yyval.exprList) = context->appendList(lst, (yyvsp[0].exprList));
  }
#line 6695 "bison-chpl-lib.cpp"
    break;

  case 60: /* opt_attribute_actuals: TLP TRP  */
#line 937 "chpl.ypp"
  { (yyval.maybeNamedActualList)=new MaybeNamedActualList(); }
#line 6701 "bison-chpl-lib.cpp"
    break;

  case 61: /* opt_attribute_actuals: TLP attribute_actuals_ls TRP  */
#line 939 "chpl.ypp"
  {
    (yyval.maybeNamedActualList) = (yyvsp[-1].maybeNamedActualList);
  }
#line 6709 "bison-chpl-lib.cpp"
    break;

  case 62: /* attribute_actuals_ls: attribute_actual  */
#line 946 "chpl.ypp"
  { auto lst = new MaybeNamedActualList();
    lst->push_back((yyvsp[0].maybeNamedActual));
    (yyval.maybeNamedActualList) = lst;
  }
#line 6718 "bison-chpl-lib.cpp"
    break;

  case 63: /* attribute_actuals_ls: attribute_actuals_ls TCOMMA attribute_actual  */
#line 951 "chpl.ypp"
  {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
  }
#line 6728 "bison-chpl-lib.cpp"
    break;

  case 65: /* module_decl_start: opt_access_control opt_prototype TMODULE ident_def  */
#line 964 "chpl.ypp"
    {
      // take into account location of public/private, if any
      auto loc = context->declStartLoc((yylsp[-1]));

      ModuleParts parts = {
        .comments=context->gatherComments(loc),
        .attributeGroup=context->buildAttributeGroup((yyloc)).release(),
        .visibility=(yyvsp[-3].visibilityTag),
        .kind=(yyvsp[-2].moduleKind),
        .name=(yyvsp[0].uniqueStr)
      };

      (yyval.moduleParts) = parts;
      context->resetDeclState();
      context->clearComments();
    }
#line 6749 "bison-chpl-lib.cpp"
    break;

  case 66: /* module_decl_stmt: module_decl_start TLCBR TRCBR  */
#line 984 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-1]));

      ModuleParts parts = (yyvsp[-2].moduleParts);
      ParserExprList* body = context->makeList();
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-2])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6768 "bison-chpl-lib.cpp"
    break;

  case 67: /* module_decl_stmt: module_decl_start TLCBR stmt_ls TRCBR  */
#line 999 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-2]));

      ModuleParts parts = (yyvsp[-3].moduleParts);
      ParserExprList* body = (yyvsp[-1].exprList);
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6787 "bison-chpl-lib.cpp"
    break;

  case 68: /* module_decl_stmt: module_decl_start TLCBR error TRCBR  */
#line 1014 "chpl.ypp"
    {
      ModuleParts parts = (yyvsp[-3].moduleParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      ParserExprList* body = context->makeList(std::move(err));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6804 "bison-chpl-lib.cpp"
    break;

  case 69: /* opt_access_control: %empty  */
#line 1029 "chpl.ypp"
           { (yyval.visibilityTag) = context->noteVisibility(Decl::DEFAULT_VISIBILITY); }
#line 6810 "bison-chpl-lib.cpp"
    break;

  case 70: /* opt_access_control: TPUBLIC  */
#line 1030 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PUBLIC); }
#line 6817 "bison-chpl-lib.cpp"
    break;

  case 71: /* opt_access_control: TPRIVATE  */
#line 1032 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PRIVATE); }
#line 6824 "bison-chpl-lib.cpp"
    break;

  case 72: /* opt_prototype: %empty  */
#line 1037 "chpl.ypp"
             { (yyval.moduleKind) = Module::DEFAULT_MODULE_KIND; }
#line 6830 "bison-chpl-lib.cpp"
    break;

  case 73: /* opt_prototype: TPROTOTYPE  */
#line 1038 "chpl.ypp"
             { context->noteDeclStartLoc((yylsp[0]));
               (yyval.moduleKind) = Module::PROTOTYPE;  }
#line 6837 "bison-chpl-lib.cpp"
    break;

  case 74: /* include_module_stmt: TINCLUDE opt_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 1044 "chpl.ypp"
  {
    auto node = Include::build(BUILDER, LOC((yyloc)), context->visibility, (yyvsp[-3].moduleKind), (yyvsp[-1].uniqueStr));
    (yyval.commentsAndStmt) = STMT((yyloc), node.release());
    context->visibility = Decl::DEFAULT_VISIBILITY;
  }
#line 6847 "bison-chpl-lib.cpp"
    break;

  case 75: /* block_stmt_body: TLCBR TRCBR  */
#line 1062 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-1]), (yylsp[0]), nullptr);
  }
#line 6855 "bison-chpl-lib.cpp"
    break;

  case 76: /* block_stmt_body: TLCBR stmt_ls TRCBR  */
#line 1066 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-2]), (yylsp[0]), (yyvsp[-1].exprList));
  }
#line 6863 "bison-chpl-lib.cpp"
    break;

  case 77: /* block_stmt_body: TLCBR error TRCBR  */
#line 1070 "chpl.ypp"
  {
    context->clearComments();
    // create a list of stmts that just has an ErroneousExpr
    auto errorExpr = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    ParserExprList* lst = context->makeList(errorExpr.release());
    (yyval.exprList) = lst;
  }
#line 6875 "bison-chpl-lib.cpp"
    break;

  case 78: /* block_stmt: block_stmt_body  */
#line 1081 "chpl.ypp"
  {
    // comments from before the opening bracket will have been
    // gathered into stmt_ls when that was parsed, so pull out any
    // comments that occur before the opening bracket.
    // (This would be simpler to handle with midrule actions but those
    //  lead to parser conflicts).
    CommentsAndStmt cs = {0};
    cs.comments = context->gatherCommentsFromList((yyvsp[0].exprList), (yylsp[0]));

    // Create the BlockStmt
    auto blockstmt = Block::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[0].exprList)));
    cs.stmt = blockstmt.release();
    (yyval.commentsAndStmt) = cs;
  }
#line 6894 "bison-chpl-lib.cpp"
    break;

  case 79: /* stmt_ls: toplevel_stmt  */
#line 1099 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 6900 "bison-chpl-lib.cpp"
    break;

  case 80: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 1100 "chpl.ypp"
                                       { context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6906 "bison-chpl-lib.cpp"
    break;

  case 81: /* renames_ls: expr  */
#line 1105 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 6914 "bison-chpl-lib.cpp"
    break;

  case 82: /* renames_ls: all_op_name  */
#line 1109 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 6922 "bison-chpl-lib.cpp"
    break;

  case 83: /* renames_ls: expr TAS expr  */
#line 1113 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(as);
  }
#line 6931 "bison-chpl-lib.cpp"
    break;

  case 84: /* renames_ls: renames_ls TCOMMA expr  */
#line 1118 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 6939 "bison-chpl-lib.cpp"
    break;

  case 85: /* renames_ls: renames_ls TCOMMA all_op_name  */
#line 1122 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 6947 "bison-chpl-lib.cpp"
    break;

  case 86: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 1126 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), as);
  }
#line 6956 "bison-chpl-lib.cpp"
    break;

  case 87: /* use_renames_ls: expr  */
#line 1136 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6965 "bison-chpl-lib.cpp"
    break;

  case 88: /* use_renames_ls: expr TAS expr  */
#line 1141 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6975 "bison-chpl-lib.cpp"
    break;

  case 89: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 1147 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6986 "bison-chpl-lib.cpp"
    break;

  case 90: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 1154 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yylsp[0]), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), node);
  }
#line 6995 "bison-chpl-lib.cpp"
    break;

  case 91: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 1159 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7006 "bison-chpl-lib.cpp"
    break;

  case 92: /* use_renames_ls: use_renames_ls TCOMMA expr TAS TUNDERSCORE  */
#line 1166 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned(ident));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7018 "bison-chpl-lib.cpp"
    break;

  case 93: /* opt_only_ls: %empty  */
#line 1176 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 7024 "bison-chpl-lib.cpp"
    break;

  case 94: /* opt_only_ls: renames_ls  */
#line 1177 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 7030 "bison-chpl-lib.cpp"
    break;

  case 95: /* use_stmt: opt_access_control TUSE use_renames_ls TSEMI  */
#line 1182 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildMultiUseStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7039 "bison-chpl-lib.cpp"
    break;

  case 96: /* use_stmt: opt_access_control TUSE expr TEXCEPT renames_ls TSEMI  */
#line 1187 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7051 "bison-chpl-lib.cpp"
    break;

  case 97: /* use_stmt: opt_access_control TUSE expr TAS expr TEXCEPT renames_ls TSEMI  */
#line 1195 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7064 "bison-chpl-lib.cpp"
    break;

  case 98: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TEXCEPT renames_ls TSEMI  */
#line 1204 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7078 "bison-chpl-lib.cpp"
    break;

  case 99: /* use_stmt: opt_access_control TUSE expr TONLY opt_only_ls TSEMI  */
#line 1214 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7090 "bison-chpl-lib.cpp"
    break;

  case 100: /* use_stmt: opt_access_control TUSE expr TAS expr TONLY opt_only_ls TSEMI  */
#line 1222 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7103 "bison-chpl-lib.cpp"
    break;

  case 101: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TONLY opt_only_ls TSEMI  */
#line 1231 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7117 "bison-chpl-lib.cpp"
    break;

  case 102: /* import_stmt: opt_access_control TIMPORT import_ls TSEMI  */
#line 1244 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImportStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7126 "bison-chpl-lib.cpp"
    break;

  case 120: /* import_expr: expr  */
#line 1280 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), true);
  }
#line 7134 "bison-chpl-lib.cpp"
    break;

  case 121: /* import_expr: expr TDOT all_op_name  */
#line 1284 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7143 "bison-chpl-lib.cpp"
    break;

  case 122: /* import_expr: expr TDOT import_internal_type_ident  */
#line 1289 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7152 "bison-chpl-lib.cpp"
    break;

  case 123: /* import_expr: expr TAS ident_use  */
#line 1294 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(as), true);
  }
#line 7162 "bison-chpl-lib.cpp"
    break;

  case 124: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 1300 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[-4].expr)),
                                        VisibilityClause::BRACES,
                                        context->consumeList((yyvsp[-1].exprList)), true);
  }
#line 7172 "bison-chpl-lib.cpp"
    break;

  case 125: /* import_ls: import_expr  */
#line 1308 "chpl.ypp"
                                { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 7178 "bison-chpl-lib.cpp"
    break;

  case 126: /* import_ls: import_ls TCOMMA import_expr  */
#line 1309 "chpl.ypp"
                                { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 7184 "bison-chpl-lib.cpp"
    break;

  case 127: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 1314 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Require::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 7194 "bison-chpl-lib.cpp"
    break;

  case 128: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 1323 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7202 "bison-chpl-lib.cpp"
    break;

  case 129: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 1327 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7210 "bison-chpl-lib.cpp"
    break;

  case 130: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 1331 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7218 "bison-chpl-lib.cpp"
    break;

  case 131: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 1335 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7226 "bison-chpl-lib.cpp"
    break;

  case 132: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 1339 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7234 "bison-chpl-lib.cpp"
    break;

  case 133: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 1343 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr))));
    }
#line 7242 "bison-chpl-lib.cpp"
    break;

  case 134: /* opt_label_ident: %empty  */
#line 1351 "chpl.ypp"
         { (yyval.uniqueStr) = STR(""); }
#line 7248 "bison-chpl-lib.cpp"
    break;

  case 135: /* opt_label_ident: TIDENT  */
#line 1352 "chpl.ypp"
         { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7254 "bison-chpl-lib.cpp"
    break;

  case 143: /* ident_use: TIDENT  */
#line 1377 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7260 "bison-chpl-lib.cpp"
    break;

  case 144: /* ident_use: TTHIS  */
#line 1378 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7266 "bison-chpl-lib.cpp"
    break;

  case 164: /* scalar_type: TBOOL  */
#line 1405 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7272 "bison-chpl-lib.cpp"
    break;

  case 165: /* scalar_type: TENUM  */
#line 1406 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7278 "bison-chpl-lib.cpp"
    break;

  case 166: /* scalar_type: TINT  */
#line 1407 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7284 "bison-chpl-lib.cpp"
    break;

  case 167: /* scalar_type: TUINT  */
#line 1408 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7290 "bison-chpl-lib.cpp"
    break;

  case 168: /* scalar_type: TREAL  */
#line 1409 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7296 "bison-chpl-lib.cpp"
    break;

  case 169: /* scalar_type: TIMAG  */
#line 1410 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7302 "bison-chpl-lib.cpp"
    break;

  case 170: /* scalar_type: TCOMPLEX  */
#line 1411 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7308 "bison-chpl-lib.cpp"
    break;

  case 171: /* scalar_type: TBYTES  */
#line 1412 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7314 "bison-chpl-lib.cpp"
    break;

  case 172: /* scalar_type: TSTRING  */
#line 1413 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7320 "bison-chpl-lib.cpp"
    break;

  case 173: /* scalar_type: TLOCALE  */
#line 1414 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7326 "bison-chpl-lib.cpp"
    break;

  case 174: /* scalar_type: TNOTHING  */
#line 1415 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7332 "bison-chpl-lib.cpp"
    break;

  case 175: /* scalar_type: TVOID  */
#line 1416 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7338 "bison-chpl-lib.cpp"
    break;

  case 180: /* do_stmt: TDO stmt  */
#line 1430 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), true }; }
#line 7344 "bison-chpl-lib.cpp"
    break;

  case 181: /* do_stmt: block_stmt  */
#line 1431 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), false }; }
#line 7350 "bison-chpl-lib.cpp"
    break;

  case 182: /* return_stmt: TRETURN TSEMI  */
#line 1436 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-1]));
    auto node = Return::build(BUILDER, LOC((yyloc)), /*value*/ nullptr);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7361 "bison-chpl-lib.cpp"
    break;

  case 183: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 1443 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7372 "bison-chpl-lib.cpp"
    break;

  case 184: /* class_level_stmt: TSEMI  */
#line 1453 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildEmptyStmt((yyloc)));
    }
#line 7380 "bison-chpl-lib.cpp"
    break;

  case 185: /* class_level_stmt: inner_class_level_stmt  */
#line 1457 "chpl.ypp"
    {
      // visibility should be default when inner_class_level_stmt is parsed
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7390 "bison-chpl-lib.cpp"
    break;

  case 186: /* $@1: %empty  */
#line 1462 "chpl.ypp"
          {context->noteDeclStartLoc((yylsp[0]));
           context->noteVisibility(Decl::PUBLIC);}
#line 7397 "bison-chpl-lib.cpp"
    break;

  case 187: /* class_level_stmt: TPUBLIC $@1 inner_class_level_stmt  */
#line 1464 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7406 "bison-chpl-lib.cpp"
    break;

  case 188: /* $@2: %empty  */
#line 1468 "chpl.ypp"
           {context->noteDeclStartLoc((yylsp[0]));
            context->noteVisibility(Decl::PRIVATE);}
#line 7413 "bison-chpl-lib.cpp"
    break;

  case 189: /* class_level_stmt: TPRIVATE $@2 inner_class_level_stmt  */
#line 1470 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7422 "bison-chpl-lib.cpp"
    break;

  case 198: /* forwarding_decl_stmt: forwarding_decl_start expr TSEMI  */
#line 1489 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-2].attributeGroup)), toOwned((yyvsp[-1].expr)),
                                        VisibilityClause::NONE, nullptr);
    }
#line 7431 "bison-chpl-lib.cpp"
    break;

  case 199: /* forwarding_decl_stmt: forwarding_decl_start expr TEXCEPT renames_ls TSEMI  */
#line 1494 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::EXCEPT, (yyvsp[-1].exprList));
    }
#line 7440 "bison-chpl-lib.cpp"
    break;

  case 200: /* forwarding_decl_stmt: forwarding_decl_start expr TONLY opt_only_ls TSEMI  */
#line 1499 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::ONLY, (yyvsp[-1].exprList));
    }
#line 7449 "bison-chpl-lib.cpp"
    break;

  case 201: /* forwarding_decl_stmt: forwarding_decl_start var_decl_stmt  */
#line 1504 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-1].attributeGroup)), (yyvsp[0].commentsAndStmt));
    }
#line 7457 "bison-chpl-lib.cpp"
    break;

  case 202: /* forwarding_decl_start: TFORWARDING  */
#line 1511 "chpl.ypp"
  {
    (yyval.attributeGroup) = context->buildAttributeGroup((yyloc)).release();
    context->resetAttributeGroupPartsState();
  }
#line 7466 "bison-chpl-lib.cpp"
    break;

  case 203: /* extern_or_export: TEXTERN  */
#line 1518 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXTERN; }
#line 7472 "bison-chpl-lib.cpp"
    break;

  case 204: /* extern_or_export: TEXPORT  */
#line 1519 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXPORT; }
#line 7478 "bison-chpl-lib.cpp"
    break;

  case 205: /* extern_export_decl_stmt_start: extern_or_export  */
#line 1524 "chpl.ypp"
  {
    // Sets the start location only if it is still unset.
    context->noteDeclStartLoc((yylsp[0]));
    (yyval.linkageTag) = context->noteLinkage((yyvsp[0].linkageTag));
  }
#line 7488 "bison-chpl-lib.cpp"
    break;

  case 206: /* extern_export_decl_stmt: extern_export_decl_stmt_start class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1534 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-5]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7497 "bison-chpl-lib.cpp"
    break;

  case 207: /* extern_export_decl_stmt: extern_export_decl_stmt_start STRINGLITERAL class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1540 "chpl.ypp"
  {
    // Set the linkage name since it will be nullptr otherwise.
    (yyvsp[-4].typeDeclParts).linkageName = (yyvsp[-5].expr);
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-6]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7508 "bison-chpl-lib.cpp"
    break;

  case 208: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr fn_decl_stmt  */
#line 1547 "chpl.ypp"
  {
    auto loc = context->declStartLoc((yylsp[-2]));

    AstNode* optExpr = (yyvsp[-1].expr);
    FunctionParts fp = (yyvsp[0].functionParts);

    auto commentList = context->appendList(context->makeList(),
                                           fp.comments);

    auto comments = context->gatherCommentsFromList(commentList, loc);
    delete commentList;

    fp.linkage = (yyvsp[-2].linkageTag);
    fp.comments = comments;
    fp.linkageNameExpr = optExpr;
    (yyval.commentsAndStmt) = context->buildExternExportFunctionDecl((yyloc), fp);
  }
#line 7530 "bison-chpl-lib.cpp"
    break;

  case 209: /* $@3: %empty  */
#line 1565 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[0].expr));
  }
#line 7538 "bison-chpl-lib.cpp"
    break;

  case 210: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr $@3 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1569 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7547 "bison-chpl-lib.cpp"
    break;

  case 211: /* $@4: %empty  */
#line 1574 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[-1].expr));
    context->noteVarDeclKind(Variable::TYPE);
  }
#line 7556 "bison-chpl-lib.cpp"
    break;

  case 212: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr TTYPE $@4 type_alias_decl_stmt_inner_ls TSEMI  */
#line 1579 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7565 "bison-chpl-lib.cpp"
    break;

  case 213: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 1587 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildExternBlockStmt((yylsp[-1]), (yyvsp[0].sizedStr));
  }
#line 7573 "bison-chpl-lib.cpp"
    break;

  case 214: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1594 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-4]),
                               false, (yylsp[-4]), (yyvsp[-3].commentsAndStmt));
    // If the body is not a block, snag any comments before the 'while'.
    if (blockStyle == BlockStyle::IMPLICIT) {
      exprLst = context->appendList(exprLst, context->gatherComments((yylsp[-2])));
    }
    auto body = context->consumeToBlock((yylsp[-4]), exprLst);
    auto node = DoWhile::build(BUILDER, LOC((yyloc)), blockStyle,
                               std::move(body),
                               toOwned((yyvsp[-1].expr)),
                               toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7597 "bison-chpl-lib.cpp"
    break;

  case 215: /* loop_stmt: TWHILE expr do_stmt  */
#line 1614 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body),
                             toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7616 "bison-chpl-lib.cpp"
    break;

  case 216: /* loop_stmt: TWHILE ifvar do_stmt  */
#line 1629 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body),
                             toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7635 "bison-chpl-lib.cpp"
    break;

  case 217: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1644 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7643 "bison-chpl-lib.cpp"
    break;

  case 218: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1648 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7651 "bison-chpl-lib.cpp"
    break;

  case 219: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1652 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7659 "bison-chpl-lib.cpp"
    break;

  case 220: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1656 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7667 "bison-chpl-lib.cpp"
    break;

  case 221: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1660 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7675 "bison-chpl-lib.cpp"
    break;

  case 222: /* loop_stmt: TFOR expr do_stmt  */
#line 1664 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7683 "bison-chpl-lib.cpp"
    break;

  case 223: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1668 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7691 "bison-chpl-lib.cpp"
    break;

  case 224: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1672 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-5]), (yylsp[0]), (yyvsp[0].blockOrDo));
    AstNode* ident = context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr));
    auto index = context->buildLoopIndexDecl((yylsp[-3]), toOwned(ident));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = For::build(BUILDER, LOC((yylsp[-5])), std::move(index),
                           toOwned((yyvsp[-1].expr)),
                           blockStyle,
                           std::move(body),
                           /*isExpressionLevel*/ false,
                           /*isParam*/ true,
                           toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    context->resetAttributeGroupPartsState();
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7716 "bison-chpl-lib.cpp"
    break;

  case 225: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1693 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7724 "bison-chpl-lib.cpp"
    break;

  case 226: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1697 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7732 "bison-chpl-lib.cpp"
    break;

  case 227: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1701 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7740 "bison-chpl-lib.cpp"
    break;

  case 228: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1705 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7748 "bison-chpl-lib.cpp"
    break;

  case 229: /* loop_stmt: TFORALL expr do_stmt  */
#line 1709 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7756 "bison-chpl-lib.cpp"
    break;

  case 230: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1713 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7764 "bison-chpl-lib.cpp"
    break;

  case 231: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1717 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7772 "bison-chpl-lib.cpp"
    break;

  case 232: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1721 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7780 "bison-chpl-lib.cpp"
    break;

  case 233: /* loop_stmt: TFOREACH expr TIN expr do_stmt  */
#line 1725 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7788 "bison-chpl-lib.cpp"
    break;

  case 234: /* loop_stmt: TFOREACH expr TIN expr forall_intent_clause do_stmt  */
#line 1729 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7796 "bison-chpl-lib.cpp"
    break;

  case 235: /* loop_stmt: TFOREACH expr TIN zippered_iterator do_stmt  */
#line 1733 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7804 "bison-chpl-lib.cpp"
    break;

  case 236: /* loop_stmt: TFOREACH expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1737 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7812 "bison-chpl-lib.cpp"
    break;

  case 237: /* loop_stmt: TFOREACH expr do_stmt  */
#line 1741 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7820 "bison-chpl-lib.cpp"
    break;

  case 238: /* loop_stmt: TFOREACH expr forall_intent_clause do_stmt  */
#line 1745 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7828 "bison-chpl-lib.cpp"
    break;

  case 239: /* loop_stmt: TFOREACH zippered_iterator do_stmt  */
#line 1749 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7836 "bison-chpl-lib.cpp"
    break;

  case 240: /* loop_stmt: TFOREACH zippered_iterator forall_intent_clause do_stmt  */
#line 1753 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7844 "bison-chpl-lib.cpp"
    break;

  case 241: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1757 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7852 "bison-chpl-lib.cpp"
    break;

  case 242: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1761 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7860 "bison-chpl-lib.cpp"
    break;

  case 243: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1765 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7868 "bison-chpl-lib.cpp"
    break;

  case 244: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1769 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7876 "bison-chpl-lib.cpp"
    break;

  case 245: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1773 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-2].exprList), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7884 "bison-chpl-lib.cpp"
    break;

  case 246: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1777 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-3].exprList), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7892 "bison-chpl-lib.cpp"
    break;

  case 247: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1781 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), iterExprs, nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7901 "bison-chpl-lib.cpp"
    break;

  case 248: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1786 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), iterExprs, (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7910 "bison-chpl-lib.cpp"
    break;

  case 249: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1794 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Zip::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.expr) = node.release();
  }
#line 7920 "bison-chpl-lib.cpp"
    break;

  case 250: /* if_stmt: TIF expr TTHEN stmt  */
#line 1803 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7928 "bison-chpl-lib.cpp"
    break;

  case 251: /* if_stmt: TIF expr block_stmt  */
#line 1807 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7936 "bison-chpl-lib.cpp"
    break;

  case 252: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1811 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7944 "bison-chpl-lib.cpp"
    break;

  case 253: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1815 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7952 "bison-chpl-lib.cpp"
    break;

  case 254: /* if_stmt: TIF ifvar TTHEN stmt  */
#line 1819 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7960 "bison-chpl-lib.cpp"
    break;

  case 255: /* if_stmt: TIF ifvar block_stmt  */
#line 1823 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7968 "bison-chpl-lib.cpp"
    break;

  case 256: /* if_stmt: TIF ifvar TTHEN stmt TELSE stmt  */
#line 1827 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7976 "bison-chpl-lib.cpp"
    break;

  case 257: /* if_stmt: TIF ifvar block_stmt TELSE stmt  */
#line 1831 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7984 "bison-chpl-lib.cpp"
    break;

  case 258: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1835 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-3]), (yyvsp[-4].expr), (yyvsp[-3].uniqueStr), (yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-1]), op, (yyvsp[0].commentsAndStmt));
  }
#line 7993 "bison-chpl-lib.cpp"
    break;

  case 259: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1840 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-2]), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[0]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8002 "bison-chpl-lib.cpp"
    break;

  case 260: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1845 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-5]), (yyvsp[-6].expr), (yyvsp[-5].uniqueStr), (yyvsp[-4].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-7]), (yylsp[-3]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8011 "bison-chpl-lib.cpp"
    break;

  case 261: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1850 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-4]), (yyvsp[-5].expr), (yyvsp[-4].uniqueStr), (yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-6]), (yylsp[-2]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8020 "bison-chpl-lib.cpp"
    break;

  case 262: /* ifvar: TVAR ident_def TASSIGN expr  */
#line 1858 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributeGroup*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::VAR,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8039 "bison-chpl-lib.cpp"
    break;

  case 263: /* ifvar: TCONST ident_def TASSIGN expr  */
#line 1873 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributeGroup*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::CONST,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8058 "bison-chpl-lib.cpp"
    break;

  case 264: /* interface_stmt: TINTERFACE ident_def TLP ifc_formal_ls TRP block_stmt  */
#line 1891 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-4].uniqueStr), (yyvsp[-2].exprList), (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8066 "bison-chpl-lib.cpp"
    break;

  case 265: /* interface_stmt: TINTERFACE ident_def block_stmt  */
#line 1895 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-1].uniqueStr), nullptr, (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8074 "bison-chpl-lib.cpp"
    break;

  case 266: /* ifc_formal_ls: ifc_formal  */
#line 1901 "chpl.ypp"
                                  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8080 "bison-chpl-lib.cpp"
    break;

  case 267: /* ifc_formal_ls: ifc_formal_ls TCOMMA ifc_formal  */
#line 1902 "chpl.ypp"
                                  { context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8086 "bison-chpl-lib.cpp"
    break;

  case 268: /* ifc_formal: ident_def  */
#line 1907 "chpl.ypp"
             { (yyval.expr) = context->buildInterfaceFormal((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 8092 "bison-chpl-lib.cpp"
    break;

  case 281: /* implements_type_ident: implements_type_error_ident  */
#line 1925 "chpl.ypp"
  {
    context->syntax((yyloc), "type '%s' cannot implement an interface.", (yyvsp[0].uniqueStr).c_str());
    (yyval.uniqueStr) = (yyvsp[0].uniqueStr);
  }
#line 8101 "bison-chpl-lib.cpp"
    break;

  case 288: /* unary_implements_stmt: TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1951 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8109 "bison-chpl-lib.cpp"
    break;

  case 289: /* unary_implements_stmt: TIMPLEMENTS ident_def TSEMI  */
#line 1955 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-1]), (yyvsp[-1].uniqueStr), nullptr);
  }
#line 8117 "bison-chpl-lib.cpp"
    break;

  case 290: /* binary_implements_stmt: implements_type_ident TIMPLEMENTS ident_def TSEMI  */
#line 1962 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-3]), (yyvsp[-3].uniqueStr), (yylsp[-1]), (yyvsp[-1].uniqueStr), nullptr);
  }
#line 8125 "bison-chpl-lib.cpp"
    break;

  case 291: /* binary_implements_stmt: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1966 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-6]), (yyvsp[-6].uniqueStr), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8133 "bison-chpl-lib.cpp"
    break;

  case 292: /* ifc_constraint: TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1973 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8141 "bison-chpl-lib.cpp"
    break;

  case 293: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def  */
#line 1977 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yylsp[0]), (yyvsp[0].uniqueStr), nullptr);
  }
#line 8149 "bison-chpl-lib.cpp"
    break;

  case 294: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1981 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-5]), (yyvsp[-5].uniqueStr), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8157 "bison-chpl-lib.cpp"
    break;

  case 295: /* try_stmt: TTRY tryable_stmt  */
#line 1988 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), false);
  }
#line 8165 "bison-chpl-lib.cpp"
    break;

  case 296: /* try_stmt: TTRYBANG tryable_stmt  */
#line 1992 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), true);
  }
#line 8173 "bison-chpl-lib.cpp"
    break;

  case 297: /* try_stmt: TTRY block_stmt catch_expr_ls  */
#line 1996 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), false);
  }
#line 8181 "bison-chpl-lib.cpp"
    break;

  case 298: /* try_stmt: TTRYBANG block_stmt catch_expr_ls  */
#line 2000 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), true);
  }
#line 8189 "bison-chpl-lib.cpp"
    break;

  case 299: /* catch_expr_ls: %empty  */
#line 2006 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8195 "bison-chpl-lib.cpp"
    break;

  case 300: /* catch_expr_ls: catch_expr_ls catch_expr  */
#line 2007 "chpl.ypp"
                            { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].expr)); }
#line 8201 "bison-chpl-lib.cpp"
    break;

  case 301: /* catch_expr: TCATCH block_stmt  */
#line 2012 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), nullptr, (yyvsp[0].commentsAndStmt), false);
  }
#line 8209 "bison-chpl-lib.cpp"
    break;

  case 302: /* catch_expr: TCATCH catch_expr_inner block_stmt  */
#line 2016 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt), false);
  }
#line 8217 "bison-chpl-lib.cpp"
    break;

  case 303: /* catch_expr: TCATCH TLP catch_expr_inner TRP block_stmt  */
#line 2020 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt), true);
  }
#line 8225 "bison-chpl-lib.cpp"
    break;

  case 304: /* catch_expr_inner: ident_def  */
#line 2027 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[0].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ nullptr,
                         /*initExpression*/ nullptr).release();
  }
#line 8242 "bison-chpl-lib.cpp"
    break;

  case 305: /* catch_expr_inner: ident_def TCOLON expr  */
#line 2040 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[-2].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ toOwned((yyvsp[0].expr)),
                         /*initExpression*/ nullptr).release();
  }
#line 8259 "bison-chpl-lib.cpp"
    break;

  case 306: /* throw_stmt: TTHROW expr TSEMI  */
#line 2056 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Throw::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8269 "bison-chpl-lib.cpp"
    break;

  case 307: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 2064 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildSelectStmt((yyloc), toOwned((yyvsp[-3].expr)), (yyvsp[-1].exprList));
  }
#line 8277 "bison-chpl-lib.cpp"
    break;

  case 308: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 2068 "chpl.ypp"
  {
    auto comments = context->gatherComments((yyloc));
    auto node = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8287 "bison-chpl-lib.cpp"
    break;

  case 309: /* when_stmt_ls: %empty  */
#line 2076 "chpl.ypp"
                          { (yyval.exprList) = context->makeList(); }
#line 8293 "bison-chpl-lib.cpp"
    break;

  case 310: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 2077 "chpl.ypp"
                          { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 8299 "bison-chpl-lib.cpp"
    break;

  case 311: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 2082 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), (yyvsp[-1].exprList), (yyvsp[0].blockOrDo));
  }
#line 8307 "bison-chpl-lib.cpp"
    break;

  case 312: /* when_stmt: TOTHERWISE stmt  */
#line 2086 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=false };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8316 "bison-chpl-lib.cpp"
    break;

  case 313: /* when_stmt: TOTHERWISE TDO stmt  */
#line 2091 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=true };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8325 "bison-chpl-lib.cpp"
    break;

  case 314: /* manager_expr: expr TAS var_decl_type ident_def  */
#line 2099 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-3].expr), (yyvsp[-1].variableKind), (yylsp[0]), (yyvsp[0].uniqueStr));
    context->resetDeclState();
  }
#line 8334 "bison-chpl-lib.cpp"
    break;

  case 315: /* manager_expr: expr TAS ident_def  */
#line 2104 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-2].expr), (yylsp[0]), (yyvsp[0].uniqueStr));
  }
#line 8342 "bison-chpl-lib.cpp"
    break;

  case 316: /* manager_expr: expr  */
#line 2108 "chpl.ypp"
  {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 8350 "bison-chpl-lib.cpp"
    break;

  case 317: /* manager_expr_ls: manager_expr  */
#line 2114 "chpl.ypp"
                                        { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8356 "bison-chpl-lib.cpp"
    break;

  case 318: /* manager_expr_ls: manager_expr_ls TCOMMA manager_expr  */
#line 2115 "chpl.ypp"
                                        { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8362 "bison-chpl-lib.cpp"
    break;

  case 319: /* manage_stmt: TMANAGE manager_expr_ls do_stmt  */
#line 2120 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildManageStmt((yyloc), (yyvsp[-1].exprList), (yylsp[0]), (yyvsp[0].blockOrDo));
  }
#line 8370 "bison-chpl-lib.cpp"
    break;

  case 320: /* class_decl_stmt: class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 2129 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8379 "bison-chpl-lib.cpp"
    break;

  case 321: /* class_decl_stmt: class_start opt_inherit TLCBR error TRCBR  */
#line 2134 "chpl.ypp"
    {
      auto contents =
        context->makeList(ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), contents, (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8390 "bison-chpl-lib.cpp"
    break;

  case 322: /* class_start: class_tag ident_def  */
#line 2145 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-1]), (yyvsp[0].uniqueStr), (yyvsp[-1].astTag));
  }
#line 8398 "bison-chpl-lib.cpp"
    break;

  case 323: /* class_tag: TCLASS  */
#line 2151 "chpl.ypp"
           { (yyval.astTag) = asttags::Class; }
#line 8404 "bison-chpl-lib.cpp"
    break;

  case 324: /* class_tag: TRECORD  */
#line 2152 "chpl.ypp"
           { (yyval.astTag) = asttags::Record; }
#line 8410 "bison-chpl-lib.cpp"
    break;

  case 325: /* class_tag: TUNION  */
#line 2153 "chpl.ypp"
           { (yyval.astTag) = asttags::Union; }
#line 8416 "bison-chpl-lib.cpp"
    break;

  case 326: /* opt_inherit: %empty  */
#line 2157 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 8422 "bison-chpl-lib.cpp"
    break;

  case 327: /* opt_inherit: TCOLON expr_ls  */
#line 2158 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8428 "bison-chpl-lib.cpp"
    break;

  case 328: /* class_level_stmt_ls: %empty  */
#line 2162 "chpl.ypp"
  {
    /* nothing */
    (yyval.exprList) = context->makeList();
  }
#line 8437 "bison-chpl-lib.cpp"
    break;

  case 329: /* class_level_stmt_ls: class_level_stmt_ls class_level_stmt  */
#line 2167 "chpl.ypp"
  {
    context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8445 "bison-chpl-lib.cpp"
    break;

  case 330: /* class_level_stmt_ls: class_level_stmt_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2171 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8453 "bison-chpl-lib.cpp"
    break;

  case 331: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls class_level_stmt  */
#line 2175 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8461 "bison-chpl-lib.cpp"
    break;

  case 332: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2179 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8469 "bison-chpl-lib.cpp"
    break;

  case 333: /* enum_decl_stmt: enum_header_lcbr enum_ls TRCBR  */
#line 2186 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      ParserExprList* list = (yyvsp[-1].exprList);
      // get any comments after the last element but before the closing brace
      context->appendList(list, context->gatherComments((yylsp[0])));

      auto decl = Enum::build(BUILDER, LOC((yyloc)), toOwned(parts.attributeGroup),
                              parts.visibility,
                              parts.name,
                              context->consumeList(list));
      CommentsAndStmt cs = {parts.comments, decl.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8490 "bison-chpl-lib.cpp"
    break;

  case 334: /* enum_decl_stmt: enum_header_lcbr error TRCBR  */
#line 2203 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      CommentsAndStmt cs = {parts.comments, err.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8504 "bison-chpl-lib.cpp"
    break;

  case 335: /* enum_header_lcbr: TENUM ident_def TLCBR  */
#line 2216 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-2]), (yyvsp[-1].uniqueStr), asttags::Enum);
  }
#line 8512 "bison-chpl-lib.cpp"
    break;

  case 336: /* enum_ls: enum_item  */
#line 2223 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8521 "bison-chpl-lib.cpp"
    break;

  case 337: /* enum_ls: enum_ls TCOMMA  */
#line 2228 "chpl.ypp"
  {
    (yyval.exprList) = (yyvsp[-1].exprList);
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8531 "bison-chpl-lib.cpp"
    break;

  case 338: /* $@5: %empty  */
#line 2234 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8540 "bison-chpl-lib.cpp"
    break;

  case 339: /* enum_ls: enum_ls TCOMMA $@5 enum_item  */
#line 2239 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8549 "bison-chpl-lib.cpp"
    break;

  case 340: /* enum_ls: attribute_decl_stmt_ls enum_item  */
#line 2244 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8558 "bison-chpl-lib.cpp"
    break;

  case 341: /* $@6: %empty  */
#line 2249 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8567 "bison-chpl-lib.cpp"
    break;

  case 342: /* enum_ls: enum_ls TCOMMA $@6 attribute_decl_stmt_ls enum_item  */
#line 2254 "chpl.ypp"
  {
    context->appendList((yyvsp[-4].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8576 "bison-chpl-lib.cpp"
    break;

  case 343: /* enum_item: ident_def  */
#line 2264 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[0].uniqueStr));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
    }
#line 8587 "bison-chpl-lib.cpp"
    break;

  case 344: /* enum_item: ident_def TASSIGN expr  */
#line 2271 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[-2].uniqueStr),
                                     toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
      context->clearCommentsBefore((yylsp[0]));
    }
#line 8600 "bison-chpl-lib.cpp"
    break;

  case 345: /* lambda_decl_start: TLAMBDA  */
#line 2283 "chpl.ypp"
    {
      FunctionParts fp = context->makeFunctionParts(false, false);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributeGroup = context->buildAttributeGroup((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributeGroupPartsState();
      fp.kind = Function::PROC;
      (yyval.functionParts) = fp;
    }
#line 8616 "bison-chpl-lib.cpp"
    break;

  case 346: /* $@7: %empty  */
#line 2300 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, STR("lambda"));
    }
#line 8626 "bison-chpl-lib.cpp"
    break;

  case 347: /* lambda_decl_expr: lambda_decl_start req_formal_ls opt_ret_tag opt_type opt_throws_error opt_lifetime_where $@7 function_body_stmt  */
#line 2306 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-7].functionParts);
      fp.name = context->buildIdent((yylsp[-7]), STR("lambda"));
      fp.formals = (yyvsp[-6].exprList);
      fp.returnIntent = (yyvsp[-5].returnTag);
      fp.returnType = (yyvsp[-4].expr);
      fp.throws = ((yyvsp[-3].throwsTag) == ThrowsTag_THROWS);
      WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
      fp.lifetime = wl.lifetime;
      fp.where = wl.where;
      fp.body = (yyvsp[0].exprList);

      context->clearComments();
      context->exitScope(asttags::Function, STR("lambda"));

      (yyval.expr) = context->buildLambda((yyloc), fp);
    }
#line 8648 "bison-chpl-lib.cpp"
    break;

  case 349: /* linkage_spec: linkage_spec_empty  */
#line 2329 "chpl.ypp"
                     { (yyval.functionParts) = context->makeFunctionParts(false, false); }
#line 8654 "bison-chpl-lib.cpp"
    break;

  case 350: /* linkage_spec: TINLINE  */
#line 2330 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(true, false); }
#line 8661 "bison-chpl-lib.cpp"
    break;

  case 351: /* linkage_spec: TOVERRIDE  */
#line 2332 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(false, true); }
#line 8668 "bison-chpl-lib.cpp"
    break;

  case 352: /* opt_fn_type_formal_ls: %empty  */
#line 2337 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList(); }
#line 8674 "bison-chpl-lib.cpp"
    break;

  case 353: /* opt_fn_type_formal_ls: fn_type_formal_ls  */
#line 2338 "chpl.ypp"
                                          { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8680 "bison-chpl-lib.cpp"
    break;

  case 354: /* fn_type_formal_ls: fn_type_formal  */
#line 2342 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8686 "bison-chpl-lib.cpp"
    break;

  case 355: /* fn_type_formal_ls: fn_type_formal_ls TCOMMA fn_type_formal  */
#line 2343 "chpl.ypp"
                                          { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8692 "bison-chpl-lib.cpp"
    break;

  case 356: /* fn_type_formal: named_formal  */
#line 2348 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 8698 "bison-chpl-lib.cpp"
    break;

  case 357: /* fn_type_formal: required_intent_tag TCOLON formal_type  */
#line 2351 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yylsp[-2]), (yyvsp[-2].intentTag), (yyvsp[0].expr)); }
#line 8704 "bison-chpl-lib.cpp"
    break;

  case 358: /* fn_type_formal: formal_type  */
#line 2353 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yyvsp[0].expr)); }
#line 8710 "bison-chpl-lib.cpp"
    break;

  case 359: /* opt_fn_type_ret_type: %empty  */
#line 2357 "chpl.ypp"
                                  { (yyval.expr) = nullptr; }
#line 8716 "bison-chpl-lib.cpp"
    break;

  case 360: /* opt_fn_type_ret_type: TCOLON formal_or_ret_type_expr  */
#line 2358 "chpl.ypp"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 8722 "bison-chpl-lib.cpp"
    break;

  case 361: /* fn_type: TPROCLP opt_fn_type_formal_ls TRP opt_ret_tag opt_fn_type_ret_type opt_throws_error  */
#line 2371 "chpl.ypp"
  {
    FunctionParts fp = context->makeFunctionParts(false, false);
    fp.kind = Function::PROC;
    fp.name = context->buildIdent((yylsp[-5]), STR("proc"));
    fp.formals = (yyvsp[-4].exprList);
    fp.returnIntent = (yyvsp[-2].returnTag);
    fp.returnType = (yyvsp[-1].expr);
    fp.throws = ((yyvsp[0].throwsTag) == ThrowsTag_THROWS);
    fp.body = nullptr;
    fp.comments = nullptr;
    fp.attributeGroup = nullptr;
    fp.visibility = context->visibility;
    (yyval.functionParts) = fp;
  }
#line 8741 "bison-chpl-lib.cpp"
    break;

  case 362: /* $@8: %empty  */
#line 2389 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8751 "bison-chpl-lib.cpp"
    break;

  case 363: /* fn_expr: fn_type $@8 block_stmt_body  */
#line 2395 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-2].functionParts);
    fp.isBodyNonBlockExpression = false;
    fp.body = (yyvsp[0].exprList);
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8764 "bison-chpl-lib.cpp"
    break;

  case 364: /* $@9: %empty  */
#line 2404 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8774 "bison-chpl-lib.cpp"
    break;

  case 365: /* fn_expr: fn_type TALIAS $@9 expr  */
#line 2410 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-3].functionParts);
    fp.isBodyNonBlockExpression = true;
    fp.body = context->makeList((yyvsp[0].expr));
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8787 "bison-chpl-lib.cpp"
    break;

  case 366: /* fn_decl_stmt_complete: fn_decl_stmt  */
#line 2422 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildRegularFunctionDecl((yyloc), (yyvsp[0].functionParts));
    }
#line 8795 "bison-chpl-lib.cpp"
    break;

  case 367: /* $@10: %empty  */
#line 2431 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-4].functionParts).errorExpr == nullptr) {
      context->enterScope(asttags::Function, (yyvsp[-4].functionParts).name->name());
    }
  }
#line 8809 "bison-chpl-lib.cpp"
    break;

  case 368: /* fn_decl_stmt: fn_decl_stmt_inner opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where $@10 opt_function_body_stmt  */
#line 2441 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-6].functionParts);
    fp.returnIntent = (yyvsp[-5].returnTag);
    fp.returnType = (yyvsp[-4].expr);
    fp.throws = ((yyvsp[-3].throwsTag) == ThrowsTag_THROWS);
    WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
    fp.body = (yyvsp[0].exprList);
    fp.lifetime = wl.lifetime;
    fp.where = wl.where;
    context->clearComments();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-6].functionParts).errorExpr == nullptr) {
      context->exitScope(asttags::Function, (yyvsp[-6].functionParts).name->name());
    }

    (yyval.functionParts) = fp;
  }
#line 8832 "bison-chpl-lib.cpp"
    break;

  case 369: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_ident opt_formal_ls  */
#line 2463 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8844 "bison-chpl-lib.cpp"
    break;

  case 370: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 2471 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8856 "bison-chpl-lib.cpp"
    break;

  case 371: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 2479 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributeGroup*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8871 "bison-chpl-lib.cpp"
    break;

  case 372: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 2490 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributeGroup*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8886 "bison-chpl-lib.cpp"
    break;

  case 373: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag error opt_formal_ls  */
#line 2501 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.errorExpr = ErroneousExpression::build(BUILDER, LOC((yyloc))).release();
      (yyval.functionParts) = fp;
    }
#line 8896 "bison-chpl-lib.cpp"
    break;

  case 374: /* fn_decl_stmt_start: linkage_spec proc_iter_or_op  */
#line 2510 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-1].functionParts);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributeGroup = context->buildAttributeGroup((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributeGroupPartsState();
      fp.kind = (yyvsp[0].functionKind);
      (yyval.functionParts) = fp;
    }
#line 8912 "bison-chpl-lib.cpp"
    break;

  case 376: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 2525 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[-1].expr); }
#line 8918 "bison-chpl-lib.cpp"
    break;

  case 379: /* fn_ident: ident_def TBANG  */
#line 2532 "chpl.ypp"
  {
    std::string s = (yyvsp[-1].uniqueStr).c_str();
    s += "!";
    (yyval.uniqueStr) = STR(s.c_str());
  }
#line 8928 "bison-chpl-lib.cpp"
    break;

  case 419: /* formal_var_arg_expr: TDOTDOTDOT  */
#line 2589 "chpl.ypp"
                         { (yyval.expr) = nullptr; }
#line 8934 "bison-chpl-lib.cpp"
    break;

  case 420: /* formal_var_arg_expr: TDOTDOTDOT expr  */
#line 2590 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 8940 "bison-chpl-lib.cpp"
    break;

  case 421: /* opt_formal_ls: %empty  */
#line 2594 "chpl.ypp"
                     { (yyval.exprList) = context->parenlessMarker; }
#line 8946 "bison-chpl-lib.cpp"
    break;

  case 422: /* opt_formal_ls: TLP formal_ls TRP  */
#line 2595 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 8952 "bison-chpl-lib.cpp"
    break;

  case 423: /* req_formal_ls: TLP TRP  */
#line 2599 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8958 "bison-chpl-lib.cpp"
    break;

  case 424: /* req_formal_ls: TLP formal_ls_inner TRP  */
#line 2600 "chpl.ypp"
                            { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 8964 "bison-chpl-lib.cpp"
    break;

  case 425: /* formal_ls_inner: formal  */
#line 2604 "chpl.ypp"
                                 { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8970 "bison-chpl-lib.cpp"
    break;

  case 426: /* formal_ls_inner: formal_ls_inner TCOMMA formal  */
#line 2605 "chpl.ypp"
                                 { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8976 "bison-chpl-lib.cpp"
    break;

  case 427: /* formal_ls: %empty  */
#line 2609 "chpl.ypp"
                           { (yyval.exprList) = context->makeList(); }
#line 8982 "bison-chpl-lib.cpp"
    break;

  case 428: /* formal_ls: formal_ls_inner  */
#line 2610 "chpl.ypp"
                           { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8988 "bison-chpl-lib.cpp"
    break;

  case 432: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2624 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 8996 "bison-chpl-lib.cpp"
    break;

  case 433: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2629 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9004 "bison-chpl-lib.cpp"
    break;

  case 434: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2634 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9012 "bison-chpl-lib.cpp"
    break;

  case 435: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2639 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9020 "bison-chpl-lib.cpp"
    break;

  case 436: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type opt_init_expr  */
#line 2644 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleFormal((yyloc), (yyvsp[-5].intentTag), (yyvsp[-3].exprList), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9028 "bison-chpl-lib.cpp"
    break;

  case 437: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type formal_var_arg_expr  */
#line 2649 "chpl.ypp"
  {
    (yyval.expr) = context->syntax((yyloc), "variable-length argument may not be grouped in a tuple.");
  }
#line 9036 "bison-chpl-lib.cpp"
    break;

  case 438: /* opt_formal_intent_tag: %empty  */
#line 2655 "chpl.ypp"
             {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = Formal::DEFAULT_INTENT;
  }
#line 9045 "bison-chpl-lib.cpp"
    break;

  case 439: /* opt_formal_intent_tag: required_intent_tag  */
#line 2660 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = (yyvsp[0].intentTag);
  }
#line 9054 "bison-chpl-lib.cpp"
    break;

  case 440: /* required_intent_tag: TIN  */
#line 2667 "chpl.ypp"
              { (yyval.intentTag) = Formal::IN; }
#line 9060 "bison-chpl-lib.cpp"
    break;

  case 441: /* required_intent_tag: TINOUT  */
#line 2668 "chpl.ypp"
              { (yyval.intentTag) = Formal::INOUT; }
#line 9066 "bison-chpl-lib.cpp"
    break;

  case 442: /* required_intent_tag: TOUT  */
#line 2669 "chpl.ypp"
              { (yyval.intentTag) = Formal::OUT; }
#line 9072 "bison-chpl-lib.cpp"
    break;

  case 443: /* required_intent_tag: TCONST TIN  */
#line 2670 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_IN; }
#line 9078 "bison-chpl-lib.cpp"
    break;

  case 444: /* required_intent_tag: TCONST TREF  */
#line 2671 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_REF; }
#line 9084 "bison-chpl-lib.cpp"
    break;

  case 445: /* required_intent_tag: TCONST  */
#line 2672 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST; }
#line 9090 "bison-chpl-lib.cpp"
    break;

  case 446: /* required_intent_tag: TPARAM  */
#line 2673 "chpl.ypp"
              { (yyval.intentTag) = Formal::PARAM; }
#line 9096 "bison-chpl-lib.cpp"
    break;

  case 447: /* required_intent_tag: TREF  */
#line 2674 "chpl.ypp"
              { (yyval.intentTag) = Formal::REF; }
#line 9102 "bison-chpl-lib.cpp"
    break;

  case 448: /* required_intent_tag: TTYPE  */
#line 2675 "chpl.ypp"
              { (yyval.intentTag) = Formal::TYPE; }
#line 9108 "bison-chpl-lib.cpp"
    break;

  case 449: /* opt_this_intent_tag: %empty  */
#line 2679 "chpl.ypp"
                { (yyval.intentTag) = Formal::DEFAULT_INTENT; }
#line 9114 "bison-chpl-lib.cpp"
    break;

  case 450: /* opt_this_intent_tag: TPARAM  */
#line 2680 "chpl.ypp"
                { (yyval.intentTag) = Formal::PARAM; }
#line 9120 "bison-chpl-lib.cpp"
    break;

  case 451: /* opt_this_intent_tag: TREF  */
#line 2681 "chpl.ypp"
                { (yyval.intentTag) = Formal::REF; }
#line 9126 "bison-chpl-lib.cpp"
    break;

  case 452: /* opt_this_intent_tag: TCONST TREF  */
#line 2682 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST_REF; }
#line 9132 "bison-chpl-lib.cpp"
    break;

  case 453: /* opt_this_intent_tag: TCONST  */
#line 2683 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST; }
#line 9138 "bison-chpl-lib.cpp"
    break;

  case 454: /* opt_this_intent_tag: TTYPE  */
#line 2684 "chpl.ypp"
                { (yyval.intentTag) = Formal::TYPE; }
#line 9144 "bison-chpl-lib.cpp"
    break;

  case 455: /* proc_iter_or_op: TPROC  */
#line 2688 "chpl.ypp"
            { (yyval.functionKind) = Function::PROC; }
#line 9150 "bison-chpl-lib.cpp"
    break;

  case 456: /* proc_iter_or_op: TITER  */
#line 2689 "chpl.ypp"
            { (yyval.functionKind) = Function::ITER; }
#line 9156 "bison-chpl-lib.cpp"
    break;

  case 457: /* proc_iter_or_op: TOPERATOR  */
#line 2690 "chpl.ypp"
            { (yyval.functionKind) = Function::OPERATOR; }
#line 9162 "bison-chpl-lib.cpp"
    break;

  case 458: /* opt_ret_tag: %empty  */
#line 2694 "chpl.ypp"
                    { (yyval.returnTag) = Function::DEFAULT_RETURN_INTENT; }
#line 9168 "bison-chpl-lib.cpp"
    break;

  case 459: /* opt_ret_tag: TOUT  */
#line 2695 "chpl.ypp"
                    { (yyval.returnTag) = Function::OUT; }
#line 9174 "bison-chpl-lib.cpp"
    break;

  case 460: /* opt_ret_tag: TCONST  */
#line 2696 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST; }
#line 9180 "bison-chpl-lib.cpp"
    break;

  case 461: /* opt_ret_tag: TCONST TREF  */
#line 2697 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST_REF; }
#line 9186 "bison-chpl-lib.cpp"
    break;

  case 462: /* opt_ret_tag: TREF  */
#line 2698 "chpl.ypp"
                    { (yyval.returnTag) = Function::REF; }
#line 9192 "bison-chpl-lib.cpp"
    break;

  case 463: /* opt_ret_tag: TPARAM  */
#line 2699 "chpl.ypp"
                    { (yyval.returnTag) = Function::PARAM; }
#line 9198 "bison-chpl-lib.cpp"
    break;

  case 464: /* opt_ret_tag: TTYPE  */
#line 2700 "chpl.ypp"
                    { (yyval.returnTag) = Function::TYPE; }
#line 9204 "bison-chpl-lib.cpp"
    break;

  case 465: /* opt_throws_error: %empty  */
#line 2704 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_DEFAULT; }
#line 9210 "bison-chpl-lib.cpp"
    break;

  case 466: /* opt_throws_error: TTHROWS  */
#line 2705 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_THROWS; }
#line 9216 "bison-chpl-lib.cpp"
    break;

  case 467: /* opt_function_body_stmt: TSEMI  */
#line 2708 "chpl.ypp"
                      { context->clearComments(); (yyval.exprList) = nullptr; }
#line 9222 "bison-chpl-lib.cpp"
    break;

  case 468: /* opt_function_body_stmt: function_body_stmt  */
#line 2709 "chpl.ypp"
                      { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9228 "bison-chpl-lib.cpp"
    break;

  case 469: /* function_body_stmt: block_stmt_body  */
#line 2713 "chpl.ypp"
                    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9234 "bison-chpl-lib.cpp"
    break;

  case 470: /* function_body_stmt: TDO toplevel_stmt  */
#line 2714 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt)); }
#line 9240 "bison-chpl-lib.cpp"
    break;

  case 471: /* function_body_stmt: return_stmt  */
#line 2715 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt), &((yylsp[0]))); }
#line 9246 "bison-chpl-lib.cpp"
    break;

  case 472: /* query_expr: TQUERIEDIDENT  */
#line 2719 "chpl.ypp"
                  { (yyval.expr) = context->buildTypeQuery((yyloc), (yyvsp[0].uniqueStr)); }
#line 9252 "bison-chpl-lib.cpp"
    break;

  case 473: /* opt_lifetime_where: %empty  */
#line 2724 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, nullptr); }
#line 9258 "bison-chpl-lib.cpp"
    break;

  case 474: /* opt_lifetime_where: TWHERE expr  */
#line 2726 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), nullptr); }
#line 9264 "bison-chpl-lib.cpp"
    break;

  case 475: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 2728 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, (yyvsp[0].exprList)); }
#line 9270 "bison-chpl-lib.cpp"
    break;

  case 476: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 2730 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].expr), (yyvsp[0].exprList)); }
#line 9276 "bison-chpl-lib.cpp"
    break;

  case 477: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 2732 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), (yyvsp[-2].exprList)); }
#line 9282 "bison-chpl-lib.cpp"
    break;

  case 478: /* lifetime_components_expr: lifetime_expr  */
#line 2737 "chpl.ypp"
  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9288 "bison-chpl-lib.cpp"
    break;

  case 479: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 2739 "chpl.ypp"
  { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9294 "bison-chpl-lib.cpp"
    break;

  case 480: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 2744 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9300 "bison-chpl-lib.cpp"
    break;

  case 481: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 2746 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9306 "bison-chpl-lib.cpp"
    break;

  case 482: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 2748 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9312 "bison-chpl-lib.cpp"
    break;

  case 483: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 2750 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9318 "bison-chpl-lib.cpp"
    break;

  case 484: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 2752 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9324 "bison-chpl-lib.cpp"
    break;

  case 485: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 2754 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9330 "bison-chpl-lib.cpp"
    break;

  case 486: /* lifetime_expr: TRETURN lifetime_ident  */
#line 2756 "chpl.ypp"
    { (yyval.expr) = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[0].expr))).release(); }
#line 9336 "bison-chpl-lib.cpp"
    break;

  case 487: /* lifetime_ident: TIDENT  */
#line 2760 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9342 "bison-chpl-lib.cpp"
    break;

  case 488: /* lifetime_ident: TTHIS  */
#line 2761 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9348 "bison-chpl-lib.cpp"
    break;

  case 489: /* type_alias_decl_stmt: type_alias_decl_stmt_start type_alias_decl_stmt_inner_ls TSEMI  */
#line 2766 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9357 "bison-chpl-lib.cpp"
    break;

  case 490: /* type_alias_decl_stmt_start: TTYPE  */
#line 2775 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
  }
#line 9365 "bison-chpl-lib.cpp"
    break;

  case 491: /* type_alias_decl_stmt_start: TCONFIG TTYPE  */
#line 2779 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteIsVarDeclConfig(true);
  }
#line 9374 "bison-chpl-lib.cpp"
    break;

  case 492: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner  */
#line 2787 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
  }
#line 9382 "bison-chpl-lib.cpp"
    break;

  case 493: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner_ls TCOMMA type_alias_decl_stmt_inner  */
#line 2791 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 9390 "bison-chpl-lib.cpp"
    break;

  case 494: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 2798 "chpl.ypp"
  {
    // TODO (dlongnecke-cray): Add a helper to build this and var_decl_stmt.
    auto node = Variable::build(BUILDER, LOC((yyloc)),
                                /*attributeGroup*/ nullptr,
                                context->visibility,
                                context->linkage,
                                context->consumeVarDeclLinkageName(),
                                /*name*/ (yyvsp[-1].uniqueStr),
                                context->varDeclKind,
                                context->isVarDeclConfig,
                                context->currentScopeIsAggregate(),
                                /*typeExpression*/ nullptr,
                                toOwned((yyvsp[0].expr)));
      // Gather the comments like a statement does.
      (yyval.commentsAndStmt) = STMT((yylsp[-1]), node.release());
      context->clearComments();
  }
#line 9412 "bison-chpl-lib.cpp"
    break;

  case 495: /* opt_init_type: %empty  */
#line 2818 "chpl.ypp"
  { (yyval.expr) = nullptr; }
#line 9418 "bison-chpl-lib.cpp"
    break;

  case 496: /* opt_init_type: TASSIGN expr  */
#line 2820 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 9424 "bison-chpl-lib.cpp"
    break;

  case 497: /* var_decl_type: TPARAM  */
#line 2824 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::PARAM); }
#line 9430 "bison-chpl-lib.cpp"
    break;

  case 498: /* var_decl_type: TCONST TREF  */
#line 2825 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST_REF); }
#line 9436 "bison-chpl-lib.cpp"
    break;

  case 499: /* var_decl_type: TREF  */
#line 2826 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::REF); }
#line 9442 "bison-chpl-lib.cpp"
    break;

  case 500: /* var_decl_type: TCONST  */
#line 2827 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST); }
#line 9448 "bison-chpl-lib.cpp"
    break;

  case 501: /* var_decl_type: TVAR  */
#line 2828 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::VAR); }
#line 9454 "bison-chpl-lib.cpp"
    break;

  case 502: /* $@11: %empty  */
#line 2833 "chpl.ypp"
  {
    // Use a mid-rule action to thread along 'isVarDeclConfig'.
    context->noteIsVarDeclConfig(true);
  }
#line 9463 "bison-chpl-lib.cpp"
    break;

  case 503: /* var_decl_stmt: TCONFIG $@11 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2837 "chpl.ypp"
                                             {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9472 "bison-chpl-lib.cpp"
    break;

  case 504: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2842 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9481 "bison-chpl-lib.cpp"
    break;

  case 505: /* var_decl_stmt_inner_ls: var_decl_stmt_inner  */
#line 2850 "chpl.ypp"
    {
      (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    }
#line 9489 "bison-chpl-lib.cpp"
    break;

  case 506: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 2854 "chpl.ypp"
    {
      (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
    }
#line 9497 "bison-chpl-lib.cpp"
    break;

  case 507: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 2861 "chpl.ypp"
    {
      // delay building the attributes for a variable, then update it later
      // in the context during the call to buildVarOrMultiDeclStmt
      auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                     /*attributGroup*/nullptr,
                                     context->visibility,
                                     context->linkage,
                                     context->consumeVarDeclLinkageName(),
                                     /*name*/ (yyvsp[-2].uniqueStr),
                                     context->varDeclKind,
                                     context->isVarDeclConfig,
                                     context->currentScopeIsAggregate(),
                                     toOwned((yyvsp[-1].expr)), toOwned((yyvsp[0].expr)));
      // gather the comments like a statement does
      (yyval.commentsAndStmt) = STMT((yylsp[-2]), varDecl.release());
      context->clearComments();
    }
#line 9519 "bison-chpl-lib.cpp"
    break;

  case 508: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 2879 "chpl.ypp"
    {
      auto intentOrKind = (TupleDecl::IntentOrKind) context->varDeclKind;
      // delay building the attributes for a TupleDecl, then update it later
      // in the context during the call to buildVarOrMultiDeclStmt
      auto tupleDecl = TupleDecl::build(BUILDER, LOC((yyloc)),
                                        /*attributeGroup*/ nullptr,
                                        context->visibility,
                                        context->linkage,
                                        intentOrKind,
                                        context->consumeList((yyvsp[-3].exprList)),
                                        toOwned((yyvsp[-1].expr)),
                                        toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yylsp[-4]), tupleDecl.release());
      context->clearComments();
    }
#line 9539 "bison-chpl-lib.cpp"
    break;

  case 509: /* tuple_var_decl_component: TUNDERSCORE  */
#line 2898 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9547 "bison-chpl-lib.cpp"
    break;

  case 510: /* tuple_var_decl_component: ident_def  */
#line 2902 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9555 "bison-chpl-lib.cpp"
    break;

  case 511: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 2906 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[-1].exprList));
  }
#line 9563 "bison-chpl-lib.cpp"
    break;

  case 512: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 2913 "chpl.ypp"
    { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9569 "bison-chpl-lib.cpp"
    break;

  case 513: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA  */
#line 2915 "chpl.ypp"
    { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9575 "bison-chpl-lib.cpp"
    break;

  case 514: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA tuple_var_decl_component  */
#line 2917 "chpl.ypp"
    { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9581 "bison-chpl-lib.cpp"
    break;

  case 515: /* opt_init_expr: %empty  */
#line 2923 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9587 "bison-chpl-lib.cpp"
    break;

  case 516: /* opt_init_expr: TASSIGN TNOINIT  */
#line 2924 "chpl.ypp"
                        { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9593 "bison-chpl-lib.cpp"
    break;

  case 517: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 2925 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9599 "bison-chpl-lib.cpp"
    break;

  case 518: /* formal_or_ret_type_expr: expr  */
#line 2929 "chpl.ypp"
                        { (yyval.expr) = context->sanitizeArrayType((yyloc), (yyvsp[0].expr)); }
#line 9605 "bison-chpl-lib.cpp"
    break;

  case 519: /* ret_type: formal_or_ret_type_expr  */
#line 2933 "chpl.ypp"
                          { (yyval.expr) = (yyvsp[0].expr); }
#line 9611 "bison-chpl-lib.cpp"
    break;

  case 520: /* ret_type: reserved_type_ident_use  */
#line 2934 "chpl.ypp"
                          { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9617 "bison-chpl-lib.cpp"
    break;

  case 521: /* ret_type: error  */
#line 2935 "chpl.ypp"
                          { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9623 "bison-chpl-lib.cpp"
    break;

  case 522: /* colon_ret_type: TCOLON ret_type  */
#line 2939 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 9629 "bison-chpl-lib.cpp"
    break;

  case 523: /* colon_ret_type: error  */
#line 2940 "chpl.ypp"
                  { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9635 "bison-chpl-lib.cpp"
    break;

  case 524: /* opt_ret_type: %empty  */
#line 2944 "chpl.ypp"
                    { (yyval.expr) = nullptr; }
#line 9641 "bison-chpl-lib.cpp"
    break;

  case 526: /* opt_type: %empty  */
#line 2949 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9647 "bison-chpl-lib.cpp"
    break;

  case 527: /* opt_type: TCOLON expr  */
#line 2950 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9653 "bison-chpl-lib.cpp"
    break;

  case 528: /* opt_type: TCOLON reserved_type_ident_use  */
#line 2951 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9659 "bison-chpl-lib.cpp"
    break;

  case 529: /* opt_type: error  */
#line 2952 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9665 "bison-chpl-lib.cpp"
    break;

  case 530: /* formal_type: formal_or_ret_type_expr  */
#line 2956 "chpl.ypp"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 9671 "bison-chpl-lib.cpp"
    break;

  case 531: /* formal_type: reserved_type_ident_use  */
#line 2957 "chpl.ypp"
                            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9677 "bison-chpl-lib.cpp"
    break;

  case 532: /* colon_formal_type: TCOLON formal_type  */
#line 2961 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9683 "bison-chpl-lib.cpp"
    break;

  case 533: /* opt_colon_formal_type: %empty  */
#line 2965 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9689 "bison-chpl-lib.cpp"
    break;

  case 534: /* opt_colon_formal_type: colon_formal_type  */
#line 2966 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9695 "bison-chpl-lib.cpp"
    break;

  case 535: /* expr_ls: expr  */
#line 2972 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9701 "bison-chpl-lib.cpp"
    break;

  case 536: /* expr_ls: expr_ls TCOMMA expr  */
#line 2973 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9707 "bison-chpl-lib.cpp"
    break;

  case 537: /* tuple_component: TUNDERSCORE  */
#line 2977 "chpl.ypp"
                { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9713 "bison-chpl-lib.cpp"
    break;

  case 538: /* tuple_component: opt_try_expr  */
#line 2978 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 9719 "bison-chpl-lib.cpp"
    break;

  case 539: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 2983 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList(context->makeList((yyvsp[-2].expr)), (yyvsp[0].expr));
  }
#line 9727 "bison-chpl-lib.cpp"
    break;

  case 540: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 2987 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9735 "bison-chpl-lib.cpp"
    break;

  case 541: /* opt_actual_ls: %empty  */
#line 2993 "chpl.ypp"
             { (yyval.maybeNamedActualList) = new MaybeNamedActualList(); }
#line 9741 "bison-chpl-lib.cpp"
    break;

  case 542: /* opt_actual_ls: actual_ls  */
#line 2994 "chpl.ypp"
             { (yyval.maybeNamedActualList) = (yyvsp[0].maybeNamedActualList); }
#line 9747 "bison-chpl-lib.cpp"
    break;

  case 543: /* actual_ls: actual_expr  */
#line 2999 "chpl.ypp"
    { MaybeNamedActualList* lst = new MaybeNamedActualList();
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9756 "bison-chpl-lib.cpp"
    break;

  case 544: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 3004 "chpl.ypp"
    {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9766 "bison-chpl-lib.cpp"
    break;

  case 545: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 3012 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 9772 "bison-chpl-lib.cpp"
    break;

  case 546: /* actual_expr: opt_try_expr  */
#line 3013 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 9778 "bison-chpl-lib.cpp"
    break;

  case 547: /* ident_expr: ident_use  */
#line 3017 "chpl.ypp"
                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9784 "bison-chpl-lib.cpp"
    break;

  case 548: /* ident_expr: scalar_type  */
#line 3018 "chpl.ypp"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9790 "bison-chpl-lib.cpp"
    break;

  case 554: /* sub_type_level_expr: TSINGLE expr  */
#line 3031 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9796 "bison-chpl-lib.cpp"
    break;

  case 555: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 3033 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9802 "bison-chpl-lib.cpp"
    break;

  case 556: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 3035 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9808 "bison-chpl-lib.cpp"
    break;

  case 557: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 3037 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9814 "bison-chpl-lib.cpp"
    break;

  case 558: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP actual_expr TRP  */
#line 3039 "chpl.ypp"
  {
    auto locInner = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    auto inner = context->buildTypeConstructor(locInner, (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActual));
    (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-4].uniqueStr), inner);
  }
#line 9824 "bison-chpl-lib.cpp"
    break;

  case 559: /* sub_type_level_expr: TATOMIC expr  */
#line 3045 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9830 "bison-chpl-lib.cpp"
    break;

  case 560: /* sub_type_level_expr: TSYNC expr  */
#line 3047 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9836 "bison-chpl-lib.cpp"
    break;

  case 561: /* sub_type_level_expr: TOWNED  */
#line 3050 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9842 "bison-chpl-lib.cpp"
    break;

  case 562: /* sub_type_level_expr: TOWNED expr  */
#line 3052 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9848 "bison-chpl-lib.cpp"
    break;

  case 563: /* sub_type_level_expr: TUNMANAGED  */
#line 3054 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9854 "bison-chpl-lib.cpp"
    break;

  case 564: /* sub_type_level_expr: TUNMANAGED expr  */
#line 3056 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9860 "bison-chpl-lib.cpp"
    break;

  case 565: /* sub_type_level_expr: TSHARED  */
#line 3058 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9866 "bison-chpl-lib.cpp"
    break;

  case 566: /* sub_type_level_expr: TSHARED expr  */
#line 3060 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9872 "bison-chpl-lib.cpp"
    break;

  case 567: /* sub_type_level_expr: TBORROWED  */
#line 3062 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9878 "bison-chpl-lib.cpp"
    break;

  case 568: /* sub_type_level_expr: TBORROWED expr  */
#line 3064 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9884 "bison-chpl-lib.cpp"
    break;

  case 569: /* sub_type_level_expr: TCLASS  */
#line 3066 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9890 "bison-chpl-lib.cpp"
    break;

  case 570: /* sub_type_level_expr: TRECORD  */
#line 3068 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9896 "bison-chpl-lib.cpp"
    break;

  case 571: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 3073 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
    context->resetAttributeGroupPartsState();
  }
#line 9911 "bison-chpl-lib.cpp"
    break;

  case 572: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 3084 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 9926 "bison-chpl-lib.cpp"
    break;

  case 573: /* for_expr: TFOR expr TDO expr  */
#line 3095 "chpl.ypp"
  {
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 9940 "bison-chpl-lib.cpp"
    break;

  case 574: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
#line 3105 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 9960 "bison-chpl-lib.cpp"
    break;

  case 575: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3121 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 9980 "bison-chpl-lib.cpp"
    break;

  case 576: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 3137 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                    toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10000 "bison-chpl-lib.cpp"
    break;

  case 577: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 3153 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10013 "bison-chpl-lib.cpp"
    break;

  case 578: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 3162 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10026 "bison-chpl-lib.cpp"
    break;

  case 579: /* for_expr: TFORALL expr TDO expr  */
#line 3171 "chpl.ypp"
  {
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10038 "bison-chpl-lib.cpp"
    break;

  case 580: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 3179 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10056 "bison-chpl-lib.cpp"
    break;

  case 581: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3193 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr)= Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                      /*withClause*/ nullptr,
                      BlockStyle::IMPLICIT,
                      context->consumeToBlock(ifLoc, ifExpr.release()),
                      /*isExpressionLevel*/ true).release();
  }
#line 10074 "bison-chpl-lib.cpp"
    break;

  case 582: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 3207 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                       toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10092 "bison-chpl-lib.cpp"
    break;

  case 583: /* bracket_loop_expr: TLSBR TRSBR  */
#line 3224 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc));
  }
#line 10100 "bison-chpl-lib.cpp"
    break;

  case 584: /* bracket_loop_expr: TLSBR TRSBR expr  */
#line 3228 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-1]), (yyvsp[0].expr));
  }
#line 10108 "bison-chpl-lib.cpp"
    break;

  case 585: /* bracket_loop_expr: TLSBR expr_ls TRSBR expr  */
#line 3232 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10116 "bison-chpl-lib.cpp"
    break;

  case 586: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 3236 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10124 "bison-chpl-lib.cpp"
    break;

  case 587: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 3240 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10132 "bison-chpl-lib.cpp"
    break;

  case 588: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 3244 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10140 "bison-chpl-lib.cpp"
    break;

  case 589: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 3248 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10148 "bison-chpl-lib.cpp"
    break;

  case 590: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 3255 "chpl.ypp"
  {
    auto node  = Conditional::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[-2]), (yyvsp[-2].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                    /*isExpressionLevel*/ true);
    (yyval.expr) = node.release();
  }
#line 10162 "bison-chpl-lib.cpp"
    break;

  case 591: /* nil_expr: TNIL  */
#line 3272 "chpl.ypp"
            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10168 "bison-chpl-lib.cpp"
    break;

  case 599: /* opt_task_intent_ls: %empty  */
#line 3290 "chpl.ypp"
                                { (yyval.withClause) = nullptr; }
#line 10174 "bison-chpl-lib.cpp"
    break;

  case 600: /* opt_task_intent_ls: task_intent_clause  */
#line 3291 "chpl.ypp"
                                { (yyval.withClause) = (yyvsp[0].withClause); }
#line 10180 "bison-chpl-lib.cpp"
    break;

  case 601: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 3296 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10190 "bison-chpl-lib.cpp"
    break;

  case 602: /* task_intent_ls: intent_expr  */
#line 3304 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10196 "bison-chpl-lib.cpp"
    break;

  case 603: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 3305 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10202 "bison-chpl-lib.cpp"
    break;

  case 604: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 3310 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10212 "bison-chpl-lib.cpp"
    break;

  case 605: /* forall_intent_ls: intent_expr  */
#line 3318 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10218 "bison-chpl-lib.cpp"
    break;

  case 606: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 3319 "chpl.ypp"
                                       { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10224 "bison-chpl-lib.cpp"
    break;

  case 607: /* intent_expr: task_var_prefix ident_expr opt_type opt_init_expr  */
#line 3324 "chpl.ypp"
  {
    if (auto ident = (yyvsp[-2].expr)->toIdentifier()) {
      auto name = ident->name();
      auto node = TaskVar::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                                 name,
                                 /*intent*/ (yyvsp[-3].taskIntent),
                                 toOwned((yyvsp[-1].expr)),
                                 toOwned((yyvsp[0].expr)));
      (yyval.expr) = node.release();
    } else {
      (yyval.expr) = context->syntax((yyloc), "expected identifier for task variable name.");
    }
  }
#line 10242 "bison-chpl-lib.cpp"
    break;

  case 608: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 3338 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10250 "bison-chpl-lib.cpp"
    break;

  case 609: /* intent_expr: expr TREDUCE ident_expr  */
#line 3342 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10258 "bison-chpl-lib.cpp"
    break;

  case 610: /* task_var_prefix: TCONST  */
#line 3348 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST;     }
#line 10264 "bison-chpl-lib.cpp"
    break;

  case 611: /* task_var_prefix: TIN  */
#line 3349 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::IN;        }
#line 10270 "bison-chpl-lib.cpp"
    break;

  case 612: /* task_var_prefix: TCONST TIN  */
#line 3350 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_IN;  }
#line 10276 "bison-chpl-lib.cpp"
    break;

  case 613: /* task_var_prefix: TREF  */
#line 3351 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::REF;       }
#line 10282 "bison-chpl-lib.cpp"
    break;

  case 614: /* task_var_prefix: TCONST TREF  */
#line 3352 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_REF; }
#line 10288 "bison-chpl-lib.cpp"
    break;

  case 615: /* task_var_prefix: TVAR  */
#line 3353 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::VAR;       }
#line 10294 "bison-chpl-lib.cpp"
    break;

  case 616: /* new_maybe_decorated: TNEW  */
#line 3358 "chpl.ypp"
    { (yyval.newManagement) = New::DEFAULT_MANAGEMENT; }
#line 10300 "bison-chpl-lib.cpp"
    break;

  case 617: /* new_maybe_decorated: TNEW TOWNED  */
#line 3360 "chpl.ypp"
    { (yyval.newManagement) = New::OWNED; }
#line 10306 "bison-chpl-lib.cpp"
    break;

  case 618: /* new_maybe_decorated: TNEW TSHARED  */
#line 3362 "chpl.ypp"
    { (yyval.newManagement) = New::SHARED; }
#line 10312 "bison-chpl-lib.cpp"
    break;

  case 619: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 3364 "chpl.ypp"
    { (yyval.newManagement) = New::UNMANAGED; }
#line 10318 "bison-chpl-lib.cpp"
    break;

  case 620: /* new_maybe_decorated: TNEW TBORROWED  */
#line 3366 "chpl.ypp"
    { (yyval.newManagement) = New::BORROWED; }
#line 10324 "bison-chpl-lib.cpp"
    break;

  case 621: /* new_expr: new_maybe_decorated expr  */
#line 3372 "chpl.ypp"
  {
    (yyval.expr) = context->buildNewExpr((yyloc), (yyvsp[-1].newManagement), (yyvsp[0].expr));
  }
#line 10332 "bison-chpl-lib.cpp"
    break;

  case 622: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3379 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10348 "bison-chpl-lib.cpp"
    break;

  case 623: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3391 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());
  }
#line 10364 "bison-chpl-lib.cpp"
    break;

  case 624: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3403 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10381 "bison-chpl-lib.cpp"
    break;

  case 625: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3416 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());

  }
#line 10399 "bison-chpl-lib.cpp"
    break;

  case 626: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 3433 "chpl.ypp"
  {
    (yyval.expr) = context->buildLetExpr((yyloc), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10407 "bison-chpl-lib.cpp"
    break;

  case 627: /* range_literal_expr: expr TDOTDOT expr  */
#line 3440 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10416 "bison-chpl-lib.cpp"
    break;

  case 628: /* range_literal_expr: expr TDOTDOTOPENHIGH expr  */
#line 3445 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10425 "bison-chpl-lib.cpp"
    break;

  case 629: /* range_literal_expr: expr TDOTDOT  */
#line 3450 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-1].expr)),
                      /*upperBound*/ nullptr).release();
  }
#line 10434 "bison-chpl-lib.cpp"
    break;

  case 630: /* range_literal_expr: TDOTDOT expr  */
#line 3455 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10444 "bison-chpl-lib.cpp"
    break;

  case 631: /* range_literal_expr: TDOTDOTOPENHIGH expr  */
#line 3461 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10454 "bison-chpl-lib.cpp"
    break;

  case 632: /* range_literal_expr: TDOTDOT  */
#line 3467 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      /*upperBound*/ nullptr).release();
  }
#line 10464 "bison-chpl-lib.cpp"
    break;

  case 633: /* cast_expr: expr TCOLON expr  */
#line 3497 "chpl.ypp"
  {
    (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
  }
#line 10472 "bison-chpl-lib.cpp"
    break;

  case 634: /* tuple_expand_expr: TLP TDOTDOTDOT expr TRP  */
#line 3504 "chpl.ypp"
  {
    (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
  }
#line 10480 "bison-chpl-lib.cpp"
    break;

  case 635: /* super_expr: fn_expr  */
#line 3510 "chpl.ypp"
          { (yyval.expr) = context->buildFunctionExpr((yyloc), (yyvsp[0].functionParts)); }
#line 10486 "bison-chpl-lib.cpp"
    break;

  case 639: /* expr: sub_type_level_expr TQUESTION  */
#line 3519 "chpl.ypp"
  { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10492 "bison-chpl-lib.cpp"
    break;

  case 640: /* expr: TQUESTION  */
#line 3521 "chpl.ypp"
  { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10498 "bison-chpl-lib.cpp"
    break;

  case 644: /* expr: fn_type  */
#line 3526 "chpl.ypp"
  { (yyval.expr) = context->buildFunctionType((yyloc), (yyvsp[0].functionParts)); }
#line 10504 "bison-chpl-lib.cpp"
    break;

  case 654: /* opt_expr: %empty  */
#line 3540 "chpl.ypp"
                  { (yyval.expr) = nullptr; }
#line 10510 "bison-chpl-lib.cpp"
    break;

  case 655: /* opt_expr: expr  */
#line 3541 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10516 "bison-chpl-lib.cpp"
    break;

  case 656: /* opt_try_expr: TTRY expr  */
#line 3545 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), false); }
#line 10522 "bison-chpl-lib.cpp"
    break;

  case 657: /* opt_try_expr: TTRYBANG expr  */
#line 3546 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), true); }
#line 10528 "bison-chpl-lib.cpp"
    break;

  case 658: /* opt_try_expr: super_expr  */
#line 3547 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10534 "bison-chpl-lib.cpp"
    break;

  case 664: /* call_base_expr: expr TBANG  */
#line 3564 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                             STR("postfix!"),
                                                             (yyvsp[-1].expr)); }
#line 10542 "bison-chpl-lib.cpp"
    break;

  case 665: /* call_base_expr: sub_type_level_expr TQUESTION  */
#line 3567 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10548 "bison-chpl-lib.cpp"
    break;

  case 668: /* call_expr: call_base_expr TLP opt_actual_ls TRP  */
#line 3574 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ false);
      (yyval.expr) = fnCall.release();
    }
#line 10564 "bison-chpl-lib.cpp"
    break;

  case 669: /* call_expr: call_base_expr TLSBR opt_actual_ls TRSBR  */
#line 3586 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ true);
      (yyval.expr) = fnCall.release();
    }
#line 10580 "bison-chpl-lib.cpp"
    break;

  case 670: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 3598 "chpl.ypp"
    {
      (yyval.expr) = context->buildPrimCall((yyloc), (yyvsp[-1].maybeNamedActualList));
    }
#line 10588 "bison-chpl-lib.cpp"
    break;

  case 671: /* dot_expr: expr TDOT ident_use  */
#line 3605 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10594 "bison-chpl-lib.cpp"
    break;

  case 672: /* dot_expr: expr TDOT TTYPE  */
#line 3607 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10600 "bison-chpl-lib.cpp"
    break;

  case 673: /* dot_expr: expr TDOT TDOMAIN  */
#line 3609 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10606 "bison-chpl-lib.cpp"
    break;

  case 674: /* dot_expr: expr TDOT TLOCALE  */
#line 3611 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10612 "bison-chpl-lib.cpp"
    break;

  case 675: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 3613 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         false).release();
    }
#line 10622 "bison-chpl-lib.cpp"
    break;

  case 676: /* dot_expr: expr TDOT TBYTES TLSBR TRSBR  */
#line 3619 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         true).release();
    }
#line 10632 "bison-chpl-lib.cpp"
    break;

  case 677: /* parenthesized_expr: TLP tuple_component TRP  */
#line 3631 "chpl.ypp"
                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 10638 "bison-chpl-lib.cpp"
    break;

  case 678: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 3633 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consume((yyvsp[-2].expr))).release();
  }
#line 10646 "bison-chpl-lib.cpp"
    break;

  case 679: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 3637 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10654 "bison-chpl-lib.cpp"
    break;

  case 680: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 3641 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10662 "bison-chpl-lib.cpp"
    break;

  case 681: /* bool_literal: TFALSE  */
#line 3647 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), false).release(); }
#line 10668 "bison-chpl-lib.cpp"
    break;

  case 682: /* bool_literal: TTRUE  */
#line 3648 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), true).release(); }
#line 10674 "bison-chpl-lib.cpp"
    break;

  case 683: /* str_bytes_literal: STRINGLITERAL  */
#line 3652 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10680 "bison-chpl-lib.cpp"
    break;

  case 684: /* str_bytes_literal: BYTESLITERAL  */
#line 3653 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10686 "bison-chpl-lib.cpp"
    break;

  case 687: /* literal_expr: INTLITERAL  */
#line 3659 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), INTLITERAL); }
#line 10692 "bison-chpl-lib.cpp"
    break;

  case 688: /* literal_expr: REALLITERAL  */
#line 3660 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), REALLITERAL); }
#line 10698 "bison-chpl-lib.cpp"
    break;

  case 689: /* literal_expr: IMAGLITERAL  */
#line 3661 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), IMAGLITERAL); }
#line 10704 "bison-chpl-lib.cpp"
    break;

  case 690: /* literal_expr: CSTRINGLITERAL  */
#line 3662 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 10710 "bison-chpl-lib.cpp"
    break;

  case 691: /* literal_expr: TNONE  */
#line 3663 "chpl.ypp"
                      { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10716 "bison-chpl-lib.cpp"
    break;

  case 692: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 3665 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10725 "bison-chpl-lib.cpp"
    break;

  case 693: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 3670 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10734 "bison-chpl-lib.cpp"
    break;

  case 694: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 3675 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10742 "bison-chpl-lib.cpp"
    break;

  case 695: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 3679 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true).release();
  }
#line 10750 "bison-chpl-lib.cpp"
    break;

  case 696: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 3683 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)), false, true).release();
  }
#line 10758 "bison-chpl-lib.cpp"
    break;

  case 697: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 3687 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true, true).release();
  }
#line 10766 "bison-chpl-lib.cpp"
    break;

  case 698: /* assoc_expr_ls: expr TALIAS expr  */
#line 3695 "chpl.ypp"
  {
    auto node = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->makeList(node);
  }
#line 10775 "bison-chpl-lib.cpp"
    break;

  case 699: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 3700 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildBinOp(loc, (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 10785 "bison-chpl-lib.cpp"
    break;

  case 700: /* binary_op_expr: expr TPLUS expr  */
#line 3708 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10791 "bison-chpl-lib.cpp"
    break;

  case 701: /* binary_op_expr: expr TMINUS expr  */
#line 3709 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10797 "bison-chpl-lib.cpp"
    break;

  case 702: /* binary_op_expr: expr TSTAR expr  */
#line 3710 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10803 "bison-chpl-lib.cpp"
    break;

  case 703: /* binary_op_expr: expr TDIVIDE expr  */
#line 3711 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10809 "bison-chpl-lib.cpp"
    break;

  case 704: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 3712 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10815 "bison-chpl-lib.cpp"
    break;

  case 705: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 3713 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10821 "bison-chpl-lib.cpp"
    break;

  case 706: /* binary_op_expr: expr TMOD expr  */
#line 3714 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10827 "bison-chpl-lib.cpp"
    break;

  case 707: /* binary_op_expr: expr TEQUAL expr  */
#line 3715 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10833 "bison-chpl-lib.cpp"
    break;

  case 708: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 3716 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10839 "bison-chpl-lib.cpp"
    break;

  case 709: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 3717 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10845 "bison-chpl-lib.cpp"
    break;

  case 710: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 3718 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10851 "bison-chpl-lib.cpp"
    break;

  case 711: /* binary_op_expr: expr TLESS expr  */
#line 3719 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10857 "bison-chpl-lib.cpp"
    break;

  case 712: /* binary_op_expr: expr TGREATER expr  */
#line 3720 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10863 "bison-chpl-lib.cpp"
    break;

  case 713: /* binary_op_expr: expr TBAND expr  */
#line 3721 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10869 "bison-chpl-lib.cpp"
    break;

  case 714: /* binary_op_expr: expr TBOR expr  */
#line 3722 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10875 "bison-chpl-lib.cpp"
    break;

  case 715: /* binary_op_expr: expr TBXOR expr  */
#line 3723 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10881 "bison-chpl-lib.cpp"
    break;

  case 716: /* binary_op_expr: expr TAND expr  */
#line 3724 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10887 "bison-chpl-lib.cpp"
    break;

  case 717: /* binary_op_expr: expr TOR expr  */
#line 3725 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10893 "bison-chpl-lib.cpp"
    break;

  case 718: /* binary_op_expr: expr TEXP expr  */
#line 3726 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10899 "bison-chpl-lib.cpp"
    break;

  case 719: /* binary_op_expr: expr TBY expr  */
#line 3727 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10905 "bison-chpl-lib.cpp"
    break;

  case 720: /* binary_op_expr: expr TALIGN expr  */
#line 3728 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10911 "bison-chpl-lib.cpp"
    break;

  case 721: /* binary_op_expr: expr THASH expr  */
#line 3729 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10917 "bison-chpl-lib.cpp"
    break;

  case 722: /* binary_op_expr: expr TDMAPPED expr  */
#line 3730 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10923 "bison-chpl-lib.cpp"
    break;

  case 723: /* unary_op_expr: TPLUS expr  */
#line 3734 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10929 "bison-chpl-lib.cpp"
    break;

  case 724: /* unary_op_expr: TMINUS expr  */
#line 3735 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10935 "bison-chpl-lib.cpp"
    break;

  case 725: /* unary_op_expr: TMINUSMINUS expr  */
#line 3736 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10941 "bison-chpl-lib.cpp"
    break;

  case 726: /* unary_op_expr: TPLUSPLUS expr  */
#line 3737 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10947 "bison-chpl-lib.cpp"
    break;

  case 727: /* unary_op_expr: TBANG expr  */
#line 3738 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10953 "bison-chpl-lib.cpp"
    break;

  case 728: /* unary_op_expr: expr TBANG  */
#line 3739 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                              STR("postfix!"),
                                                              (yyvsp[-1].expr)); }
#line 10961 "bison-chpl-lib.cpp"
    break;

  case 729: /* unary_op_expr: TBNOT expr  */
#line 3742 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10967 "bison-chpl-lib.cpp"
    break;

  case 730: /* reduce_expr: expr TREDUCE expr  */
#line 3747 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10975 "bison-chpl-lib.cpp"
    break;

  case 731: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 3751 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10983 "bison-chpl-lib.cpp"
    break;

  case 732: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 3755 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10991 "bison-chpl-lib.cpp"
    break;

  case 733: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 3759 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10999 "bison-chpl-lib.cpp"
    break;

  case 734: /* scan_expr: expr TSCAN expr  */
#line 3766 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11007 "bison-chpl-lib.cpp"
    break;

  case 735: /* scan_expr: expr TSCAN zippered_iterator  */
#line 3770 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11015 "bison-chpl-lib.cpp"
    break;

  case 736: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 3774 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11023 "bison-chpl-lib.cpp"
    break;

  case 737: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 3778 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11031 "bison-chpl-lib.cpp"
    break;


#line 11035 "bison-chpl-lib.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYCHPL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, context, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYCHPL_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYCHPL_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYCHPL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYCHPL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef yychpl_nerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yylsa
#undef yyls
#undef yylsp
#undef yystacksize
