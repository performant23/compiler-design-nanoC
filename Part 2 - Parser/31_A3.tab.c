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
#line 1 "31_A3.y"

    #include <stdio.h>
    extern int yylex();
    extern char* yytext;
    void yyerror(char *s);

#line 78 "31_A3.tab.c"

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

#include "31_A3.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_IDENTIFIER = 10,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 11,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 12,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 13,            /* STRING_LITERAL  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 14,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 15,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 16,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 17,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 18,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 19,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 20,                       /* DOT  */
  YYSYMBOL_ARROW = 21,                     /* ARROW  */
  YYSYMBOL_QUESTION_MARK = 22,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 23,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 24,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 25,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_BITWISE_AND = 27,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_NOR = 28,               /* BITWISE_NOR  */
  YYSYMBOL_LOGICAL_AND = 29,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 30,                /* LOGICAL_OR  */
  YYSYMBOL_ADDITION = 31,                  /* ADDITION  */
  YYSYMBOL_SUBTRACTION = 32,               /* SUBTRACTION  */
  YYSYMBOL_MULTIPLICATION = 33,            /* MULTIPLICATION  */
  YYSYMBOL_DIVISION = 34,                  /* DIVISION  */
  YYSYMBOL_MODULO = 35,                    /* MODULO  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_LESS_THAN = 37,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 38,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_OR_EQUAL_TO = 39,     /* LESS_THAN_OR_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL_TO = 40,  /* GREATER_THAN_OR_EQUAL_TO  */
  YYSYMBOL_EQUAL = 41,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 42,                 /* NOT_EQUAL  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_primary_expression = 44,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 45,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 46,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 47,          /* unary_expression  */
  YYSYMBOL_unary_operator = 48,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 49, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 50,       /* additive_expression  */
  YYSYMBOL_relational_expression = 51,     /* relational_expression  */
  YYSYMBOL_equality_expression = 52,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 53,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 54,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 55,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 56,     /* assignment_expression  */
  YYSYMBOL_expression = 57,                /* expression  */
  YYSYMBOL_declaration = 58,               /* declaration  */
  YYSYMBOL_init_declarator = 59,           /* init_declarator  */
  YYSYMBOL_type_specifier = 60,            /* type_specifier  */
  YYSYMBOL_declarator = 61,                /* declarator  */
  YYSYMBOL_direct_declarator = 62,         /* direct_declarator  */
  YYSYMBOL_pointer = 63,                   /* pointer  */
  YYSYMBOL_parameter_list = 64,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 65,     /* parameter_declaration  */
  YYSYMBOL_initializer = 66,               /* initializer  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_compound_statement = 68,        /* compound_statement  */
  YYSYMBOL_block_item_list = 69,           /* block_item_list  */
  YYSYMBOL_block_item = 70,                /* block_item  */
  YYSYMBOL_expression_statement = 71,      /* expression_statement  */
  YYSYMBOL_selection_statement = 72,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 73,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 74,            /* jump_statement  */
  YYSYMBOL_translation_unit = 75,          /* translation_unit  */
  YYSYMBOL_external_declaration = 76,      /* external_declaration  */
  YYSYMBOL_function_definition = 77,       /* function_definition  */
  YYSYMBOL_identifier_opt = 78,            /* identifier_opt  */
  YYSYMBOL_pointer_opt = 79,               /* pointer_opt  */
  YYSYMBOL_parameter_list_opt = 80,        /* parameter_list_opt  */
  YYSYMBOL_block_item_list_opt = 81,       /* block_item_list_opt  */
  YYSYMBOL_expression_opt = 82,            /* expression_opt  */
  YYSYMBOL_argument_expression_list_opt = 83, /* argument_expression_list_opt  */
  YYSYMBOL_declaration_list_opt = 84,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 85           /* declaration_list  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    73,    74,    75,    76,    79,    80,    81,
      82,    83,    86,    87,    90,    91,    94,    95,    96,    97,
      98,   101,   102,   103,   104,   107,   108,   109,   112,   113,
     114,   115,   116,   119,   120,   121,   124,   125,   128,   129,
     132,   133,   136,   137,   140,   143,   146,   147,   150,   151,
     152,   155,   158,   159,   160,   163,   166,   167,   170,   174,
     178,   179,   180,   181,   182,   185,   188,   189,   192,   193,
     196,   199,   200,   203,   206,   209,   210,   213,   214,   216,
     219,   220,   223,   224,   228,   229,   233,   234,   238,   239,
     243,   244,   248,   249,   252,   253
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "ELSE", "FOR",
  "IF", "INT", "RETURN", "VOID", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ASSIGN", "COMMA", "BITWISE_AND",
  "BITWISE_NOR", "LOGICAL_AND", "LOGICAL_OR", "ADDITION", "SUBTRACTION",
  "MULTIPLICATION", "DIVISION", "MODULO", "NOT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN_OR_EQUAL_TO",
  "EQUAL", "NOT_EQUAL", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "expression", "declaration", "init_declarator",
  "type_specifier", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "initializer", "statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "identifier_opt", "pointer_opt",
  "parameter_list_opt", "block_item_list_opt", "expression_opt",
  "argument_expression_list_opt", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -95,   -95,   -95,   -95,   -28,     9,   -95,   -95,   -95,
     -11,    39,   -95,    15,   -95,   -95,   -95,   118,   -95,   -28,
      27,    46,    -6,   -95,   -95,   -95,   -95,   -95,   118,   -95,
     -95,   -95,   -95,   -95,   -95,     3,    25,   118,   -13,    31,
      21,    26,    36,   -15,   -95,   -95,   -95,    44,    73,   -95,
     -95,    66,    46,   -95,    77,   118,   118,    80,    85,   118,
     -95,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,    82,    83,   118,   -95,   -95,
     -95,   -95,    73,   -95,   -95,   -95,   -95,   -95,    84,    86,
      92,   -28,    75,   -95,    91,   -95,   100,    94,   -95,   104,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -13,   -13,    31,
      31,    31,    31,    21,    21,    26,   102,    36,   118,   118,
      99,   -95,   -95,   -95,   -95,   117,    46,   -95,   -95,   118,
     -95,   118,   108,   119,   -95,   -95,   -95,   -95,   -95,   -95,
     118,   106,   111,   136,   118,   106,   124,   -95,   106,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    49,    50,    48,    78,    83,     0,    75,    77,    55,
       0,    46,    82,     0,     1,    76,    45,     0,    94,    83,
       0,    92,    52,    51,     2,     3,     4,     5,     0,    16,
      18,    19,    17,    20,     7,    14,    21,     0,    25,    28,
      33,    36,    38,    40,    42,    59,    47,    46,    87,    79,
      95,     0,    85,    44,     0,     0,    91,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    88,    68,
      69,    60,    86,    66,    61,    62,    63,    64,     0,     0,
       0,    83,    84,    56,     0,     6,     0,    90,    12,     0,
      10,    11,    43,    22,    23,    24,    21,    26,    27,    29,
      30,    31,    32,    34,    35,    37,     0,    39,    89,     0,
       0,    67,    65,    70,    53,    81,     0,    54,     8,     0,
       9,     0,     0,     0,    74,    80,    58,    57,    13,    41,
      89,    89,     0,    71,    89,    89,     0,    72,    89,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   -35,   -95,    23,     5,    22,    71,
      70,   -95,    16,   -16,   -17,    -7,   -95,     0,   127,   -95,
     -95,   -95,    29,   -95,   -94,   128,   -95,    74,   -95,   -95,
     -95,   -95,   -95,   146,   -95,   -95,    62,   -95,   -95,   -74,
     -95,   -95,   -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    34,    35,    97,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    53,    78,     4,    10,    19,    11,    23,
      12,    92,    93,    46,    80,    81,    82,    83,    84,    85,
      86,    87,     6,     7,     8,   136,    13,    94,    88,    89,
      99,    20,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    45,    60,   120,    18,     9,     5,    73,    51,    14,
      52,    54,     1,    16,    50,    74,     2,    55,     3,    56,
      61,    62,    63,    57,    58,    22,   103,   104,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,    96,   106,
      98,    79,     1,   102,   132,    48,     2,   143,     3,     1,
      59,   147,    91,     2,   149,     3,   116,   -93,    66,    67,
      68,    69,    64,    65,    17,    72,   142,    70,    71,    17,
     146,   109,   110,   111,   112,    79,     1,    90,    75,    76,
       2,    77,     3,    24,    25,    26,    27,   107,   108,    28,
     100,    48,   113,   114,    95,   101,   106,   -89,   118,   119,
      29,   126,   133,   122,    30,    31,    32,   124,   127,    33,
     123,    75,    76,   138,    77,   128,    24,    25,    26,    27,
     129,   130,    28,   134,    48,   131,    91,   135,    24,    25,
      26,    27,   140,    29,    28,   144,   141,    30,    31,    32,
     145,   148,    33,   115,   117,    29,    47,   139,    49,    30,
      31,    32,    15,   125,    33,   137,   121
};

static const yytype_uint8 yycheck[] =
{
       0,    17,    37,    77,    11,    33,     6,    22,    14,     0,
      16,    28,     3,    24,    21,    30,     7,    14,     9,    16,
      33,    34,    35,    20,    21,    10,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    55,    74,
      56,    48,     3,    59,   118,    18,     7,   141,     9,     3,
      25,   145,    52,     7,   148,     9,    73,    18,    37,    38,
      39,    40,    31,    32,    25,    29,   140,    41,    42,    25,
     144,    66,    67,    68,    69,    82,     3,    11,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    64,    65,    16,
      10,    18,    70,    71,    17,    10,   131,    24,    16,    16,
      27,    26,   119,    19,    31,    32,    33,    15,    17,    36,
      24,     5,     6,   129,     8,    15,    10,    11,    12,    13,
      26,    17,    16,    24,    18,    23,   126,    10,    10,    11,
      12,    13,    24,    27,    16,    24,    17,    31,    32,    33,
       4,    17,    36,    72,    74,    27,    19,   131,    20,    31,
      32,    33,     6,    91,    36,   126,    82
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    58,    60,    75,    76,    77,    33,
      59,    61,    63,    79,     0,    76,    24,    25,    58,    60,
      84,    85,    10,    62,    10,    11,    12,    13,    16,    27,
      31,    32,    33,    36,    44,    45,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    66,    61,    18,    68,
      58,    14,    16,    56,    57,    14,    16,    20,    21,    25,
      47,    33,    34,    35,    31,    32,    37,    38,    39,    40,
      41,    42,    29,    22,    30,     5,     6,     8,    57,    58,
      67,    68,    69,    70,    71,    72,    73,    74,    81,    82,
      11,    60,    64,    65,    80,    17,    57,    46,    56,    83,
      10,    10,    56,    47,    47,    47,    47,    49,    49,    50,
      50,    50,    50,    51,    51,    52,    57,    53,    16,    16,
      82,    70,    19,    24,    15,    79,    26,    17,    15,    26,
      17,    23,    82,    57,    24,    10,    78,    65,    56,    55,
      24,    17,    82,    67,    24,     4,    82,    67,    17,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    50,    50,    50,    51,    51,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    58,    59,    59,    60,    60,
      60,    61,    62,    62,    62,    63,    64,    64,    65,    66,
      67,    67,    67,    67,    67,    68,    69,    69,    70,    70,
      71,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     2,     1,     4,     4,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     1,     1,
       2,     5,     7,     9,     3,     1,     2,     1,     1,     4,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 72 "31_A3.y"
                                                                                                                                                                                                                                        {printf("primary-expression\n");}
#line 1269 "31_A3.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 73 "31_A3.y"
                                                                                                                                                                                                                                {printf("primary-expression\n");}
#line 1275 "31_A3.tab.c"
    break;

  case 4: /* primary_expression: CHARACTER_CONSTANT  */
#line 74 "31_A3.y"
                                                                                                                                                                                                                                                {printf("primary-expression\n");}
#line 1281 "31_A3.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 75 "31_A3.y"
                                                                                                                                                                                                                                        {printf("primary-expression\n");}
#line 1287 "31_A3.tab.c"
    break;

  case 6: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 76 "31_A3.y"
                                                                                                                                                                                                        {printf("primary-expression\n");}
#line 1293 "31_A3.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 79 "31_A3.y"
                                                                                                                                                                                                                                {printf("postfix-expression\n");}
#line 1299 "31_A3.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 80 "31_A3.y"
                                                                                                                                                                                {printf("postfix-expression\n");}
#line 1305 "31_A3.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS  */
#line 81 "31_A3.y"
                                                                                                                                                                {printf("postfix-expression\n");}
#line 1311 "31_A3.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 82 "31_A3.y"
                                                                                                                                                                                                                {printf("postfix-expression\n");}
#line 1317 "31_A3.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 83 "31_A3.y"
                                                                                                                                                                                                                {printf("postfix-expression\n");}
#line 1323 "31_A3.tab.c"
    break;

  case 12: /* argument_expression_list: assignment_expression  */
#line 86 "31_A3.y"
                                                                                                                                                                                                                        {printf("argument-expression-list\n");}
#line 1329 "31_A3.tab.c"
    break;

  case 13: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 87 "31_A3.y"
                                                                                                                                                                                        {printf("argument-expression-list\n");}
#line 1335 "31_A3.tab.c"
    break;

  case 14: /* unary_expression: postfix_expression  */
#line 90 "31_A3.y"
                                                                                                                                                                                                                                {printf("unary-expression\n");}
#line 1341 "31_A3.tab.c"
    break;

  case 15: /* unary_expression: unary_operator unary_expression  */
#line 91 "31_A3.y"
                                                                                                                                                                                                                        {printf("unary-expression\n");}
#line 1347 "31_A3.tab.c"
    break;

  case 16: /* unary_operator: BITWISE_AND  */
#line 94 "31_A3.y"
                                                                                                                                                                                                                                                {printf("unary-operator\n");}
#line 1353 "31_A3.tab.c"
    break;

  case 17: /* unary_operator: MULTIPLICATION  */
#line 95 "31_A3.y"
                                                                                                                                                                                                                                        {printf("unary-operator\n");}
#line 1359 "31_A3.tab.c"
    break;

  case 18: /* unary_operator: ADDITION  */
#line 96 "31_A3.y"
                                                                                                                                                                                                                                                {printf("unary-operator\n");}
#line 1365 "31_A3.tab.c"
    break;

  case 19: /* unary_operator: SUBTRACTION  */
#line 97 "31_A3.y"
                                                                                                                                                                                                                                                {printf("unary-operator\n");}
#line 1371 "31_A3.tab.c"
    break;

  case 20: /* unary_operator: NOT  */
#line 98 "31_A3.y"
                                                                                                                                                                                                                                                        {printf("unary-operator\n");}
#line 1377 "31_A3.tab.c"
    break;

  case 21: /* multiplicative_expression: unary_expression  */
#line 101 "31_A3.y"
                                                                                                                                                                                                                                {printf("multiplicative-expression\n");}
#line 1383 "31_A3.tab.c"
    break;

  case 22: /* multiplicative_expression: multiplicative_expression MULTIPLICATION unary_expression  */
#line 102 "31_A3.y"
                                                                                                                                                                                {printf("multiplicative-expression\n");}
#line 1389 "31_A3.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression DIVISION unary_expression  */
#line 103 "31_A3.y"
                                                                                                                                                                                        {printf("multiplicative-expression\n");}
#line 1395 "31_A3.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression MODULO unary_expression  */
#line 104 "31_A3.y"
                                                                                                                                                                                        {printf("multiplicative-expression\n");}
#line 1401 "31_A3.tab.c"
    break;

  case 25: /* additive_expression: multiplicative_expression  */
#line 107 "31_A3.y"
                                                                                                                                                                                                                        {printf("additive-expression\n");}
#line 1407 "31_A3.tab.c"
    break;

  case 26: /* additive_expression: additive_expression ADDITION multiplicative_expression  */
#line 108 "31_A3.y"
                                                                                                                                                                                                {printf("additive-expression\n");}
#line 1413 "31_A3.tab.c"
    break;

  case 27: /* additive_expression: additive_expression SUBTRACTION multiplicative_expression  */
#line 109 "31_A3.y"
                                                                                                                                                                                        {printf("additive-expression\n");}
#line 1419 "31_A3.tab.c"
    break;

  case 28: /* relational_expression: additive_expression  */
#line 112 "31_A3.y"
                                                                                                                                                                                                                                {printf("relational-expression\n");}
#line 1425 "31_A3.tab.c"
    break;

  case 29: /* relational_expression: relational_expression LESS_THAN additive_expression  */
#line 113 "31_A3.y"
                                                                                                                                                                                                {printf("relational-expression\n");}
#line 1431 "31_A3.tab.c"
    break;

  case 30: /* relational_expression: relational_expression GREATER_THAN additive_expression  */
#line 114 "31_A3.y"
                                                                                                                                                                                        {printf("relational-expression\n");}
#line 1437 "31_A3.tab.c"
    break;

  case 31: /* relational_expression: relational_expression LESS_THAN_OR_EQUAL_TO additive_expression  */
#line 115 "31_A3.y"
                                                                                                                                                                                {printf("relational-expression\n");}
#line 1443 "31_A3.tab.c"
    break;

  case 32: /* relational_expression: relational_expression GREATER_THAN_OR_EQUAL_TO additive_expression  */
#line 116 "31_A3.y"
                                                                                                                                                                                {printf("relational-expression\n");}
#line 1449 "31_A3.tab.c"
    break;

  case 33: /* equality_expression: relational_expression  */
#line 119 "31_A3.y"
                                                                                                                                                                                                                                {printf("equality-expression\n");}
#line 1455 "31_A3.tab.c"
    break;

  case 34: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 120 "31_A3.y"
                                                                                                                                                                                                {printf("equality-expression\n");}
#line 1461 "31_A3.tab.c"
    break;

  case 35: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 121 "31_A3.y"
                                                                                                                                                                                                {printf("equality-expression\n");}
#line 1467 "31_A3.tab.c"
    break;

  case 36: /* logical_and_expression: equality_expression  */
#line 124 "31_A3.y"
                                                                                                                                                                                                                            {printf("logical-AND-expression\n");}
#line 1473 "31_A3.tab.c"
    break;

  case 37: /* logical_and_expression: logical_and_expression LOGICAL_AND equality_expression  */
#line 125 "31_A3.y"
                                                                                                                                                                                    {printf("logical-AND-expression\n");}
#line 1479 "31_A3.tab.c"
    break;

  case 38: /* logical_or_expression: logical_and_expression  */
#line 128 "31_A3.y"
                                                                                                                                                                                                                        {printf("logical-OR-expression\n");}
#line 1485 "31_A3.tab.c"
    break;

  case 39: /* logical_or_expression: logical_or_expression LOGICAL_OR logical_and_expression  */
#line 129 "31_A3.y"
                                                                                                                                                                                        {printf("logical-OR-expression\n");}
#line 1491 "31_A3.tab.c"
    break;

  case 40: /* conditional_expression: logical_or_expression  */
#line 132 "31_A3.y"
                                                                                                                                                                                                                        {printf("conditional-expression\n");}
#line 1497 "31_A3.tab.c"
    break;

  case 41: /* conditional_expression: logical_or_expression QUESTION_MARK expression COLON conditional_expression  */
#line 133 "31_A3.y"
                                                                                                                                                                        {printf("conditional-expression\n");}
#line 1503 "31_A3.tab.c"
    break;

  case 42: /* assignment_expression: conditional_expression  */
#line 136 "31_A3.y"
                                                                                                                                                                                                                        {printf("assignment-expression\n");}
#line 1509 "31_A3.tab.c"
    break;

  case 43: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 137 "31_A3.y"
                                                                                                                                                                                    {printf("assignment-expression\n");}
#line 1515 "31_A3.tab.c"
    break;

  case 44: /* expression: assignment_expression  */
#line 140 "31_A3.y"
                                                                                                                                                                                                                                        {printf("expression\n");}
#line 1521 "31_A3.tab.c"
    break;

  case 45: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 143 "31_A3.y"
                                                                                                                                                                                                {printf("declaration\n");}
#line 1527 "31_A3.tab.c"
    break;

  case 46: /* init_declarator: declarator  */
#line 146 "31_A3.y"
                                                                                                                                                                                                                                                {printf("init-declarator\n");}
#line 1533 "31_A3.tab.c"
    break;

  case 47: /* init_declarator: declarator ASSIGN initializer  */
#line 147 "31_A3.y"
                                                                                                                                                                                                                        {printf("init-declarator\n");}
#line 1539 "31_A3.tab.c"
    break;

  case 48: /* type_specifier: VOID  */
#line 150 "31_A3.y"
                                                                                                                                                                                                                                                {printf("type-specifier\n");}
#line 1545 "31_A3.tab.c"
    break;

  case 49: /* type_specifier: CHAR  */
#line 151 "31_A3.y"
                                                                                                                                                                                                                                                {printf("type-specifier\n");}
#line 1551 "31_A3.tab.c"
    break;

  case 50: /* type_specifier: INT  */
#line 152 "31_A3.y"
                                                                                                                                                                                                                                                        {printf("type-specifier\n");}
#line 1557 "31_A3.tab.c"
    break;

  case 51: /* declarator: pointer_opt direct_declarator  */
#line 155 "31_A3.y"
                                                                                                                                                                                                                                {printf("declarator\n");}
#line 1563 "31_A3.tab.c"
    break;

  case 52: /* direct_declarator: IDENTIFIER  */
#line 158 "31_A3.y"
                                                                                                                                                                                                                                        {printf("direct-declarator\n");}
#line 1569 "31_A3.tab.c"
    break;

  case 53: /* direct_declarator: IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 159 "31_A3.y"
                                                                                                                                                                            {printf("direct-declarator\n");}
#line 1575 "31_A3.tab.c"
    break;

  case 54: /* direct_declarator: IDENTIFIER LEFT_PARENTHESIS parameter_list_opt RIGHT_PARENTHESIS  */
#line 160 "31_A3.y"
                                                                                                                                                                                {printf("direct-declarator\n");}
#line 1581 "31_A3.tab.c"
    break;

  case 55: /* pointer: MULTIPLICATION  */
#line 163 "31_A3.y"
                                                                                                                                                                                                                                {printf("pointer\n");}
#line 1587 "31_A3.tab.c"
    break;

  case 56: /* parameter_list: parameter_declaration  */
#line 166 "31_A3.y"
                                                                                                                                                                                                                                {printf("parameter-list\n");}
#line 1593 "31_A3.tab.c"
    break;

  case 57: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 167 "31_A3.y"
                                                                                                                                                                                                                {printf("parameter-list\n");}
#line 1599 "31_A3.tab.c"
    break;

  case 58: /* parameter_declaration: type_specifier pointer_opt identifier_opt  */
#line 170 "31_A3.y"
                                                                                                                                    {printf("parameter-declaration\n");}
#line 1605 "31_A3.tab.c"
    break;

  case 59: /* initializer: assignment_expression  */
#line 174 "31_A3.y"
                                                                                                                                                                                                                                        {printf("initializer\n");}
#line 1611 "31_A3.tab.c"
    break;

  case 60: /* statement: compound_statement  */
#line 178 "31_A3.y"
                                                                                                                                                                                                                                        {printf("statement\n");}
#line 1617 "31_A3.tab.c"
    break;

  case 61: /* statement: expression_statement  */
#line 179 "31_A3.y"
                                                                                                                                                                                                                                        {printf("statement\n");}
#line 1623 "31_A3.tab.c"
    break;

  case 62: /* statement: selection_statement  */
#line 180 "31_A3.y"
                                                                                                                                                                                                                                        {printf("statement\n");}
#line 1629 "31_A3.tab.c"
    break;

  case 63: /* statement: iteration_statement  */
#line 181 "31_A3.y"
                                                                                                                                                                                                                                        {printf("statement\n");}
#line 1635 "31_A3.tab.c"
    break;

  case 64: /* statement: jump_statement  */
#line 182 "31_A3.y"
                                                                                                                                                                                                                                                {printf("statement\n");}
#line 1641 "31_A3.tab.c"
    break;

  case 65: /* compound_statement: LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 185 "31_A3.y"
                                                                                                                                                                                        {printf("compound-statement\n");}
#line 1647 "31_A3.tab.c"
    break;

  case 66: /* block_item_list: block_item  */
#line 188 "31_A3.y"
                                                                                                                                                                                                                                                {printf("block-item-list\n");}
#line 1653 "31_A3.tab.c"
    break;

  case 67: /* block_item_list: block_item_list block_item  */
#line 189 "31_A3.y"
                                                                                                                                                                                                                                {printf("block-item-list\n");}
#line 1659 "31_A3.tab.c"
    break;

  case 68: /* block_item: declaration  */
#line 192 "31_A3.y"
                                                                                                                                                                                                                                                {printf("block-item\n");}
#line 1665 "31_A3.tab.c"
    break;

  case 69: /* block_item: statement  */
#line 193 "31_A3.y"
                                                                                                                                                                                                                                                {printf("block-item\n");}
#line 1671 "31_A3.tab.c"
    break;

  case 70: /* expression_statement: expression_opt SEMICOLON  */
#line 196 "31_A3.y"
                                                                                                                                                                                                                        {printf("expression-statement\n");}
#line 1677 "31_A3.tab.c"
    break;

  case 71: /* selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement  */
#line 199 "31_A3.y"
                                                                                                                                                                                        {printf("selection-statement\n");}
#line 1683 "31_A3.tab.c"
    break;

  case 72: /* selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement  */
#line 200 "31_A3.y"
                                                                                                                                                                        {printf("selection-statement\n");}
#line 1689 "31_A3.tab.c"
    break;

  case 73: /* iteration_statement: FOR LEFT_PARENTHESIS expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PARENTHESIS statement  */
#line 203 "31_A3.y"
                                                                                                                                        {printf("iteration-statement\n");}
#line 1695 "31_A3.tab.c"
    break;

  case 74: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 206 "31_A3.y"
                                                                                                                                                                                                                        {printf("jump-statement\n");}
#line 1701 "31_A3.tab.c"
    break;

  case 75: /* translation_unit: external_declaration  */
#line 209 "31_A3.y"
                                                                                                                                                                                                                                {printf("translation-unit\n");}
#line 1707 "31_A3.tab.c"
    break;

  case 76: /* translation_unit: translation_unit external_declaration  */
#line 210 "31_A3.y"
                                                                                                                                                                                                                {printf("translation-unit\n");}
#line 1713 "31_A3.tab.c"
    break;

  case 77: /* external_declaration: function_definition  */
#line 213 "31_A3.y"
                                                                                                                                                                                                                                {printf("external-declaration\n");}
#line 1719 "31_A3.tab.c"
    break;

  case 78: /* external_declaration: declaration  */
#line 214 "31_A3.y"
                                                                                                                                                                                                                                        {printf("external-declaration\n");}
#line 1725 "31_A3.tab.c"
    break;

  case 79: /* function_definition: type_specifier declarator declaration_list_opt compound_statement  */
#line 216 "31_A3.y"
                                                                                                                                                {printf("function-definition\n");}
#line 1731 "31_A3.tab.c"
    break;

  case 80: /* identifier_opt: IDENTIFIER  */
#line 219 "31_A3.y"
                                                                                                                                                                                                                                                {}
#line 1737 "31_A3.tab.c"
    break;

  case 82: /* pointer_opt: pointer  */
#line 223 "31_A3.y"
                                                                                                                                                                                                                                                {}
#line 1743 "31_A3.tab.c"
    break;

  case 84: /* parameter_list_opt: parameter_list  */
#line 228 "31_A3.y"
                                                                                                                                    {}
#line 1749 "31_A3.tab.c"
    break;

  case 86: /* block_item_list_opt: block_item_list  */
#line 233 "31_A3.y"
                                                                                                                                                                                                                                {}
#line 1755 "31_A3.tab.c"
    break;

  case 88: /* expression_opt: expression  */
#line 238 "31_A3.y"
                                                                                                                                                                                                                                                {}
#line 1761 "31_A3.tab.c"
    break;

  case 90: /* argument_expression_list_opt: argument_expression_list  */
#line 243 "31_A3.y"
                                                                                                                                    {}
#line 1767 "31_A3.tab.c"
    break;

  case 93: /* declaration_list_opt: %empty  */
#line 249 "31_A3.y"
                                                                                                                                                                                                                                                {}
#line 1773 "31_A3.tab.c"
    break;

  case 94: /* declaration_list: declaration  */
#line 252 "31_A3.y"
                                                                                                                                                                                                                                        {}
#line 1779 "31_A3.tab.c"
    break;


#line 1783 "31_A3.tab.c"

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

#line 256 "31_A3.y"


void yyerror(char *s) {
printf("Error: %s on '%s'\n", s, yytext);
}
