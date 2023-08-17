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
  YYSYMBOL_interface_expr = 248,           /* interface_expr  */
  YYSYMBOL_interface_expr_ls = 249,        /* interface_expr_ls  */
  YYSYMBOL_unary_implements_stmt = 250,    /* unary_implements_stmt  */
  YYSYMBOL_binary_implements_stmt = 251,   /* binary_implements_stmt  */
  YYSYMBOL_ifc_constraint = 252,           /* ifc_constraint  */
  YYSYMBOL_try_stmt = 253,                 /* try_stmt  */
  YYSYMBOL_catch_expr_ls = 254,            /* catch_expr_ls  */
  YYSYMBOL_catch_expr = 255,               /* catch_expr  */
  YYSYMBOL_catch_expr_inner = 256,         /* catch_expr_inner  */
  YYSYMBOL_throw_stmt = 257,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 258,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 259,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 260,                /* when_stmt  */
  YYSYMBOL_manager_expr = 261,             /* manager_expr  */
  YYSYMBOL_manager_expr_ls = 262,          /* manager_expr_ls  */
  YYSYMBOL_manage_stmt = 263,              /* manage_stmt  */
  YYSYMBOL_class_decl_stmt = 264,          /* class_decl_stmt  */
  YYSYMBOL_class_start = 265,              /* class_start  */
  YYSYMBOL_class_tag = 266,                /* class_tag  */
  YYSYMBOL_opt_inherit = 267,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 268,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 269,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header_lcbr = 270,         /* enum_header_lcbr  */
  YYSYMBOL_enum_ls = 271,                  /* enum_ls  */
  YYSYMBOL_272_5 = 272,                    /* $@5  */
  YYSYMBOL_273_6 = 273,                    /* $@6  */
  YYSYMBOL_enum_item = 274,                /* enum_item  */
  YYSYMBOL_lambda_decl_start = 275,        /* lambda_decl_start  */
  YYSYMBOL_lambda_decl_expr = 276,         /* lambda_decl_expr  */
  YYSYMBOL_277_7 = 277,                    /* $@7  */
  YYSYMBOL_linkage_spec_empty = 278,       /* linkage_spec_empty  */
  YYSYMBOL_linkage_spec = 279,             /* linkage_spec  */
  YYSYMBOL_opt_fn_type_formal_ls = 280,    /* opt_fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal_ls = 281,        /* fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal = 282,           /* fn_type_formal  */
  YYSYMBOL_opt_fn_type_ret_type = 283,     /* opt_fn_type_ret_type  */
  YYSYMBOL_fn_type = 284,                  /* fn_type  */
  YYSYMBOL_fn_expr = 285,                  /* fn_expr  */
  YYSYMBOL_286_8 = 286,                    /* $@8  */
  YYSYMBOL_287_9 = 287,                    /* $@9  */
  YYSYMBOL_fn_decl_stmt_complete = 288,    /* fn_decl_stmt_complete  */
  YYSYMBOL_fn_decl_stmt = 289,             /* fn_decl_stmt  */
  YYSYMBOL_290_10 = 290,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 291,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_stmt_start = 292,       /* fn_decl_stmt_start  */
  YYSYMBOL_fn_decl_receiver_expr = 293,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 294,                 /* fn_ident  */
  YYSYMBOL_op_ident = 295,                 /* op_ident  */
  YYSYMBOL_assignop_ident = 296,           /* assignop_ident  */
  YYSYMBOL_all_op_name = 297,              /* all_op_name  */
  YYSYMBOL_formal_var_arg_expr = 298,      /* formal_var_arg_expr  */
  YYSYMBOL_opt_formal_ls = 299,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 300,            /* req_formal_ls  */
  YYSYMBOL_formal_ls_inner = 301,          /* formal_ls_inner  */
  YYSYMBOL_formal_ls = 302,                /* formal_ls  */
  YYSYMBOL_formal = 303,                   /* formal  */
  YYSYMBOL_formal_ident_def = 304,         /* formal_ident_def  */
  YYSYMBOL_named_formal = 305,             /* named_formal  */
  YYSYMBOL_opt_formal_intent_tag = 306,    /* opt_formal_intent_tag  */
  YYSYMBOL_required_intent_tag = 307,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 308,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 309,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 310,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 311,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 312,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 313,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 314,               /* query_expr  */
  YYSYMBOL_opt_lifetime_where = 315,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 316, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 317,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 318,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 319,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_start = 320, /* type_alias_decl_stmt_start  */
  YYSYMBOL_type_alias_decl_stmt_inner_ls = 321, /* type_alias_decl_stmt_inner_ls  */
  YYSYMBOL_type_alias_decl_stmt_inner = 322, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 323,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 324,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 325,            /* var_decl_stmt  */
  YYSYMBOL_326_11 = 326,                   /* $@11  */
  YYSYMBOL_var_decl_stmt_inner_ls = 327,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 328,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 329, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 330, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 331,            /* opt_init_expr  */
  YYSYMBOL_formal_or_ret_type_expr = 332,  /* formal_or_ret_type_expr  */
  YYSYMBOL_ret_type = 333,                 /* ret_type  */
  YYSYMBOL_colon_ret_type = 334,           /* colon_ret_type  */
  YYSYMBOL_opt_ret_type = 335,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 336,                 /* opt_type  */
  YYSYMBOL_formal_type = 337,              /* formal_type  */
  YYSYMBOL_colon_formal_type = 338,        /* colon_formal_type  */
  YYSYMBOL_opt_colon_formal_type = 339,    /* opt_colon_formal_type  */
  YYSYMBOL_expr_ls = 340,                  /* expr_ls  */
  YYSYMBOL_tuple_component = 341,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 342,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 343,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 344,                /* actual_ls  */
  YYSYMBOL_actual_expr = 345,              /* actual_expr  */
  YYSYMBOL_ident_expr = 346,               /* ident_expr  */
  YYSYMBOL_sub_type_level_expr = 347,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 348,                 /* for_expr  */
  YYSYMBOL_bracket_loop_expr = 349,        /* bracket_loop_expr  */
  YYSYMBOL_cond_expr = 350,                /* cond_expr  */
  YYSYMBOL_nil_expr = 351,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 352,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 353,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 354,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 355,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 356,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 357,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 358,              /* intent_expr  */
  YYSYMBOL_task_var_prefix = 359,          /* task_var_prefix  */
  YYSYMBOL_new_maybe_decorated = 360,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 361,                 /* new_expr  */
  YYSYMBOL_let_expr = 362,                 /* let_expr  */
  YYSYMBOL_range_literal_expr = 363,       /* range_literal_expr  */
  YYSYMBOL_cast_expr = 364,                /* cast_expr  */
  YYSYMBOL_tuple_expand_expr = 365,        /* tuple_expand_expr  */
  YYSYMBOL_super_expr = 366,               /* super_expr  */
  YYSYMBOL_expr = 367,                     /* expr  */
  YYSYMBOL_opt_expr = 368,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 369,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 370,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 371,           /* call_base_expr  */
  YYSYMBOL_call_expr = 372,                /* call_expr  */
  YYSYMBOL_dot_expr = 373,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 374,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 375,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 376,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 377,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 378,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 379,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 380,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 381,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 382,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 383       /* reduce_scan_op_expr  */
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

#line 507 "bison-chpl-lib.cpp"

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
#define YYNNTS  203
/* YYNRULES -- Number of rules.  */
#define YYNRULES  745
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1313

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
       0,   638,   638,   642,   643,   648,   649,   657,   661,   671,
     676,   683,   684,   685,   686,   687,   688,   689,   690,   692,
     693,   694,   707,   708,   709,   718,   727,   731,   738,   746,
     747,   748,   749,   750,   751,   752,   753,   767,   782,   790,
     802,   813,   825,   837,   848,   864,   865,   869,   879,   880,
     881,   885,   889,   890,   894,   898,   905,   917,   925,   928,
     938,   940,   947,   952,   961,   965,   985,  1000,  1015,  1031,
    1032,  1034,  1039,  1040,  1045,  1063,  1067,  1071,  1082,  1101,
    1102,  1106,  1110,  1114,  1119,  1123,  1127,  1137,  1142,  1148,
    1155,  1160,  1167,  1178,  1179,  1183,  1188,  1196,  1205,  1215,
    1223,  1232,  1245,  1253,  1254,  1255,  1256,  1257,  1258,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,
    1281,  1285,  1290,  1295,  1301,  1310,  1311,  1315,  1324,  1328,
    1332,  1336,  1340,  1344,  1353,  1354,  1358,  1359,  1360,  1361,
    1362,  1366,  1367,  1379,  1380,  1385,  1386,  1387,  1388,  1389,
    1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,
    1400,  1401,  1402,  1403,  1407,  1408,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1425,  1426,  1427,  1428,
    1432,  1433,  1437,  1444,  1454,  1458,  1464,  1464,  1470,  1470,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1490,  1495,
    1500,  1505,  1512,  1520,  1521,  1525,  1534,  1540,  1548,  1567,
    1566,  1576,  1575,  1588,  1595,  1615,  1630,  1645,  1649,  1653,
    1657,  1661,  1665,  1669,  1673,  1694,  1698,  1702,  1706,  1710,
    1714,  1718,  1722,  1726,  1730,  1734,  1738,  1742,  1746,  1750,
    1754,  1758,  1762,  1766,  1770,  1774,  1778,  1782,  1787,  1795,
    1804,  1808,  1812,  1816,  1820,  1824,  1828,  1832,  1836,  1841,
    1846,  1851,  1859,  1874,  1892,  1896,  1903,  1904,  1909,  1914,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,
    1925,  1926,  1935,  1936,  1937,  1938,  1947,  1948,  1952,  1956,
    1963,  1967,  1974,  1981,  1992,  1996,  2003,  2007,  2011,  2015,
    2022,  2023,  2027,  2031,  2035,  2042,  2055,  2071,  2079,  2083,
    2092,  2093,  2097,  2101,  2106,  2114,  2119,  2123,  2130,  2131,
    2135,  2144,  2149,  2160,  2167,  2168,  2169,  2173,  2174,  2178,
    2182,  2186,  2190,  2194,  2201,  2218,  2231,  2238,  2243,  2250,
    2249,  2259,  2265,  2264,  2279,  2286,  2298,  2316,  2313,  2341,
    2345,  2346,  2348,  2353,  2354,  2358,  2359,  2363,  2366,  2368,
    2373,  2374,  2385,  2405,  2404,  2420,  2419,  2437,  2447,  2444,
    2478,  2486,  2494,  2505,  2516,  2525,  2540,  2541,  2545,  2546,
    2547,  2556,  2557,  2558,  2559,  2560,  2561,  2562,  2563,  2564,
    2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,  2574,
    2575,  2576,  2577,  2578,  2579,  2580,  2584,  2585,  2586,  2587,
    2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,  2600,  2601,
    2605,  2606,  2610,  2611,  2615,  2616,  2620,  2621,  2625,  2626,
    2630,  2634,  2635,  2639,  2643,  2648,  2653,  2658,  2663,  2671,
    2675,  2683,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,
    2695,  2696,  2697,  2698,  2699,  2700,  2704,  2705,  2706,  2710,
    2711,  2712,  2713,  2714,  2715,  2716,  2720,  2721,  2724,  2725,
    2729,  2730,  2731,  2735,  2740,  2741,  2743,  2745,  2747,  2752,
    2754,  2759,  2761,  2763,  2765,  2767,  2769,  2771,  2776,  2777,
    2781,  2790,  2794,  2802,  2806,  2813,  2834,  2835,  2840,  2841,
    2842,  2843,  2844,  2849,  2848,  2857,  2865,  2869,  2876,  2894,
    2913,  2917,  2921,  2928,  2930,  2932,  2939,  2940,  2941,  2945,
    2949,  2950,  2951,  2955,  2956,  2960,  2961,  2965,  2966,  2967,
    2968,  2972,  2973,  2977,  2981,  2982,  2988,  2989,  2993,  2994,
    2998,  3002,  3009,  3010,  3014,  3019,  3028,  3029,  3033,  3034,
    3041,  3042,  3043,  3044,  3045,  3046,  3048,  3050,  3052,  3054,
    3060,  3062,  3065,  3067,  3069,  3071,  3073,  3075,  3077,  3079,
    3081,  3083,  3088,  3099,  3110,  3120,  3136,  3152,  3168,  3177,
    3186,  3194,  3208,  3222,  3239,  3243,  3247,  3251,  3255,  3259,
    3263,  3270,  3288,  3296,  3297,  3298,  3299,  3300,  3301,  3302,
    3306,  3307,  3311,  3320,  3321,  3325,  3334,  3335,  3339,  3353,
    3357,  3364,  3365,  3366,  3367,  3368,  3369,  3373,  3375,  3377,
    3379,  3381,  3387,  3394,  3406,  3418,  3431,  3448,  3455,  3460,
    3465,  3470,  3476,  3482,  3512,  3519,  3526,  3527,  3531,  3533,
    3534,  3536,  3538,  3539,  3540,  3541,  3544,  3545,  3546,  3547,
    3548,  3549,  3550,  3551,  3552,  3556,  3557,  3561,  3562,  3563,
    3567,  3568,  3569,  3570,  3579,  3580,  3583,  3584,  3585,  3589,
    3601,  3613,  3620,  3622,  3624,  3626,  3628,  3634,  3647,  3648,
    3652,  3656,  3663,  3664,  3668,  3669,  3673,  3674,  3675,  3676,
    3677,  3678,  3679,  3680,  3685,  3690,  3694,  3698,  3702,  3710,
    3715,  3724,  3725,  3726,  3727,  3728,  3729,  3730,  3731,  3732,
    3733,  3734,  3735,  3736,  3737,  3738,  3739,  3740,  3741,  3742,
    3743,  3744,  3745,  3746,  3750,  3751,  3752,  3753,  3754,  3755,
    3758,  3762,  3766,  3770,  3774,  3781,  3785,  3789,  3793,  3801,
    3802,  3803,  3804,  3805,  3806,  3807
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
  "implements_type_ident", "implements_type_error_ident", "interface_expr",
  "interface_expr_ls", "unary_implements_stmt", "binary_implements_stmt",
  "ifc_constraint", "try_stmt", "catch_expr_ls", "catch_expr",
  "catch_expr_inner", "throw_stmt", "select_stmt", "when_stmt_ls",
  "when_stmt", "manager_expr", "manager_expr_ls", "manage_stmt",
  "class_decl_stmt", "class_start", "class_tag", "opt_inherit",
  "class_level_stmt_ls", "enum_decl_stmt", "enum_header_lcbr", "enum_ls",
  "$@5", "$@6", "enum_item", "lambda_decl_start", "lambda_decl_expr",
  "$@7", "linkage_spec_empty", "linkage_spec", "opt_fn_type_formal_ls",
  "fn_type_formal_ls", "fn_type_formal", "opt_fn_type_ret_type", "fn_type",
  "fn_expr", "$@8", "$@9", "fn_decl_stmt_complete", "fn_decl_stmt", "$@10",
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

#define YYPACT_NINF (-965)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-746)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -965,   116,  3977,  -965,   -32,    98,  -965,  -965,  -965,  -965,
    -965,  -965,  -965, 11502,    25,   162,   205, 13903,   277, 18957,
      25, 11502,   330,   298,   323,   162,  5377, 11502,  5377,   295,
   19032,  -965,   487,   453,  9052,  9927,  9927,  -965,  9227,   463,
      64,   374,  -965,   476, 19032, 19032, 19032,  -965,  3427, 10102,
     507, 11502, 11502,   241,  -965,   513,   521, 11502,  -965, 13903,
    -965, 11502,   576,   415,   200,   237, 13251,   533, 19087,  -965,
   11502,  8527, 11502, 10102, 13903, 11502,   490,   537,   421,  5377,
     539, 11502,   548,  7477,  7477,  -965,   553,  -965, 13903,  -965,
     555,  9227,  9402,  -965,   608, 11502,  -965, 11502,  -965,  -965,
   13731, 11502,  -965, 11502,  -965,  -965,  -965,  4327,  7827,  9577,
   11502,  -965,  5027,  -965,  -965,  -965,  -965, 18552,   472,  -965,
      56,   443,  -965,    57,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  7652,  -965, 10277,
    -965,  -965,  -965,  -965,  -965,   560,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,   470, 19032,  -965,  1981,   445,
     363,  -965,    67,  -965,  -965,  -965,   268,    54,  -965,  -965,
   19032,  3427,  -965,   454,   458,  -965,  -965,  -965,   459,   460,
   11502,   461,   462,  -965,  -965,  -965, 18245,  1045,   173,   467,
     473,  -965,  -965,   188,  -965,  -965,  -965,  -965,  -965,   186,
    -965,  -965,  -965, 11502, 11502, 11502,  -965, 11502, 11502, 10452,
     563,   231,  -965,  -965,  -965,  -965, 18245,   243,  -965,  -965,
     451,  5377,  -965,  -965,   477,    27,   480, 15665,  -965,   223,
    -965,   478,  -965,   105, 18245,   518,  9402,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,   481,  -965,  -965, 19032,   474,    60, 15177,    37,
    3745,    37, 15025, 19032, 19032,   -35,  3549,  -965,  -965,   561,
    9402,   482,  -965,   314,   321,  5377,  1650,   107,    30,  -965,
    5377,  -965,  -965, 15741,  -965,    74, 16329,   617,  -965,   483,
     484,  -965, 15741,    27,   617,  -965,  9402,   808,   808,   238,
      45,  -965,    62,  -965,  -965,  -965,  -965, 11502, 11502,  -965,
     689,  -965,   479,   510,  -965,  -965,  2643,   512,  -965,  -965,
   18245,   315, 11502, 11502,  -965,   -19,  -965,  -965, 18245,   500,
   16374,  -965, 15741,    27, 18245,   495,  9402,  -965, 18245, 16481,
    -965,  -965,  -965,  -965,    27,    60, 15741,   503,  -965,   150,
     150,  1364,   617,   617,   235,  -965,  -965,  4502,   119,  -965,
   11502,   114,   127,  -965, 14020,    -9,     8, 16527,   102,  1364,
     661,  -965,  -965, 19032,  -965,  -965,  4327,  -965,    81,  -965,
     561,  -965,  -965,  -965,   667,   501,  4677, 11502,  -965, 11502,
     609,  -965,  -965, 15269,    48,   470, 18245,   835, 19032, 11502,
     515,  -965,   519, 18746,   558,   287,  -965,   505,   268,  -965,
    -965,  -965,  -965,   596,  -965,  -965,  -965,  -965,   146,   601,
    -965,  -965,  -965, 13561,   570,   316,  -965,   322,   244,  -965,
     550, 11502, 11502, 11502,  9927,  9927, 11502,   395, 11502, 11502,
   11502, 11502, 11502,   139, 13731, 11502, 11502, 11502, 11502, 11502,
   11502, 11502, 11502, 11502, 11502, 11502, 11502, 11502, 11502, 11502,
   11502,   632,  -965,  -965,  -965,  -965,  -965,  9402,  9402,  -965,
    -965,  -965,  -965,  9402,  -965,  -965,  9402,  9402,  9402,  9402,
    9927,  9927, 15817, 15893, 16568,     5, 19032,  8002,  -965,  -965,
    -965,  9927,    60,  3427,  -965, 11502,  -965, 11502,   577,   528,
     556,  -965,  -965,  -965,   657, 11502,  -965,  5552,  9927,  -965,
     536,  -965,    60,  5727,  9927,  -965,    60,  -965,    60,  9927,
    -965,    60,   580,   584,  5377,   680,  5377,  -965,   681, 11502,
     653,   546,  9402, 19032,  -965, 19032,  -965,  -965,  -965,  1650,
    -965,  -965,   142,  -965, 11677,   595, 11502,  3427,  -965,  -965,
   11502,  -965, 18801, 11502, 11502,  -965,   549,  -965,  -965,  -965,
    -965, 18902,  -965,   268, 13425,  -965,  1650,  -965,   575, 11677,
    -965, 18245, 18245,  -965,   480,  -965,    53,  -965,  9402,   551,
    -965,   702,   702,  -965,  -965,  -965,  -965,  -965,  -965, 10627,
    -965, 16684,  8177,  -965,  8352,  -965, 18245,  5377,   552,  9927,
   10802,  4152,   554, 11502, 10977,  -965,  -965,  9052,  9927,  9927,
    -965,   579,  8702,  -965,   368,  -965,  4852,  -965,   324, 16725,
     325, 15361, 19032,  7302,  7302,  -965,   470,   562,  -965,   223,
    -965,    97,   565,   578,  1301,  -965,  -965, 11502,   228,  -965,
    -965,   163,  -965,  -965,    70,  -965,  -965,  7127,  -965,   621,
    -965,   559,   585,  -965,   586,  -965,   588,   589,   590,   593,
    -965,   594,   597,   598,   606,   613,   619,   623,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
   11502,   592,   629,   559,  -965,   559,  -965, 11502,  -965, 19032,
    -965,  -965,  1334,  1334,   381,  -965,   381,  -965,   381,  3005,
     242,  1806,  1978,    27,   150,  -965,   400,  -965,  -965,  -965,
    -965,  -965,  1364, 13122,   381,  2489,  2489,  1334,  2489,  2489,
    1562,   150, 13122,  3649,  1562,   617,   617,   150,  1364,   618,
     622,   624,   625,   628,   630,   572,   582,  -965,   381,  -965,
     381, 11852,  9927, 12027,  9927, 11502,  9927, 14020,   612,   239,
    -965,  -965,  -965,   180,  -965,  1803, 18290,   447,    25, 16770,
    -965,   335, 18245, 16877,  9402,  -965,  9402, 11502,   183,  9227,
   18245,    61, 15969,  8002,  -965,  9227, 18245,    41, 15437,  -965,
    -965,    37, 15513,  -965, 11502, 11502,   752,  5377,   754, 16922,
    5377, 16045, 19032,  -965,   192,  -965,  -965,   201,  -965,   203,
    1650,   107,  -965, 18245,  8877,  -965, 18245,  -965,  -965,  -965,
   19032, 16962, 17038,  -965,   575,   648,  -965,   208, 11677,  -965,
     253,  -965, 11502,  -965,   631,   154,   627,  -965,  3318,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  5377,    -1, 16121,
    -965,  -965, 18245,  5377, 18245,  -965, 17114, 15589, 15101,     9,
    -965,  -965,   246,  -965,  -965,  -965,  -965, 11502,  -965,    83,
   14125, 11502,  -965, 11152,  7302,  7302,  -965, 11502,   449, 11502,
     455,   456, 11502,  9752,   464,   349,  -965,  -965,  -965, 17154,
     649,   636,   634,  -965, 19032,  3427,  9402,  -965,   635,  2347,
   18245, 19032,   472,   772,  -965,   621,  -965,  -965,  -965,  -965,
    -965,    55,   602,  -965, 17200,  -965, 14284,  -965,  -965, 18245,
    -965,   637,   633,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965, 11502,   773, 17306, 11502,   775, 17352,   638, 17392,  9402,
    -965,  -965,  8002,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,    90,  9927,  9927,    60,    60,
    -965,  -965,  -965,  -965, 15741,  -965, 14365,  5902,  -965,  6077,
    -965,   247,  -965, 14445,  6252,  -965,    60,  6427,  -965,    60,
    -965,    60,  -965,    60, 18245, 18245,  5377,  -965,  5377, 11502,
    -965,  5377,   778,   644,  -965, 19032,   480,  -965,  -965,   595,
    -965,  -965,  -965,   643,   645,   253, 11502,   621,   575,  -965,
   11502,  -965,  -965, 18245,  -965,  6602, 11502,  -965,  -965,  -965,
   19032,  -965,   672,   480,  -965,  6777,   647,  6952,   652,  -965,
   11502,  9927,  9927,  9927,  5377,  9402,  -965,  -965,  -965,  -965,
    -965,   400,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  7302,  -965,  -965, 17512,
      65, 16213,   350,   659,  7302,  -965, 11502,  -965,  -965, 18433,
     352,   356,   250,  -965,  -965,  -965,  -965, 18619, 18665,  -965,
    -965, 18746,  -965,    55,   155, 11502,  -965,   685,   655,  -965,
     559,   559,  -965,  -965, 17472, 12202, 12377, 17588, 12552, 12727,
   12902, 13077,   251,  -965,   595,   254,   293,  -965,  -965,  -965,
    5377,  9227, 18245,  9227, 18245,  8002,  -965,  5377,  9227, 18245,
    -965,  9227, 18245,  -965,  -965,  -965,  -965,  -965, 18245,   799,
    5377,  -965,  -965,  -965,  -965,  9402,  9402,  -965,  -965,  -965,
    -965,   253, 18245,  5377,  -965,    86,   663, 11502,  -965,  9227,
    -965, 18245,  5377,  9227,  -965, 18245,  5377, 18245,    60, 15741,
      37, 15513,   137, 16289,  -965,   312, 11327,  7302,  7302,  7302,
    7302,  -965,  -965,  -965, 17673, 18245, 18479,  -965,  -965,  -965,
     674, 18665,  -965,  -965,  -965,  -965,  -965,    96,  -965,    -4,
    -965,   215, 17749,    33,  -965,  -965,  -965, 11502, 11502, 11502,
   11502, 11502, 11502, 11502, 11502,  -965,  -965, 16922, 14525, 14605,
    -965, 16922, 14685, 14765,  5377,  -965,   668,   669,  -965,  -965,
     518,  -965,   480, 18245, 14845,  -965, 14925,  -965,  5377,  5377,
    -965,  -965, 18245,   359,   675,   360,   684, 11502,  -965,  -965,
      42,  -965, 11502,   155,    96,    96,    96,    96,    96,    96,
     155,  5202,  -965,  -965,  -965,  -965,  -965, 17825, 17901, 17977,
   18053, 18129, 18205,  5377,  5377,  5377,  5377,  -965,   690,   691,
    -965,  5377,  5377,  -965,  -965,  -965,  -965, 18245,  -965, 18245,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,   706,  -965, 11502,
   11502, 11502, 11502, 11502, 11502, 16922, 16922, 16922, 16922,  -965,
    -965, 16922, 16922
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   143,   473,   688,   689,   690,
     684,   685,   691,     0,   600,   134,   164,   568,   171,   570,
     600,     0,   170,   503,   501,   134,     0,     0,     0,   286,
     165,   204,   203,   682,     0,     0,     0,   202,     0,   169,
      69,   287,   351,   166,     0,     0,     0,   346,     0,     0,
     173,     0,     0,   617,   592,   692,   174,     0,   352,   562,
     498,     0,     0,     0,   188,   186,   439,   168,   571,   500,
       0,     0,     0,     0,   566,     0,     0,   172,     0,     0,
     144,     0,   683,     0,     0,   491,   167,   326,   564,   502,
     175,     0,     0,   741,     0,     0,   743,     0,   744,   745,
     633,     0,   742,   739,   641,   184,   740,     0,     0,     0,
       0,     4,     0,     5,    10,    11,    12,    47,    51,    52,
      58,     0,    45,    72,    13,    78,    14,    15,    16,    17,
      29,   548,   549,    23,    46,   185,   195,     0,   205,   655,
     196,    18,    31,    30,    20,     0,   281,   197,    19,   651,
      22,    35,    32,    33,   194,   327,     0,   192,     0,     0,
     648,   350,     0,   645,   190,   367,   459,   450,   643,   193,
       0,     0,   191,   660,   639,   638,   642,   552,   550,     0,
       0,   649,   650,   654,   653,   652,     0,   551,     0,   661,
     662,   663,   686,   687,   644,   554,   553,   646,   647,     0,
      28,   570,   165,     0,     0,     0,   571,     0,     0,     0,
       0,   648,   660,   550,   649,   650,   560,   551,   661,   662,
       0,     0,   601,   135,     0,   569,     0,   600,   492,     0,
     499,     0,    21,     0,   536,     0,   542,   141,   145,   157,
     151,   150,   159,   138,   149,   160,   146,   161,   136,   162,
     155,   148,   156,   154,   152,   153,   137,   139,   147,   158,
     163,   142,     0,   140,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    70,    72,
     542,   288,   290,     0,     0,     0,     0,     0,     0,   506,
       0,   181,    40,     0,   318,     0,   317,   726,   621,   618,
     619,   620,     0,   563,   727,     7,   542,   349,   349,   446,
     178,   441,   179,   442,   443,   447,   448,   177,   176,   449,
     439,   532,     0,   354,   355,   357,     0,   440,   531,   359,
     519,     0,     0,     0,   182,   645,   636,   659,   637,     0,
       0,    43,     0,   567,   555,     0,   542,    44,   561,     0,
     296,   300,   297,   300,   565,     0,     0,     0,    57,   728,
     730,   631,   725,   724,     0,    75,    79,     0,     0,   538,
       0,     0,     0,   539,   584,     0,     0,   536,     0,   632,
       0,     6,   324,     0,   203,   325,     0,    49,     0,     9,
      72,    50,    53,    56,     0,    55,     0,     0,    73,     0,
       0,   503,   201,     0,   684,   327,   656,   209,     0,     0,
       0,   323,     0,     0,   344,     0,   337,   439,   459,   457,
     458,   456,   375,   461,   460,   464,   463,   465,     0,   454,
     451,   452,   455,     0,   496,     0,   493,     0,   640,    34,
     622,     0,     0,     0,     0,     0,     0,   729,     0,     0,
       0,     0,     0,     0,   630,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   413,   414,   415,   410,   412,     0,     0,   408,
     411,   409,   407,     0,   417,   416,     0,     0,   542,   542,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    24,
      37,     0,     0,     0,    25,     0,    38,     0,   548,     0,
     543,   544,   547,   336,     0,     0,   223,     0,     0,   222,
       0,   231,     0,     0,     0,   229,     0,   239,     0,     0,
     237,     0,     0,     0,     0,   255,     0,   406,   251,     0,
       0,     0,     0,     0,   292,     0,   265,    26,   510,     0,
     511,   513,     0,   530,     0,   516,     0,     0,   180,    39,
       0,   320,     0,     0,     0,    41,     0,   189,   187,   444,
     445,     0,   440,   459,   439,   432,     0,   431,   534,     0,
     127,   657,   658,   365,     0,   183,     0,    42,     0,     0,
     307,   298,   299,   216,   215,    27,    77,    76,    80,     0,
     693,     0,     0,   678,     0,   680,   585,     0,     0,     0,
       0,     0,     0,     0,     0,   697,     8,     0,     0,     0,
      48,    58,     0,    54,     0,    66,     0,   125,     0,   120,
       0,    87,     0,     0,    93,   198,   327,     0,   211,     0,
     208,   294,     0,   328,     0,   335,   341,     0,   339,   334,
     424,     0,   426,   430,     0,   462,   524,     0,   526,   466,
     453,   422,   141,   402,   145,   400,   151,   150,   149,   146,
     404,   161,   162,   148,   152,   137,   147,   163,   399,   381,
     384,   382,   383,   405,   394,   385,   398,   390,   388,   401,
     389,   387,   392,   397,   386,   391,   395,   396,   393,   403,
       0,   378,     0,   422,   379,   422,   376,     0,   495,     0,
     490,   505,   721,   720,   723,   732,   731,   736,   735,   717,
     714,   715,   716,   634,   704,   143,     0,   674,   675,   144,
     673,   672,   628,   708,   719,   713,   711,   722,   712,   710,
     702,   707,   709,   718,   701,   705,   706,   703,   629,     0,
       0,     0,     0,     0,     0,     0,     0,   734,   733,   738,
     737,     0,     0,     0,     0,     0,     0,   695,   294,   611,
     612,   614,   616,     0,   603,     0,     0,     0,   600,   600,
     219,     0,   537,     0,     0,   557,     0,     0,     0,     0,
     574,     0,     0,     0,   232,     0,   580,     0,     0,   230,
     240,     0,     0,   238,     0,     0,   254,     0,   250,     0,
       0,     0,     0,   556,     0,   291,   268,     0,   266,     0,
     514,     0,   529,   528,     0,   508,   627,   507,   319,   316,
       0,     0,     0,   671,   534,   360,   356,     0,     0,   535,
     516,   358,     0,   364,     0,     0,     0,   558,     0,   301,
     694,   635,   679,   540,   681,   541,   247,     0,     0,     0,
     696,   245,   586,     0,   699,   698,     0,     0,     0,     0,
      59,    60,     0,    62,    64,    68,    67,     0,   102,     0,
       0,     0,    95,     0,     0,    93,    65,   399,   381,   384,
     382,   383,   392,   391,   393,     0,   418,   419,    82,    81,
      94,     0,     0,   329,     0,     0,     0,   293,     0,   349,
     345,     0,     0,   439,   425,   466,   522,   521,   520,   523,
     467,   474,   439,   374,     0,   380,     0,   370,   371,   497,
     494,     0,     0,   133,   131,   132,   130,   129,   128,   669,
     670,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     613,   615,     0,   602,   164,   171,   170,   169,   166,   173,
     174,   168,   172,   167,   175,     0,     0,     0,     0,     0,
     504,   214,   546,   545,     0,   249,     0,     0,   221,     0,
     220,     0,   606,     0,     0,   227,     0,     0,   225,     0,
     235,     0,   233,     0,   263,   262,     0,   257,     0,     0,
     253,     0,   259,     0,   289,     0,     0,   512,   515,   516,
     517,   518,   315,     0,     0,   516,     0,   466,   534,   533,
     420,   435,   433,   366,   309,     0,     0,   308,   311,   559,
       0,   302,   305,     0,   248,     0,     0,     0,     0,   246,
       0,     0,     0,     0,     0,     0,    61,   126,   123,   103,
     115,   109,   108,   107,   117,   104,   118,   113,   106,   114,
     112,   110,   111,   105,   116,   119,     0,   122,   121,    90,
      89,    88,     0,     0,     0,   199,     0,   200,   329,   349,
       0,     0,     0,   322,   188,   186,   321,   349,   349,   330,
     340,     0,   427,   474,     0,     0,   368,   429,     0,   377,
     422,   422,   676,   677,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,   516,   660,   660,   218,   217,   224,
       0,     0,   573,     0,   572,     0,   605,     0,     0,   579,
     228,     0,   578,   226,   236,   234,   256,   252,   591,   258,
       0,    74,   267,   264,   509,   542,   542,   436,   434,   361,
     362,   516,   421,     0,   313,     0,     0,     0,   303,     0,
     243,   588,     0,     0,   241,   587,     0,   700,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,    93,     0,
      93,    96,    99,    85,    84,    83,   349,   206,   212,   210,
     295,   349,   332,   331,   343,   347,   488,     0,   489,   476,
     479,     0,   475,     0,   423,   372,   373,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   608,   577,     0,     0,
     607,   583,     0,     0,     0,   261,     0,     0,   438,   437,
     314,   312,     0,   306,     0,   244,     0,   242,     0,     0,
     124,    92,    91,     0,     0,     0,     0,     0,   207,   333,
       0,   487,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   470,   472,   369,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,   623,   624,
     304,     0,     0,    98,   101,    97,   100,    86,   348,   478,
     480,   481,   484,   485,   486,   482,   483,   477,   471,     0,
       0,     0,     0,     0,     0,   576,   575,   582,   581,   625,
     626,   590,   589
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -965,  -965,  -965,     4,   -65,  1549,  -965,   475,   739,  -965,
    -965,  -965,  -153,  -115,  -965,   248,  -965,  -965,  -186,  -965,
    -965,   124,   581,  -965,  -575,  2601,   469,  -606,  -965,  -854,
    -965,  -965,  -965,    -2,  -965,  -965,  -965,   848,  -965,  3040,
    -208,  -965,  -965,  -478,  2762,  -927,  -869,  -965,  -965,   274,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,   504,   376,
    -965,   787,  -965,  -965,  -116,  2385,  -965,  -323,  -965,  -965,
    -965,  -965,  -965,   544,  -965,  -131,  -965,  -965,  -965,  -965,
     342,  -965,  -965,  -965,  -107,  -965,  -368,  -856,  -965,  -965,
    -965,  -965,  -965,  -398,  -965,   605,  -965,  -965,  -965,  -965,
    -965,   329,  -965,  1551,  -965,  -965,  -965,  -965,   497,  -965,
    -965,  -965,  -965,   -17,  -414,  -145,  -839,  -964,  -679,  -965,
     -15,  -965,    -3,   341,   -55,   599,   -54,  -965,  -965,  -369,
    -835,  -965,  -337,  -965,  -179,  -345,  -332,  -595,  -965,  -965,
      12,   213,  -965,  -213,   788,  -965,  -161,   367,   109,  -437,
    -807,  -637,  -965,  -965,  -965,  -624,  -544,  -965,  -789,   -20,
     -25,  -965,  -263,  -524,  -559,   280,  -965,  -965,  -965,  -965,
     933,  -965,   -18,  -965,  -965,  -162,  -965,  -759,  -965,  -965,
    1200,  1278,  -965,  -965,  -965,  -965,   -13,  -965,    77,  1579,
    -965,  1962,  2021,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -484
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,   366,   112,   808,   114,   115,   116,   388,
     389,   117,   118,   119,   120,   395,   623,   872,   873,   121,
     122,   123,   400,   124,   125,   126,   367,   900,   630,   901,
     127,   128,  1067,   627,   628,   129,   130,   224,   261,   287,
     131,   263,   132,   321,   519,   133,   134,   308,   307,   135,
     136,   137,   138,   139,   140,   639,   904,   141,   142,   267,
     143,   275,   144,   817,   818,   210,   146,   282,   283,   147,
     148,   149,   150,   591,   849,  1033,   151,   152,   845,  1028,
     294,   295,   153,   154,   155,   156,   410,   909,   157,   158,
     415,   911,   912,   416,   159,   211,  1250,   161,   162,   322,
     323,   324,  1017,   163,   336,   584,   842,   164,   165,  1203,
     166,   167,   702,   703,   896,   897,   898,  1021,   923,   418,
     651,  1098,   652,   578,   653,   326,   572,   433,   422,   428,
     921,  1265,  1266,   168,  1096,  1199,  1200,  1201,   169,   170,
     435,   436,   708,   171,   172,   229,   288,   289,   551,   552,
     825,   328,   919,   658,   659,   555,   329,   839,   840,   368,
     371,   372,   509,   510,   511,   212,   174,   175,   176,   177,
     213,   179,   221,   222,   773,   526,   981,   774,   775,   180,
     214,   215,   183,   184,   185,   337,   186,   407,   512,   217,
     188,   218,   219,   191,   192,   193,   194,   378,   195,   196,
     197,   198,   199
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     216,   320,   226,   392,   225,   413,   111,   233,   227,   843,
     437,   325,   327,   777,   234,   646,   503,   541,   814,   704,
     918,   268,   270,   272,   927,   276,   928,   895,   508,   846,
     915,  1073,   405,  1022,   982,   841,   293,   637,   296,   297,
    1089,  1068,   487,   566,   302,  1015,   303,  1079,   304,   654,
     331,  1147,   766,   330,   844,   609,  1043,   234,   338,   340,
     342,   343,   344,   874,   393,  1261,   348,   534,   349,   290,
     382,   553,   508,   984,  1261,   354,   822,   556,   356,   338,
    1093,   429,   359,   589,   360,   642,   725,   361,   362,   376,
     363,   553,   290,   977,   234,   338,   377,   379,   508,  1196,
    -286,  1177,  -527,   397,   583,    21,   290,   522,   553,   528,
     531,   520,   819,    28,  1252,  1094,     3,  -287,   290,   520,
     419,   617,   618,    36,   403,    71,   406,  -310,   520,   520,
    -527,   539,   430,   200,    71,   386,   385,  1178,   508,   837,
     420,   398,   725,  1253,   431,   220,   277,   656,   339,   278,
     421,  -363,   610,  -269,  -527,   610,   505,   520,  1196,   726,
      87,   520,  -527,   432,   279,   223,   607,   440,   447,   357,
    -310,   399,   727,  1095,  1035,  -527,   453,   557,  -525,   917,
     767,   443,  1150,   611,  1044,   373,   729,  1228,  -527,   495,
     492,   493,   494,  1113,   348,   234,   377,  1009,  1262,  1198,
      91,   728,  1144,   386,   835,   394,  -525,   386,  1148,   502,
    1089,   386,   386,   608,   612,  -527,   554,   236,  1192,  1193,
     815,   560,  1186,   338,  -310,   755,   756,   973,  1025,  1151,
     386,   386,  -527,   505,   280,  1183,   554,  -527,  -525,   444,
    -527,   390,   729,   445,   386,   731,   -71,  1197,   730,   614,
      24,  -525,   505,   554,  -527,   619,   386,   520,  1198,   298,
    -270,   602,  -288,  -527,  -525,   -71,   599,   338,   902,   906,
     506,  1026,  -527,   443,   604,   490,  1264,   615,  1072,   491,
     508,   508,   173,   -70,   -71,   569,   950,   603,   705,   820,
     600,   447,   657,   338,  1019,   423,   451,   636,   392,   453,
     605,    60,   -70,   456,   344,   348,   173,  1216,   173,   777,
     913,  -525,  1238,    69,   -71,   821,  -525,  1089,   299,   581,
     582,   -70,  1249,  1264,  1244,  1027,  1246,   952,   570,   951,
     505,   444,  -276,   338,   508,   445,   914,   300,    89,   786,
    1254,  1114,   781,   424,  1229,   488,   425,   489,  1005,   830,
     820,   -70,   320,   953,   301,   820,   975,   601,   426,   173,
    -668,   606,  -668,   173,   173,  1004,  1220,  1255,  -342,  1256,
    1257,   598,  1258,  1259,  1006,  -338,  1007,   427,   824,  1149,
     508,  1018,  1082,   447,   629,  -275,   631,   173,   451,   643,
     452,   453,   173,  1045,  1125,   456,   234,   786,   786,  -338,
     200,  -610,   463,  -667,  1020,  -667,   596,   228,   467,   468,
     469,   269,   271,   230,   508,  -664,  -666,  -664,  -666,  1046,
    1126,  1205,  1206,  1190,  1215,  1112,   905,  -610,   712,   713,
     714,   716,   718,   719,   648,   720,   721,   722,   723,   724,
    -609,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   649,  1074,
    1175,   543,   505,   709,   338,   338,  -609,   236,   777,   557,
     338,   877,   881,   338,   338,   338,   338,   758,   760,   544,
     580,   710,   557,  1240,   776,   375,   874,   711,   779,   878,
     882,   386,   782,   545,   783,   788,  1074,  1074,   264,   709,
     970,   173,   234,   557,   790,   792,  1074,  1074,  -284,   320,
     796,   798,   704,  1090,  1075,  1181,   802,  1188,  -274,   325,
     327,  1189,   447,   809,  1283,  1285,   811,   451,  -597,   338,
     453,  -271,   309,   200,   456,  -667,   967,  -667,  -743,   875,
     491,   823,  -743,   826,  -744,  -745,   280,   296,  -744,  -745,
     831,   832,   311,  -740,   750,   751,   313,  -740,   350,   352,
     752,   330,  -278,   753,   754,   173,   330,  -665,  -282,  -665,
     173,  1243,   931,  1245,   932,   338,  -279,   853,   508,   855,
     314,   567,   568,   315,   305,    62,   782,   306,  -273,   338,
     345,   338,  -277,   346,  -283,   316,   859,   782,   862,   869,
     864,   866,  1251,  -285,   867,   868,   234,   160,  -272,   338,
    -280,   358,    94,   396,   319,   408,   409,   417,   496,  -594,
     899,   899,   438,   497,  -593,   439,  -598,  -599,  1263,   309,
     598,   160,  -596,   160,   910,   986,   989,   507,  -595,   991,
     993,   777,   499,   504,   330,   398,   515,   173,   443,   311,
     386,   513,   573,   313,   542,   563,   564,   574,   579,  1291,
    1292,  1293,  1294,  1295,  1296,   585,   173,   588,   595,   616,
     621,  1048,   731,   622,   632,  1263,   173,   314,   650,   373,
     315,   373,    62,   647,   160,   644,   655,   924,   160,   160,
     645,   660,   316,  1194,   929,   707,  1036,  1038,   508,   453,
     749,   785,   784,   786,   787,   804,   444,   612,   793,   805,
     445,   319,   160,   706,   807,   810,   309,   160,   812,   813,
     824,   838,   833,   848,   847,   505,   920,   857,   394,   863,
     907,   922,   903,   925,  -143,  -164,   311,  -171,  -170,  -169,
     313,   508,  -166,  -173,  1081,   939,  -174,  -168,   790,   943,
     796,   946,   809,   948,   862,  -172,  1088,   940,   447,  1091,
     968,   969,  -144,   451,   314,   452,   453,   315,  -167,   380,
     456,   338,  -175,   338,   974,  -428,   976,   463,   926,   316,
     776,  1101,   983,   933,   949,   469,   996,   934,   998,   935,
     936,   994,   995,   937,  1016,   938,  1074,   173,   319,   309,
    1029,  1077,  1024,   173,  1078,  1105,  1083,  1108,  1103,  1141,
    1102,   338,  1140,  1110,   173,  1145,   173,  1146,  1157,   311,
     715,   717,  1162,   313,  1182,   330,   160,  1166,  1204,  1023,
     382,   539,   913,  1224,    23,    24,  1232,   508,   539,  -289,
    1284,  1278,  1279,   383,  1087,    31,   384,   314,   320,  1286,
     315,    37,    62,  1253,  1309,  1310,   387,   320,    42,  1174,
     540,   972,   316,    44,   629,   626,   757,   759,  1069,   870,
    1071,   899,   899,   231,   359,  1047,   360,   778,   355,   362,
     363,   319,  1226,  1227,    58,    42,    60,   173,  -349,  1142,
     160,   173,   620,   338,   791,   160,   385,   592,    69,  1156,
     797,  1011,   828,   836,   640,   801,   173,  1097,  -349,  1100,
    1092,    58,   834,  1288,  1195,  1297,  1080,    85,  -349,   571,
      87,  1290,   930,    89,   827,   402,  1088,     0,  1104,  1008,
       0,  1107,     0,     0,  1191,   178,   338,   508,   508,   776,
       0,     0,     0,     0,   638,     0,     0,     0,     0,     0,
       0,     0,     0,   716,   758,     0,     0,     0,     0,   178,
       0,   178,     0,     0,  1122,     0,  1124,     0,     0,     0,
       0,  1129,   160,   392,  1132,     0,   392,     0,     0,     0,
       0,     0,     0,     0,     0,   858,  1138,     0,     0,     0,
       0,   160,     0,     0,   269,   375,     0,     0,     0,     0,
       0,   160,     0,   330,     0,     0,  1155,  1152,   986,   989,
    1036,  1038,   178,   234,  1087,     0,   178,   178,     0,     0,
       0,     0,  1161,     0,  1165,     0,     0,  1167,  1169,  1171,
    1173,     0,   338,  1088,     0,     0,     0,     0,     0,     0,
     178,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,     0,     0,   899,     0,   965,     0,     0,     0,     0,
       0,  1184,     0,  1185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   539,   539,     0,   392,   539,   539,     0,
       0,     0,  1202,     0,     0,     0,     0,   173,     0,   539,
     173,   539,  1122,  1124,     0,  1129,  1132,  1161,  1165,     0,
       0,     0,     0,     0,     0,     0,     0,  1217,  1218,     0,
    1219,     0,   776,     0,  1221,  1222,     0,     0,  1223,     0,
       0,  1087,   160,     0,     0,     0,     0,     0,   160,     0,
       0,     0,   338,   338,     0,     0,     0,   173,   942,   160,
     945,   160,   947,   173,  1233,     0,  1234,     0,     0,     0,
    1236,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,  1242,   899,   899,   899,   899,     0,     0,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1217,  1267,  1268,  1221,  1269,  1270,
    1271,  1272,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,     0,   486,     0,   160,  -664,   178,  -664,
       0,     0,     0,   178,     0,     0,   181,     0,   181,     0,
       0,   160,     0,     0,  1287,     0,     0,     0,     0,  1289,
       0,     0,     0,     0,     0,     0,  1115,  1116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,   173,
    1305,  1306,  1307,  1308,   173,  1298,     0,   173,  1311,  1312,
       0,     0,     0,     0,     0,     0,   173,     0,   173,   181,
     182,   173,     0,   181,   181,     0,  1305,  1306,  1307,  1308,
    1311,  1312,     0,     0,     0,     0,     0,     0,     0,     0,
     178,     0,   908,     0,   182,   173,   182,   181,     0,     0,
       0,     0,   181,     0,     0,   173,     0,   173,     0,   178,
       0,     0,     0,  -329,   173,     0,     0,  -329,  -329,   178,
       0,     0,     0,     0,     0,     0,  -329,     0,  -329,  -329,
       0,     0,   715,   757,  -329,     0,     0,     0,     0,     0,
       0,  -329,     0,     0,  -329,     0,  -329,   182,     0,     0,
       0,   182,   182,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,  -329,     0,     0,  -329,     0,  -329,
       0,  -329,     0,  -329,  -329,   182,  -329,     0,     0,  -329,
     182,  -329,     0,     0,     0,   443,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,   173,     0,     0,
    -329,     0,   160,  -329,     0,   160,  -329,  1168,  1170,  1172,
     173,   181,     0,   444,     0,     0,     0,   445,     0,     0,
       0,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,  -329,   173,     0,     0,     0,   173,     0,     0,     0,
     178,     0,     0,   444,     0,     0,   178,   445,   446,     0,
       0,     0,   160,     0,     0,     0,  -329,   178,   160,   178,
       0,     0,  -329,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,   181,   455,   456,   457,   458,
     181,   460,   461,   462,   463,   464,   465,   466,     0,   182,
     467,   468,   469,     0,   173,   447,   448,     0,   449,   450,
     451,   470,   452,   453,     0,     0,     0,   456,   173,   173,
       0,     0,     0,   462,   463,     0,     0,   466,     0,     0,
     467,   468,   469,     0,     0,     0,     0,     0,     0,     0,
     178,   173,     0,     0,   178,     0,     0,     0,     0,     0,
       0,   113,     0,   173,   173,   173,   173,     0,     0,   178,
       0,   173,   173,   182,     0,     0,     0,   181,   182,     0,
       0,     0,     0,     0,     0,   232,     0,   235,     0,     0,
       0,   187,   160,     0,   160,     0,   181,     0,     0,   160,
       0,     0,   160,   443,     0,     0,   181,     0,     0,     0,
       0,   160,     0,   160,     0,   187,   160,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     0,     0,     0,     0,     0,   347,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,   160,   335,     0,   182,     0,     0,     0,   160,
       0,   444,     0,   237,     0,   445,   113,     0,   187,   335,
       0,   381,   187,   187,   182,     0,     0,   238,   239,     0,
     240,     0,     0,     0,   182,   241,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,   187,     0,     0,   243,
       0,   187,     0,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   247,     0,     0,   456,     0,   181,     0,   248,
     249,     0,   463,   181,     0,   160,     0,   250,   467,   468,
     469,     0,   160,     0,   181,     0,   181,   251,     0,     0,
     178,     0,     0,   178,     0,   160,   252,   253,     0,   254,
       0,   255,     0,   256,     0,     0,   257,     0,   160,     0,
     258,   548,     0,   259,     0,     0,   260,   160,     0,     0,
     498,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,     0,
     178,     0,     0,     0,     0,   182,   178,     0,     0,     0,
     187,   182,     0,     0,     0,     0,   725,   181,     0,     0,
       0,   181,   182,     0,   182,     0,     0,     0,     0,     0,
     954,     0,   549,   955,     0,     0,   181,     0,   956,   160,
       0,   335,     0,     0,   547,     0,     0,   443,   202,   558,
       0,     0,     0,   160,   160,     0,     0,     0,   957,     0,
       0,     0,     0,     0,     0,   958,     0,   335,     0,     0,
       0,     0,     0,     0,   187,   959,   160,     0,     0,   187,
       0,     0,     0,   960,     0,     0,     0,     0,   160,   160,
     160,   160,     0,     0,     0,   182,   160,   160,     0,   182,
     961,     0,     0,     0,     0,   444,     0,   335,     0,   445,
       0,     0,   962,     0,   182,     0,   729,     0,     0,     0,
     178,     0,   178,   963,     0,     0,   113,   178,     0,   964,
     178,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,   178,     0,     0,   178,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   187,   447,   448,     0,
       0,   450,   451,     0,   452,   453,     0,     0,   178,   456,
       0,     0,     0,     0,   189,   187,   463,     0,   178,     0,
     178,     0,   467,   468,   469,   187,     0,   178,     0,     0,
       0,     0,   412,     0,   237,     0,     0,     0,   189,     0,
     189,     0,     0,     0,     0,     0,     0,     0,   238,   239,
       0,   240,     0,     0,     0,     0,   241,   181,     0,   443,
     181,     0,     0,     0,   242,     0,     0,     0,     0,     0,
     243,     0,     0,   190,     0,     0,   244,     0,   335,   335,
     245,     0,     0,   246,   335,     0,     0,   335,   335,   335,
     335,   189,     0,   247,     0,   189,   189,   190,     0,   190,
     248,   249,     0,   178,     0,     0,     0,   181,   250,     0,
     178,     0,     0,   181,     0,     0,   558,   444,   251,   189,
       0,   445,   558,   178,   189,     0,     0,   252,   253,     0,
     254,     0,   255,   806,   256,   182,   178,   257,   182,     0,
       0,   258,     0,   335,   259,   178,   187,   260,     0,   178,
     190,     0,   187,     0,   190,   190,     0,     0,     0,     0,
       0,     0,     0,   187,     0,   187,     0,     0,     0,   447,
     448,    94,     0,     0,   451,     0,   452,   453,   190,     0,
       0,   456,     0,   190,     0,   182,     0,     0,   463,   335,
       0,   182,     0,     0,   467,   468,   469,     0,     0,     0,
       0,     0,     0,   335,     0,   335,   856,   178,     0,     0,
     861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   178,   335,     0,   113,     0,   181,     0,   181,
       0,     0,     0,   189,   181,     0,   187,   181,     0,     0,
     187,     0,     0,     0,   178,     0,   181,     0,   181,     0,
       0,   181,     0,     0,     0,   187,   178,   178,   178,   178,
       0,     0,     0,     0,   178,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,     0,   181,     0,     0,
       0,     0,   190,     0,   181,     0,     0,   189,     0,     0,
       0,     0,   189,     0,     0,   182,     0,   182,     0,     0,
       0,     0,   182,     0,     0,   182,     0,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   182,     0,     0,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,     0,     0,   190,     0,     0,     0,
       0,   190,     0,   182,     0,   182,     0,     0,     0,     0,
     181,     0,   182,     0,     0,     0,     0,   181,     0,   189,
       0,     0,     0,     0,     0,   335,     0,   335,     0,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,   181,     0,     0,   997,     0,   189,  1000,
       0,     0,   181,     0,     0,     0,   181,     0,     0,   382,
       0,     0,     0,    23,    24,   335,     0,     0,     0,     0,
       0,     0,   383,     0,    31,   384,   187,   145,   190,   187,
      37,     0,     0,     0,     0,     0,     0,    42,   182,     0,
       0,     0,    44,     0,     0,   182,  1034,   190,     0,     0,
       0,   145,  1039,   145,     0,     0,     0,   190,   182,     0,
       0,     0,     0,    58,   181,    60,     0,    62,     0,  1084,
       0,   182,  1085,     0,     0,   385,   187,    69,   181,   181,
     182,     0,   187,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,   335,     0,    87,
       0,   181,    89,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   181,   181,   181,     0,     0,   189,
       0,   181,   181,     0,     0,   189,     0,    94,     0,     0,
       0,     0,   145,     0,     0,     0,   189,   145,   189,     0,
     335,     0,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   182,   182,  1086,     0,
     443,     0,     0,     0,     0,     0,   558,     0,   558,     0,
       0,     0,     0,   558,     0,     0,   558,     0,   190,   182,
       0,     0,     0,     0,   190,  1136,     0,  1137,     0,     0,
    1139,   182,   182,   182,   182,   190,   187,   190,   187,   182,
     182,     0,     0,   187,     0,     0,   187,     0,     0,   189,
       0,     0,     0,   189,  1154,   187,     0,   187,   444,     0,
     187,     0,   445,     0,  1160,     0,  1164,     0,   189,     0,
       0,     0,     0,   861,     0,     0,   335,     0,     0,     0,
       0,     0,     0,     0,   187,     0,   145,     0,     0,     0,
       0,     0,     0,     0,   187,     0,   187,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,   190,     0,
     447,   448,   190,   449,   450,   451,     0,   452,   453,   454,
       0,     0,   456,     0,     0,     0,   237,   190,   462,   463,
     291,     0,   466,     0,     0,   467,   468,   469,     0,     0,
     238,   239,     0,   240,     0,     0,   470,     0,   241,     0,
     145,     0,     0,     0,   291,   145,   242,     0,     0,     0,
       0,     0,   243,     0,   351,   353,     0,     0,   244,  1225,
       0,     0,   245,     0,     0,   246,   335,   335,     0,   187,
       0,     0,  1230,     0,     0,   247,   187,     0,     0,     0,
       0,  1235,   248,   249,     0,  1237,     0,     0,   391,   187,
     250,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,     0,   187,     0,     0,     0,     0,     0,     0,   252,
     253,   187,   254,     0,   255,   187,   256,     0,     0,   257,
       0,     0,   145,   258,   575,     0,   259,     0,     0,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
       0,   145,   189,  1277,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,  1160,  1164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
     113,   292,     0,     0,     0,   576,     0,   187,   187,   189,
       0,     0,     0,     0,     0,   189,     0,   500,   190,     0,
       0,   190,     0,     0,     0,   341,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   187,   187,   187,     0,     0,     0,     0,
     187,   187,     0,     0,     0,     0,     0,     0,   291,   291,
     291,   291,   291,   291,     0,     0,   535,   538,   190,     0,
       0,     0,     0,     0,   190,   546,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,   291,     0,     0,     0,
       0,     0,   145,   291,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
       0,   189,     0,   291,     0,     0,   189,     0,     0,   189,
       0,     0,     0,     0,     0,     0,   291,   291,   189,     0,
     189,     0,     0,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,   145,     0,     0,     0,   145,   189,   190,   189,
     190,     0,     0,     0,     0,   190,   189,     0,   190,     0,
       0,   145,     0,     0,     0,     0,     0,   190,     0,   190,
       0,     0,   190,     0,     0,     0,     0,     0,     0,   516,
       0,   521,   525,   527,   530,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   559,   190,   561,   190,     0,
       0,     0,     0,     0,   565,   190,     0,     0,     0,     0,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,   281,   284,   285,     0,     0,   189,
       0,     0,     0,     0,   444,     0,     0,     0,   445,     0,
       0,     0,   189,   291,   587,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   593,   594,     0,
       0,     0,     0,   291,   189,     0,     0,   291,   189,   291,
       0,     0,   291,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,   447,   448,   190,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   190,   460,   461,   462,   463,   464,     0,   466,     0,
       0,   467,   468,   469,   190,     0,     0,     0,     0,     0,
       0,     0,   470,   190,     0,     0,   189,   190,     0,     0,
       0,     0,   145,     0,     0,   145,   411,     0,   414,     0,
     189,   189,     0,     0,     0,     0,     0,     0,     0,     0,
     434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   189,   189,   189,     0,
       0,     0,   145,   189,   189,   190,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   190,
     190,     0,     0,     0,   780,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   794,     0,     0,     0,   799,     0,
     800,     0,     0,   803,   190,   190,   190,   190,     0,     0,
       0,     0,   190,   190,     0,   514,     0,     0,     0,     0,
       0,     0,     0,   532,   533,     0,     0,     0,     0,     0,
       0,   237,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   239,     0,   240,     0,
       0,     0,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   145,   244,   145,     0,   577,   245,     0,   145,
     246,     0,   145,     0,     0,     0,     0,     0,     0,     0,
     247,   145,     0,   145,     0,     0,   145,   248,   249,     0,
       0,     0,   291,   291,     0,   250,     0,     0,   291,   291,
       0,     0,   291,   291,     0,   251,     0,     0,     0,     0,
     145,     0,  1002,     0,   252,   253,     0,   254,     0,   255,
     145,   256,   145,   262,   257,     0,     0,     0,   258,   145,
     237,   259,     0,     0,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   239,     0,   240,   641,  1031,
       0,     0,   241,   414,     0,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,   243,     0,   291,   291,
       0,     0,   244,   701,     0,     0,   245,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,   386,   247,
    1030,     0,     0,     0,     0,     0,   248,   249,     0,     0,
       0,     0,     0,     0,   250,   145,     0,     0,     0,     0,
       0,     0,   145,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,   253,   145,   254,     0,   255,     0,
     256,     0,     0,   257,     0,     0,   768,   258,   145,     0,
     259,     0,     0,   260,     0,     0,     0,   145,     0,     0,
       0,   145,     0,   978,   980,     0,     0,     0,     0,   985,
     988,   441,     0,   990,   992,     0,     0,     0,   442,   291,
     291,     0,     0,     0,     0,   291,     0,   538,     0,     0,
     443,     0,     0,   281,   538,   816,     0,   291,     0,   550,
     291,     0,   291,     0,   291,     0,     0,     0,     0,   286,
       0,     0,   829,     0,     0,     0,     0,  1143,     0,   145,
       0,   577,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,   145,   145,     0,     0,     0,     0,     0,
     525,     0,     0,     0,  1158,     0,     0,     0,   444,     0,
       0,     0,   445,     0,     0,     0,   145,     0,     0,     0,
       0,   536,     0,     0,     0,     0,     0,     0,   145,   145,
     145,   145,     0,     0,     0,     0,   145,   145,     0,     0,
       0,     0,   886,   446,   537,   472,   473,   474,   475,   476,
     443,     0,   479,   480,   481,   482,     0,   484,   485,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   386,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
    1117,  1118,     0,     0,     0,     0,  1119,     0,   444,     0,
       0,     0,   445,     0,     0,     0,     0,     0,  1130,   434,
       0,  1133,     0,  1134,     0,  1135,   291,   441,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,   291,
     291,   291,   291,   446,     0,     0,   443,   523,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,   524,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,     0,   460,   461,   462,   463,
     464,     0,   466,     0,     0,   467,   468,   469,     0,   538,
     538,     0,     0,   538,   538,     0,   470,     0,     0,     0,
       0,     0,     0,  1280,   444,   538,     0,   538,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1003,     0,     0,     0,     0,     0,     0,     0,
     550,     0,     0,     0,     0,   520,     0,     0,     0,   446,
    1012,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,  1032,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,     0,  1231,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
     978,   980,   985,   988,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   434,     0,     0,     0,     0,     0,
       0,   414,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -2,     4,     0,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,   816,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
    1032,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,   414,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,  -695,     0,    13,    14,    15,    16,
      17,  -695,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,  -695,    28,    29,  -695,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,  -695,    69,    70,    71,  -695,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,  -695,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,  -695,    97,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,     0,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,   104,   105,  -695,  -695,
    -695,     0,   107,  -695,   108,     0,   109,     0,   364,  -695,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,   365,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,   597,   108,     0,   109,     0,   624,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,   625,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,   876,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,   380,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,   789,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,   795,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1121,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1123,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1128,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1131,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,  1153,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,     4,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1159,    39,   -69,     0,    40,    41,    42,     0,    43,
    -349,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -349,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -349,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1163,    39,   -69,     0,
      40,    41,    42,     0,    43,  -349,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -349,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -349,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,   105,     0,     0,
     106,     0,   107,     0,   108,     0,   109,     0,   916,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
     310,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,   312,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,   317,    76,    77,    78,   318,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,   663,     0,    13,     0,     0,    16,
      17,   665,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,   670,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,   537,   472,   473,
     474,   475,   476,     0,     0,   479,   480,   481,   482,     0,
     484,   485,     0,   887,   888,   889,   890,   891,   683,     0,
     684,     0,   100,     0,   685,   686,   687,   688,   689,   690,
     691,   892,   693,   694,   102,   893,   104,     0,   696,   697,
     894,   699,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,     0,    16,    17,     0,    18,     0,   201,
      20,    21,    22,     0,     0,     0,     0,    27,     0,    28,
      29,     0,   202,     0,     0,     0,    33,    34,    35,    36,
       0,    38,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,    49,    50,
      51,    52,     0,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,   401,    24,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
      60,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,    69,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,   332,   333,     0,    86,   369,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,   370,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,   769,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,   770,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,   771,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,   772,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,   332,   333,     0,    86,   369,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
     852,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,   332,
     333,     0,    86,   369,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,   854,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,   332,   333,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   334,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,   332,
     333,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,   871,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,  1010,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,   332,   333,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
     265,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,   266,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,   273,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,   274,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,   332,
     333,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,   266,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,   374,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,  -739,     0,     0,     0,  -739,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,   266,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,   290,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   107,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,   404,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,    19,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,    87,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,   374,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,   850,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,   860,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,   865,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,  1070,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,  1241,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   205,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
     310,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,   312,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,   317,    76,    77,    78,   318,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,   941,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   944,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,  1208,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,  1209,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,  1211,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,  1212,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   201,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   202,     0,     0,
       0,    33,   203,   204,     0,     0,  1213,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,     0,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   102,   103,   104,     0,     0,     0,
     106,     0,   208,     0,   108,     0,   209,     0,     0,   110,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,  1214,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,     0,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,   443,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   206,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   207,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,   445,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     6,     7,     8,     9,    10,
      11,    12,     0,   447,   448,    13,   449,   450,   451,    17,
     452,   453,   454,   201,     0,   456,   457,   458,   309,   460,
     461,   462,   463,     0,     0,   466,   202,     0,   467,   468,
     469,   203,   204,     0,     0,   205,     0,     0,   311,   470,
       0,     0,   313,     0,     0,     0,     0,     0,     0,    47,
      48,     0,     0,     0,     0,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,   314,     0,    59,   315,
      61,    62,    63,     0,     0,     0,     0,    66,     0,   206,
       0,   316,     0,     0,     0,     0,     0,    74,     0,    76,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,  -353,   209,     0,     0,   110,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,     0,    17,     0,     0,     0,   201,     0,     0,
       0,     0,   309,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,   203,   204,     0,     0,   205,
       0,     0,   311,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,    47,    48,     0,     0,     0,     0,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
     314,     0,    59,   315,    61,    62,    63,     0,     0,     0,
       0,    66,     0,   206,     0,   316,     0,     0,     0,     0,
       0,    74,     0,    76,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   661,     0,   662,     0,    95,    96,    97,    98,
      99,     0,     0,   663,     0,   100,     0,     0,   664,   239,
     665,   666,     0,     0,   101,     0,   667,   102,   103,   104,
       0,     0,     0,   106,   242,   208,   202,   108,     0,   209,
     243,     0,   110,     0,     0,     0,   668,     0,     0,     0,
     245,     0,     0,   669,     0,   670,     0,     0,     0,     0,
       0,     0,     0,   671,     0,     0,     0,     0,     0,     0,
     248,   672,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   253,     0,
     674,     0,   255,     0,   675,     0,     0,   257,     0,     0,
       0,   676,     0,     0,   259,     0,     0,   677,     0,     0,
       0,     0,     0,     0,     0,     0,   537,   472,   473,   474,
     475,   476,     0,     0,   479,   480,   481,   482,     0,   484,
     485,     0,   678,   679,   680,   681,   682,   683,     0,   684,
       0,     0,     0,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,     0,   695,     0,     0,   696,   697,   698,
     699,     0,     0,   700,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,     0,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   206,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   207,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,     0,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   206,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   207,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   201,     0,    95,    22,    97,     0,     0,     0,
       0,     0,     0,    29,     0,   202,     0,     0,     0,    33,
     203,   204,     0,     0,   205,    39,     0,   104,     0,    41,
       0,     0,    43,   208,     0,   108,     0,   209,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,   725,     0,
      86,     0,     0,    88,     0,     0,    90,   663,     0,     0,
       0,     0,  1049,  1050,   665,  1051,     0,     0,     0,     0,
    1052,     0,     0,     0,     0,     0,     0,     0,   727,     0,
       0,    95,     0,    97,     0,     0,     0,     0,     0,     0,
    1053,     0,     0,     0,  1054,     0,     0,  1055,     0,   670,
       0,     0,     0,     0,   104,     0,     0,   728,     0,     0,
       0,     0,   108,     0,   209,  1056,     0,     0,     0,     0,
       0,     0,  1057,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1058,     0,     0,     0,     0,     0,     0,     0,
       0,  1059,  1060,     0,  1061,     0,  1062,     0,   729,     0,
       0,     0,     0,     0,   730,  1063,     0,     0,  1064,     0,
       0,  1065,     0,     0,     0,     0,     0,     0,     0,     0,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   678,   679,   680,   681,
     682,   683,     0,   684,     0,     0,     0,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   237,   695,     0,
       0,   696,   697,   698,   699,  1066,   663,     0,     0,     0,
       0,   238,   239,   665,   240,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   670,     0,
       0,     0,     0,     0,     0,     0,   247,     0,     0,     0,
       0,     0,     0,   248,   249,     0,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,   441,     0,     0,
     252,   253,     0,   254,   442,   255,     0,   256,     0,     0,
     257,     0,     0,     0,   258,     0,   443,   259,     0,     0,
     260,     0,     0,     0,     0,     0,     0,     0,     0,   537,
     472,   473,   474,   475,   476,     0,     0,   479,   480,   481,
     482,     0,   484,   485,     0,   678,   679,   680,   681,   682,
     683,     0,   684,     0,     0,     0,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,     0,   695,     0,     0,
     696,   697,   698,   699,   444,     0,     0,   441,   445,     0,
       0,     0,     0,     0,   442,     0,     0,  1120,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1127,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1273,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1274,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1275,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1276,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,   441,   445,     0,
       0,     0,   470,     0,   442,     0,     0,  1281,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   444,   386,     0,     0,   445,     0,
       0,     0,   470,     0,     0,     0,     0,  1282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,   446,
     537,   472,   473,   474,   475,   476,   443,   290,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,   529,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,     0,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,   444,     0,     0,     0,   445,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   520,     0,     0,  1042,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,   386,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,   517,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   520,     0,     0,   518,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,   444,   467,   468,   469,
     445,   386,     0,     0,     0,     0,     0,     0,   470,     0,
       0,   441,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   446,     0,     0,     0,   633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   634,     0,   467,   468,   469,     0,   386,     0,     0,
       0,     0,     0,     0,   470,     0,     0,     0,   444,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,   883,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,   446,     0,     0,     0,   884,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   885,   635,   467,   468,   469,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,   441,
     444,     0,     0,     0,   445,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,     0,   442,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,   443,   290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   520,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   444,   467,   468,   469,   445,   386,   442,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     443,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   520,     0,     0,  1041,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,   386,   442,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   501,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,   386,
     442,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   443,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,     0,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,   761,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   762,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,   386,   442,     0,     0,     0,     0,     0,   470,     0,
       0,     0,     0,     0,   443,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   444,   467,   468,   469,   445,     0,   442,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     443,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,     0,   442,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,   386,
     442,     0,     0,     0,     0,     0,   470,  1001,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
     444,   467,   468,   469,   445,   386,     0,     0,     0,     0,
       0,     0,   470,     0,     0,   441,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,   520,     0,     0,   443,   446,     0,     0,     0,  1179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,  1180,     0,   467,   468,   469,
       0,     0,     0,     0,     0,     0,  1037,     0,   470,     0,
       0,   441,   444,     0,     0,     0,   445,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,   441,   562,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
     443,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,   444,   467,
     468,   469,   445,     0,     0,     0,   441,     0,     0,     0,
     470,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,   520,
       0,     0,     0,   446,     0,     0,     0,     0,   444,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   446,     0,   467,   468,   469,     0,     0,
       0,     0,     0,   444,  1239,     0,   470,   445,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,     0,   467,   468,   469,   446,     0,
     442,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   443,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,   441,
     467,   468,   469,     0,   586,     0,   442,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,     0,     0,     0,   445,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
     445,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,   590,   467,   468,   469,
     613,   446,     0,     0,     0,     0,     0,   444,   470,     0,
       0,   445,     0,     0,     0,     0,     0,     0,   447,   448,
     765,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,   446,   467,   468,   469,   441,     0,     0,     0,
       0,     0,     0,   442,   470,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,   443,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,   441,   879,     0,
       0,     0,     0,     0,   442,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,     0,     0,   444,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,   446,
     467,   468,   469,     0,     0,     0,     0,   851,     0,   444,
       0,   470,     0,   445,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   880,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     220,   467,   468,   469,   446,     0,   442,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   443,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   441,     0,   467,   468,   469,     0,
       0,   442,     0,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,   443,     0,     0,   999,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
     445,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,   445,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,   971,   467,   468,   469,   446,     0,     0,     0,
     441,   444,     0,     0,   470,   445,     0,   442,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,   443,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   446,     0,   467,   468,
     469,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   441,   444,   467,   468,
     469,   445,     0,   442,     0,  1013,     0,     0,     0,   470,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,   441,  1076,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,   443,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,   444,   467,   468,   469,   445,     0,     0,
       0,  1014,   441,     0,     0,   470,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,  1040,   446,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   446,     0,
     467,   468,   469,     0,     0,     0,     0,     0,     0,   444,
       0,   470,     0,   445,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   441,     0,
     467,   468,   469,     0,   446,   442,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,   443,  1106,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   441,     0,   467,   468,   469,     0,
       0,   442,     0,  1099,     0,     0,     0,   470,     0,     0,
       0,     0,     0,   443,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,   445,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,   445,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,   446,     0,     0,     0,
       0,   444,     0,   470,   441,   445,     0,     0,     0,     0,
       0,   442,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,   443,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   446,     0,   467,   468,
     469,     0,     0,     0,   441,  1176,     0,     0,     0,   470,
       0,   442,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,   443,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,   444,     0,     0,     0,   445,     0,  1111,     0,   470,
       0,     0,     0,     0,  1207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
     441,   444,     0,     0,     0,   445,     0,   442,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,   443,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   446,     0,   467,   468,
     469,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,   444,   467,   468,
     469,   445,     0,     0,     0,   441,  1247,     0,     0,   470,
    1210,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,     0,     0,
       0,   441,   444,     0,     0,   470,   445,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1260,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,     0,   442,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   441,   444,   467,   468,   469,   445,     0,
     442,     0,     0,     0,     0,     0,   470,  1299,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   441,
     444,   467,   468,   469,   445,     0,   442,     0,     0,     0,
       0,     0,   470,  1300,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   441,   444,   467,   468,   469,
     445,     0,   442,     0,     0,     0,     0,     0,   470,  1301,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   441,   444,   467,   468,   469,   445,     0,   442,     0,
       0,     0,     0,     0,   470,  1302,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   441,   444,   467,
     468,   469,   445,     0,   442,     0,     0,     0,     0,     0,
     470,  1303,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,   443,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,   444,   467,   468,   469,   445,     0,
       0,     0,   441,     0,     0,     0,   470,  1304,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,   444,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   446,
       0,   467,   468,   469,     0,     0,     0,     0,     0,   966,
       0,     0,   470,   445,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,   446,     0,     0,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,   382,   467,   468,   469,    23,
      24,     0,     0,     0,     0,     0,     0,   470,   383,     0,
      31,   384,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   382,     0,     0,     0,    23,    24,     0,     0,    58,
       0,    60,     0,    62,   383,  1084,    31,   384,  1085,     0,
       0,   385,    37,    69,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,  1084,     0,     0,  1085,     0,     0,   385,     0,    69,
       0,     0,     0,    94,   382,     0,     0,     0,    23,    24,
       0,     0,     0,     0,     0,     0,     0,   383,    85,    31,
     384,    87,     0,     0,    89,    37,     0,     0,   105,     0,
       0,     0,    42,     0,  1187,  -349,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,    94,
       0,     0,     0,     0,     0,  -349,     0,     0,    58,     0,
      60,     0,     0,     0,    64,  -349,   -69,    65,     0,     0,
     385,   382,    69,     0,   105,    23,    24,     0,     0,     0,
    1248,     0,     0,     0,   383,     0,    31,   384,     0,     0,
       0,    85,    37,     0,    87,     0,     0,    89,     0,    42,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   382,     0,     0,
       0,    23,    24,     0,     0,    58,     0,    60,     0,   380,
     383,  1084,    31,   384,  1085,     0,     0,   385,    37,    69,
       0,     0,     0,     0,     0,    42,     0,   105,     0,     0,
      44,     0,   386,     0,     0,     0,     0,     0,    85,     0,
       0,    87,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,     0,     0,  1084,     0,   237,
    1085,     0,     0,   385,     0,    69,     0,     0,     0,    94,
       0,     0,     0,   238,   239,     0,   240,     0,     0,     0,
       0,   241,     0,     0,    85,     0,     0,    87,     0,   242,
      89,     0,     0,     0,   105,   243,     0,     0,     0,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,     0,
       0,     0,     0,     0,   237,    94,     0,     0,   247,     0,
       0,     0,     0,     0,     0,   248,   249,     0,   238,   239,
       0,   240,     0,   250,     0,     0,   241,     0,    24,     0,
     105,     0,     0,   251,   242,     0,     0,     0,     0,     0,
     243,     0,   252,   253,     0,   254,   244,   255,     0,   256,
     245,     0,   257,   246,     0,     0,   258,     0,     0,   259,
       0,     0,   260,   247,     0,     0,     0,     0,     0,     0,
     248,   249,     0,     0,     0,     0,     0,     0,   250,    60,
       0,     0,     0,     0,     0,     0,    94,     0,   251,     0,
       0,    69,     0,     0,     0,     0,     0,   252,   253,     0,
     254,     0,   255,     0,   256,   237,     0,   257,     0,     0,
       0,   258,     0,     0,   259,     0,    89,   260,     0,   238,
     239,     0,   240,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,     0,     0,     0,     0,
    -324,     0,     0,     0,   247,     0,     0,     0,     0,     0,
       0,   248,   249,     0,  -324,  -324,     0,  -324,     0,   250,
       0,     0,  -324,     0,     0,     0,     0,     0,     0,   251,
    -324,     0,     0,     0,     0,     0,  -324,     0,   252,   253,
       0,   254,  -324,   255,     0,   256,  -324,     0,   257,  -324,
       0,     0,   258,   575,     0,   259,     0,     0,   260,  -324,
       0,     0,     0,     0,     0,     0,  -324,  -324,     0,     0,
       0,     0,     0,     0,  -324,   237,     0,     0,     0,     0,
       0,     0,     0,     0,  -324,     0,     0,     0,     0,   238,
     239,     0,   240,  -324,  -324,     0,  -324,   241,  -324,     0,
    -324,     0,     0,  -324,     0,   242,     0,  -324,     0,     0,
    -324,   243,     0,  -324,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,     0,     0,     0,     0,
    -325,     0,     0,     0,   247,     0,     0,     0,     0,     0,
       0,   248,   249,     0,  -325,  -325,     0,  -325,     0,   250,
       0,     0,  -325,     0,     0,     0,     0,     0,     0,   251,
    -325,     0,     0,     0,     0,     0,  -325,     0,   252,   253,
       0,   254,  -325,   255,     0,   256,  -325,     0,   257,  -325,
       0,     0,   258,     0,     0,   259,     0,     0,   260,  -325,
       0,     0,     0,     0,     0,     0,  -325,  -325,     0,     0,
       0,     0,     0,     0,  -325,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -325,     0,     0,     0,     0,     0,
       0,     0,     0,  -325,  -325,     0,  -325,     0,  -325,     0,
    -325,     0,     0,  -325,     0,     0,     0,  -325,     0,     0,
    -325,     0,     0,  -325
};

static const yytype_int16 yycheck[] =
{
      13,    66,    20,   118,    17,   158,     2,    27,    21,   584,
     171,    66,    66,   497,    27,   413,   229,   280,   542,   433,
     657,    34,    35,    36,   703,    38,   705,   633,   236,   588,
     654,   885,   139,   840,   793,   579,    49,   405,    51,    52,
     909,   880,   187,   306,    57,   834,    59,   903,    61,   418,
      70,  1015,    47,    66,     1,    47,    47,    70,    71,    72,
      73,    74,    75,   622,     8,    32,    79,   102,    81,    32,
      22,     1,   280,    32,    32,    88,   554,    47,    91,    92,
     915,    27,    95,   346,    97,   408,     3,   100,   101,   109,
     103,     1,    32,    32,   107,   108,   109,   110,   306,     3,
      55,    36,    32,    46,   123,    24,    32,   269,     1,   271,
     272,   120,   549,    32,   118,    60,     0,    55,    32,   120,
      53,    40,    41,    42,   137,    92,   139,    74,   120,   120,
      60,   276,    78,   165,    92,   170,    88,    72,   346,   576,
      73,    84,     3,   147,    90,   120,    82,     1,    71,    85,
      83,   170,   147,    55,    47,   147,   147,   120,     3,    20,
     112,   120,    92,   109,    40,     3,   175,   180,   141,    92,
     117,   114,    33,   118,   175,   105,   149,   147,    32,   657,
     175,    31,  1017,   175,   175,   108,   103,  1151,   118,   209,
     203,   204,   205,   952,   207,   208,   209,   821,   165,   103,
     119,    62,  1009,   170,   573,   149,    60,   170,  1015,   227,
    1079,   170,   170,   375,   376,   125,   146,   172,  1087,  1088,
     543,   147,  1078,   236,   171,   488,   489,   786,    74,  1018,
     170,   170,   125,   147,   172,  1074,   146,   147,    92,    89,
     170,   117,   103,    93,   170,   453,    46,    92,   109,   147,
      27,   105,   147,   146,   147,   174,   170,   120,   103,    18,
      55,   147,   165,   173,   118,    65,   147,   280,   636,   172,
     165,   117,   165,    31,   147,    89,  1203,   175,   884,    93,
     488,   489,     2,    46,    84,    47,    47,   173,   433,   147,
     171,   141,   146,   306,   838,    27,   146,   404,   413,   149,
     173,    78,    65,   153,   317,   318,    26,  1114,    28,   793,
     147,   165,   175,    90,   114,   173,   170,  1186,    77,   332,
     333,    84,  1191,  1250,  1178,   171,  1180,   147,    90,    90,
     147,    89,    55,   346,   542,    93,   173,    96,   115,   147,
     125,   965,   503,    75,  1151,   172,    78,   174,   147,   562,
     147,   114,   417,   173,   113,   147,   173,   370,    90,    79,
     172,   374,   174,    83,    84,   173,  1125,   152,   140,   154,
     155,   367,   157,   158,   173,   147,   173,   109,   125,  1016,
     588,   173,   906,   141,   397,    55,   399,   107,   146,   409,
     148,   149,   112,   147,   147,   153,   409,   147,   147,   171,
     165,   147,   160,   172,   151,   174,   171,   109,   166,   167,
     168,    35,    36,    90,   622,   172,   172,   174,   174,   173,
     173,  1100,  1101,   173,   173,   949,   639,   173,   441,   442,
     443,   444,   445,   446,   147,   448,   449,   450,   451,   452,
     147,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   171,   147,
    1066,   147,   147,   147,   477,   478,   173,   172,   952,   147,
     483,   147,   147,   486,   487,   488,   489,   490,   491,   165,
     165,   165,   147,   171,   497,   109,  1045,   165,   501,   165,
     165,   170,   505,   172,   507,   515,   147,   147,    11,   147,
     165,   221,   515,   147,   517,   518,   147,   147,    55,   574,
     523,   524,   926,   911,   165,   165,   529,   165,    55,   574,
     574,   165,   141,   536,   165,   165,   539,   146,   165,   542,
     149,    55,    27,   165,   153,   172,    89,   174,    89,   171,
      93,   554,    93,   556,    89,    89,   172,   560,    93,    93,
     563,   564,    47,    89,   477,   478,    51,    93,    83,    84,
     483,   574,    55,   486,   487,   285,   579,   172,    55,   174,
     290,  1177,   172,  1179,   174,   588,    55,   602,   786,   604,
      75,   307,   308,    78,     8,    80,   599,   172,    55,   602,
     100,   604,    55,   172,    55,    90,   609,   610,   611,   619,
     613,   614,  1197,    55,   617,   618,   619,     2,    55,   622,
      55,     3,   140,   170,   109,    55,   146,   172,    55,   165,
     633,   634,   164,   172,   165,   165,   165,   165,  1203,    27,
     626,    26,   165,    28,   647,   797,   798,   119,   165,   801,
     802,  1125,   165,   165,   657,    84,   172,   367,    31,    47,
     170,   170,   173,    51,   172,   172,   172,   147,   146,  1254,
    1255,  1256,  1257,  1258,  1259,   165,   386,   172,   165,     8,
       3,   879,   880,   172,    65,  1250,   396,    75,   173,   602,
      78,   604,    80,   125,    79,   170,    90,   700,    83,    84,
     171,    90,    90,  1091,   707,   125,   858,   859,   906,   149,
      68,   173,   125,   147,    47,   125,    89,   869,   172,   125,
      93,   109,   107,   433,    34,    34,    27,   112,    65,   173,
     125,   146,   173,    21,   173,   147,   105,   175,   149,   175,
     165,   172,   170,   141,   149,   149,    47,   149,   149,   149,
      51,   949,   149,   149,   905,   173,   149,   149,   761,   762,
     763,   764,   765,   766,   767,   149,   909,   175,   141,   912,
     778,   779,   149,   146,    75,   148,   149,    78,   149,    80,
     153,   784,   149,   786,   787,   173,   789,   160,   149,    90,
     793,   926,   795,   165,   172,   168,    34,   165,    34,   165,
     165,   804,   805,   165,   146,   165,   147,   517,   109,    27,
     173,   165,   171,   523,   170,    32,   171,    32,   175,   165,
     173,   824,    34,   175,   534,   172,   536,   172,   146,    47,
     444,   445,   175,    51,   165,   838,   221,   175,   173,   842,
      22,   976,   147,    34,    26,    27,   173,  1045,   983,   165,
     165,   173,   173,    35,   909,    37,    38,    75,   913,   165,
      78,    43,    80,   147,   164,   164,   117,   922,    50,  1045,
     279,   784,    90,    55,   877,   396,   490,   491,   881,   621,
     883,   884,   885,    25,   887,   877,   889,   501,    91,   892,
     893,   109,  1145,  1146,    76,    50,    78,   607,    53,  1005,
     285,   611,   388,   906,   518,   290,    88,   353,    90,  1030,
     524,   824,   560,   574,   407,   529,   626,   922,    73,   926,
     913,    76,   571,  1250,  1093,  1260,   904,   109,    83,   320,
     112,  1253,   709,   115,   557,   137,  1079,    -1,   941,   820,
      -1,   944,    -1,    -1,  1087,     2,   949,  1145,  1146,   952,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   966,   967,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,   977,    -1,   979,    -1,    -1,    -1,
      -1,   984,   367,  1088,   987,    -1,  1091,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   609,   999,    -1,    -1,    -1,
      -1,   386,    -1,    -1,   618,   619,    -1,    -1,    -1,    -1,
      -1,   396,    -1,  1016,    -1,    -1,  1026,  1020,  1170,  1171,
    1172,  1173,    79,  1026,  1079,    -1,    83,    84,    -1,    -1,
      -1,    -1,  1035,    -1,  1037,    -1,    -1,  1040,  1041,  1042,
    1043,    -1,  1045,  1186,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1066,    -1,   775,    -1,    -1,    -1,    -1,
      -1,  1074,    -1,  1076,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1218,  1219,    -1,  1191,  1222,  1223,    -1,
      -1,    -1,  1095,    -1,    -1,    -1,    -1,   807,    -1,  1234,
     810,  1236,  1105,  1106,    -1,  1108,  1109,  1110,  1111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1120,  1121,    -1,
    1123,    -1,  1125,    -1,  1127,  1128,    -1,    -1,  1131,    -1,
      -1,  1186,   517,    -1,    -1,    -1,    -1,    -1,   523,    -1,
      -1,    -1,  1145,  1146,    -1,    -1,    -1,   857,   762,   534,
     764,   536,   766,   863,  1157,    -1,  1159,    -1,    -1,    -1,
    1163,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1176,  1177,  1178,  1179,  1180,    -1,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,     2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   607,    -1,   169,    -1,   611,   172,   285,   174,
      -1,    -1,    -1,   290,    -1,    -1,    26,    -1,    28,    -1,
      -1,   626,    -1,    -1,  1247,    -1,    -1,    -1,    -1,  1252,
      -1,    -1,    -1,    -1,    -1,    -1,   966,   967,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   977,    -1,   979,
    1273,  1274,  1275,  1276,   984,  1261,    -1,   987,  1281,  1282,
      -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,   998,    79,
       2,  1001,    -1,    83,    84,    -1,  1299,  1300,  1301,  1302,
    1303,  1304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     367,    -1,     1,    -1,    26,  1025,    28,   107,    -1,    -1,
      -1,    -1,   112,    -1,    -1,  1035,    -1,  1037,    -1,   386,
      -1,    -1,    -1,    22,  1044,    -1,    -1,    26,    27,   396,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,   966,   967,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    79,    -1,    -1,
      -1,    83,    84,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    82,    83,   107,    85,    -1,    -1,    88,
     112,    90,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
    1120,    -1,    -1,    -1,    -1,    -1,    -1,  1127,    -1,    -1,
     109,    -1,   807,   112,    -1,   810,   115,  1041,  1042,  1043,
    1140,   221,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,  1153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,  1162,    -1,    -1,    -1,  1166,    -1,    -1,    -1,
     517,    -1,    -1,    89,    -1,    -1,   523,    93,   124,    -1,
      -1,    -1,   857,    -1,    -1,    -1,   165,   534,   863,   536,
      -1,    -1,   171,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,   285,   152,   153,   154,   155,
     290,   157,   158,   159,   160,   161,   162,   163,    -1,   221,
     166,   167,   168,    -1,  1224,   141,   142,    -1,   144,   145,
     146,   177,   148,   149,    -1,    -1,    -1,   153,  1238,  1239,
      -1,    -1,    -1,   159,   160,    -1,    -1,   163,    -1,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     607,  1261,    -1,    -1,   611,    -1,    -1,    -1,    -1,    -1,
      -1,     2,    -1,  1273,  1274,  1275,  1276,    -1,    -1,   626,
      -1,  1281,  1282,   285,    -1,    -1,    -1,   367,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,     2,   977,    -1,   979,    -1,   386,    -1,    -1,   984,
      -1,    -1,   987,    31,    -1,    -1,   396,    -1,    -1,    -1,
      -1,   996,    -1,   998,    -1,    26,  1001,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    79,    -1,
    1025,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1035,    -1,  1037,    92,    -1,   367,    -1,    -1,    -1,  1044,
      -1,    89,    -1,     3,    -1,    93,   107,    -1,    79,   108,
      -1,   112,    83,    84,   386,    -1,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,   396,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,   107,    -1,    -1,    39,
      -1,   112,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,    62,    -1,    -1,   153,    -1,   517,    -1,    69,
      70,    -1,   160,   523,    -1,  1120,    -1,    77,   166,   167,
     168,    -1,  1127,    -1,   534,    -1,   536,    87,    -1,    -1,
     807,    -1,    -1,   810,    -1,  1140,    96,    97,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,   106,    -1,  1153,    -1,
     110,   111,    -1,   113,    -1,    -1,   116,  1162,    -1,    -1,
     221,  1166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
     857,    -1,    -1,    -1,    -1,   517,   863,    -1,    -1,    -1,
     221,   523,    -1,    -1,    -1,    -1,     3,   607,    -1,    -1,
      -1,   611,   534,    -1,   536,    -1,    -1,    -1,    -1,    -1,
      17,    -1,   172,    20,    -1,    -1,   626,    -1,    25,  1224,
      -1,   280,    -1,    -1,   285,    -1,    -1,    31,    35,   290,
      -1,    -1,    -1,  1238,  1239,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,   306,    -1,    -1,
      -1,    -1,    -1,    -1,   285,    62,  1261,    -1,    -1,   290,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,  1273,  1274,
    1275,  1276,    -1,    -1,    -1,   607,  1281,  1282,    -1,   611,
      87,    -1,    -1,    -1,    -1,    89,    -1,   346,    -1,    93,
      -1,    -1,    99,    -1,   626,    -1,   103,    -1,    -1,    -1,
     977,    -1,   979,   110,    -1,    -1,   367,   984,    -1,   116,
     987,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   996,
      -1,   998,    -1,    -1,  1001,   386,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   396,   367,   141,   142,    -1,
      -1,   145,   146,    -1,   148,   149,    -1,    -1,  1025,   153,
      -1,    -1,    -1,    -1,     2,   386,   160,    -1,  1035,    -1,
    1037,    -1,   166,   167,   168,   396,    -1,  1044,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,   807,    -1,    31,
     810,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,     2,    -1,    -1,    45,    -1,   477,   478,
      49,    -1,    -1,    52,   483,    -1,    -1,   486,   487,   488,
     489,    79,    -1,    62,    -1,    83,    84,    26,    -1,    28,
      69,    70,    -1,  1120,    -1,    -1,    -1,   857,    77,    -1,
    1127,    -1,    -1,   863,    -1,    -1,   517,    89,    87,   107,
      -1,    93,   523,  1140,   112,    -1,    -1,    96,    97,    -1,
      99,    -1,   101,   534,   103,   807,  1153,   106,   810,    -1,
      -1,   110,    -1,   542,   113,  1162,   517,   116,    -1,  1166,
      79,    -1,   523,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   534,    -1,   536,    -1,    -1,    -1,   141,
     142,   140,    -1,    -1,   146,    -1,   148,   149,   107,    -1,
      -1,   153,    -1,   112,    -1,   857,    -1,    -1,   160,   588,
      -1,   863,    -1,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,   602,    -1,   604,   607,  1224,    -1,    -1,
     611,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1238,  1239,   622,    -1,   626,    -1,   977,    -1,   979,
      -1,    -1,    -1,   221,   984,    -1,   607,   987,    -1,    -1,
     611,    -1,    -1,    -1,  1261,    -1,   996,    -1,   998,    -1,
      -1,  1001,    -1,    -1,    -1,   626,  1273,  1274,  1275,  1276,
      -1,    -1,    -1,    -1,  1281,  1282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1025,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1035,    -1,  1037,    -1,    -1,
      -1,    -1,   221,    -1,  1044,    -1,    -1,   285,    -1,    -1,
      -1,    -1,   290,    -1,    -1,   977,    -1,   979,    -1,    -1,
      -1,    -1,   984,    -1,    -1,   987,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   996,    -1,   998,    -1,    -1,  1001,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1025,    -1,    -1,   285,    -1,    -1,    -1,
      -1,   290,    -1,  1035,    -1,  1037,    -1,    -1,    -1,    -1,
    1120,    -1,  1044,    -1,    -1,    -1,    -1,  1127,    -1,   367,
      -1,    -1,    -1,    -1,    -1,   784,    -1,   786,    -1,    -1,
    1140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,    -1,  1153,    -1,    -1,   807,    -1,   396,   810,
      -1,    -1,  1162,    -1,    -1,    -1,  1166,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,   824,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    38,   807,     2,   367,   810,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,  1120,    -1,
      -1,    -1,    55,    -1,    -1,  1127,   857,   386,    -1,    -1,
      -1,    26,   863,    28,    -1,    -1,    -1,   396,  1140,    -1,
      -1,    -1,    -1,    76,  1224,    78,    -1,    80,    -1,    82,
      -1,  1153,    85,    -1,    -1,    88,   857,    90,  1238,  1239,
    1162,    -1,   863,    -1,  1166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   906,    -1,   112,
      -1,  1261,   115,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1273,  1274,  1275,  1276,    -1,    -1,   517,
      -1,  1281,  1282,    -1,    -1,   523,    -1,   140,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,   534,   112,   536,    -1,
     949,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,  1238,  1239,   171,    -1,
      31,    -1,    -1,    -1,    -1,    -1,   977,    -1,   979,    -1,
      -1,    -1,    -1,   984,    -1,    -1,   987,    -1,   517,  1261,
      -1,    -1,    -1,    -1,   523,   996,    -1,   998,    -1,    -1,
    1001,  1273,  1274,  1275,  1276,   534,   977,   536,   979,  1281,
    1282,    -1,    -1,   984,    -1,    -1,   987,    -1,    -1,   607,
      -1,    -1,    -1,   611,  1025,   996,    -1,   998,    89,    -1,
    1001,    -1,    93,    -1,  1035,    -1,  1037,    -1,   626,    -1,
      -1,    -1,    -1,  1044,    -1,    -1,  1045,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1025,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1035,    -1,  1037,    -1,    -1,    -1,
      -1,    -1,    -1,  1044,    -1,    -1,    -1,    -1,   607,    -1,
     141,   142,   611,   144,   145,   146,    -1,   148,   149,   150,
      -1,    -1,   153,    -1,    -1,    -1,     3,   626,   159,   160,
      49,    -1,   163,    -1,    -1,   166,   167,   168,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,   177,    -1,    25,    -1,
     285,    -1,    -1,    -1,    73,   290,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    83,    84,    -1,    -1,    45,  1140,
      -1,    -1,    49,    -1,    -1,    52,  1145,  1146,    -1,  1120,
      -1,    -1,  1153,    -1,    -1,    62,  1127,    -1,    -1,    -1,
      -1,  1162,    69,    70,    -1,  1166,    -1,    -1,   117,  1140,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,  1153,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,  1162,    99,    -1,   101,  1166,   103,    -1,    -1,   106,
      -1,    -1,   367,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   807,
      -1,   386,   810,  1224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,  1238,  1239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,
    1261,    49,    -1,    -1,    -1,   172,    -1,  1238,  1239,   857,
      -1,    -1,    -1,    -1,    -1,   863,    -1,   226,   807,    -1,
      -1,   810,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
    1261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1273,  1274,  1275,  1276,    -1,    -1,    -1,    -1,
    1281,  1282,    -1,    -1,    -1,    -1,    -1,    -1,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   857,    -1,
      -1,    -1,    -1,    -1,   863,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,
      -1,    -1,   517,   302,    -1,    -1,    -1,    -1,   523,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   534,
      -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   977,
      -1,   979,    -1,   342,    -1,    -1,   984,    -1,    -1,   987,
      -1,    -1,    -1,    -1,    -1,    -1,   355,   356,   996,    -1,
     998,    -1,    -1,  1001,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,    -1,    -1,
      -1,    -1,   607,    -1,    -1,    -1,   611,  1035,   977,  1037,
     979,    -1,    -1,    -1,    -1,   984,  1044,    -1,   987,    -1,
      -1,   626,    -1,    -1,    -1,    -1,    -1,   996,    -1,   998,
      -1,    -1,  1001,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,   269,   270,   271,   272,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1025,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,  1035,   295,  1037,    -1,
      -1,    -1,    -1,    -1,   302,  1044,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1120,    -1,    44,    45,    46,    -1,    -1,  1127,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,  1140,   502,   342,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1153,    -1,   355,   356,    -1,
      -1,    -1,    -1,   522,  1162,    -1,    -1,   526,  1166,   528,
      -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1120,    -1,    -1,    -1,    -1,   141,   142,  1127,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,  1140,   157,   158,   159,   160,   161,    -1,   163,    -1,
      -1,   166,   167,   168,  1153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,  1162,    -1,    -1,  1224,  1166,    -1,    -1,
      -1,    -1,   807,    -1,    -1,   810,   156,    -1,   158,    -1,
    1238,  1239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1261,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1273,  1274,  1275,  1276,    -1,
      -1,    -1,   857,  1281,  1282,  1224,    -1,    -1,   863,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1238,
    1239,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1261,    -1,   522,    -1,    -1,    -1,   526,    -1,
     528,    -1,    -1,   531,  1273,  1274,  1275,  1276,    -1,    -1,
      -1,    -1,  1281,  1282,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,   274,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,   977,    45,   979,    -1,   326,    49,    -1,   984,
      52,    -1,   987,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,   996,    -1,   998,    -1,    -1,  1001,    69,    70,    -1,
      -1,    -1,   791,   792,    -1,    77,    -1,    -1,   797,   798,
      -1,    -1,   801,   802,    -1,    87,    -1,    -1,    -1,    -1,
    1025,    -1,   811,    -1,    96,    97,    -1,    99,    -1,   101,
    1035,   103,  1037,   383,   106,    -1,    -1,    -1,   110,  1044,
       3,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,   408,   848,
      -1,    -1,    25,   413,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,   867,   868,
      -1,    -1,    45,   433,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    62,
     172,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,  1120,    -1,    -1,    -1,    -1,
      -1,    -1,  1127,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,  1140,    99,    -1,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,   496,   110,  1153,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,  1162,    -1,    -1,
      -1,  1166,    -1,   791,   792,    -1,    -1,    -1,    -1,   797,
     798,    12,    -1,   801,   802,    -1,    -1,    -1,    19,   968,
     969,    -1,    -1,    -1,    -1,   974,    -1,   976,    -1,    -1,
      31,    -1,    -1,   543,   983,   545,    -1,   986,    -1,   549,
     989,    -1,   991,    -1,   993,    -1,    -1,    -1,    -1,   172,
      -1,    -1,   562,    -1,    -1,    -1,    -1,  1006,    -1,  1224,
      -1,   571,    -1,    -1,    -1,    -1,   576,    -1,    -1,    -1,
      -1,    -1,    -1,  1238,  1239,    -1,    -1,    -1,    -1,    -1,
     868,    -1,    -1,    -1,  1033,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,  1261,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,  1273,  1274,
    1275,  1276,    -1,    -1,    -1,    -1,  1281,  1282,    -1,    -1,
      -1,    -1,   632,   124,   125,   126,   127,   128,   129,   130,
      31,    -1,   133,   134,   135,   136,    -1,   138,   139,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,    -1,   166,   167,   168,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
     968,   969,    -1,    -1,    -1,    -1,   974,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,   986,   709,
      -1,   989,    -1,   991,    -1,   993,  1155,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,  1168,
    1169,  1170,  1171,   124,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    47,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,   163,    -1,    -1,   166,   167,   168,    -1,  1218,
    1219,    -1,    -1,  1222,  1223,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,  1232,    89,  1234,    -1,  1236,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     820,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,
     830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   848,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    -1,   170,    -1,  1155,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1168,  1169,  1170,  1171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   904,    -1,    -1,    -1,    -1,    -1,
      -1,   911,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,  1005,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
    1030,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,  1091,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    -1,   170,   171,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,   171,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,   171,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,   171,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,   171,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,    -1,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,    -1,
     148,    -1,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,    62,
      63,    64,    -1,    66,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,   107,   108,    -1,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,   107,   108,    -1,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
     173,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,   107,
     108,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,   173,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,   107,
     108,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,   173,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,   107,
     108,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,   122,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,   175,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,   122,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,   175,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,   171,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,   175,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,   175,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    31,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     4,     5,     6,     7,     8,
       9,    10,    -1,   141,   142,    14,   144,   145,   146,    18,
     148,   149,   150,    22,    -1,   153,   154,   155,    27,   157,
     158,   159,   160,    -1,    -1,   163,    35,    -1,   166,   167,
     168,    40,    41,    -1,    -1,    44,    -1,    -1,    47,   177,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,   173,   174,    -1,    -1,   177,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,   141,   142,   143,   144,
     145,    -1,    -1,    12,    -1,   150,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,   159,    -1,    25,   162,   163,   164,
      -1,    -1,    -1,   168,    33,   170,    35,   172,    -1,   174,
      39,    -1,   177,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,    -1,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
      -1,    -1,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    -1,   163,    -1,    -1,   166,   167,   168,
     169,    -1,    -1,   172,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,   141,    25,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,   164,    -1,    49,
      -1,    -1,    52,   170,    -1,   172,    -1,   174,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,     3,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,   141,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    62,    -1,    -1,
      -1,    -1,   172,    -1,   174,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,    -1,    -1,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,     3,   163,    -1,
      -1,   166,   167,   168,   169,   170,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      96,    97,    -1,    99,    19,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    31,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,    -1,   148,    -1,    -1,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    -1,   163,    -1,    -1,
     166,   167,   168,   169,    89,    -1,    -1,    12,    93,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    12,    93,    -1,
      -1,    -1,   177,    -1,    19,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    89,   170,    -1,    -1,    93,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    31,    32,   133,   134,
     135,   136,    -1,   138,   139,    -1,   141,   142,    -1,   144,
     145,   146,    47,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    89,    -1,    -1,    -1,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    47,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,   170,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    47,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,    89,   166,   167,   168,
      93,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,   124,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    72,    -1,   166,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,   124,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    72,   165,   166,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    12,
      89,    -1,    -1,    -1,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,   170,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    47,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,   170,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,   170,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,   170,
      19,    -1,    -1,    -1,    -1,    -1,   177,   102,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      89,   166,   167,   168,    93,   170,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    31,   124,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    72,    -1,   166,   167,   168,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
      -1,    12,    89,    -1,    -1,    -1,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      31,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    89,   166,
     167,   168,    93,    -1,    -1,    -1,    12,    -1,    -1,    -1,
     177,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,   120,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   124,    -1,   166,   167,   168,    -1,    -1,
      -1,    -1,    -1,    89,   175,    -1,   177,    93,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    12,    -1,   166,   167,   168,   124,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    12,
     166,   167,   168,    -1,   170,    -1,    19,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,   168,
     123,   124,    -1,    -1,    -1,    -1,    -1,    89,   177,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     102,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,   124,   166,   167,   168,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,   177,    -1,    -1,    -1,    -1,   141,
     142,    -1,   144,   145,   146,    31,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,   166,   167,   168,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,   124,
     166,   167,   168,    -1,    -1,    -1,    -1,   173,    -1,    89,
      -1,   177,    -1,    93,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    12,
     120,   166,   167,   168,   124,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    12,    -1,   166,   167,   168,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,   165,   166,   167,   168,   124,    -1,    -1,    -1,
      12,    89,    -1,    -1,   177,    93,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    31,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   124,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    12,    89,   166,   167,
     168,    93,    -1,    19,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,   144,   145,   146,    31,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    89,   166,   167,   168,    93,    -1,    -1,
      -1,   173,    12,    -1,    -1,   177,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   124,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,   177,    -1,    93,    -1,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    12,    -1,
     166,   167,   168,    -1,   124,    19,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    12,    -1,   166,   167,   168,    -1,
      -1,    19,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,   166,   167,   168,    -1,   124,    -1,    -1,    -1,
      -1,    89,    -1,   177,    12,    93,    -1,    -1,    -1,    -1,
      -1,    19,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    31,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   124,    -1,   166,   167,
     168,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,   177,
      -1,    19,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    31,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    -1,    -1,   166,   167,
     168,    89,    -1,    -1,    -1,    93,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      12,    89,    -1,    -1,    -1,    93,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    31,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   124,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    -1,    89,   166,   167,
     168,    93,    -1,    -1,    -1,    12,    13,    -1,    -1,   177,
     102,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    12,    89,    -1,    -1,   177,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
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
      -1,    -1,    -1,   124,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,   144,   145,   146,    31,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,    89,   166,   167,   168,    93,    -1,
      -1,    -1,    12,    -1,    -1,    -1,   177,   102,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   124,
      -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,   177,    93,    -1,    -1,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,    -1,
      -1,   166,   167,   168,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    22,   166,   167,   168,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,   177,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    76,
      -1,    78,    -1,    80,    35,    82,    37,    38,    85,    -1,
      -1,    88,    43,    90,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    85,    -1,    -1,    88,    -1,    90,
      -1,    -1,    -1,   140,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,   109,    37,
      38,   112,    -1,    -1,   115,    43,    -1,    -1,   165,    -1,
      -1,    -1,    50,    -1,   171,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    22,    90,    -1,   165,    26,    27,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,   109,    43,    -1,   112,    -1,    -1,   115,    -1,    50,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    76,    -1,    78,    -1,    80,
      35,    82,    37,    38,    85,    -1,    -1,    88,    43,    90,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   165,    -1,    -1,
      55,    -1,   170,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,     3,
      85,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,   109,    -1,    -1,   112,    -1,    33,
     115,    -1,    -1,    -1,   165,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,     3,   140,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    17,    18,
      -1,    20,    -1,    77,    -1,    -1,    25,    -1,    27,    -1,
     165,    -1,    -1,    87,    33,    -1,    -1,    -1,    -1,    -1,
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
     235,   238,   239,   241,   243,   246,   247,   250,   251,   252,
     253,   257,   258,   263,   264,   265,   266,   269,   270,   275,
     276,   278,   279,   284,   288,   289,   291,   292,   314,   319,
     320,   324,   325,   346,   347,   348,   349,   350,   351,   352,
     360,   361,   362,   363,   364,   365,   367,   370,   371,   372,
     373,   374,   375,   376,   377,   379,   380,   381,   382,   383,
     165,    22,    35,    40,    41,    44,    88,   101,   170,   174,
     246,   276,   346,   351,   361,   362,   367,   370,   372,   373,
     120,   353,   354,     3,   218,   367,   353,   367,   109,   326,
      90,   218,   186,   340,   367,   186,   172,     3,    17,    18,
      20,    25,    33,    39,    45,    49,    52,    62,    69,    70,
      77,    87,    96,    97,    99,   101,   103,   106,   110,   113,
     116,   219,   220,   222,    11,    78,   122,   240,   367,   240,
     367,   240,   367,    27,   115,   242,   367,    82,    85,   202,
     172,   220,   248,   249,   220,   220,   172,   220,   327,   328,
      32,   206,   225,   367,   261,   262,   367,   367,    18,    77,
      96,   113,   367,   367,   367,     8,   172,   229,   228,    27,
      33,    47,    49,    51,    75,    78,    90,    97,   101,   109,
     185,   224,   280,   281,   282,   305,   306,   307,   332,   337,
     367,   340,   107,   108,   165,   284,   285,   366,   367,   369,
     367,   225,   367,   367,   367,   100,   172,   186,   367,   367,
     188,   206,   188,   206,   367,   242,   367,   369,     3,   367,
     367,   367,   367,   367,     1,   171,   184,   207,   340,   111,
     151,   341,   342,   369,   175,   240,   340,   367,   378,   367,
      80,   186,    22,    35,    38,    88,   170,   189,   190,   191,
     202,   206,   194,     8,   149,   196,   170,    46,    84,   114,
     203,    26,   325,   367,     8,   265,   367,   368,    55,   146,
     267,   220,     1,   193,   220,   271,   274,   172,   300,    53,
      73,    83,   309,    27,    75,    78,    90,   109,   310,    27,
      78,    90,   109,   308,   220,   321,   322,   327,   164,   165,
     367,    12,    19,    31,    89,    93,   124,   141,   142,   144,
     145,   146,   148,   149,   150,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   166,   167,   168,
     177,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   169,   296,   172,   174,
      89,    93,   367,   367,   367,   340,    55,   172,   186,   165,
     206,    47,   353,   324,   165,   147,   165,   119,   221,   343,
     344,   345,   369,   170,   220,   172,   225,    32,    47,   225,
     120,   225,   356,    32,    47,   225,   356,   225,   356,    47,
     225,   356,   220,   220,   102,   206,   102,   125,   206,   296,
     203,   343,   172,   147,   165,   172,   206,   186,   111,   172,
     220,   329,   330,     1,   146,   336,    47,   147,   186,   225,
     147,   225,    13,   172,   172,   225,   343,   230,   230,    47,
      90,   306,   307,   173,   147,   111,   172,   220,   304,   146,
     165,   367,   367,   123,   286,   165,   170,   225,   172,   343,
     165,   254,   254,   225,   225,   165,   171,   171,   184,   147,
     171,   367,   147,   173,   147,   173,   367,   175,   356,    47,
     147,   175,   356,   123,   147,   175,     8,    40,    41,   174,
     239,     3,   172,   197,     1,   171,   207,   214,   215,   367,
     209,   367,    65,    36,    72,   165,   265,   267,   109,   236,
     289,   220,   248,   340,   170,   171,   274,   125,   147,   171,
     173,   301,   303,   305,   310,    90,     1,   146,   334,   335,
      90,     1,     3,    12,    17,    19,    20,    25,    45,    52,
      54,    62,    70,    87,    99,   103,   110,   116,   141,   142,
     143,   144,   145,   146,   148,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   163,   166,   167,   168,   169,
     172,   220,   293,   294,   295,   296,   346,   125,   323,   147,
     165,   165,   367,   367,   367,   240,   367,   240,   367,   367,
     367,   367,   367,   367,   367,     3,    20,    33,    62,   103,
     109,   221,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,    68,
     369,   369,   369,   369,   369,   343,   343,   240,   367,   240,
     367,    32,    47,    32,    47,   102,    47,   175,   220,    27,
      47,    90,   115,   355,   358,   359,   367,   383,   240,   367,
     225,   327,   367,   367,   125,   173,   147,    47,   340,    44,
     367,   240,   367,   172,   225,    44,   367,   240,   367,   225,
     225,   240,   367,   225,   125,   125,   186,    34,   186,   367,
      34,   367,    65,   173,   344,   248,   220,   244,   245,   330,
     147,   173,   224,   367,   125,   331,   367,   328,   261,   220,
     324,   367,   367,   173,   304,   310,   282,   330,   146,   338,
     339,   337,   287,   205,     1,   259,   345,   173,    21,   255,
     171,   173,   173,   341,   173,   341,   186,   175,   240,   367,
     175,   186,   367,   175,   367,   175,   367,   367,   367,   340,
     196,   173,   198,   199,   345,   171,   171,   147,   165,    13,
     149,   147,   165,    13,    36,    72,   220,   141,   142,   143,
     144,   145,   159,   163,   168,   208,   295,   296,   297,   367,
     208,   210,   267,   170,   237,   324,   172,   165,     1,   268,
     367,   272,   273,   147,   173,   336,     1,   224,   332,   333,
     105,   311,   172,   299,   367,   141,   149,   299,   299,   367,
     322,   172,   174,   165,   165,   165,   165,   165,   165,   173,
     175,    44,   240,   367,    44,   240,   367,   240,   367,   172,
      47,    90,   147,   173,    17,    20,    25,    45,    52,    62,
      70,    87,    99,   110,   116,   346,    89,    89,   353,   353,
     165,   165,   369,   345,   367,   173,   367,    32,   225,    32,
     225,   357,   358,   367,    32,   225,   356,    32,   225,   356,
     225,   356,   225,   356,   367,   367,    34,   186,    34,    34,
     186,   102,   206,   220,   173,   147,   173,   173,   329,   336,
      68,   369,   220,   173,   173,   339,   146,   283,   173,   337,
     151,   298,   331,   367,   171,    74,   117,   171,   260,   173,
     172,   206,   220,   256,   186,   175,   356,   175,   356,   186,
     123,    47,    47,    47,   175,   147,   173,   214,   221,    17,
      18,    20,    25,    45,    49,    52,    70,    77,    87,    96,
      97,    99,   101,   110,   113,   116,   170,   213,   297,   367,
     111,   367,   208,   210,   147,   165,    13,   165,   170,   268,
     321,   327,   344,   171,    82,    85,   171,   185,   193,   227,
     274,   193,   303,   311,    60,   118,   315,   301,   302,   173,
     294,   296,   173,   175,   367,    32,    32,   367,    32,    32,
     175,   175,   344,   358,   336,   346,   346,   225,   225,   225,
     102,    44,   367,    44,   367,   147,   173,   102,    44,   367,
     225,    44,   367,   225,   225,   225,   186,   186,   367,   186,
      34,   165,   245,   206,   331,   172,   172,   298,   331,   332,
     311,   339,   367,    32,   186,   340,   256,   146,   206,    44,
     186,   367,   175,    44,   186,   367,   175,   367,   240,   367,
     240,   367,   240,   367,   199,   208,    13,    36,    72,    36,
      72,   165,   165,   297,   367,   367,   268,   171,   165,   165,
     173,   193,   227,   227,   274,   315,     3,    92,   103,   316,
     317,   318,   367,   290,   173,   299,   299,   102,    44,    44,
     102,    44,    44,    44,    44,   173,   331,   367,   367,   367,
     358,   367,   367,   367,    34,   186,   343,   343,   298,   331,
     186,   225,   173,   367,   367,   186,   367,   186,   175,   175,
     171,   111,   367,   208,   210,   208,   210,    13,   171,   227,
     277,   318,   118,   147,   125,   152,   154,   155,   157,   158,
      60,    32,   165,   205,   226,   312,   313,   367,   367,   367,
     367,   367,   367,   102,   102,   102,   102,   186,   173,   173,
     206,   102,   102,   165,   165,   165,   165,   367,   313,   367,
     317,   318,   318,   318,   318,   318,   318,   316,   184,   102,
     102,   102,   102,   102,   102,   367,   367,   367,   367,   164,
     164,   367,   367
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
     249,   249,   250,   251,   252,   252,   253,   253,   253,   253,
     254,   254,   255,   255,   255,   256,   256,   257,   258,   258,
     259,   259,   260,   260,   260,   261,   261,   261,   262,   262,
     263,   264,   264,   265,   266,   266,   266,   267,   267,   268,
     268,   268,   268,   268,   269,   269,   270,   271,   271,   272,
     271,   271,   273,   271,   274,   274,   275,   277,   276,   278,
     279,   279,   279,   280,   280,   281,   281,   282,   282,   282,
     283,   283,   284,   286,   285,   287,   285,   288,   290,   289,
     291,   291,   291,   291,   291,   292,   293,   293,   294,   294,
     294,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   297,   297,
     298,   298,   299,   299,   300,   300,   301,   301,   302,   302,
     303,   304,   304,   305,   305,   305,   305,   305,   305,   306,
     306,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     308,   308,   308,   308,   308,   308,   309,   309,   309,   310,
     310,   310,   310,   310,   310,   310,   311,   311,   312,   312,
     313,   313,   313,   314,   315,   315,   315,   315,   315,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   318,   318,
     319,   320,   320,   321,   321,   322,   323,   323,   324,   324,
     324,   324,   324,   326,   325,   325,   327,   327,   328,   328,
     329,   329,   329,   330,   330,   330,   331,   331,   331,   332,
     333,   333,   333,   334,   334,   335,   335,   336,   336,   336,
     336,   337,   337,   338,   339,   339,   340,   340,   341,   341,
     342,   342,   343,   343,   344,   344,   345,   345,   346,   346,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   349,   349,   349,   349,   349,   349,
     349,   350,   351,   352,   352,   352,   352,   352,   352,   352,
     353,   353,   354,   355,   355,   356,   357,   357,   358,   358,
     358,   359,   359,   359,   359,   359,   359,   360,   360,   360,
     360,   360,   361,   361,   361,   361,   361,   362,   363,   363,
     363,   363,   363,   363,   364,   365,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   368,   368,   369,   369,   369,
     370,   370,   370,   370,   371,   371,   371,   371,   371,   372,
     372,   372,   373,   373,   373,   373,   373,   373,   374,   374,
     374,   374,   375,   375,   376,   376,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   378,
     378,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   380,   380,   380,   380,   380,   380,
     380,   381,   381,   381,   381,   382,   382,   382,   382,   383,
     383,   383,   383,   383,   383,   383
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     4,     3,     6,     2,     2,     3,     3,
       0,     2,     2,     3,     5,     1,     3,     3,     5,     5,
       0,     2,     3,     2,     3,     4,     3,     1,     1,     3,
       3,     5,     5,     2,     1,     1,     1,     0,     2,     0,
       2,     3,     3,     4,     3,     3,     3,     1,     2,     0,
       4,     2,     0,     5,     1,     3,     1,     0,     8,     0,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       0,     2,     6,     0,     3,     0,     4,     1,     0,     7,
       4,     4,     6,     6,     4,     2,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     3,     2,     3,     1,     3,     0,     1,
       1,     1,     1,     4,     5,     4,     5,     6,     6,     0,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     2,     1,     1,     0,     2,     2,     4,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       3,     1,     2,     1,     3,     2,     0,     2,     1,     2,
       1,     1,     1,     0,     5,     3,     1,     3,     3,     5,
       1,     1,     3,     1,     2,     3,     0,     2,     2,     1,
       1,     1,     1,     2,     1,     0,     1,     0,     2,     2,
       1,     1,     1,     2,     0,     1,     1,     3,     1,     1,
       3,     3,     0,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     5,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     6,     6,     4,     9,     9,     7,     6,     6,
       4,     9,     9,     7,     2,     3,     4,     6,     6,     9,
       9,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     4,     1,     3,     4,     1,     3,     4,     3,
       3,     1,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     2,     8,     8,     9,     9,     4,     3,     3,
       2,     2,     2,     1,     3,     4,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     4,
       4,     4,     3,     3,     3,     3,     5,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     4,     3,     4,     3,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1
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
#line 638 "chpl.ypp"
                                      { context->topLevelStatements = (yyvsp[0].exprList); }
#line 6243 "bison-chpl-lib.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 642 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList(); }
#line 6249 "bison-chpl-lib.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 643 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6255 "bison-chpl-lib.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 650 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 6263 "bison-chpl-lib.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 658 "chpl.ypp"
  {
    context->notePragma((yyloc), (yyvsp[0].expr));
  }
#line 6271 "bison-chpl-lib.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 662 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-1]), (yylsp[0]));
    context->notePragma(loc, (yyvsp[0].expr));
  }
#line 6280 "bison-chpl-lib.cpp"
    break;

  case 9: /* stmt: attribute_group attribute_receiver  */
#line 672 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6288 "bison-chpl-lib.cpp"
    break;

  case 10: /* stmt: stmt_base  */
#line 677 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6296 "bison-chpl-lib.cpp"
    break;

  case 12: /* stmt_base: decl_base  */
#line 684 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6302 "bison-chpl-lib.cpp"
    break;

  case 13: /* stmt_base: include_module_stmt  */
#line 685 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6308 "bison-chpl-lib.cpp"
    break;

  case 14: /* stmt_base: block_stmt  */
#line 686 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6314 "bison-chpl-lib.cpp"
    break;

  case 15: /* stmt_base: use_stmt  */
#line 687 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6320 "bison-chpl-lib.cpp"
    break;

  case 16: /* stmt_base: import_stmt  */
#line 688 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6326 "bison-chpl-lib.cpp"
    break;

  case 17: /* stmt_base: require_stmt  */
#line 689 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6332 "bison-chpl-lib.cpp"
    break;

  case 18: /* stmt_base: extern_block_stmt  */
#line 690 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6338 "bison-chpl-lib.cpp"
    break;

  case 19: /* stmt_base: binary_implements_stmt  */
#line 692 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6344 "bison-chpl-lib.cpp"
    break;

  case 20: /* stmt_base: interface_stmt  */
#line 693 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6350 "bison-chpl-lib.cpp"
    break;

  case 21: /* stmt_base: TDEFER stmt  */
#line 695 "chpl.ypp"
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
#line 6367 "bison-chpl-lib.cpp"
    break;

  case 22: /* stmt_base: try_stmt  */
#line 707 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyloc), (yyvsp[0].commentsAndStmt)); }
#line 6373 "bison-chpl-lib.cpp"
    break;

  case 23: /* stmt_base: return_stmt  */
#line 708 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6379 "bison-chpl-lib.cpp"
    break;

  case 24: /* stmt_base: TBREAK opt_label_ident TSEMI  */
#line 710 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Break::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6392 "bison-chpl-lib.cpp"
    break;

  case 25: /* stmt_base: TCONTINUE opt_label_ident TSEMI  */
#line 719 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Continue::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6405 "bison-chpl-lib.cpp"
    break;

  case 26: /* stmt_base: TLABEL ident_def stmt  */
#line 728 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildLabelStmt((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].commentsAndStmt));
  }
#line 6413 "bison-chpl-lib.cpp"
    break;

  case 27: /* stmt_base: TYIELD opt_try_expr TSEMI  */
#line 732 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Yield::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6424 "bison-chpl-lib.cpp"
    break;

  case 28: /* stmt_base: error TSEMI  */
#line 739 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = STMT((yyloc), ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
    context->resetDeclStateOnError();
  }
#line 6433 "bison-chpl-lib.cpp"
    break;

  case 29: /* tryable_stmt: assignment_stmt  */
#line 746 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6439 "bison-chpl-lib.cpp"
    break;

  case 30: /* tryable_stmt: if_stmt  */
#line 747 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6445 "bison-chpl-lib.cpp"
    break;

  case 31: /* tryable_stmt: loop_stmt  */
#line 748 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6451 "bison-chpl-lib.cpp"
    break;

  case 32: /* tryable_stmt: select_stmt  */
#line 749 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6457 "bison-chpl-lib.cpp"
    break;

  case 33: /* tryable_stmt: manage_stmt  */
#line 750 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6463 "bison-chpl-lib.cpp"
    break;

  case 34: /* tryable_stmt: stmt_level_expr TSEMI  */
#line 751 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt(STMT((yyloc),(yyvsp[-1].expr))); }
#line 6469 "bison-chpl-lib.cpp"
    break;

  case 35: /* tryable_stmt: throw_stmt  */
#line 752 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6475 "bison-chpl-lib.cpp"
    break;

  case 36: /* tryable_stmt: TBEGIN opt_task_intent_ls stmt  */
#line 754 "chpl.ypp"
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
#line 6493 "bison-chpl-lib.cpp"
    break;

  case 37: /* tryable_stmt: TCOBEGIN opt_task_intent_ls block_stmt  */
#line 768 "chpl.ypp"
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
#line 6512 "bison-chpl-lib.cpp"
    break;

  case 38: /* tryable_stmt: TDELETE expr_ls TSEMI  */
#line 783 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Delete::build(BUILDER, LOC((yyloc)), std::move(exprs));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6524 "bison-chpl-lib.cpp"
    break;

  case 39: /* tryable_stmt: TLOCAL expr do_stmt  */
#line 791 "chpl.ypp"
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
#line 6540 "bison-chpl-lib.cpp"
    break;

  case 40: /* tryable_stmt: TLOCAL do_stmt  */
#line 803 "chpl.ypp"
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
#line 6555 "bison-chpl-lib.cpp"
    break;

  case 41: /* tryable_stmt: TON expr do_stmt  */
#line 814 "chpl.ypp"
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
#line 6571 "bison-chpl-lib.cpp"
    break;

  case 42: /* tryable_stmt: TSERIAL expr do_stmt  */
#line 826 "chpl.ypp"
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
#line 6587 "bison-chpl-lib.cpp"
    break;

  case 43: /* tryable_stmt: TSERIAL do_stmt  */
#line 838 "chpl.ypp"
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
#line 6602 "bison-chpl-lib.cpp"
    break;

  case 44: /* tryable_stmt: TSYNC stmt  */
#line 849 "chpl.ypp"
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
#line 6619 "bison-chpl-lib.cpp"
    break;

  case 47: /* collect_attributes: %empty  */
#line 869 "chpl.ypp"
  {
    auto attributeGroup = context->buildAttributeGroup((yyloc));
    if (attributeGroup != nullptr) {
      context->resetAttributeGroupPartsState();
    }
    context->loopAttributes = attributeGroup.release();
  }
#line 6631 "bison-chpl-lib.cpp"
    break;

  case 48: /* attribute_receiver: collect_attributes loop_stmt  */
#line 879 "chpl.ypp"
                               { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6637 "bison-chpl-lib.cpp"
    break;

  case 54: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace opt_attribute_actuals  */
#line 895 "chpl.ypp"
 {
  context->noteAttribute((yylsp[-2]), (yyvsp[-2].expr), true, (yyvsp[-1].exprList), (yyvsp[0].maybeNamedActualList));
 }
#line 6645 "bison-chpl-lib.cpp"
    break;

  case 55: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace  */
#line 899 "chpl.ypp"
 {
  // this allows us to distinguish between @attribute() and @attribute
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, (yyvsp[0].exprList), lst);
 }
#line 6656 "bison-chpl-lib.cpp"
    break;

  case 56: /* attribute_decl_stmt: attribute_decl_begin STRINGLITERAL  */
#line 906 "chpl.ypp"
 {
  // this allows us to maintain @unstable "message" without requiring parens
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  auto actual = makeMaybeNamedActual((yyvsp[0].expr));
  lst->push_back(actual);
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, context->makeList(), lst);
 }
#line 6669 "bison-chpl-lib.cpp"
    break;

  case 57: /* attribute_decl_begin: TATMARK TIDENT  */
#line 918 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    (yyval.expr) = ident;
  }
#line 6678 "bison-chpl-lib.cpp"
    break;

  case 58: /* opt_attribute_decl_toolspace: %empty  */
#line 925 "chpl.ypp"
  {
    (yyval.exprList)=context->makeList();
  }
#line 6686 "bison-chpl-lib.cpp"
    break;

  case 59: /* opt_attribute_decl_toolspace: TDOT TIDENT opt_attribute_decl_toolspace  */
#line 929 "chpl.ypp"
  {
    // had to create this as a list first, otherwise they get inserted in the
    // wrong order.
    auto lst = context->makeList(context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr)));
    (yyval.exprList) = context->appendList(lst, (yyvsp[0].exprList));
  }
#line 6697 "bison-chpl-lib.cpp"
    break;

  case 60: /* opt_attribute_actuals: TLP TRP  */
#line 939 "chpl.ypp"
  { (yyval.maybeNamedActualList)=new MaybeNamedActualList(); }
#line 6703 "bison-chpl-lib.cpp"
    break;

  case 61: /* opt_attribute_actuals: TLP attribute_actuals_ls TRP  */
#line 941 "chpl.ypp"
  {
    (yyval.maybeNamedActualList) = (yyvsp[-1].maybeNamedActualList);
  }
#line 6711 "bison-chpl-lib.cpp"
    break;

  case 62: /* attribute_actuals_ls: attribute_actual  */
#line 948 "chpl.ypp"
  { auto lst = new MaybeNamedActualList();
    lst->push_back((yyvsp[0].maybeNamedActual));
    (yyval.maybeNamedActualList) = lst;
  }
#line 6720 "bison-chpl-lib.cpp"
    break;

  case 63: /* attribute_actuals_ls: attribute_actuals_ls TCOMMA attribute_actual  */
#line 953 "chpl.ypp"
  {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
  }
#line 6730 "bison-chpl-lib.cpp"
    break;

  case 65: /* module_decl_start: opt_access_control opt_prototype TMODULE ident_def  */
#line 966 "chpl.ypp"
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
#line 6751 "bison-chpl-lib.cpp"
    break;

  case 66: /* module_decl_stmt: module_decl_start TLCBR TRCBR  */
#line 986 "chpl.ypp"
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
#line 6770 "bison-chpl-lib.cpp"
    break;

  case 67: /* module_decl_stmt: module_decl_start TLCBR stmt_ls TRCBR  */
#line 1001 "chpl.ypp"
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
#line 6789 "bison-chpl-lib.cpp"
    break;

  case 68: /* module_decl_stmt: module_decl_start TLCBR error TRCBR  */
#line 1016 "chpl.ypp"
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
#line 6806 "bison-chpl-lib.cpp"
    break;

  case 69: /* opt_access_control: %empty  */
#line 1031 "chpl.ypp"
           { (yyval.visibilityTag) = context->noteVisibility(Decl::DEFAULT_VISIBILITY); }
#line 6812 "bison-chpl-lib.cpp"
    break;

  case 70: /* opt_access_control: TPUBLIC  */
#line 1032 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PUBLIC); }
#line 6819 "bison-chpl-lib.cpp"
    break;

  case 71: /* opt_access_control: TPRIVATE  */
#line 1034 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PRIVATE); }
#line 6826 "bison-chpl-lib.cpp"
    break;

  case 72: /* opt_prototype: %empty  */
#line 1039 "chpl.ypp"
             { (yyval.moduleKind) = Module::DEFAULT_MODULE_KIND; }
#line 6832 "bison-chpl-lib.cpp"
    break;

  case 73: /* opt_prototype: TPROTOTYPE  */
#line 1040 "chpl.ypp"
             { context->noteDeclStartLoc((yylsp[0]));
               (yyval.moduleKind) = Module::PROTOTYPE;  }
#line 6839 "bison-chpl-lib.cpp"
    break;

  case 74: /* include_module_stmt: TINCLUDE opt_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 1046 "chpl.ypp"
  {
    auto node = Include::build(BUILDER, LOC((yyloc)), context->visibility, (yyvsp[-3].moduleKind), (yyvsp[-1].uniqueStr));
    (yyval.commentsAndStmt) = STMT((yyloc), node.release());
    context->visibility = Decl::DEFAULT_VISIBILITY;
  }
#line 6849 "bison-chpl-lib.cpp"
    break;

  case 75: /* block_stmt_body: TLCBR TRCBR  */
#line 1064 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-1]), (yylsp[0]), nullptr);
  }
#line 6857 "bison-chpl-lib.cpp"
    break;

  case 76: /* block_stmt_body: TLCBR stmt_ls TRCBR  */
#line 1068 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-2]), (yylsp[0]), (yyvsp[-1].exprList));
  }
#line 6865 "bison-chpl-lib.cpp"
    break;

  case 77: /* block_stmt_body: TLCBR error TRCBR  */
#line 1072 "chpl.ypp"
  {
    context->clearComments();
    // create a list of stmts that just has an ErroneousExpr
    auto errorExpr = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    ParserExprList* lst = context->makeList(errorExpr.release());
    (yyval.exprList) = lst;
  }
#line 6877 "bison-chpl-lib.cpp"
    break;

  case 78: /* block_stmt: block_stmt_body  */
#line 1083 "chpl.ypp"
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
#line 6896 "bison-chpl-lib.cpp"
    break;

  case 79: /* stmt_ls: toplevel_stmt  */
#line 1101 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 6902 "bison-chpl-lib.cpp"
    break;

  case 80: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 1102 "chpl.ypp"
                                       { context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6908 "bison-chpl-lib.cpp"
    break;

  case 81: /* renames_ls: expr  */
#line 1107 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 6916 "bison-chpl-lib.cpp"
    break;

  case 82: /* renames_ls: all_op_name  */
#line 1111 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 6924 "bison-chpl-lib.cpp"
    break;

  case 83: /* renames_ls: expr TAS expr  */
#line 1115 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(as);
  }
#line 6933 "bison-chpl-lib.cpp"
    break;

  case 84: /* renames_ls: renames_ls TCOMMA expr  */
#line 1120 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 6941 "bison-chpl-lib.cpp"
    break;

  case 85: /* renames_ls: renames_ls TCOMMA all_op_name  */
#line 1124 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 6949 "bison-chpl-lib.cpp"
    break;

  case 86: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 1128 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), as);
  }
#line 6958 "bison-chpl-lib.cpp"
    break;

  case 87: /* use_renames_ls: expr  */
#line 1138 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6967 "bison-chpl-lib.cpp"
    break;

  case 88: /* use_renames_ls: expr TAS expr  */
#line 1143 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6977 "bison-chpl-lib.cpp"
    break;

  case 89: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 1149 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 6988 "bison-chpl-lib.cpp"
    break;

  case 90: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 1156 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yylsp[0]), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), node);
  }
#line 6997 "bison-chpl-lib.cpp"
    break;

  case 91: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 1161 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7008 "bison-chpl-lib.cpp"
    break;

  case 92: /* use_renames_ls: use_renames_ls TCOMMA expr TAS TUNDERSCORE  */
#line 1168 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned(ident));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7020 "bison-chpl-lib.cpp"
    break;

  case 93: /* opt_only_ls: %empty  */
#line 1178 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 7026 "bison-chpl-lib.cpp"
    break;

  case 94: /* opt_only_ls: renames_ls  */
#line 1179 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 7032 "bison-chpl-lib.cpp"
    break;

  case 95: /* use_stmt: opt_access_control TUSE use_renames_ls TSEMI  */
#line 1184 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildMultiUseStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7041 "bison-chpl-lib.cpp"
    break;

  case 96: /* use_stmt: opt_access_control TUSE expr TEXCEPT renames_ls TSEMI  */
#line 1189 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7053 "bison-chpl-lib.cpp"
    break;

  case 97: /* use_stmt: opt_access_control TUSE expr TAS expr TEXCEPT renames_ls TSEMI  */
#line 1197 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7066 "bison-chpl-lib.cpp"
    break;

  case 98: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TEXCEPT renames_ls TSEMI  */
#line 1206 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7080 "bison-chpl-lib.cpp"
    break;

  case 99: /* use_stmt: opt_access_control TUSE expr TONLY opt_only_ls TSEMI  */
#line 1216 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7092 "bison-chpl-lib.cpp"
    break;

  case 100: /* use_stmt: opt_access_control TUSE expr TAS expr TONLY opt_only_ls TSEMI  */
#line 1224 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7105 "bison-chpl-lib.cpp"
    break;

  case 101: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TONLY opt_only_ls TSEMI  */
#line 1233 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7119 "bison-chpl-lib.cpp"
    break;

  case 102: /* import_stmt: opt_access_control TIMPORT import_ls TSEMI  */
#line 1246 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImportStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7128 "bison-chpl-lib.cpp"
    break;

  case 120: /* import_expr: expr  */
#line 1282 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), true);
  }
#line 7136 "bison-chpl-lib.cpp"
    break;

  case 121: /* import_expr: expr TDOT all_op_name  */
#line 1286 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7145 "bison-chpl-lib.cpp"
    break;

  case 122: /* import_expr: expr TDOT import_internal_type_ident  */
#line 1291 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7154 "bison-chpl-lib.cpp"
    break;

  case 123: /* import_expr: expr TAS ident_use  */
#line 1296 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(as), true);
  }
#line 7164 "bison-chpl-lib.cpp"
    break;

  case 124: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 1302 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[-4].expr)),
                                        VisibilityClause::BRACES,
                                        context->consumeList((yyvsp[-1].exprList)), true);
  }
#line 7174 "bison-chpl-lib.cpp"
    break;

  case 125: /* import_ls: import_expr  */
#line 1310 "chpl.ypp"
                                { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 7180 "bison-chpl-lib.cpp"
    break;

  case 126: /* import_ls: import_ls TCOMMA import_expr  */
#line 1311 "chpl.ypp"
                                { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 7186 "bison-chpl-lib.cpp"
    break;

  case 127: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 1316 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Require::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 7196 "bison-chpl-lib.cpp"
    break;

  case 128: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 1325 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7204 "bison-chpl-lib.cpp"
    break;

  case 129: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 1329 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7212 "bison-chpl-lib.cpp"
    break;

  case 130: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 1333 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7220 "bison-chpl-lib.cpp"
    break;

  case 131: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 1337 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7228 "bison-chpl-lib.cpp"
    break;

  case 132: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 1341 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7236 "bison-chpl-lib.cpp"
    break;

  case 133: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 1345 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr))));
    }
#line 7244 "bison-chpl-lib.cpp"
    break;

  case 134: /* opt_label_ident: %empty  */
#line 1353 "chpl.ypp"
         { (yyval.uniqueStr) = STR(""); }
#line 7250 "bison-chpl-lib.cpp"
    break;

  case 135: /* opt_label_ident: TIDENT  */
#line 1354 "chpl.ypp"
         { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7256 "bison-chpl-lib.cpp"
    break;

  case 143: /* ident_use: TIDENT  */
#line 1379 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7262 "bison-chpl-lib.cpp"
    break;

  case 144: /* ident_use: TTHIS  */
#line 1380 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7268 "bison-chpl-lib.cpp"
    break;

  case 164: /* scalar_type: TBOOL  */
#line 1407 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7274 "bison-chpl-lib.cpp"
    break;

  case 165: /* scalar_type: TENUM  */
#line 1408 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7280 "bison-chpl-lib.cpp"
    break;

  case 166: /* scalar_type: TINT  */
#line 1409 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7286 "bison-chpl-lib.cpp"
    break;

  case 167: /* scalar_type: TUINT  */
#line 1410 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7292 "bison-chpl-lib.cpp"
    break;

  case 168: /* scalar_type: TREAL  */
#line 1411 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7298 "bison-chpl-lib.cpp"
    break;

  case 169: /* scalar_type: TIMAG  */
#line 1412 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7304 "bison-chpl-lib.cpp"
    break;

  case 170: /* scalar_type: TCOMPLEX  */
#line 1413 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7310 "bison-chpl-lib.cpp"
    break;

  case 171: /* scalar_type: TBYTES  */
#line 1414 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7316 "bison-chpl-lib.cpp"
    break;

  case 172: /* scalar_type: TSTRING  */
#line 1415 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7322 "bison-chpl-lib.cpp"
    break;

  case 173: /* scalar_type: TLOCALE  */
#line 1416 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7328 "bison-chpl-lib.cpp"
    break;

  case 174: /* scalar_type: TNOTHING  */
#line 1417 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7334 "bison-chpl-lib.cpp"
    break;

  case 175: /* scalar_type: TVOID  */
#line 1418 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7340 "bison-chpl-lib.cpp"
    break;

  case 180: /* do_stmt: TDO stmt  */
#line 1432 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), true }; }
#line 7346 "bison-chpl-lib.cpp"
    break;

  case 181: /* do_stmt: block_stmt  */
#line 1433 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), false }; }
#line 7352 "bison-chpl-lib.cpp"
    break;

  case 182: /* return_stmt: TRETURN TSEMI  */
#line 1438 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-1]));
    auto node = Return::build(BUILDER, LOC((yyloc)), /*value*/ nullptr);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7363 "bison-chpl-lib.cpp"
    break;

  case 183: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 1445 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7374 "bison-chpl-lib.cpp"
    break;

  case 184: /* class_level_stmt: TSEMI  */
#line 1455 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildEmptyStmt((yyloc)));
    }
#line 7382 "bison-chpl-lib.cpp"
    break;

  case 185: /* class_level_stmt: inner_class_level_stmt  */
#line 1459 "chpl.ypp"
    {
      // visibility should be default when inner_class_level_stmt is parsed
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7392 "bison-chpl-lib.cpp"
    break;

  case 186: /* $@1: %empty  */
#line 1464 "chpl.ypp"
          {context->noteDeclStartLoc((yylsp[0]));
           context->noteVisibility(Decl::PUBLIC);}
#line 7399 "bison-chpl-lib.cpp"
    break;

  case 187: /* class_level_stmt: TPUBLIC $@1 inner_class_level_stmt  */
#line 1466 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7408 "bison-chpl-lib.cpp"
    break;

  case 188: /* $@2: %empty  */
#line 1470 "chpl.ypp"
           {context->noteDeclStartLoc((yylsp[0]));
            context->noteVisibility(Decl::PRIVATE);}
#line 7415 "bison-chpl-lib.cpp"
    break;

  case 189: /* class_level_stmt: TPRIVATE $@2 inner_class_level_stmt  */
#line 1472 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7424 "bison-chpl-lib.cpp"
    break;

  case 198: /* forwarding_decl_stmt: forwarding_decl_start expr TSEMI  */
#line 1491 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-2].attributeGroup)), toOwned((yyvsp[-1].expr)),
                                        VisibilityClause::NONE, nullptr);
    }
#line 7433 "bison-chpl-lib.cpp"
    break;

  case 199: /* forwarding_decl_stmt: forwarding_decl_start expr TEXCEPT renames_ls TSEMI  */
#line 1496 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::EXCEPT, (yyvsp[-1].exprList));
    }
#line 7442 "bison-chpl-lib.cpp"
    break;

  case 200: /* forwarding_decl_stmt: forwarding_decl_start expr TONLY opt_only_ls TSEMI  */
#line 1501 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::ONLY, (yyvsp[-1].exprList));
    }
#line 7451 "bison-chpl-lib.cpp"
    break;

  case 201: /* forwarding_decl_stmt: forwarding_decl_start var_decl_stmt  */
#line 1506 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-1].attributeGroup)), (yyvsp[0].commentsAndStmt));
    }
#line 7459 "bison-chpl-lib.cpp"
    break;

  case 202: /* forwarding_decl_start: TFORWARDING  */
#line 1513 "chpl.ypp"
  {
    (yyval.attributeGroup) = context->buildAttributeGroup((yyloc)).release();
    context->resetAttributeGroupPartsState();
  }
#line 7468 "bison-chpl-lib.cpp"
    break;

  case 203: /* extern_or_export: TEXTERN  */
#line 1520 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXTERN; }
#line 7474 "bison-chpl-lib.cpp"
    break;

  case 204: /* extern_or_export: TEXPORT  */
#line 1521 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXPORT; }
#line 7480 "bison-chpl-lib.cpp"
    break;

  case 205: /* extern_export_decl_stmt_start: extern_or_export  */
#line 1526 "chpl.ypp"
  {
    // Sets the start location only if it is still unset.
    context->noteDeclStartLoc((yylsp[0]));
    (yyval.linkageTag) = context->noteLinkage((yyvsp[0].linkageTag));
  }
#line 7490 "bison-chpl-lib.cpp"
    break;

  case 206: /* extern_export_decl_stmt: extern_export_decl_stmt_start class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1536 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-5]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7499 "bison-chpl-lib.cpp"
    break;

  case 207: /* extern_export_decl_stmt: extern_export_decl_stmt_start STRINGLITERAL class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1542 "chpl.ypp"
  {
    // Set the linkage name since it will be nullptr otherwise.
    (yyvsp[-4].typeDeclParts).linkageName = (yyvsp[-5].expr);
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-6]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7510 "bison-chpl-lib.cpp"
    break;

  case 208: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr fn_decl_stmt  */
#line 1549 "chpl.ypp"
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
#line 7532 "bison-chpl-lib.cpp"
    break;

  case 209: /* $@3: %empty  */
#line 1567 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[0].expr));
  }
#line 7540 "bison-chpl-lib.cpp"
    break;

  case 210: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr $@3 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1571 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7549 "bison-chpl-lib.cpp"
    break;

  case 211: /* $@4: %empty  */
#line 1576 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[-1].expr));
    context->noteVarDeclKind(Variable::TYPE);
  }
#line 7558 "bison-chpl-lib.cpp"
    break;

  case 212: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr TTYPE $@4 type_alias_decl_stmt_inner_ls TSEMI  */
#line 1581 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7567 "bison-chpl-lib.cpp"
    break;

  case 213: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 1589 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildExternBlockStmt((yylsp[-1]), (yyvsp[0].sizedStr));
  }
#line 7575 "bison-chpl-lib.cpp"
    break;

  case 214: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1596 "chpl.ypp"
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
#line 7599 "bison-chpl-lib.cpp"
    break;

  case 215: /* loop_stmt: TWHILE expr do_stmt  */
#line 1616 "chpl.ypp"
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
#line 7618 "bison-chpl-lib.cpp"
    break;

  case 216: /* loop_stmt: TWHILE ifvar do_stmt  */
#line 1631 "chpl.ypp"
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
#line 7637 "bison-chpl-lib.cpp"
    break;

  case 217: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1646 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7645 "bison-chpl-lib.cpp"
    break;

  case 218: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1650 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7653 "bison-chpl-lib.cpp"
    break;

  case 219: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1654 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7661 "bison-chpl-lib.cpp"
    break;

  case 220: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1658 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7669 "bison-chpl-lib.cpp"
    break;

  case 221: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1662 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7677 "bison-chpl-lib.cpp"
    break;

  case 222: /* loop_stmt: TFOR expr do_stmt  */
#line 1666 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7685 "bison-chpl-lib.cpp"
    break;

  case 223: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1670 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7693 "bison-chpl-lib.cpp"
    break;

  case 224: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1674 "chpl.ypp"
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
#line 7718 "bison-chpl-lib.cpp"
    break;

  case 225: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1695 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7726 "bison-chpl-lib.cpp"
    break;

  case 226: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1699 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7734 "bison-chpl-lib.cpp"
    break;

  case 227: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1703 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7742 "bison-chpl-lib.cpp"
    break;

  case 228: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1707 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7750 "bison-chpl-lib.cpp"
    break;

  case 229: /* loop_stmt: TFORALL expr do_stmt  */
#line 1711 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7758 "bison-chpl-lib.cpp"
    break;

  case 230: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1715 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7766 "bison-chpl-lib.cpp"
    break;

  case 231: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1719 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7774 "bison-chpl-lib.cpp"
    break;

  case 232: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1723 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7782 "bison-chpl-lib.cpp"
    break;

  case 233: /* loop_stmt: TFOREACH expr TIN expr do_stmt  */
#line 1727 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7790 "bison-chpl-lib.cpp"
    break;

  case 234: /* loop_stmt: TFOREACH expr TIN expr forall_intent_clause do_stmt  */
#line 1731 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7798 "bison-chpl-lib.cpp"
    break;

  case 235: /* loop_stmt: TFOREACH expr TIN zippered_iterator do_stmt  */
#line 1735 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7806 "bison-chpl-lib.cpp"
    break;

  case 236: /* loop_stmt: TFOREACH expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1739 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7814 "bison-chpl-lib.cpp"
    break;

  case 237: /* loop_stmt: TFOREACH expr do_stmt  */
#line 1743 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7822 "bison-chpl-lib.cpp"
    break;

  case 238: /* loop_stmt: TFOREACH expr forall_intent_clause do_stmt  */
#line 1747 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7830 "bison-chpl-lib.cpp"
    break;

  case 239: /* loop_stmt: TFOREACH zippered_iterator do_stmt  */
#line 1751 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7838 "bison-chpl-lib.cpp"
    break;

  case 240: /* loop_stmt: TFOREACH zippered_iterator forall_intent_clause do_stmt  */
#line 1755 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7846 "bison-chpl-lib.cpp"
    break;

  case 241: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1759 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7854 "bison-chpl-lib.cpp"
    break;

  case 242: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1763 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7862 "bison-chpl-lib.cpp"
    break;

  case 243: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1767 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7870 "bison-chpl-lib.cpp"
    break;

  case 244: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1771 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7878 "bison-chpl-lib.cpp"
    break;

  case 245: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1775 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-2].exprList), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7886 "bison-chpl-lib.cpp"
    break;

  case 246: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1779 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-3].exprList), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7894 "bison-chpl-lib.cpp"
    break;

  case 247: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1783 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), iterExprs, nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7903 "bison-chpl-lib.cpp"
    break;

  case 248: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1788 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), iterExprs, (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7912 "bison-chpl-lib.cpp"
    break;

  case 249: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1796 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Zip::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.expr) = node.release();
  }
#line 7922 "bison-chpl-lib.cpp"
    break;

  case 250: /* if_stmt: TIF expr TTHEN stmt  */
#line 1805 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7930 "bison-chpl-lib.cpp"
    break;

  case 251: /* if_stmt: TIF expr block_stmt  */
#line 1809 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7938 "bison-chpl-lib.cpp"
    break;

  case 252: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1813 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7946 "bison-chpl-lib.cpp"
    break;

  case 253: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1817 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7954 "bison-chpl-lib.cpp"
    break;

  case 254: /* if_stmt: TIF ifvar TTHEN stmt  */
#line 1821 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7962 "bison-chpl-lib.cpp"
    break;

  case 255: /* if_stmt: TIF ifvar block_stmt  */
#line 1825 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 7970 "bison-chpl-lib.cpp"
    break;

  case 256: /* if_stmt: TIF ifvar TTHEN stmt TELSE stmt  */
#line 1829 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7978 "bison-chpl-lib.cpp"
    break;

  case 257: /* if_stmt: TIF ifvar block_stmt TELSE stmt  */
#line 1833 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 7986 "bison-chpl-lib.cpp"
    break;

  case 258: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1837 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-3]), (yyvsp[-4].expr), (yyvsp[-3].uniqueStr), (yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-1]), op, (yyvsp[0].commentsAndStmt));
  }
#line 7995 "bison-chpl-lib.cpp"
    break;

  case 259: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1842 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-2]), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[0]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8004 "bison-chpl-lib.cpp"
    break;

  case 260: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1847 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-5]), (yyvsp[-6].expr), (yyvsp[-5].uniqueStr), (yyvsp[-4].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-7]), (yylsp[-3]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8013 "bison-chpl-lib.cpp"
    break;

  case 261: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1852 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-4]), (yyvsp[-5].expr), (yyvsp[-4].uniqueStr), (yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-6]), (yylsp[-2]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8022 "bison-chpl-lib.cpp"
    break;

  case 262: /* ifvar: TVAR ident_def TASSIGN expr  */
#line 1860 "chpl.ypp"
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
#line 8041 "bison-chpl-lib.cpp"
    break;

  case 263: /* ifvar: TCONST ident_def TASSIGN expr  */
#line 1875 "chpl.ypp"
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
#line 8060 "bison-chpl-lib.cpp"
    break;

  case 264: /* interface_stmt: TINTERFACE ident_def TLP ifc_formal_ls TRP block_stmt  */
#line 1893 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-4].uniqueStr), (yyvsp[-2].exprList), (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8068 "bison-chpl-lib.cpp"
    break;

  case 265: /* interface_stmt: TINTERFACE ident_def block_stmt  */
#line 1897 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-1].uniqueStr), nullptr, (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8076 "bison-chpl-lib.cpp"
    break;

  case 266: /* ifc_formal_ls: ifc_formal  */
#line 1903 "chpl.ypp"
                                  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8082 "bison-chpl-lib.cpp"
    break;

  case 267: /* ifc_formal_ls: ifc_formal_ls TCOMMA ifc_formal  */
#line 1904 "chpl.ypp"
                                  { context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8088 "bison-chpl-lib.cpp"
    break;

  case 268: /* ifc_formal: ident_def  */
#line 1909 "chpl.ypp"
             { (yyval.expr) = context->buildInterfaceFormal((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 8094 "bison-chpl-lib.cpp"
    break;

  case 281: /* implements_type_ident: implements_type_error_ident  */
#line 1927 "chpl.ypp"
  {
    context->syntax((yyloc), "type '%s' cannot implement an interface.", (yyvsp[0].uniqueStr).c_str());
    (yyval.uniqueStr) = (yyvsp[0].uniqueStr);
  }
#line 8103 "bison-chpl-lib.cpp"
    break;

  case 288: /* interface_expr: ident_def  */
#line 1953 "chpl.ypp"
  {
    (yyval.expr) = context->buildInterfaceExpr((yylsp[0]), (yyvsp[0].uniqueStr), nullptr).release();
  }
#line 8111 "bison-chpl-lib.cpp"
    break;

  case 289: /* interface_expr: ident_def TLP actual_ls TRP  */
#line 1957 "chpl.ypp"
  {
    (yyval.expr) = context->buildInterfaceExpr(YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)).release();
  }
#line 8119 "bison-chpl-lib.cpp"
    break;

  case 290: /* interface_expr_ls: interface_expr  */
#line 1964 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 8127 "bison-chpl-lib.cpp"
    break;

  case 291: /* interface_expr_ls: interface_expr_ls TCOMMA interface_expr  */
#line 1968 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 8135 "bison-chpl-lib.cpp"
    break;

  case 292: /* unary_implements_stmt: TIMPLEMENTS interface_expr_ls TSEMI  */
#line 1975 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yyvsp[-1].exprList));
  }
#line 8143 "bison-chpl-lib.cpp"
    break;

  case 293: /* binary_implements_stmt: implements_type_ident TIMPLEMENTS interface_expr TSEMI  */
#line 1982 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-3]), (yyvsp[-3].uniqueStr), context->makeList((yyvsp[-1].expr)));
  }
#line 8151 "bison-chpl-lib.cpp"
    break;

  case 294: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def  */
#line 1993 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yylsp[0]), (yyvsp[0].uniqueStr), nullptr);
  }
#line 8159 "bison-chpl-lib.cpp"
    break;

  case 295: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1997 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-5]), (yyvsp[-5].uniqueStr), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8167 "bison-chpl-lib.cpp"
    break;

  case 296: /* try_stmt: TTRY tryable_stmt  */
#line 2004 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), false);
  }
#line 8175 "bison-chpl-lib.cpp"
    break;

  case 297: /* try_stmt: TTRYBANG tryable_stmt  */
#line 2008 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), true);
  }
#line 8183 "bison-chpl-lib.cpp"
    break;

  case 298: /* try_stmt: TTRY block_stmt catch_expr_ls  */
#line 2012 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), false);
  }
#line 8191 "bison-chpl-lib.cpp"
    break;

  case 299: /* try_stmt: TTRYBANG block_stmt catch_expr_ls  */
#line 2016 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), true);
  }
#line 8199 "bison-chpl-lib.cpp"
    break;

  case 300: /* catch_expr_ls: %empty  */
#line 2022 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8205 "bison-chpl-lib.cpp"
    break;

  case 301: /* catch_expr_ls: catch_expr_ls catch_expr  */
#line 2023 "chpl.ypp"
                            { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].expr)); }
#line 8211 "bison-chpl-lib.cpp"
    break;

  case 302: /* catch_expr: TCATCH block_stmt  */
#line 2028 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), nullptr, (yyvsp[0].commentsAndStmt), false);
  }
#line 8219 "bison-chpl-lib.cpp"
    break;

  case 303: /* catch_expr: TCATCH catch_expr_inner block_stmt  */
#line 2032 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt), false);
  }
#line 8227 "bison-chpl-lib.cpp"
    break;

  case 304: /* catch_expr: TCATCH TLP catch_expr_inner TRP block_stmt  */
#line 2036 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt), true);
  }
#line 8235 "bison-chpl-lib.cpp"
    break;

  case 305: /* catch_expr_inner: ident_def  */
#line 2043 "chpl.ypp"
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
#line 8252 "bison-chpl-lib.cpp"
    break;

  case 306: /* catch_expr_inner: ident_def TCOLON expr  */
#line 2056 "chpl.ypp"
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
#line 8269 "bison-chpl-lib.cpp"
    break;

  case 307: /* throw_stmt: TTHROW expr TSEMI  */
#line 2072 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Throw::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8279 "bison-chpl-lib.cpp"
    break;

  case 308: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 2080 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildSelectStmt((yyloc), toOwned((yyvsp[-3].expr)), (yyvsp[-1].exprList));
  }
#line 8287 "bison-chpl-lib.cpp"
    break;

  case 309: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 2084 "chpl.ypp"
  {
    auto comments = context->gatherComments((yyloc));
    auto node = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8297 "bison-chpl-lib.cpp"
    break;

  case 310: /* when_stmt_ls: %empty  */
#line 2092 "chpl.ypp"
                          { (yyval.exprList) = context->makeList(); }
#line 8303 "bison-chpl-lib.cpp"
    break;

  case 311: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 2093 "chpl.ypp"
                          { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 8309 "bison-chpl-lib.cpp"
    break;

  case 312: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 2098 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), (yyvsp[-1].exprList), (yyvsp[0].blockOrDo));
  }
#line 8317 "bison-chpl-lib.cpp"
    break;

  case 313: /* when_stmt: TOTHERWISE stmt  */
#line 2102 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=false };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8326 "bison-chpl-lib.cpp"
    break;

  case 314: /* when_stmt: TOTHERWISE TDO stmt  */
#line 2107 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=true };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8335 "bison-chpl-lib.cpp"
    break;

  case 315: /* manager_expr: expr TAS var_decl_type ident_def  */
#line 2115 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-3].expr), (yyvsp[-1].variableKind), (yylsp[0]), (yyvsp[0].uniqueStr));
    context->resetDeclState();
  }
#line 8344 "bison-chpl-lib.cpp"
    break;

  case 316: /* manager_expr: expr TAS ident_def  */
#line 2120 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-2].expr), (yylsp[0]), (yyvsp[0].uniqueStr));
  }
#line 8352 "bison-chpl-lib.cpp"
    break;

  case 317: /* manager_expr: expr  */
#line 2124 "chpl.ypp"
  {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 8360 "bison-chpl-lib.cpp"
    break;

  case 318: /* manager_expr_ls: manager_expr  */
#line 2130 "chpl.ypp"
                                        { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8366 "bison-chpl-lib.cpp"
    break;

  case 319: /* manager_expr_ls: manager_expr_ls TCOMMA manager_expr  */
#line 2131 "chpl.ypp"
                                        { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8372 "bison-chpl-lib.cpp"
    break;

  case 320: /* manage_stmt: TMANAGE manager_expr_ls do_stmt  */
#line 2136 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildManageStmt((yyloc), (yyvsp[-1].exprList), (yylsp[0]), (yyvsp[0].blockOrDo));
  }
#line 8380 "bison-chpl-lib.cpp"
    break;

  case 321: /* class_decl_stmt: class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 2145 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8389 "bison-chpl-lib.cpp"
    break;

  case 322: /* class_decl_stmt: class_start opt_inherit TLCBR error TRCBR  */
#line 2150 "chpl.ypp"
    {
      auto contents =
        context->makeList(ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), contents, (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8400 "bison-chpl-lib.cpp"
    break;

  case 323: /* class_start: class_tag ident_def  */
#line 2161 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-1]), (yyvsp[0].uniqueStr), (yyvsp[-1].astTag));
  }
#line 8408 "bison-chpl-lib.cpp"
    break;

  case 324: /* class_tag: TCLASS  */
#line 2167 "chpl.ypp"
           { (yyval.astTag) = asttags::Class; }
#line 8414 "bison-chpl-lib.cpp"
    break;

  case 325: /* class_tag: TRECORD  */
#line 2168 "chpl.ypp"
           { (yyval.astTag) = asttags::Record; }
#line 8420 "bison-chpl-lib.cpp"
    break;

  case 326: /* class_tag: TUNION  */
#line 2169 "chpl.ypp"
           { (yyval.astTag) = asttags::Union; }
#line 8426 "bison-chpl-lib.cpp"
    break;

  case 327: /* opt_inherit: %empty  */
#line 2173 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 8432 "bison-chpl-lib.cpp"
    break;

  case 328: /* opt_inherit: TCOLON expr_ls  */
#line 2174 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8438 "bison-chpl-lib.cpp"
    break;

  case 329: /* class_level_stmt_ls: %empty  */
#line 2178 "chpl.ypp"
  {
    /* nothing */
    (yyval.exprList) = context->makeList();
  }
#line 8447 "bison-chpl-lib.cpp"
    break;

  case 330: /* class_level_stmt_ls: class_level_stmt_ls class_level_stmt  */
#line 2183 "chpl.ypp"
  {
    context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8455 "bison-chpl-lib.cpp"
    break;

  case 331: /* class_level_stmt_ls: class_level_stmt_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2187 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8463 "bison-chpl-lib.cpp"
    break;

  case 332: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls class_level_stmt  */
#line 2191 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8471 "bison-chpl-lib.cpp"
    break;

  case 333: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2195 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8479 "bison-chpl-lib.cpp"
    break;

  case 334: /* enum_decl_stmt: enum_header_lcbr enum_ls TRCBR  */
#line 2202 "chpl.ypp"
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
#line 8500 "bison-chpl-lib.cpp"
    break;

  case 335: /* enum_decl_stmt: enum_header_lcbr error TRCBR  */
#line 2219 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      CommentsAndStmt cs = {parts.comments, err.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8514 "bison-chpl-lib.cpp"
    break;

  case 336: /* enum_header_lcbr: TENUM ident_def TLCBR  */
#line 2232 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-2]), (yyvsp[-1].uniqueStr), asttags::Enum);
  }
#line 8522 "bison-chpl-lib.cpp"
    break;

  case 337: /* enum_ls: enum_item  */
#line 2239 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8531 "bison-chpl-lib.cpp"
    break;

  case 338: /* enum_ls: enum_ls TCOMMA  */
#line 2244 "chpl.ypp"
  {
    (yyval.exprList) = (yyvsp[-1].exprList);
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8541 "bison-chpl-lib.cpp"
    break;

  case 339: /* $@5: %empty  */
#line 2250 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8550 "bison-chpl-lib.cpp"
    break;

  case 340: /* enum_ls: enum_ls TCOMMA $@5 enum_item  */
#line 2255 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8559 "bison-chpl-lib.cpp"
    break;

  case 341: /* enum_ls: attribute_decl_stmt_ls enum_item  */
#line 2260 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8568 "bison-chpl-lib.cpp"
    break;

  case 342: /* $@6: %empty  */
#line 2265 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8577 "bison-chpl-lib.cpp"
    break;

  case 343: /* enum_ls: enum_ls TCOMMA $@6 attribute_decl_stmt_ls enum_item  */
#line 2270 "chpl.ypp"
  {
    context->appendList((yyvsp[-4].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8586 "bison-chpl-lib.cpp"
    break;

  case 344: /* enum_item: ident_def  */
#line 2280 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[0].uniqueStr));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
    }
#line 8597 "bison-chpl-lib.cpp"
    break;

  case 345: /* enum_item: ident_def TASSIGN expr  */
#line 2287 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[-2].uniqueStr),
                                     toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
      context->clearCommentsBefore((yylsp[0]));
    }
#line 8610 "bison-chpl-lib.cpp"
    break;

  case 346: /* lambda_decl_start: TLAMBDA  */
#line 2299 "chpl.ypp"
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
#line 8626 "bison-chpl-lib.cpp"
    break;

  case 347: /* $@7: %empty  */
#line 2316 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, STR("lambda"));
    }
#line 8636 "bison-chpl-lib.cpp"
    break;

  case 348: /* lambda_decl_expr: lambda_decl_start req_formal_ls opt_ret_tag opt_type opt_throws_error opt_lifetime_where $@7 function_body_stmt  */
#line 2322 "chpl.ypp"
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
#line 8658 "bison-chpl-lib.cpp"
    break;

  case 350: /* linkage_spec: linkage_spec_empty  */
#line 2345 "chpl.ypp"
                     { (yyval.functionParts) = context->makeFunctionParts(false, false); }
#line 8664 "bison-chpl-lib.cpp"
    break;

  case 351: /* linkage_spec: TINLINE  */
#line 2346 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(true, false); }
#line 8671 "bison-chpl-lib.cpp"
    break;

  case 352: /* linkage_spec: TOVERRIDE  */
#line 2348 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(false, true); }
#line 8678 "bison-chpl-lib.cpp"
    break;

  case 353: /* opt_fn_type_formal_ls: %empty  */
#line 2353 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList(); }
#line 8684 "bison-chpl-lib.cpp"
    break;

  case 354: /* opt_fn_type_formal_ls: fn_type_formal_ls  */
#line 2354 "chpl.ypp"
                                          { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8690 "bison-chpl-lib.cpp"
    break;

  case 355: /* fn_type_formal_ls: fn_type_formal  */
#line 2358 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8696 "bison-chpl-lib.cpp"
    break;

  case 356: /* fn_type_formal_ls: fn_type_formal_ls TCOMMA fn_type_formal  */
#line 2359 "chpl.ypp"
                                          { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8702 "bison-chpl-lib.cpp"
    break;

  case 357: /* fn_type_formal: named_formal  */
#line 2364 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 8708 "bison-chpl-lib.cpp"
    break;

  case 358: /* fn_type_formal: required_intent_tag TCOLON formal_type  */
#line 2367 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yylsp[-2]), (yyvsp[-2].intentTag), (yyvsp[0].expr)); }
#line 8714 "bison-chpl-lib.cpp"
    break;

  case 359: /* fn_type_formal: formal_type  */
#line 2369 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yyvsp[0].expr)); }
#line 8720 "bison-chpl-lib.cpp"
    break;

  case 360: /* opt_fn_type_ret_type: %empty  */
#line 2373 "chpl.ypp"
                                  { (yyval.expr) = nullptr; }
#line 8726 "bison-chpl-lib.cpp"
    break;

  case 361: /* opt_fn_type_ret_type: TCOLON formal_or_ret_type_expr  */
#line 2374 "chpl.ypp"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 8732 "bison-chpl-lib.cpp"
    break;

  case 362: /* fn_type: TPROCLP opt_fn_type_formal_ls TRP opt_ret_tag opt_fn_type_ret_type opt_throws_error  */
#line 2387 "chpl.ypp"
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
#line 8751 "bison-chpl-lib.cpp"
    break;

  case 363: /* $@8: %empty  */
#line 2405 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8761 "bison-chpl-lib.cpp"
    break;

  case 364: /* fn_expr: fn_type $@8 block_stmt_body  */
#line 2411 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-2].functionParts);
    fp.isBodyNonBlockExpression = false;
    fp.body = (yyvsp[0].exprList);
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8774 "bison-chpl-lib.cpp"
    break;

  case 365: /* $@9: %empty  */
#line 2420 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8784 "bison-chpl-lib.cpp"
    break;

  case 366: /* fn_expr: fn_type TALIAS $@9 expr  */
#line 2426 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-3].functionParts);
    fp.isBodyNonBlockExpression = true;
    fp.body = context->makeList((yyvsp[0].expr));
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8797 "bison-chpl-lib.cpp"
    break;

  case 367: /* fn_decl_stmt_complete: fn_decl_stmt  */
#line 2438 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildRegularFunctionDecl((yyloc), (yyvsp[0].functionParts));
    }
#line 8805 "bison-chpl-lib.cpp"
    break;

  case 368: /* $@10: %empty  */
#line 2447 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-4].functionParts).errorExpr == nullptr) {
      context->enterScope(asttags::Function, (yyvsp[-4].functionParts).name->name());
    }
  }
#line 8819 "bison-chpl-lib.cpp"
    break;

  case 369: /* fn_decl_stmt: fn_decl_stmt_inner opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where $@10 opt_function_body_stmt  */
#line 2457 "chpl.ypp"
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
#line 8842 "bison-chpl-lib.cpp"
    break;

  case 370: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_ident opt_formal_ls  */
#line 2479 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8854 "bison-chpl-lib.cpp"
    break;

  case 371: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 2487 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8866 "bison-chpl-lib.cpp"
    break;

  case 372: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 2495 "chpl.ypp"
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
#line 8881 "bison-chpl-lib.cpp"
    break;

  case 373: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 2506 "chpl.ypp"
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
#line 8896 "bison-chpl-lib.cpp"
    break;

  case 374: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag error opt_formal_ls  */
#line 2517 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.errorExpr = ErroneousExpression::build(BUILDER, LOC((yyloc))).release();
      (yyval.functionParts) = fp;
    }
#line 8906 "bison-chpl-lib.cpp"
    break;

  case 375: /* fn_decl_stmt_start: linkage_spec proc_iter_or_op  */
#line 2526 "chpl.ypp"
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
#line 8922 "bison-chpl-lib.cpp"
    break;

  case 377: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 2541 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[-1].expr); }
#line 8928 "bison-chpl-lib.cpp"
    break;

  case 380: /* fn_ident: ident_def TBANG  */
#line 2548 "chpl.ypp"
  {
    std::string s = (yyvsp[-1].uniqueStr).c_str();
    s += "!";
    (yyval.uniqueStr) = STR(s.c_str());
  }
#line 8938 "bison-chpl-lib.cpp"
    break;

  case 420: /* formal_var_arg_expr: TDOTDOTDOT  */
#line 2605 "chpl.ypp"
                         { (yyval.expr) = nullptr; }
#line 8944 "bison-chpl-lib.cpp"
    break;

  case 421: /* formal_var_arg_expr: TDOTDOTDOT expr  */
#line 2606 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 8950 "bison-chpl-lib.cpp"
    break;

  case 422: /* opt_formal_ls: %empty  */
#line 2610 "chpl.ypp"
                     { (yyval.exprList) = context->parenlessMarker; }
#line 8956 "bison-chpl-lib.cpp"
    break;

  case 423: /* opt_formal_ls: TLP formal_ls TRP  */
#line 2611 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 8962 "bison-chpl-lib.cpp"
    break;

  case 424: /* req_formal_ls: TLP TRP  */
#line 2615 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8968 "bison-chpl-lib.cpp"
    break;

  case 425: /* req_formal_ls: TLP formal_ls_inner TRP  */
#line 2616 "chpl.ypp"
                            { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 8974 "bison-chpl-lib.cpp"
    break;

  case 426: /* formal_ls_inner: formal  */
#line 2620 "chpl.ypp"
                                 { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8980 "bison-chpl-lib.cpp"
    break;

  case 427: /* formal_ls_inner: formal_ls_inner TCOMMA formal  */
#line 2621 "chpl.ypp"
                                 { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8986 "bison-chpl-lib.cpp"
    break;

  case 428: /* formal_ls: %empty  */
#line 2625 "chpl.ypp"
                           { (yyval.exprList) = context->makeList(); }
#line 8992 "bison-chpl-lib.cpp"
    break;

  case 429: /* formal_ls: formal_ls_inner  */
#line 2626 "chpl.ypp"
                           { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8998 "bison-chpl-lib.cpp"
    break;

  case 433: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2640 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9006 "bison-chpl-lib.cpp"
    break;

  case 434: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2645 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9014 "bison-chpl-lib.cpp"
    break;

  case 435: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2650 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9022 "bison-chpl-lib.cpp"
    break;

  case 436: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2655 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9030 "bison-chpl-lib.cpp"
    break;

  case 437: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type opt_init_expr  */
#line 2660 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleFormal((yyloc), (yyvsp[-5].intentTag), (yyvsp[-3].exprList), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9038 "bison-chpl-lib.cpp"
    break;

  case 438: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type formal_var_arg_expr  */
#line 2665 "chpl.ypp"
  {
    (yyval.expr) = context->syntax((yyloc), "variable-length argument may not be grouped in a tuple.");
  }
#line 9046 "bison-chpl-lib.cpp"
    break;

  case 439: /* opt_formal_intent_tag: %empty  */
#line 2671 "chpl.ypp"
             {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = Formal::DEFAULT_INTENT;
  }
#line 9055 "bison-chpl-lib.cpp"
    break;

  case 440: /* opt_formal_intent_tag: required_intent_tag  */
#line 2676 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = (yyvsp[0].intentTag);
  }
#line 9064 "bison-chpl-lib.cpp"
    break;

  case 441: /* required_intent_tag: TIN  */
#line 2683 "chpl.ypp"
              { (yyval.intentTag) = Formal::IN; }
#line 9070 "bison-chpl-lib.cpp"
    break;

  case 442: /* required_intent_tag: TINOUT  */
#line 2684 "chpl.ypp"
              { (yyval.intentTag) = Formal::INOUT; }
#line 9076 "bison-chpl-lib.cpp"
    break;

  case 443: /* required_intent_tag: TOUT  */
#line 2685 "chpl.ypp"
              { (yyval.intentTag) = Formal::OUT; }
#line 9082 "bison-chpl-lib.cpp"
    break;

  case 444: /* required_intent_tag: TCONST TIN  */
#line 2686 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_IN; }
#line 9088 "bison-chpl-lib.cpp"
    break;

  case 445: /* required_intent_tag: TCONST TREF  */
#line 2687 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_REF; }
#line 9094 "bison-chpl-lib.cpp"
    break;

  case 446: /* required_intent_tag: TCONST  */
#line 2688 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST; }
#line 9100 "bison-chpl-lib.cpp"
    break;

  case 447: /* required_intent_tag: TPARAM  */
#line 2689 "chpl.ypp"
              { (yyval.intentTag) = Formal::PARAM; }
#line 9106 "bison-chpl-lib.cpp"
    break;

  case 448: /* required_intent_tag: TREF  */
#line 2690 "chpl.ypp"
              { (yyval.intentTag) = Formal::REF; }
#line 9112 "bison-chpl-lib.cpp"
    break;

  case 449: /* required_intent_tag: TTYPE  */
#line 2691 "chpl.ypp"
              { (yyval.intentTag) = Formal::TYPE; }
#line 9118 "bison-chpl-lib.cpp"
    break;

  case 450: /* opt_this_intent_tag: %empty  */
#line 2695 "chpl.ypp"
                { (yyval.intentTag) = Formal::DEFAULT_INTENT; }
#line 9124 "bison-chpl-lib.cpp"
    break;

  case 451: /* opt_this_intent_tag: TPARAM  */
#line 2696 "chpl.ypp"
                { (yyval.intentTag) = Formal::PARAM; }
#line 9130 "bison-chpl-lib.cpp"
    break;

  case 452: /* opt_this_intent_tag: TREF  */
#line 2697 "chpl.ypp"
                { (yyval.intentTag) = Formal::REF; }
#line 9136 "bison-chpl-lib.cpp"
    break;

  case 453: /* opt_this_intent_tag: TCONST TREF  */
#line 2698 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST_REF; }
#line 9142 "bison-chpl-lib.cpp"
    break;

  case 454: /* opt_this_intent_tag: TCONST  */
#line 2699 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST; }
#line 9148 "bison-chpl-lib.cpp"
    break;

  case 455: /* opt_this_intent_tag: TTYPE  */
#line 2700 "chpl.ypp"
                { (yyval.intentTag) = Formal::TYPE; }
#line 9154 "bison-chpl-lib.cpp"
    break;

  case 456: /* proc_iter_or_op: TPROC  */
#line 2704 "chpl.ypp"
            { (yyval.functionKind) = Function::PROC; }
#line 9160 "bison-chpl-lib.cpp"
    break;

  case 457: /* proc_iter_or_op: TITER  */
#line 2705 "chpl.ypp"
            { (yyval.functionKind) = Function::ITER; }
#line 9166 "bison-chpl-lib.cpp"
    break;

  case 458: /* proc_iter_or_op: TOPERATOR  */
#line 2706 "chpl.ypp"
            { (yyval.functionKind) = Function::OPERATOR; }
#line 9172 "bison-chpl-lib.cpp"
    break;

  case 459: /* opt_ret_tag: %empty  */
#line 2710 "chpl.ypp"
                    { (yyval.returnTag) = Function::DEFAULT_RETURN_INTENT; }
#line 9178 "bison-chpl-lib.cpp"
    break;

  case 460: /* opt_ret_tag: TOUT  */
#line 2711 "chpl.ypp"
                    { (yyval.returnTag) = Function::OUT; }
#line 9184 "bison-chpl-lib.cpp"
    break;

  case 461: /* opt_ret_tag: TCONST  */
#line 2712 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST; }
#line 9190 "bison-chpl-lib.cpp"
    break;

  case 462: /* opt_ret_tag: TCONST TREF  */
#line 2713 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST_REF; }
#line 9196 "bison-chpl-lib.cpp"
    break;

  case 463: /* opt_ret_tag: TREF  */
#line 2714 "chpl.ypp"
                    { (yyval.returnTag) = Function::REF; }
#line 9202 "bison-chpl-lib.cpp"
    break;

  case 464: /* opt_ret_tag: TPARAM  */
#line 2715 "chpl.ypp"
                    { (yyval.returnTag) = Function::PARAM; }
#line 9208 "bison-chpl-lib.cpp"
    break;

  case 465: /* opt_ret_tag: TTYPE  */
#line 2716 "chpl.ypp"
                    { (yyval.returnTag) = Function::TYPE; }
#line 9214 "bison-chpl-lib.cpp"
    break;

  case 466: /* opt_throws_error: %empty  */
#line 2720 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_DEFAULT; }
#line 9220 "bison-chpl-lib.cpp"
    break;

  case 467: /* opt_throws_error: TTHROWS  */
#line 2721 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_THROWS; }
#line 9226 "bison-chpl-lib.cpp"
    break;

  case 468: /* opt_function_body_stmt: TSEMI  */
#line 2724 "chpl.ypp"
                      { context->clearComments(); (yyval.exprList) = nullptr; }
#line 9232 "bison-chpl-lib.cpp"
    break;

  case 469: /* opt_function_body_stmt: function_body_stmt  */
#line 2725 "chpl.ypp"
                      { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9238 "bison-chpl-lib.cpp"
    break;

  case 470: /* function_body_stmt: block_stmt_body  */
#line 2729 "chpl.ypp"
                    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9244 "bison-chpl-lib.cpp"
    break;

  case 471: /* function_body_stmt: TDO toplevel_stmt  */
#line 2730 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt)); }
#line 9250 "bison-chpl-lib.cpp"
    break;

  case 472: /* function_body_stmt: return_stmt  */
#line 2731 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt), &((yylsp[0]))); }
#line 9256 "bison-chpl-lib.cpp"
    break;

  case 473: /* query_expr: TQUERIEDIDENT  */
#line 2735 "chpl.ypp"
                  { (yyval.expr) = context->buildTypeQuery((yyloc), (yyvsp[0].uniqueStr)); }
#line 9262 "bison-chpl-lib.cpp"
    break;

  case 474: /* opt_lifetime_where: %empty  */
#line 2740 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, nullptr); }
#line 9268 "bison-chpl-lib.cpp"
    break;

  case 475: /* opt_lifetime_where: TWHERE expr  */
#line 2742 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), nullptr); }
#line 9274 "bison-chpl-lib.cpp"
    break;

  case 476: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 2744 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, (yyvsp[0].exprList)); }
#line 9280 "bison-chpl-lib.cpp"
    break;

  case 477: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 2746 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].expr), (yyvsp[0].exprList)); }
#line 9286 "bison-chpl-lib.cpp"
    break;

  case 478: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 2748 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), (yyvsp[-2].exprList)); }
#line 9292 "bison-chpl-lib.cpp"
    break;

  case 479: /* lifetime_components_expr: lifetime_expr  */
#line 2753 "chpl.ypp"
  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9298 "bison-chpl-lib.cpp"
    break;

  case 480: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 2755 "chpl.ypp"
  { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9304 "bison-chpl-lib.cpp"
    break;

  case 481: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 2760 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9310 "bison-chpl-lib.cpp"
    break;

  case 482: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 2762 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9316 "bison-chpl-lib.cpp"
    break;

  case 483: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 2764 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9322 "bison-chpl-lib.cpp"
    break;

  case 484: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 2766 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9328 "bison-chpl-lib.cpp"
    break;

  case 485: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 2768 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9334 "bison-chpl-lib.cpp"
    break;

  case 486: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 2770 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9340 "bison-chpl-lib.cpp"
    break;

  case 487: /* lifetime_expr: TRETURN lifetime_ident  */
#line 2772 "chpl.ypp"
    { (yyval.expr) = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[0].expr))).release(); }
#line 9346 "bison-chpl-lib.cpp"
    break;

  case 488: /* lifetime_ident: TIDENT  */
#line 2776 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9352 "bison-chpl-lib.cpp"
    break;

  case 489: /* lifetime_ident: TTHIS  */
#line 2777 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9358 "bison-chpl-lib.cpp"
    break;

  case 490: /* type_alias_decl_stmt: type_alias_decl_stmt_start type_alias_decl_stmt_inner_ls TSEMI  */
#line 2782 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9367 "bison-chpl-lib.cpp"
    break;

  case 491: /* type_alias_decl_stmt_start: TTYPE  */
#line 2791 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
  }
#line 9375 "bison-chpl-lib.cpp"
    break;

  case 492: /* type_alias_decl_stmt_start: TCONFIG TTYPE  */
#line 2795 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteIsVarDeclConfig(true);
  }
#line 9384 "bison-chpl-lib.cpp"
    break;

  case 493: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner  */
#line 2803 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
  }
#line 9392 "bison-chpl-lib.cpp"
    break;

  case 494: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner_ls TCOMMA type_alias_decl_stmt_inner  */
#line 2807 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 9400 "bison-chpl-lib.cpp"
    break;

  case 495: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 2814 "chpl.ypp"
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
#line 9422 "bison-chpl-lib.cpp"
    break;

  case 496: /* opt_init_type: %empty  */
#line 2834 "chpl.ypp"
  { (yyval.expr) = nullptr; }
#line 9428 "bison-chpl-lib.cpp"
    break;

  case 497: /* opt_init_type: TASSIGN expr  */
#line 2836 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 9434 "bison-chpl-lib.cpp"
    break;

  case 498: /* var_decl_type: TPARAM  */
#line 2840 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::PARAM); }
#line 9440 "bison-chpl-lib.cpp"
    break;

  case 499: /* var_decl_type: TCONST TREF  */
#line 2841 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST_REF); }
#line 9446 "bison-chpl-lib.cpp"
    break;

  case 500: /* var_decl_type: TREF  */
#line 2842 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::REF); }
#line 9452 "bison-chpl-lib.cpp"
    break;

  case 501: /* var_decl_type: TCONST  */
#line 2843 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST); }
#line 9458 "bison-chpl-lib.cpp"
    break;

  case 502: /* var_decl_type: TVAR  */
#line 2844 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::VAR); }
#line 9464 "bison-chpl-lib.cpp"
    break;

  case 503: /* $@11: %empty  */
#line 2849 "chpl.ypp"
  {
    // Use a mid-rule action to thread along 'isVarDeclConfig'.
    context->noteIsVarDeclConfig(true);
  }
#line 9473 "bison-chpl-lib.cpp"
    break;

  case 504: /* var_decl_stmt: TCONFIG $@11 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2853 "chpl.ypp"
                                             {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9482 "bison-chpl-lib.cpp"
    break;

  case 505: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2858 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9491 "bison-chpl-lib.cpp"
    break;

  case 506: /* var_decl_stmt_inner_ls: var_decl_stmt_inner  */
#line 2866 "chpl.ypp"
    {
      (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    }
#line 9499 "bison-chpl-lib.cpp"
    break;

  case 507: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 2870 "chpl.ypp"
    {
      (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
    }
#line 9507 "bison-chpl-lib.cpp"
    break;

  case 508: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 2877 "chpl.ypp"
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
#line 9529 "bison-chpl-lib.cpp"
    break;

  case 509: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 2895 "chpl.ypp"
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
#line 9549 "bison-chpl-lib.cpp"
    break;

  case 510: /* tuple_var_decl_component: TUNDERSCORE  */
#line 2914 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9557 "bison-chpl-lib.cpp"
    break;

  case 511: /* tuple_var_decl_component: ident_def  */
#line 2918 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9565 "bison-chpl-lib.cpp"
    break;

  case 512: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 2922 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[-1].exprList));
  }
#line 9573 "bison-chpl-lib.cpp"
    break;

  case 513: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 2929 "chpl.ypp"
    { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9579 "bison-chpl-lib.cpp"
    break;

  case 514: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA  */
#line 2931 "chpl.ypp"
    { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9585 "bison-chpl-lib.cpp"
    break;

  case 515: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA tuple_var_decl_component  */
#line 2933 "chpl.ypp"
    { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9591 "bison-chpl-lib.cpp"
    break;

  case 516: /* opt_init_expr: %empty  */
#line 2939 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9597 "bison-chpl-lib.cpp"
    break;

  case 517: /* opt_init_expr: TASSIGN TNOINIT  */
#line 2940 "chpl.ypp"
                        { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9603 "bison-chpl-lib.cpp"
    break;

  case 518: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 2941 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9609 "bison-chpl-lib.cpp"
    break;

  case 519: /* formal_or_ret_type_expr: expr  */
#line 2945 "chpl.ypp"
                        { (yyval.expr) = context->sanitizeArrayType((yyloc), (yyvsp[0].expr)); }
#line 9615 "bison-chpl-lib.cpp"
    break;

  case 520: /* ret_type: formal_or_ret_type_expr  */
#line 2949 "chpl.ypp"
                          { (yyval.expr) = (yyvsp[0].expr); }
#line 9621 "bison-chpl-lib.cpp"
    break;

  case 521: /* ret_type: reserved_type_ident_use  */
#line 2950 "chpl.ypp"
                          { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9627 "bison-chpl-lib.cpp"
    break;

  case 522: /* ret_type: error  */
#line 2951 "chpl.ypp"
                          { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9633 "bison-chpl-lib.cpp"
    break;

  case 523: /* colon_ret_type: TCOLON ret_type  */
#line 2955 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 9639 "bison-chpl-lib.cpp"
    break;

  case 524: /* colon_ret_type: error  */
#line 2956 "chpl.ypp"
                  { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9645 "bison-chpl-lib.cpp"
    break;

  case 525: /* opt_ret_type: %empty  */
#line 2960 "chpl.ypp"
                    { (yyval.expr) = nullptr; }
#line 9651 "bison-chpl-lib.cpp"
    break;

  case 527: /* opt_type: %empty  */
#line 2965 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9657 "bison-chpl-lib.cpp"
    break;

  case 528: /* opt_type: TCOLON expr  */
#line 2966 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9663 "bison-chpl-lib.cpp"
    break;

  case 529: /* opt_type: TCOLON reserved_type_ident_use  */
#line 2967 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9669 "bison-chpl-lib.cpp"
    break;

  case 530: /* opt_type: error  */
#line 2968 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9675 "bison-chpl-lib.cpp"
    break;

  case 531: /* formal_type: formal_or_ret_type_expr  */
#line 2972 "chpl.ypp"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 9681 "bison-chpl-lib.cpp"
    break;

  case 532: /* formal_type: reserved_type_ident_use  */
#line 2973 "chpl.ypp"
                            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9687 "bison-chpl-lib.cpp"
    break;

  case 533: /* colon_formal_type: TCOLON formal_type  */
#line 2977 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9693 "bison-chpl-lib.cpp"
    break;

  case 534: /* opt_colon_formal_type: %empty  */
#line 2981 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9699 "bison-chpl-lib.cpp"
    break;

  case 535: /* opt_colon_formal_type: colon_formal_type  */
#line 2982 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9705 "bison-chpl-lib.cpp"
    break;

  case 536: /* expr_ls: expr  */
#line 2988 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9711 "bison-chpl-lib.cpp"
    break;

  case 537: /* expr_ls: expr_ls TCOMMA expr  */
#line 2989 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9717 "bison-chpl-lib.cpp"
    break;

  case 538: /* tuple_component: TUNDERSCORE  */
#line 2993 "chpl.ypp"
                { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9723 "bison-chpl-lib.cpp"
    break;

  case 539: /* tuple_component: opt_try_expr  */
#line 2994 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 9729 "bison-chpl-lib.cpp"
    break;

  case 540: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 2999 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList(context->makeList((yyvsp[-2].expr)), (yyvsp[0].expr));
  }
#line 9737 "bison-chpl-lib.cpp"
    break;

  case 541: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 3003 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9745 "bison-chpl-lib.cpp"
    break;

  case 542: /* opt_actual_ls: %empty  */
#line 3009 "chpl.ypp"
             { (yyval.maybeNamedActualList) = new MaybeNamedActualList(); }
#line 9751 "bison-chpl-lib.cpp"
    break;

  case 543: /* opt_actual_ls: actual_ls  */
#line 3010 "chpl.ypp"
             { (yyval.maybeNamedActualList) = (yyvsp[0].maybeNamedActualList); }
#line 9757 "bison-chpl-lib.cpp"
    break;

  case 544: /* actual_ls: actual_expr  */
#line 3015 "chpl.ypp"
    { MaybeNamedActualList* lst = new MaybeNamedActualList();
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9766 "bison-chpl-lib.cpp"
    break;

  case 545: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 3020 "chpl.ypp"
    {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9776 "bison-chpl-lib.cpp"
    break;

  case 546: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 3028 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 9782 "bison-chpl-lib.cpp"
    break;

  case 547: /* actual_expr: opt_try_expr  */
#line 3029 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 9788 "bison-chpl-lib.cpp"
    break;

  case 548: /* ident_expr: ident_use  */
#line 3033 "chpl.ypp"
                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9794 "bison-chpl-lib.cpp"
    break;

  case 549: /* ident_expr: scalar_type  */
#line 3034 "chpl.ypp"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9800 "bison-chpl-lib.cpp"
    break;

  case 555: /* sub_type_level_expr: TSINGLE expr  */
#line 3047 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9806 "bison-chpl-lib.cpp"
    break;

  case 556: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 3049 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9812 "bison-chpl-lib.cpp"
    break;

  case 557: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 3051 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9818 "bison-chpl-lib.cpp"
    break;

  case 558: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 3053 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9824 "bison-chpl-lib.cpp"
    break;

  case 559: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP actual_expr TRP  */
#line 3055 "chpl.ypp"
  {
    auto locInner = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    auto inner = context->buildTypeConstructor(locInner, (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActual));
    (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-4].uniqueStr), inner);
  }
#line 9834 "bison-chpl-lib.cpp"
    break;

  case 560: /* sub_type_level_expr: TATOMIC expr  */
#line 3061 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9840 "bison-chpl-lib.cpp"
    break;

  case 561: /* sub_type_level_expr: TSYNC expr  */
#line 3063 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9846 "bison-chpl-lib.cpp"
    break;

  case 562: /* sub_type_level_expr: TOWNED  */
#line 3066 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9852 "bison-chpl-lib.cpp"
    break;

  case 563: /* sub_type_level_expr: TOWNED expr  */
#line 3068 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9858 "bison-chpl-lib.cpp"
    break;

  case 564: /* sub_type_level_expr: TUNMANAGED  */
#line 3070 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9864 "bison-chpl-lib.cpp"
    break;

  case 565: /* sub_type_level_expr: TUNMANAGED expr  */
#line 3072 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9870 "bison-chpl-lib.cpp"
    break;

  case 566: /* sub_type_level_expr: TSHARED  */
#line 3074 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9876 "bison-chpl-lib.cpp"
    break;

  case 567: /* sub_type_level_expr: TSHARED expr  */
#line 3076 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9882 "bison-chpl-lib.cpp"
    break;

  case 568: /* sub_type_level_expr: TBORROWED  */
#line 3078 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9888 "bison-chpl-lib.cpp"
    break;

  case 569: /* sub_type_level_expr: TBORROWED expr  */
#line 3080 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9894 "bison-chpl-lib.cpp"
    break;

  case 570: /* sub_type_level_expr: TCLASS  */
#line 3082 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9900 "bison-chpl-lib.cpp"
    break;

  case 571: /* sub_type_level_expr: TRECORD  */
#line 3084 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9906 "bison-chpl-lib.cpp"
    break;

  case 572: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 3089 "chpl.ypp"
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
#line 9921 "bison-chpl-lib.cpp"
    break;

  case 573: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 3100 "chpl.ypp"
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
#line 9936 "bison-chpl-lib.cpp"
    break;

  case 574: /* for_expr: TFOR expr TDO expr  */
#line 3111 "chpl.ypp"
  {
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 9950 "bison-chpl-lib.cpp"
    break;

  case 575: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
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
#line 9970 "bison-chpl-lib.cpp"
    break;

  case 576: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3137 "chpl.ypp"
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
#line 9990 "bison-chpl-lib.cpp"
    break;

  case 577: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 3153 "chpl.ypp"
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
#line 10010 "bison-chpl-lib.cpp"
    break;

  case 578: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 3169 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10023 "bison-chpl-lib.cpp"
    break;

  case 579: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 3178 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10036 "bison-chpl-lib.cpp"
    break;

  case 580: /* for_expr: TFORALL expr TDO expr  */
#line 3187 "chpl.ypp"
  {
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10048 "bison-chpl-lib.cpp"
    break;

  case 581: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 3195 "chpl.ypp"
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
#line 10066 "bison-chpl-lib.cpp"
    break;

  case 582: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3209 "chpl.ypp"
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
#line 10084 "bison-chpl-lib.cpp"
    break;

  case 583: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 3223 "chpl.ypp"
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
#line 10102 "bison-chpl-lib.cpp"
    break;

  case 584: /* bracket_loop_expr: TLSBR TRSBR  */
#line 3240 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc));
  }
#line 10110 "bison-chpl-lib.cpp"
    break;

  case 585: /* bracket_loop_expr: TLSBR TRSBR expr  */
#line 3244 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-1]), (yyvsp[0].expr));
  }
#line 10118 "bison-chpl-lib.cpp"
    break;

  case 586: /* bracket_loop_expr: TLSBR expr_ls TRSBR expr  */
#line 3248 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10126 "bison-chpl-lib.cpp"
    break;

  case 587: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 3252 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10134 "bison-chpl-lib.cpp"
    break;

  case 588: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 3256 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10142 "bison-chpl-lib.cpp"
    break;

  case 589: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 3260 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10150 "bison-chpl-lib.cpp"
    break;

  case 590: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 3264 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10158 "bison-chpl-lib.cpp"
    break;

  case 591: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 3271 "chpl.ypp"
  {
    auto node  = Conditional::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[-2]), (yyvsp[-2].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                    /*isExpressionLevel*/ true);
    (yyval.expr) = node.release();
  }
#line 10172 "bison-chpl-lib.cpp"
    break;

  case 592: /* nil_expr: TNIL  */
#line 3288 "chpl.ypp"
            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10178 "bison-chpl-lib.cpp"
    break;

  case 600: /* opt_task_intent_ls: %empty  */
#line 3306 "chpl.ypp"
                                { (yyval.withClause) = nullptr; }
#line 10184 "bison-chpl-lib.cpp"
    break;

  case 601: /* opt_task_intent_ls: task_intent_clause  */
#line 3307 "chpl.ypp"
                                { (yyval.withClause) = (yyvsp[0].withClause); }
#line 10190 "bison-chpl-lib.cpp"
    break;

  case 602: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 3312 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10200 "bison-chpl-lib.cpp"
    break;

  case 603: /* task_intent_ls: intent_expr  */
#line 3320 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10206 "bison-chpl-lib.cpp"
    break;

  case 604: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 3321 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10212 "bison-chpl-lib.cpp"
    break;

  case 605: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 3326 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10222 "bison-chpl-lib.cpp"
    break;

  case 606: /* forall_intent_ls: intent_expr  */
#line 3334 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10228 "bison-chpl-lib.cpp"
    break;

  case 607: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 3335 "chpl.ypp"
                                       { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10234 "bison-chpl-lib.cpp"
    break;

  case 608: /* intent_expr: task_var_prefix ident_expr opt_type opt_init_expr  */
#line 3340 "chpl.ypp"
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
#line 10252 "bison-chpl-lib.cpp"
    break;

  case 609: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 3354 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10260 "bison-chpl-lib.cpp"
    break;

  case 610: /* intent_expr: expr TREDUCE ident_expr  */
#line 3358 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10268 "bison-chpl-lib.cpp"
    break;

  case 611: /* task_var_prefix: TCONST  */
#line 3364 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST;     }
#line 10274 "bison-chpl-lib.cpp"
    break;

  case 612: /* task_var_prefix: TIN  */
#line 3365 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::IN;        }
#line 10280 "bison-chpl-lib.cpp"
    break;

  case 613: /* task_var_prefix: TCONST TIN  */
#line 3366 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_IN;  }
#line 10286 "bison-chpl-lib.cpp"
    break;

  case 614: /* task_var_prefix: TREF  */
#line 3367 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::REF;       }
#line 10292 "bison-chpl-lib.cpp"
    break;

  case 615: /* task_var_prefix: TCONST TREF  */
#line 3368 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_REF; }
#line 10298 "bison-chpl-lib.cpp"
    break;

  case 616: /* task_var_prefix: TVAR  */
#line 3369 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::VAR;       }
#line 10304 "bison-chpl-lib.cpp"
    break;

  case 617: /* new_maybe_decorated: TNEW  */
#line 3374 "chpl.ypp"
    { (yyval.newManagement) = New::DEFAULT_MANAGEMENT; }
#line 10310 "bison-chpl-lib.cpp"
    break;

  case 618: /* new_maybe_decorated: TNEW TOWNED  */
#line 3376 "chpl.ypp"
    { (yyval.newManagement) = New::OWNED; }
#line 10316 "bison-chpl-lib.cpp"
    break;

  case 619: /* new_maybe_decorated: TNEW TSHARED  */
#line 3378 "chpl.ypp"
    { (yyval.newManagement) = New::SHARED; }
#line 10322 "bison-chpl-lib.cpp"
    break;

  case 620: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 3380 "chpl.ypp"
    { (yyval.newManagement) = New::UNMANAGED; }
#line 10328 "bison-chpl-lib.cpp"
    break;

  case 621: /* new_maybe_decorated: TNEW TBORROWED  */
#line 3382 "chpl.ypp"
    { (yyval.newManagement) = New::BORROWED; }
#line 10334 "bison-chpl-lib.cpp"
    break;

  case 622: /* new_expr: new_maybe_decorated expr  */
#line 3388 "chpl.ypp"
  {
    (yyval.expr) = context->buildNewExpr((yyloc), (yyvsp[-1].newManagement), (yyvsp[0].expr));
  }
#line 10342 "bison-chpl-lib.cpp"
    break;

  case 623: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3395 "chpl.ypp"
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
#line 10358 "bison-chpl-lib.cpp"
    break;

  case 624: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3407 "chpl.ypp"
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
#line 10374 "bison-chpl-lib.cpp"
    break;

  case 625: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3419 "chpl.ypp"
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
#line 10391 "bison-chpl-lib.cpp"
    break;

  case 626: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3432 "chpl.ypp"
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
#line 10409 "bison-chpl-lib.cpp"
    break;

  case 627: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 3449 "chpl.ypp"
  {
    (yyval.expr) = context->buildLetExpr((yyloc), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10417 "bison-chpl-lib.cpp"
    break;

  case 628: /* range_literal_expr: expr TDOTDOT expr  */
#line 3456 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10426 "bison-chpl-lib.cpp"
    break;

  case 629: /* range_literal_expr: expr TDOTDOTOPENHIGH expr  */
#line 3461 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10435 "bison-chpl-lib.cpp"
    break;

  case 630: /* range_literal_expr: expr TDOTDOT  */
#line 3466 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-1].expr)),
                      /*upperBound*/ nullptr).release();
  }
#line 10444 "bison-chpl-lib.cpp"
    break;

  case 631: /* range_literal_expr: TDOTDOT expr  */
#line 3471 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10454 "bison-chpl-lib.cpp"
    break;

  case 632: /* range_literal_expr: TDOTDOTOPENHIGH expr  */
#line 3477 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10464 "bison-chpl-lib.cpp"
    break;

  case 633: /* range_literal_expr: TDOTDOT  */
#line 3483 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      /*upperBound*/ nullptr).release();
  }
#line 10474 "bison-chpl-lib.cpp"
    break;

  case 634: /* cast_expr: expr TCOLON expr  */
#line 3513 "chpl.ypp"
  {
    (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
  }
#line 10482 "bison-chpl-lib.cpp"
    break;

  case 635: /* tuple_expand_expr: TLP TDOTDOTDOT expr TRP  */
#line 3520 "chpl.ypp"
  {
    (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
  }
#line 10490 "bison-chpl-lib.cpp"
    break;

  case 636: /* super_expr: fn_expr  */
#line 3526 "chpl.ypp"
          { (yyval.expr) = context->buildFunctionExpr((yyloc), (yyvsp[0].functionParts)); }
#line 10496 "bison-chpl-lib.cpp"
    break;

  case 640: /* expr: sub_type_level_expr TQUESTION  */
#line 3535 "chpl.ypp"
  { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10502 "bison-chpl-lib.cpp"
    break;

  case 641: /* expr: TQUESTION  */
#line 3537 "chpl.ypp"
  { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10508 "bison-chpl-lib.cpp"
    break;

  case 645: /* expr: fn_type  */
#line 3542 "chpl.ypp"
  { (yyval.expr) = context->buildFunctionType((yyloc), (yyvsp[0].functionParts)); }
#line 10514 "bison-chpl-lib.cpp"
    break;

  case 655: /* opt_expr: %empty  */
#line 3556 "chpl.ypp"
                  { (yyval.expr) = nullptr; }
#line 10520 "bison-chpl-lib.cpp"
    break;

  case 656: /* opt_expr: expr  */
#line 3557 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10526 "bison-chpl-lib.cpp"
    break;

  case 657: /* opt_try_expr: TTRY expr  */
#line 3561 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), false); }
#line 10532 "bison-chpl-lib.cpp"
    break;

  case 658: /* opt_try_expr: TTRYBANG expr  */
#line 3562 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), true); }
#line 10538 "bison-chpl-lib.cpp"
    break;

  case 659: /* opt_try_expr: super_expr  */
#line 3563 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10544 "bison-chpl-lib.cpp"
    break;

  case 665: /* call_base_expr: expr TBANG  */
#line 3580 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                             STR("postfix!"),
                                                             (yyvsp[-1].expr)); }
#line 10552 "bison-chpl-lib.cpp"
    break;

  case 666: /* call_base_expr: sub_type_level_expr TQUESTION  */
#line 3583 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10558 "bison-chpl-lib.cpp"
    break;

  case 669: /* call_expr: call_base_expr TLP opt_actual_ls TRP  */
#line 3590 "chpl.ypp"
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
#line 10574 "bison-chpl-lib.cpp"
    break;

  case 670: /* call_expr: call_base_expr TLSBR opt_actual_ls TRSBR  */
#line 3602 "chpl.ypp"
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
#line 10590 "bison-chpl-lib.cpp"
    break;

  case 671: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 3614 "chpl.ypp"
    {
      (yyval.expr) = context->buildPrimCall((yyloc), (yyvsp[-1].maybeNamedActualList));
    }
#line 10598 "bison-chpl-lib.cpp"
    break;

  case 672: /* dot_expr: expr TDOT ident_use  */
#line 3621 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10604 "bison-chpl-lib.cpp"
    break;

  case 673: /* dot_expr: expr TDOT TTYPE  */
#line 3623 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10610 "bison-chpl-lib.cpp"
    break;

  case 674: /* dot_expr: expr TDOT TDOMAIN  */
#line 3625 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10616 "bison-chpl-lib.cpp"
    break;

  case 675: /* dot_expr: expr TDOT TLOCALE  */
#line 3627 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10622 "bison-chpl-lib.cpp"
    break;

  case 676: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 3629 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         false).release();
    }
#line 10632 "bison-chpl-lib.cpp"
    break;

  case 677: /* dot_expr: expr TDOT TBYTES TLSBR TRSBR  */
#line 3635 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         true).release();
    }
#line 10642 "bison-chpl-lib.cpp"
    break;

  case 678: /* parenthesized_expr: TLP tuple_component TRP  */
#line 3647 "chpl.ypp"
                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 10648 "bison-chpl-lib.cpp"
    break;

  case 679: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 3649 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consume((yyvsp[-2].expr))).release();
  }
#line 10656 "bison-chpl-lib.cpp"
    break;

  case 680: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 3653 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10664 "bison-chpl-lib.cpp"
    break;

  case 681: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 3657 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10672 "bison-chpl-lib.cpp"
    break;

  case 682: /* bool_literal: TFALSE  */
#line 3663 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), false).release(); }
#line 10678 "bison-chpl-lib.cpp"
    break;

  case 683: /* bool_literal: TTRUE  */
#line 3664 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), true).release(); }
#line 10684 "bison-chpl-lib.cpp"
    break;

  case 684: /* str_bytes_literal: STRINGLITERAL  */
#line 3668 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10690 "bison-chpl-lib.cpp"
    break;

  case 685: /* str_bytes_literal: BYTESLITERAL  */
#line 3669 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10696 "bison-chpl-lib.cpp"
    break;

  case 688: /* literal_expr: INTLITERAL  */
#line 3675 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), INTLITERAL); }
#line 10702 "bison-chpl-lib.cpp"
    break;

  case 689: /* literal_expr: REALLITERAL  */
#line 3676 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), REALLITERAL); }
#line 10708 "bison-chpl-lib.cpp"
    break;

  case 690: /* literal_expr: IMAGLITERAL  */
#line 3677 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), IMAGLITERAL); }
#line 10714 "bison-chpl-lib.cpp"
    break;

  case 691: /* literal_expr: CSTRINGLITERAL  */
#line 3678 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 10720 "bison-chpl-lib.cpp"
    break;

  case 692: /* literal_expr: TNONE  */
#line 3679 "chpl.ypp"
                      { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10726 "bison-chpl-lib.cpp"
    break;

  case 693: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 3681 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10735 "bison-chpl-lib.cpp"
    break;

  case 694: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 3686 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10744 "bison-chpl-lib.cpp"
    break;

  case 695: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 3691 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10752 "bison-chpl-lib.cpp"
    break;

  case 696: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 3695 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true).release();
  }
#line 10760 "bison-chpl-lib.cpp"
    break;

  case 697: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 3699 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)), false, true).release();
  }
#line 10768 "bison-chpl-lib.cpp"
    break;

  case 698: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 3703 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true, true).release();
  }
#line 10776 "bison-chpl-lib.cpp"
    break;

  case 699: /* assoc_expr_ls: expr TALIAS expr  */
#line 3711 "chpl.ypp"
  {
    auto node = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->makeList(node);
  }
#line 10785 "bison-chpl-lib.cpp"
    break;

  case 700: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 3716 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildBinOp(loc, (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 10795 "bison-chpl-lib.cpp"
    break;

  case 701: /* binary_op_expr: expr TPLUS expr  */
#line 3724 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10801 "bison-chpl-lib.cpp"
    break;

  case 702: /* binary_op_expr: expr TMINUS expr  */
#line 3725 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10807 "bison-chpl-lib.cpp"
    break;

  case 703: /* binary_op_expr: expr TSTAR expr  */
#line 3726 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10813 "bison-chpl-lib.cpp"
    break;

  case 704: /* binary_op_expr: expr TDIVIDE expr  */
#line 3727 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10819 "bison-chpl-lib.cpp"
    break;

  case 705: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 3728 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10825 "bison-chpl-lib.cpp"
    break;

  case 706: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 3729 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10831 "bison-chpl-lib.cpp"
    break;

  case 707: /* binary_op_expr: expr TMOD expr  */
#line 3730 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10837 "bison-chpl-lib.cpp"
    break;

  case 708: /* binary_op_expr: expr TEQUAL expr  */
#line 3731 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10843 "bison-chpl-lib.cpp"
    break;

  case 709: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 3732 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10849 "bison-chpl-lib.cpp"
    break;

  case 710: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 3733 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10855 "bison-chpl-lib.cpp"
    break;

  case 711: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 3734 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10861 "bison-chpl-lib.cpp"
    break;

  case 712: /* binary_op_expr: expr TLESS expr  */
#line 3735 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10867 "bison-chpl-lib.cpp"
    break;

  case 713: /* binary_op_expr: expr TGREATER expr  */
#line 3736 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10873 "bison-chpl-lib.cpp"
    break;

  case 714: /* binary_op_expr: expr TBAND expr  */
#line 3737 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10879 "bison-chpl-lib.cpp"
    break;

  case 715: /* binary_op_expr: expr TBOR expr  */
#line 3738 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10885 "bison-chpl-lib.cpp"
    break;

  case 716: /* binary_op_expr: expr TBXOR expr  */
#line 3739 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10891 "bison-chpl-lib.cpp"
    break;

  case 717: /* binary_op_expr: expr TAND expr  */
#line 3740 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10897 "bison-chpl-lib.cpp"
    break;

  case 718: /* binary_op_expr: expr TOR expr  */
#line 3741 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10903 "bison-chpl-lib.cpp"
    break;

  case 719: /* binary_op_expr: expr TEXP expr  */
#line 3742 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10909 "bison-chpl-lib.cpp"
    break;

  case 720: /* binary_op_expr: expr TBY expr  */
#line 3743 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10915 "bison-chpl-lib.cpp"
    break;

  case 721: /* binary_op_expr: expr TALIGN expr  */
#line 3744 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10921 "bison-chpl-lib.cpp"
    break;

  case 722: /* binary_op_expr: expr THASH expr  */
#line 3745 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10927 "bison-chpl-lib.cpp"
    break;

  case 723: /* binary_op_expr: expr TDMAPPED expr  */
#line 3746 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10933 "bison-chpl-lib.cpp"
    break;

  case 724: /* unary_op_expr: TPLUS expr  */
#line 3750 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10939 "bison-chpl-lib.cpp"
    break;

  case 725: /* unary_op_expr: TMINUS expr  */
#line 3751 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10945 "bison-chpl-lib.cpp"
    break;

  case 726: /* unary_op_expr: TMINUSMINUS expr  */
#line 3752 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10951 "bison-chpl-lib.cpp"
    break;

  case 727: /* unary_op_expr: TPLUSPLUS expr  */
#line 3753 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10957 "bison-chpl-lib.cpp"
    break;

  case 728: /* unary_op_expr: TBANG expr  */
#line 3754 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10963 "bison-chpl-lib.cpp"
    break;

  case 729: /* unary_op_expr: expr TBANG  */
#line 3755 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                              STR("postfix!"),
                                                              (yyvsp[-1].expr)); }
#line 10971 "bison-chpl-lib.cpp"
    break;

  case 730: /* unary_op_expr: TBNOT expr  */
#line 3758 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10977 "bison-chpl-lib.cpp"
    break;

  case 731: /* reduce_expr: expr TREDUCE expr  */
#line 3763 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10985 "bison-chpl-lib.cpp"
    break;

  case 732: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 3767 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10993 "bison-chpl-lib.cpp"
    break;

  case 733: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 3771 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11001 "bison-chpl-lib.cpp"
    break;

  case 734: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 3775 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11009 "bison-chpl-lib.cpp"
    break;

  case 735: /* scan_expr: expr TSCAN expr  */
#line 3782 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11017 "bison-chpl-lib.cpp"
    break;

  case 736: /* scan_expr: expr TSCAN zippered_iterator  */
#line 3786 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11025 "bison-chpl-lib.cpp"
    break;

  case 737: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 3790 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11033 "bison-chpl-lib.cpp"
    break;

  case 738: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 3794 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11041 "bison-chpl-lib.cpp"
    break;


#line 11045 "bison-chpl-lib.cpp"

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
