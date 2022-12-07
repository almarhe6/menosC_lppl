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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/asin.y"

    #include <stdio.h>
    #include "header.h"

#line 76 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TRUE_ = 3,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 4,                     /* FALSE_  */
  YYSYMBOL_INT_ = 5,                       /* INT_  */
  YYSYMBOL_BOOL_ = 6,                      /* BOOL_  */
  YYSYMBOL_RETURN_ = 7,                    /* RETURN_  */
  YYSYMBOL_READ_ = 8,                      /* READ_  */
  YYSYMBOL_PRINT_ = 9,                     /* PRINT_  */
  YYSYMBOL_IF_ = 10,                       /* IF_  */
  YYSYMBOL_ELSE_ = 11,                     /* ELSE_  */
  YYSYMBOL_FOR_ = 12,                      /* FOR_  */
  YYSYMBOL_AND_ = 13,                      /* AND_  */
  YYSYMBOL_OR_ = 14,                       /* OR_  */
  YYSYMBOL_IGUAL_ = 15,                    /* IGUAL_  */
  YYSYMBOL_DISTINTO_ = 16,                 /* DISTINTO_  */
  YYSYMBOL_MAYOR_ = 17,                    /* MAYOR_  */
  YYSYMBOL_MENOR_ = 18,                    /* MENOR_  */
  YYSYMBOL_MAYORIGUAL_ = 19,               /* MAYORIGUAL_  */
  YYSYMBOL_MENORIGUAL_ = 20,               /* MENORIGUAL_  */
  YYSYMBOL_MAS_ = 21,                      /* MAS_  */
  YYSYMBOL_MENOS_ = 22,                    /* MENOS_  */
  YYSYMBOL_POR_ = 23,                      /* POR_  */
  YYSYMBOL_DIV_ = 24,                      /* DIV_  */
  YYSYMBOL_OPAR_ = 25,                     /* OPAR_  */
  YYSYMBOL_CPAR_ = 26,                     /* CPAR_  */
  YYSYMBOL_NEGACION_ = 27,                 /* NEGACION_  */
  YYSYMBOL_PUNTOYCOMA_ = 28,               /* PUNTOYCOMA_  */
  YYSYMBOL_COMA_ = 29,                     /* COMA_  */
  YYSYMBOL_OKEY_ = 30,                     /* OKEY_  */
  YYSYMBOL_CKEY_ = 31,                     /* CKEY_  */
  YYSYMBOL_ASIGNACION_ = 32,               /* ASIGNACION_  */
  YYSYMBOL_OCOR_ = 33,                     /* OCOR_  */
  YYSYMBOL_CCOR_ = 34,                     /* CCOR_  */
  YYSYMBOL_CTE_ = 35,                      /* CTE_  */
  YYSYMBOL_ID_ = 36,                       /* ID_  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_listDecla = 40,                 /* listDecla  */
  YYSYMBOL_decla = 41,                     /* decla  */
  YYSYMBOL_declaVar = 42,                  /* declaVar  */
  YYSYMBOL_const = 43,                     /* const  */
  YYSYMBOL_tipoSimp = 44,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 45,                 /* declaFunc  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_paramForm = 48,                 /* paramForm  */
  YYSYMBOL_listParamForm = 49,             /* listParamForm  */
  YYSYMBOL_bloque = 50,                    /* bloque  */
  YYSYMBOL_declaVarLocal = 51,             /* declaVarLocal  */
  YYSYMBOL_listInst = 52,                  /* listInst  */
  YYSYMBOL_inst = 53,                      /* inst  */
  YYSYMBOL_instExpre = 54,                 /* instExpre  */
  YYSYMBOL_instEntSal = 55,                /* instEntSal  */
  YYSYMBOL_instSelec = 56,                 /* instSelec  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_instIter = 58,                  /* instIter  */
  YYSYMBOL_expreOp = 59,                   /* expreOp  */
  YYSYMBOL_expre = 60,                     /* expre  */
  YYSYMBOL_expreLogic = 61,                /* expreLogic  */
  YYSYMBOL_expreIgual = 62,                /* expreIgual  */
  YYSYMBOL_expreRel = 63,                  /* expreRel  */
  YYSYMBOL_expreAd = 64,                   /* expreAd  */
  YYSYMBOL_expreMul = 65,                  /* expreMul  */
  YYSYMBOL_expreUna = 66,                  /* expreUna  */
  YYSYMBOL_expreSufi = 67,                 /* expreSufi  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_paramAct = 69,                  /* paramAct  */
  YYSYMBOL_listParamAct = 70,              /* listParamAct  */
  YYSYMBOL_opLogic = 71,                   /* opLogic  */
  YYSYMBOL_opIgual = 72,                   /* opIgual  */
  YYSYMBOL_opRel = 73,                     /* opRel  */
  YYSYMBOL_opAd = 74,                      /* opAd  */
  YYSYMBOL_opMul = 75,                     /* opMul  */
  YYSYMBOL_opUna = 76                      /* opUna  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    26,    26,    26,    30,    31,    34,    35,    38,    46,
      48,    63,    64,    65,    68,    69,    72,    75,    72,    86,
      87,    90,    99,   108,   113,   114,   117,   118,   121,   122,
     123,   124,   125,   128,   129,   132,   139,   147,   147,   153,
     157,   158,   161,   162,   163,   166,   167,   181,   182,   198,
     199,   212,   213,   226,   227,   240,   241,   264,   265,   266,
     277,   292,   292,   311,   312,   315,   316,   319,   320,   323,
     324,   327,   328,   329,   330,   333,   334,   337,   338,   341,
     342,   343
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TRUE_", "FALSE_",
  "INT_", "BOOL_", "RETURN_", "READ_", "PRINT_", "IF_", "ELSE_", "FOR_",
  "AND_", "OR_", "IGUAL_", "DISTINTO_", "MAYOR_", "MENOR_", "MAYORIGUAL_",
  "MENORIGUAL_", "MAS_", "MENOS_", "POR_", "DIV_", "OPAR_", "CPAR_",
  "NEGACION_", "PUNTOYCOMA_", "COMA_", "OKEY_", "CKEY_", "ASIGNACION_",
  "OCOR_", "CCOR_", "CTE_", "ID_", "$accept", "programa", "$@1",
  "listDecla", "decla", "declaVar", "const", "tipoSimp", "declaFunc",
  "$@2", "$@3", "paramForm", "listParamForm", "bloque", "declaVarLocal",
  "listInst", "inst", "instExpre", "instEntSal", "instSelec", "$@4",
  "instIter", "expreOp", "expre", "expreLogic", "expreIgual", "expreRel",
  "expreAd", "expreMul", "expreUna", "expreSufi", "$@5", "paramAct",
  "listParamAct", "opLogic", "opIgual", "opRel", "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -123,    27,    34,  -123,  -123,  -123,    34,  -123,  -123,     6,
    -123,  -123,    17,  -123,    -2,    20,    33,  -123,  -123,  -123,
     -12,    25,    34,  -123,    36,    37,    42,  -123,  -123,    41,
    -123,    34,    44,  -123,  -123,  -123,    34,  -123,    47,    16,
      17,   104,    46,    51,    52,    61,  -123,  -123,   104,  -123,
    -123,  -123,   -11,  -123,  -123,  -123,  -123,  -123,  -123,    62,
      40,    32,    -9,    35,    39,  -123,  -123,   120,    69,    53,
     104,   104,   104,    72,    57,   104,   104,   104,  -123,  -123,
    -123,   120,  -123,  -123,   120,  -123,  -123,  -123,  -123,   120,
    -123,  -123,   120,  -123,  -123,   120,   -20,  -123,    68,    77,
      79,    80,    81,  -123,  -123,  -123,    43,  -123,  -123,  -123,
      76,    32,    -9,    35,    39,  -123,   104,  -123,    83,    84,
    -123,   104,   104,    89,    86,    82,  -123,  -123,    92,    93,
    -123,  -123,   104,  -123,   119,   104,  -123,    92,   106,  -123,
      92,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     8,     0,     0,     0,    12,    13,    11,
       0,     0,    20,     9,     0,     0,     0,    19,    10,    21,
      17,     0,     0,    22,    25,    18,    27,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,     0,    81,
      34,    27,    59,    57,    26,    29,    30,    31,    32,     0,
      42,    45,    47,    49,    51,    53,    55,     0,     0,     0,
       0,     0,    41,     0,     0,    63,     0,     0,    33,    67,
      68,     0,    69,    70,     0,    71,    72,    73,    74,     0,
      75,    76,     0,    77,    78,     0,    59,    56,     0,     0,
       0,     0,     0,    40,    58,    28,    65,    61,    64,    43,
       0,    46,    48,    50,    52,    54,     0,    23,     0,     0,
      37,     0,     0,     0,    60,     0,    35,    36,     0,     0,
      66,    62,     0,    60,     0,    41,    44,     0,     0,    38,
       0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,   127,    98,   121,   -19,  -123,  -123,
    -123,  -123,   105,  -123,  -123,    87,  -122,  -123,  -123,  -123,
    -123,  -123,     2,   -41,  -123,    63,    59,    60,    54,   -63,
    -123,  -123,  -123,    26,  -123,  -123,  -123,  -123,  -123,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    53,     9,    10,    16,
      32,    26,    27,    35,    36,    39,    54,    55,    56,    57,
     128,    58,   102,    59,    60,    61,    62,    63,    64,    65,
      66,   123,   107,   108,    81,    84,    89,    92,    95,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    17,    18,    25,    97,    75,   134,    73,    85,    86,
      87,    88,    25,   116,    75,   139,    23,    38,   141,    17,
      18,    76,    77,    41,    42,    43,    44,     3,    45,   100,
     101,   103,   115,    19,   106,   109,   110,    46,    47,     4,
       5,    48,    12,    49,    50,    13,    51,    82,    83,    14,
      15,    19,    52,    79,    80,    21,    90,    91,    22,    24,
      17,    18,    93,    94,    28,    42,    43,    44,    30,    45,
      31,    69,   122,    29,    34,   125,    70,    71,    46,    47,
     129,   106,    48,    40,    49,    50,    72,    51,   105,    99,
      78,   136,    19,    52,   103,    17,    18,    98,   104,   117,
      42,    43,    44,   118,    45,   119,   120,    17,    18,   121,
     124,   126,   127,    46,    47,   131,   133,    48,   132,    49,
      50,   135,    51,    17,    18,    46,    47,    19,    52,    48,
     137,    49,   140,    11,    37,    20,    33,   138,    74,    19,
      52,    46,    47,   112,   111,    48,   114,    49,   130,   113,
       0,     0,     0,     0,     0,    19,    96
};

static const yytype_int16 yycheck[] =
{
      41,     3,     4,    22,    67,    25,   128,    48,    17,    18,
      19,    20,    31,    33,    25,   137,    28,    36,   140,     3,
       4,    32,    33,     7,     8,     9,    10,     0,    12,    70,
      71,    72,    95,    35,    75,    76,    77,    21,    22,     5,
       6,    25,    36,    27,    28,    28,    30,    15,    16,    32,
      33,    35,    36,    13,    14,    35,    21,    22,    25,    34,
       3,     4,    23,    24,    28,     8,     9,    10,    26,    12,
      29,    25,    29,    36,    30,   116,    25,    25,    21,    22,
     121,   122,    25,    36,    27,    28,    25,    30,    31,    36,
      28,   132,    35,    36,   135,     3,     4,    28,    26,    31,
       8,     9,    10,    26,    12,    26,    26,     3,     4,    28,
      34,    28,    28,    21,    22,    26,    34,    25,    32,    27,
      28,    28,    30,     3,     4,    21,    22,    35,    36,    25,
      11,    27,    26,     6,    36,    14,    31,   135,    51,    35,
      36,    21,    22,    84,    81,    25,    92,    27,   122,    89,
      -1,    -1,    -1,    -1,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,     5,     6,    40,    41,    42,    44,
      45,    41,    36,    28,    32,    33,    46,     3,     4,    35,
      43,    35,    25,    28,    34,    44,    48,    49,    28,    36,
      26,    29,    47,    49,    30,    50,    51,    42,    44,    52,
      36,     7,     8,     9,    10,    12,    21,    22,    25,    27,
      28,    30,    36,    43,    53,    54,    55,    56,    58,    60,
      61,    62,    63,    64,    65,    66,    67,    76,    60,    25,
      25,    25,    25,    60,    52,    25,    32,    33,    28,    13,
      14,    71,    15,    16,    72,    17,    18,    19,    20,    73,
      21,    22,    74,    23,    24,    75,    36,    66,    28,    36,
      60,    60,    59,    60,    26,    31,    60,    69,    70,    60,
      60,    62,    63,    64,    65,    66,    33,    31,    26,    26,
      26,    28,    29,    68,    34,    60,    28,    28,    57,    60,
      70,    26,    32,    34,    53,    28,    60,    11,    59,    53,
      26,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    42,
      42,    43,    43,    43,    44,    44,    46,    47,    45,    48,
      48,    49,    49,    50,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    57,    56,    58,
      59,    59,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      67,    68,    67,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     1,
       0,     2,     4,     7,     2,     0,     2,     0,     3,     1,
       1,     1,     1,     2,     1,     5,     5,     0,     8,     9,
       1,     0,     1,     3,     6,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       4,     0,     5,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 26 "src/asin.y"
         {dvar=0;niv=0;cargaContexto(niv);}
#line 1241 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 27 "src/asin.y"
                  { if (obtTdS("main").t==T_ERROR) yyerror("Falta el main"); if (verTdS) mostrarTds(); }
#line 1247 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 30 "src/asin.y"
                 { (yyval.cent) = (yyvsp[0].cent); }
#line 1253 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 31 "src/asin.y"
                           { (yyval.cent) = (yyvsp[-1].cent) + (yyvsp[0].cent); }
#line 1259 "asin.c"
    break;

  case 6: /* decla: declaVar  */
#line 34 "src/asin.y"
                { (yyval.cent) = 0; }
#line 1265 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 35 "src/asin.y"
                 { (yyval.cent) = (yyvsp[0].cent); }
#line 1271 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PUNTOYCOMA_  */
#line 39 "src/asin.y"
        {
		if (!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)){
			yyerror("Variable ya declarada!");}
		else {
			dvar += TALLA_TIPO_SIMPLE;}
		if (verTds) mostrarTdS();
	}
#line 1283 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ OCOR_ CTE_ CCOR_ PUNTOYCOMA_  */
#line 49 "src/asin.y"
        { 
	int talla_array = (yyvsp[-2].cent);
        if (talla_array <= 0) {
            yyerror("El número de elmentos del array ha de ser superior a 0");
		numelem = 0;
        }
	if (!insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, insTdA((yyvsp[-5].cent), numelem)))
		yyerror("variable ya declarada");
	else
		dvar += numelem * TALLA_TIPO_SIMPLE; 
	if(verTdS) mostrarTdS();
	}
#line 1300 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 63 "src/asin.y"
            { (yyval.expr) = T_ENTERO; }
#line 1306 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 64 "src/asin.y"
             { (yyval.expr) = T_LOGICO; }
#line 1312 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 65 "src/asin.y"
              { (yyval.expr) = T_LOGICO; }
#line 1318 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 68 "src/asin.y"
               { (yyval.cent) = T_ENTERO; }
#line 1324 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 69 "src/asin.y"
                { (yyval.cent) = T_LOGICO; }
#line 1330 "asin.c"
    break;

  case 16: /* $@2: %empty  */
#line 72 "src/asin.y"
                        { niv = 1; cargoContexto(niv); }
#line 1336 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 75 "src/asin.y"
          { if(!insTdS((yyvsp[-4].ident),FUNCION,(yyvsp[-5].cent),niv-1,dvar,(yyvsp[-1].referencia))) yyerror("Función ya declarada");}
#line 1342 "asin.c"
    break;

  case 18: /* declaFunc: tipoSimp ID_ $@2 OPAR_ paramForm CPAR_ $@3 bloque  */
#line 78 "src/asin.y"
          {
	  if (verTdS) mostrarTdS();
          descargaCOntexto(niv);
          niv = 0;
	  }
#line 1352 "asin.c"
    break;

  case 19: /* paramForm: listParamForm  */
#line 86 "src/asin.y"
                         { (yyval.referencia) = (yyvsp[0].referencia); }
#line 1358 "asin.c"
    break;

  case 20: /* paramForm: %empty  */
#line 87 "src/asin.y"
           { (yyval.referencia) = insTdD(-1, T_VACIO); }
#line 1364 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_  */
#line 90 "src/asin.y"
                            {
		(yyval.referencia) = insTdD(-1, (yyvsp[-1].cent));
		
		if (!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, dvar, -1)){
		   yyerror("Parametro repetido");}
		else { dvar += TALLA_TIPO_SIMPLE; }
		if (verTdS) {mostrarTdS;};
		
		}
#line 1378 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 99 "src/asin.y"
                                                {
		(yyval.referencia) = insTdD((yyvsp[0].referencia), (yyvsp[-3].cent));
		if (!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, dvar, -1)){
			yyerror("Parametro repetido");}
		else { dvar += TALLA_TIPO_SIMPLE; }
		if (verTdS) mostrarTdS();
	     }
#line 1390 "asin.c"
    break;

  case 23: /* bloque: OKEY_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ CKEY_  */
#line 109 "src/asin.y"
        {if(obtTdD(-1).tipo == T_ERROR){yyerror("Return fuera de función")}
	else if(obtTdD(-1).tipo != (yyvsp[-2].expr)) yyerror("La funcion no deberia devolver ese tipo");}
#line 1397 "asin.c"
    break;

  case 35: /* instEntSal: READ_ OPAR_ ID_ CPAR_ PUNTOYCOMA_  */
#line 133 "src/asin.y"
                        {
		SIMB sim = obtTdS((yyvsp[-2].ident));
		if (sim.t != T_ENTERO) {
			yyerror("El argumento de la funcion read() debe ser entero.");
		}
	}
#line 1408 "asin.c"
    break;

  case 36: /* instEntSal: PRINT_ OPAR_ expre CPAR_ PUNTOYCOMA_  */
#line 140 "src/asin.y"
                {
			if ((yyvsp[-2].expr) != T_ERROR && (yyvsp[-2].expr) != T_ENTERO) {
				yyerror("El argumento de la funcion print() debe ser entero.");
			}
		}
#line 1418 "asin.c"
    break;

  case 37: /* $@4: %empty  */
#line 147 "src/asin.y"
                                 {
		if ((yyvsp[-1].expr) != T_ERROR)
			if ((yyvsp[-1].expr) != T_LOGICO) yyerror("La expresion de evaluacion del if debe ser de tipo logico.");
		}
#line 1427 "asin.c"
    break;

  case 40: /* expreOp: expre  */
#line 157 "src/asin.y"
               { (yyval.expr) = (yyvsp[0].expr); }
#line 1433 "asin.c"
    break;

  case 41: /* expreOp: %empty  */
#line 158 "src/asin.y"
         { (yyval.expr) = T_VACIO; }
#line 1439 "asin.c"
    break;

  case 45: /* expreLogic: expreIgual  */
#line 166 "src/asin.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 1445 "asin.c"
    break;

  case 46: /* expreLogic: expreLogic opLogic expreIgual  */
#line 168 "src/asin.y"
          {
		(yyval.expr) = T_ERROR;
		if ((yyvsp[-2].expr) != T_ERROR || (yyvsp[0].expr) != T_ERROR) {
			if ((yyvsp[-2].expr) != (yyvsp[0].expr) && (yyvsp[-2].expr) != T_VACIO && (yyvsp[0].expr) != T_VACIO) {
				printf("$1 = %d  $3 = %d",(yyvsp[-2].expr),(yyvsp[0].expr));
				yyerror("Incompatibilidad de tipos en expresion logica");
			} else {
				(yyval.expr) = T_LOGICO;
			}
		}
	}
#line 1461 "asin.c"
    break;

  case 47: /* expreIgual: expreRel  */
#line 181 "src/asin.y"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 1467 "asin.c"
    break;

  case 48: /* expreIgual: expreIgual opIgual expreRel  */
#line 183 "src/asin.y"
          {	
		(yyval.expr) = T_ERROR;
		
		if ((yyvsp[-2].expr) != T_ERROR && (yyvsp[0].expr) != T_ERROR) {
			if ((yyvsp[-2].expr) != (yyvsp[0].expr)) {
				yyerror("Incompatibilidad de tipos en expresion igualdad");
			} else if ((yyvsp[0].expr) != T_LOGICO || (yyvsp[0].expr) != T_ENTERO) { 
				yyerror("Incompatibilidad de tipos, deben ser expresiones logicas o de enteros.");
			}  else {
				(yyval.expr) = T_LOGICO;
			}
		} 
	}
#line 1485 "asin.c"
    break;

  case 49: /* expreRel: expreAd  */
#line 198 "src/asin.y"
                  {(yyval.expr) = (yyvsp[0].expr);}
#line 1491 "asin.c"
    break;

  case 50: /* expreRel: expreRel opRel expreAd  */
#line 200 "src/asin.y"
        {
            (yyval.expr) = T_ERROR;
			if ((yyvsp[-2].expr) != T_ERROR && (yyvsp[0].expr) != T_ERROR){
				if (!((yyvsp[-2].expr) == (yyvsp[0].expr) && (yyvsp[-2].expr) == T_ENTERO)) {
					yyerror("Error de tipos en expresion relacional");
				} else {
					(yyval.expr) = T_LOGICO;
				}
			}
		}
#line 1506 "asin.c"
    break;

  case 51: /* expreAd: expreMul  */
#line 212 "src/asin.y"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 1512 "asin.c"
    break;

  case 52: /* expreAd: expreAd opAd expreMul  */
#line 214 "src/asin.y"
           {
        (yyval.expr) = T_ERROR;
		if ((yyvsp[-2].expr) != T_ERROR && (yyvsp[0].expr) != T_ERROR) {
			if (!((yyvsp[-2].expr) == (yyvsp[0].expr) && (yyvsp[-2].expr) == T_ENTERO)) {
				yyerror("Error de tipos en expresion aditiva");
			} else {
				(yyval.expr) = T_ENTERO;
			}
		}
	}
#line 1527 "asin.c"
    break;

  case 53: /* expreMul: expreUna  */
#line 226 "src/asin.y"
                   {(yyval.expr) = (yyvsp[0].expr);}
#line 1533 "asin.c"
    break;

  case 54: /* expreMul: expreMul opMul expreUna  */
#line 228 "src/asin.y"
        {
            (yyval.expr) = T_ERROR;
			if ((yyvsp[-2].expr) != T_ERROR && (yyvsp[0].expr) != T_ERROR) {
				if (!((yyvsp[-2].expr) == (yyvsp[0].expr) && (yyvsp[-2].expr) == T_ENTERO)) {
					yyerror("Incompatibilidad de tipos en expresion multiplicativa");
				} else {
					(yyval.expr) = T_ENTERO;
				} 
			}
		}
#line 1548 "asin.c"
    break;

  case 55: /* expreUna: expreSufi  */
#line 240 "src/asin.y"
                    {(yyval.expr) = (yyvsp[0].expr);}
#line 1554 "asin.c"
    break;

  case 56: /* expreUna: opUna expreUna  */
#line 242 "src/asin.y"
        {  
        (yyval.expr) = T_ERROR;
        if ((yyvsp[0].expr) != T_ERROR) {
            if ((yyvsp[0].expr) == T_ENTERO) {                                                                         
                if ((yyvsp[-1].cent) == OPNOT) {
					yyerror("Incompatibilidad de tipos, se está negando un entero");
			 	} else { 
					(yyval.expr) = T_ENTERO; 
				}
            } else if ((yyvsp[0].expr) == T_LOGICO) {                                                                  
                if ((yyvsp[-1].cent) == OPSUMA || (yyvsp[-1].cent) == OPRESTA) {
					yyerror("Incompatibilidad de tipos, solo se puede aplicar el operador unario \"+\" o \"-\" a una expresion entera.");
				} else { 
					(yyval.expr) = T_LOGICO;
				}
            } else {
				yyerror("Incompatibilidad de tipos, no son el mismo tipo o no son equivalentes.");
			}                                                               
        } 
    }
#line 1579 "asin.c"
    break;

  case 57: /* expreSufi: const  */
#line 264 "src/asin.y"
                 {(yyval.expr) = (yyvsp[0].expr);}
#line 1585 "asin.c"
    break;

  case 58: /* expreSufi: OPAR_ expre CPAR_  */
#line 265 "src/asin.y"
                             {(yyval.expr) = (yyvsp[-1].expr);}
#line 1591 "asin.c"
    break;

  case 59: /* expreSufi: ID_  */
#line 267 "src/asin.y"
         {
			SIMB sim = obtTdS((yyvsp[0].ident));
			(yyval.expr) = T_ERROR;

		 	if (sim.t == T_ERROR) {
				 yyerror("No existe ninguna variable con ese identificador.");
			 } else { 
				 (yyval.expr) = sim.t;
			 }
	 }
#line 1606 "asin.c"
    break;

  case 60: /* expreSufi: ID_ OCOR_ expre CCOR_  */
#line 278 "src/asin.y"
         {
		SIMB sim = obtTdS((yyvsp[-3].ident));
		
		(yyval.expr) = T_ERROR;
	
		if (sim.t == T_ERROR) {
			yyerror("No existe ninguna variable con ese identificador.");
		} else if ((yyvsp[-1].expr) != T_ENTERO) {
			yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
		} else { 
			DIM dim = obtTdA(sim.ref);
			(yyval.expr) = dim.telem;
		}
	}
#line 1625 "asin.c"
    break;

  case 61: /* $@5: %empty  */
#line 292 "src/asin.y"
                              {SIMB sim = obtTdS((yyvsp[-2].ident)); if (!cmpDom(sim.ref, (yyvsp[0].referencia))){yyerror("Error en el dominio de los parámetros actuales");}}
#line 1631 "asin.c"
    break;

  case 62: /* expreSufi: ID_ OPAR_ paramAct $@5 CPAR_  */
#line 293 "src/asin.y"
         {
			
			SIMB sim = obtTdS((yyvsp[-4].ident));

			(yyval.expr) = T_ERROR;
			
			if (sim.t == T_ERROR) { 
				yyerror("No existe ninguna variable con ese identificador."); 
			}
			INF inf = obtTdD(sim.ref);
			
			if (inf.tipo == T_ERROR) { 
				yyerror("No existe ninguna funcion con ese identificador."); 
			}
			else {(yyval.expr) = inf.tipo;}
		}
#line 1652 "asin.c"
    break;

  case 63: /* paramAct: %empty  */
#line 311 "src/asin.y"
          { (yyval.referencia) = insTdD(-1, T_VACIO); }
#line 1658 "asin.c"
    break;

  case 64: /* paramAct: listParamAct  */
#line 312 "src/asin.y"
                       { (yyval.referencia) = (yyvsp[0].referencia);}
#line 1664 "asin.c"
    break;

  case 65: /* listParamAct: expre  */
#line 315 "src/asin.y"
                    { (yyval.referencia) = insTdD(-1, (yyvsp[0].expr)); }
#line 1670 "asin.c"
    break;

  case 66: /* listParamAct: expre COMA_ listParamAct  */
#line 316 "src/asin.y"
                                       { (yyval.referencia) = insTdD = insTdD((yyvsp[0].referencia), (yyvsp[-2].expr));}
#line 1676 "asin.c"
    break;

  case 67: /* opLogic: AND_  */
#line 319 "src/asin.y"
              { (yyval.cent) = AND; }
#line 1682 "asin.c"
    break;

  case 68: /* opLogic: OR_  */
#line 320 "src/asin.y"
             { (yyval.cent) = OR; }
#line 1688 "asin.c"
    break;

  case 69: /* opIgual: IGUAL_  */
#line 323 "src/asin.y"
                { (yyval.cent) = IGUAL;}
#line 1694 "asin.c"
    break;

  case 70: /* opIgual: DISTINTO_  */
#line 324 "src/asin.y"
                   { (yyval.cent) = DISTINTO;}
#line 1700 "asin.c"
    break;

  case 71: /* opRel: MAYOR_  */
#line 327 "src/asin.y"
              { (yyval.cent) = MAYOR; }
#line 1706 "asin.c"
    break;

  case 72: /* opRel: MENOR_  */
#line 328 "src/asin.y"
              { (yyval.cent) = MENOR; }
#line 1712 "asin.c"
    break;

  case 73: /* opRel: MAYORIGUAL_  */
#line 329 "src/asin.y"
                   { (yyval.cent) = MAYORIGUAL; }
#line 1718 "asin.c"
    break;

  case 74: /* opRel: MENORIGUAL_  */
#line 330 "src/asin.y"
                   { (yyval.cent) = MENORIGUAL; }
#line 1724 "asin.c"
    break;

  case 75: /* opAd: MAS_  */
#line 333 "src/asin.y"
           { (yyval.cent) = MAS; }
#line 1730 "asin.c"
    break;

  case 76: /* opAd: MENOS_  */
#line 334 "src/asin.y"
             { (yyval.cent) = MENOS; }
#line 1736 "asin.c"
    break;

  case 77: /* opMul: POR_  */
#line 337 "src/asin.y"
            { (yyval.cent) = POR; }
#line 1742 "asin.c"
    break;

  case 78: /* opMul: DIV_  */
#line 338 "src/asin.y"
            { (yyval.cent) = DIV; }
#line 1748 "asin.c"
    break;

  case 79: /* opUna: MAS_  */
#line 341 "src/asin.y"
            { (yyval.cent) = MAS; }
#line 1754 "asin.c"
    break;

  case 80: /* opUna: MENOS_  */
#line 342 "src/asin.y"
              { (yyval.cent) = MENOS; }
#line 1760 "asin.c"
    break;

  case 81: /* opUna: NEGACION_  */
#line 343 "src/asin.y"
                 { (yyval.cent) = NEGACION; }
#line 1766 "asin.c"
    break;


#line 1770 "asin.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 346 "src/asin.y"


