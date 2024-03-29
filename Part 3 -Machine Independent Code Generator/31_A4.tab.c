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
#line 1 "31_A4.y"

#include <iostream>
#include "31_A4_translator.h"
using namespace std;

extern int yylex();
void yyerror(string s);
extern char* yytext;
extern int yylineno;
extern string prevType;
Expression* tmpForBool;

#line 84 "31_A4.tab.c"

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

#include "31_A4.tab.h"
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
  YYSYMBOL_LEFT_SQUARE_BRACKET = 10,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 11,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 12,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 13,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 14,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 15,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 16,                       /* DOT  */
  YYSYMBOL_ARROW = 17,                     /* ARROW  */
  YYSYMBOL_BITWISE_AND = 18,               /* BITWISE_AND  */
  YYSYMBOL_MULTIPLICATION = 19,            /* MULTIPLICATION  */
  YYSYMBOL_ADDITION = 20,                  /* ADDITION  */
  YYSYMBOL_SUBTRACTION = 21,               /* SUBTRACTION  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_DIVISION = 23,                  /* DIVISION  */
  YYSYMBOL_MODULO = 24,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 25,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 26,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_OR_EQUAL_TO = 27,     /* LESS_THAN_OR_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL_TO = 28,  /* GREATER_THAN_OR_EQUAL_TO  */
  YYSYMBOL_EQUAL = 29,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 30,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 31,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 32,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 33,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 34,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 36,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 39,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 40,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 41,            /* STRING_LITERAL  */
  YYSYMBOL_THEN = 42,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_primary_expression = 44,        /* primary_expression  */
  YYSYMBOL_constant = 45,                  /* constant  */
  YYSYMBOL_postfix_expression = 46,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 47,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 48,          /* unary_expression  */
  YYSYMBOL_unary_operator = 49,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 50, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 51,       /* additive_expression  */
  YYSYMBOL_relational_expression = 52,     /* relational_expression  */
  YYSYMBOL_equality_expression = 53,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 54,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 55,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 56,    /* conditional_expression  */
  YYSYMBOL_A = 57,                         /* A  */
  YYSYMBOL_B = 58,                         /* B  */
  YYSYMBOL_assignment_expression = 59,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 60,       /* assignment_operator  */
  YYSYMBOL_expression = 61,                /* expression  */
  YYSYMBOL_declaration = 62,               /* declaration  */
  YYSYMBOL_init_declarator = 63,           /* init_declarator  */
  YYSYMBOL_type_specifier = 64,            /* type_specifier  */
  YYSYMBOL_declarator = 65,                /* declarator  */
  YYSYMBOL_intermediate_identifier = 66,   /* intermediate_identifier  */
  YYSYMBOL_direct_declarator = 67,         /* direct_declarator  */
  YYSYMBOL_pointer = 68,                   /* pointer  */
  YYSYMBOL_parameter_list = 69,            /* parameter_list  */
  YYSYMBOL_intermediate_declarator = 70,   /* intermediate_declarator  */
  YYSYMBOL_parameter_declaration = 71,     /* parameter_declaration  */
  YYSYMBOL_initializer = 72,               /* initializer  */
  YYSYMBOL_statement = 73,                 /* statement  */
  YYSYMBOL_loop_statement = 74,            /* loop_statement  */
  YYSYMBOL_compound_statement = 75,        /* compound_statement  */
  YYSYMBOL_block_item_list = 76,           /* block_item_list  */
  YYSYMBOL_block_item = 77,                /* block_item  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_selection_statement = 79,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 80,       /* iteration_statement  */
  YYSYMBOL_F = 81,                         /* F  */
  YYSYMBOL_NESTPARSER = 82,                /* NESTPARSER  */
  YYSYMBOL_replaceActiveSymbolTableParse = 83, /* replaceActiveSymbolTableParse  */
  YYSYMBOL_jump_statement = 84,            /* jump_statement  */
  YYSYMBOL_translation_unit = 85,          /* translation_unit  */
  YYSYMBOL_external_declaration = 86,      /* external_declaration  */
  YYSYMBOL_function_definition = 87,       /* function_definition  */
  YYSYMBOL_declaration_list = 88,          /* declaration_list  */
  YYSYMBOL_argument_expression_list_opt = 89, /* argument_expression_list_opt  */
  YYSYMBOL_block_item_list_opt = 90,       /* block_item_list_opt  */
  YYSYMBOL_declaration_list_opt = 91       /* declaration_list_opt  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

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
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   117,   122,   128,   137,   142,   151,   165,
     185,   191,   193,   199,   204,   212,   216,   259,   263,   267,
     271,   275,   284,   300,   311,   322,   336,   340,   351,   366,
     370,   384,   398,   412,   429,   433,   449,   469,   473,   486,
     490,   503,   507,   527,   533,   542,   546,   564,   570,   577,
     583,   587,   597,   601,   605,   613,   622,   627,   635,   640,
     659,   671,   686,   693,   695,   700,   709,   714,   716,   721,
     728,   732,   737,   741,   745,   752,   757,   761,   765,   772,
     781,   785,   793,   797,   804,   808,   815,   824,   837,   849,
     863,   870,   882,   895,   900,   908,   910,   915,   917,   922,
     932,   934,   940,   944,   951,   955,   961,   963
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
  "IF", "INT", "RETURN", "VOID", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW",
  "BITWISE_AND", "MULTIPLICATION", "ADDITION", "SUBTRACTION", "NOT",
  "DIVISION", "MODULO", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN_OR_EQUAL_TO", "EQUAL",
  "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON",
  "SEMICOLON", "ASSIGN", "COMMA", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "THEN", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "A", "B",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "intermediate_identifier", "direct_declarator", "pointer",
  "parameter_list", "intermediate_declarator", "parameter_declaration",
  "initializer", "statement", "loop_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "F", "NESTPARSER",
  "replaceActiveSymbolTableParse", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "argument_expression_list_opt", "block_item_list_opt",
  "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,  -150,  -150,  -150,  -150,   -13,   115,  -150,  -150,  -150,
      14,   -25,     8,     6,  -150,   -11,  -150,  -150,   -26,  -150,
     213,  -150,   -13,    51,  -150,  -150,  -150,    10,   213,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     143,    13,   213,    70,    41,   136,    47,    21,    58,  -150,
    -150,  -150,    38,  -150,    64,    66,  -150,  -150,    68,   213,
     213,    50,    61,  -150,   213,  -150,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,  -150,  -150,    63,
     130,  -150,   -10,    -8,  -150,  -150,    92,    69,  -150,   103,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,    70,    70,    41,
      41,    41,    41,   136,   136,   213,   213,  -150,  -150,   107,
     178,  -150,  -150,    85,  -150,  -150,  -150,   108,  -150,  -150,
    -150,  -150,  -150,   110,  -150,  -150,    88,  -150,  -150,    51,
    -150,   213,  -150,    47,    21,   213,   116,   213,  -150,    94,
    -150,  -150,   130,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   130,  -150,   100,  -150,   119,   125,  -150,   202,  -150,
    -150,   213,  -150,    45,  -150,   202,  -150,  -150,   139,   213,
    -150,  -150,    45,   132,  -150,  -150,   167,   130,  -150,  -150,
    -150,  -150,  -150,   131,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    53,    54,    52,    98,     0,     0,    95,    97,    62,
      58,     0,    50,     0,    56,     0,     1,    96,     0,    49,
       0,   100,     0,   106,    92,    92,    55,     0,     0,    17,
      18,    19,    20,    21,     2,     6,     7,     4,     8,     3,
      15,    22,     0,    26,    29,    34,    37,    39,    41,    45,
      69,    51,    50,   101,     0,     0,    59,    48,     0,     0,
     103,     0,     0,    47,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    43,     0,
     105,    61,    68,     0,    63,     5,     0,   102,    13,     0,
      11,    12,    46,    23,    24,    25,    22,    27,    28,    30,
      31,    32,    33,    35,    36,     0,     0,    43,    90,     0,
       0,    91,    85,     0,    82,    83,    70,    43,    80,    71,
      72,    73,    74,     0,    57,    66,     0,    67,    60,     0,
       9,     0,    10,    38,    40,     0,     0,     0,    94,     0,
      92,    84,     0,    99,    65,    64,    14,    44,    91,    44,
      93,   105,    81,     0,    92,     0,     0,    43,     0,    43,
      79,     0,    43,     0,    42,     0,    44,    43,    86,     0,
      43,    44,     0,     0,    87,    43,     0,   105,    88,    75,
      76,    77,    78,     0,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,   -34,  -150,    32,   120,    36,
      42,    48,  -150,    -5,   -62,   -79,   -17,  -150,   -28,    98,
    -150,     1,   135,   -78,   151,    76,  -150,  -150,    49,  -150,
    -149,  -150,  -150,  -150,    25,  -146,    -2,     0,  -150,    29,
     -23,     4,  -150,   176,  -150,  -150,  -150,  -131,  -150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    38,    39,    40,    87,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   105,    79,    57,    64,   113,   114,
      11,    22,    12,    13,    14,    15,    83,   127,    84,    51,
     115,   178,   116,   117,   118,   119,   120,   121,   136,   140,
      54,   122,     6,     7,     8,    23,    89,   123,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,     5,    55,    50,   125,   128,     9,     5,    65,     9,
      19,     1,   162,    27,   166,     2,   106,     3,    25,   167,
     156,    56,  -107,   174,    18,    10,   -57,    10,   124,   129,
     179,    86,    93,    94,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    88,    20,   135,   183,    92,   144,    63,
     108,   109,    77,   110,     1,   142,    82,    28,     2,   111,
       3,    69,    70,    29,    30,    31,    32,    33,   153,     1,
     155,    96,    96,     2,    20,     3,    75,    76,    80,    81,
     112,    85,   139,    34,    35,    36,    37,   168,    90,    66,
      78,   -44,   173,    67,    68,   161,   107,   163,     4,    91,
     165,    97,    98,   130,     4,   169,   131,   147,   172,   149,
      21,   103,   104,   176,   146,    16,   132,   151,     1,   137,
     141,    53,     2,  -104,     3,   143,   124,    96,   148,   150,
      82,   158,   159,     1,   157,   108,   109,     2,   110,     3,
     160,   171,    28,   170,   111,   175,   184,   133,    29,    30,
      31,    32,    33,    59,   134,    60,   164,    52,   126,    61,
      62,    71,    72,    73,    74,   112,    26,   152,    34,    35,
      36,    37,   108,   109,   180,   110,   181,   154,   145,    28,
     182,   177,    17,     0,     0,    29,    30,    31,    32,    33,
      28,    99,   100,   101,   102,     0,    29,    30,    31,    32,
      33,     0,   112,     0,     0,    34,    35,    36,    37,     0,
       0,     0,     0,   138,    28,     0,    34,    35,    36,    37,
      29,    30,    31,    32,    33,    28,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,     0,   112,     0,     0,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      28,     0,    25,    20,    82,    13,    19,     6,    42,    19,
      35,     3,   158,    39,   163,     7,    78,     9,    12,   165,
     151,    11,    14,   172,    10,    38,    12,    38,    38,    37,
     176,    59,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    60,    36,   107,   177,    64,   126,    36,
       5,     6,    31,     8,     3,   117,    55,    12,     7,    14,
       9,    20,    21,    18,    19,    20,    21,    22,   147,     3,
     149,   105,   106,     7,    36,     9,    29,    30,    14,    13,
      35,    13,   110,    38,    39,    40,    41,   166,    38,    19,
      32,    33,   171,    23,    24,   157,    33,   159,     0,    38,
     162,    69,    70,    11,     6,   167,    37,   135,   170,   137,
      12,    75,    76,   175,   131,     0,    13,   140,     3,    12,
      35,    23,     7,    15,     9,    15,    38,   161,    12,    35,
     129,   154,    13,     3,    34,     5,     6,     7,     8,     9,
      15,   169,    12,     4,    14,    13,    15,   105,    18,    19,
      20,    21,    22,    10,   106,    12,   161,    22,    82,    16,
      17,    25,    26,    27,    28,    35,    15,   142,    38,    39,
      40,    41,     5,     6,   176,     8,   176,   148,   129,    12,
     176,    14,     6,    -1,    -1,    18,    19,    20,    21,    22,
      12,    71,    72,    73,    74,    -1,    18,    19,    20,    21,
      22,    -1,    35,    -1,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    35,    12,    -1,    38,    39,    40,    41,
      18,    19,    20,    21,    22,    12,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    62,    64,    85,    86,    87,    19,
      38,    63,    65,    66,    67,    68,     0,    86,    10,    35,
      36,    62,    64,    88,    91,    12,    67,    39,    12,    18,
      19,    20,    21,    22,    38,    39,    40,    41,    44,    45,
      46,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      59,    72,    65,    62,    83,    83,    11,    59,    61,    10,
      12,    16,    17,    36,    60,    48,    19,    23,    24,    20,
      21,    25,    26,    27,    28,    29,    30,    31,    32,    58,
      14,    13,    64,    69,    71,    13,    61,    47,    59,    89,
      38,    38,    59,    48,    48,    48,    48,    50,    50,    51,
      51,    51,    51,    52,    52,    57,    57,    33,     5,     6,
       8,    14,    35,    61,    62,    73,    75,    76,    77,    78,
      79,    80,    84,    90,    38,    66,    68,    70,    13,    37,
      11,    37,    13,    53,    54,    57,    81,    12,    35,    61,
      82,    35,    57,    15,    66,    71,    59,    61,    12,    61,
      35,    83,    77,    58,    82,    58,    90,    34,    83,    13,
      15,    57,    78,    57,    56,    57,    73,    78,    58,    57,
       4,    61,    57,    58,    73,    13,    57,    14,    74,    78,
      79,    80,    84,    90,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    45,    45,    46,    46,
      46,    46,    46,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    51,    52,
      52,    52,    52,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    58,    59,    59,    60,    61,    62,
      63,    63,    64,    64,    64,    65,    65,    66,    67,    67,
      67,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    82,    83,    84,    84,    85,    85,    86,    86,    87,
      88,    88,    89,    89,    90,    90,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     4,
       4,     3,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     9,     0,     0,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     2,     1,     1,     1,     4,
       5,     4,     1,     1,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     1,     2,     1,     8,    11,    14,    16,
       0,     0,     0,     3,     2,     1,     2,     1,     1,     7,
       1,     2,     1,     0,     1,     0,     1,     0
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
#line 112 "31_A4.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
        (yyval.expr)->type = "non_bool";
    }
#line 1322 "31_A4.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 118 "31_A4.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
    }
#line 1331 "31_A4.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 123 "31_A4.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("ptr"), (yyvsp[0].string_value));
        (yyval.expr)->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("char");
    }
#line 1341 "31_A4.tab.c"
    break;

  case 5: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 129 "31_A4.y"
    {
        (yyval.expr) = (yyvsp[-1].expr);
        if ((yyvsp[-1].expr)->type == "bool")
            tmpForBool = (yyvsp[-1].expr);
    }
#line 1351 "31_A4.tab.c"
    break;

  case 6: /* constant: INTEGER_CONSTANT  */
#line 138 "31_A4.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("int"), to_string((yyvsp[0].int_value)));
        emit("=", (yyval.symptr)->name, (yyvsp[0].int_value));
    }
#line 1360 "31_A4.tab.c"
    break;

  case 7: /* constant: CHARACTER_CONSTANT  */
#line 143 "31_A4.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("float"), string((yyvsp[0].string_value)));
        emit("=", (yyval.symptr)->name, string((yyvsp[0].string_value)));
    }
#line 1369 "31_A4.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 152 "31_A4.y"
    {
        (yyval.arr) = new Array();
        if ((yyvsp[0].expr)->type != "bool")
        {
            (yyval.arr)->array = (yyvsp[0].expr)->STaddress;
            (yyval.arr)->type = (yyvsp[0].expr)->STaddress->symbolTableEntryType;
            (yyval.arr)->STaddress = (yyval.arr)->array;
        }
        else
        {
            (yyval.arr)->arrayType = "bool_temporary";
        }
    }
#line 1387 "31_A4.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 166 "31_A4.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->type = (yyvsp[-3].arr)->type->arrElementType;
        (yyval.arr)->array = (yyvsp[-3].arr)->array;
        (yyval.arr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("int"));
        (yyval.arr)->arrayType = "arr";
        if ((yyvsp[-3].arr)->arrayType == "arr")
        {
            symbolTableInit* sym = currentSymbolTable->gentemp(new symbolTableData("int"));
            int sz = getSize((yyval.arr)->type);
            emit("*", sym->name, (yyvsp[-1].expr)->STaddress->name, to_string(sz));
            emit("+", (yyval.arr)->STaddress->name, (yyvsp[-3].arr)->STaddress->name, sym->name);
        }
        else
        {
            int sz = getSize((yyval.arr)->type);
            emit("*", (yyval.arr)->STaddress->name, (yyvsp[-1].expr)->STaddress->name, to_string(sz));
        }
    }
#line 1411 "31_A4.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS  */
#line 186 "31_A4.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->array = currentSymbolTable->gentemp((yyvsp[-3].arr)->type);
        emit("call", (yyval.arr)->array->name, (yyvsp[-3].arr)->array->name, to_string((yyvsp[-1].numParams)));
    }
#line 1421 "31_A4.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 192 "31_A4.y"
    {}
#line 1427 "31_A4.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 194 "31_A4.y"
    {}
#line 1433 "31_A4.tab.c"
    break;

  case 13: /* argument_expression_list: assignment_expression  */
#line 200 "31_A4.y"
    {
        (yyval.numParams) = 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1442 "31_A4.tab.c"
    break;

  case 14: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 205 "31_A4.y"
    {
        (yyval.numParams) = (yyvsp[-2].numParams) + 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1451 "31_A4.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 213 "31_A4.y"
    {
        (yyval.arr) = (yyvsp[0].arr);
    }
#line 1459 "31_A4.tab.c"
    break;

  case 16: /* unary_expression: unary_operator unary_expression  */
#line 217 "31_A4.y"
    {
        (yyval.arr) = new Array();
        switch ((yyvsp[-1].unaryOp))
        {
        case '&':
            (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData("ptr"));
            (yyval.arr)->array->symbolTableEntryType->arrElementType = (yyvsp[0].arr)->array->symbolTableEntryType;
            emit("= &", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            break;
        case '*':
            (yyval.arr)->arrayType = "ptr";
            (yyval.arr)->STaddress = currentSymbolTable->gentemp((yyvsp[0].arr)->array->symbolTableEntryType->arrElementType);
            (yyval.arr)->array = (yyvsp[0].arr)->array;
            emit("= *", (yyval.arr)->STaddress->name, (yyvsp[0].arr)->array->name);
            break;
        case '+':
            (yyval.arr) = (yyvsp[0].arr);
            break;
        case '-':
            (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData((yyvsp[0].arr)->array->symbolTableEntryType->type));
            emit("= -", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            break;
        case '!':
            if ((yyvsp[0].arr)->arrayType == "bool_temporary")
            {
                list<int> l = tmpForBool->falselist;
                tmpForBool->falselist = tmpForBool->truelist;
                tmpForBool->truelist = l;
                (yyval.arr)->arrayType = "bool_temporary";
            }
            else
            {
                (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData((yyvsp[0].arr)->array->symbolTableEntryType->type));
                emit("= !", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            }
            break;
        }
    }
#line 1502 "31_A4.tab.c"
    break;

  case 17: /* unary_operator: BITWISE_AND  */
#line 260 "31_A4.y"
    {
        (yyval.unaryOp) = '&';
    }
#line 1510 "31_A4.tab.c"
    break;

  case 18: /* unary_operator: MULTIPLICATION  */
#line 264 "31_A4.y"
    {
        (yyval.unaryOp) = '*';
    }
#line 1518 "31_A4.tab.c"
    break;

  case 19: /* unary_operator: ADDITION  */
#line 268 "31_A4.y"
    {
        (yyval.unaryOp) = '+';
    }
#line 1526 "31_A4.tab.c"
    break;

  case 20: /* unary_operator: SUBTRACTION  */
#line 272 "31_A4.y"
    {
        (yyval.unaryOp) = '-';
    }
#line 1534 "31_A4.tab.c"
    break;

  case 21: /* unary_operator: NOT  */
#line 276 "31_A4.y"
    {
        (yyval.unaryOp) = '!';
    }
#line 1542 "31_A4.tab.c"
    break;

  case 22: /* multiplicative_expression: unary_expression  */
#line 285 "31_A4.y"
        {
            (yyval.expr) = new Expression();
            if((yyvsp[0].arr)->arrayType == "arr") {
                (yyval.expr)->STaddress = currentSymbolTable->gentemp((yyvsp[0].arr)->STaddress->symbolTableEntryType);
                emit("=[]", (yyval.expr)->STaddress->name, (yyvsp[0].arr)->array->name, (yyvsp[0].arr)->STaddress->name);
            }
            else if((yyvsp[0].arr)->arrayType == "ptr") {
                (yyval.expr)->STaddress = (yyvsp[0].arr)->STaddress;
            }
            else if((yyvsp[0].arr)->arrayType == "bool_temporary") {
                (yyval.expr) = tmpForBool;
            } else {
                (yyval.expr)->STaddress = (yyvsp[0].arr)->array;
            }
        }
#line 1562 "31_A4.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULTIPLICATION unary_expression  */
#line 301 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("*", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1577 "31_A4.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIVISION unary_expression  */
#line 312 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("/", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1592 "31_A4.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MODULO unary_expression  */
#line 323 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("%", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1607 "31_A4.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 337 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1615 "31_A4.tab.c"
    break;

  case 27: /* additive_expression: additive_expression ADDITION multiplicative_expression  */
#line 341 "31_A4.y"
        {   
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("+", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1630 "31_A4.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUBTRACTION multiplicative_expression  */
#line 352 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("-", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1645 "31_A4.tab.c"
    break;

  case 29: /* relational_expression: additive_expression  */
#line 367 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1653 "31_A4.tab.c"
    break;

  case 30: /* relational_expression: relational_expression LESS_THAN additive_expression  */
#line 371 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1671 "31_A4.tab.c"
    break;

  case 31: /* relational_expression: relational_expression GREATER_THAN additive_expression  */
#line 385 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1689 "31_A4.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LESS_THAN_OR_EQUAL_TO additive_expression  */
#line 399 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1707 "31_A4.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GREATER_THAN_OR_EQUAL_TO additive_expression  */
#line 413 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1725 "31_A4.tab.c"
    break;

  case 34: /* equality_expression: relational_expression  */
#line 430 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1733 "31_A4.tab.c"
    break;

  case 35: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 434 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                boolToIntConversion((yyvsp[-2].expr));
                boolToIntConversion((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("==", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1753 "31_A4.tab.c"
    break;

  case 36: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 450 "31_A4.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                boolToIntConversion((yyvsp[-2].expr));
                boolToIntConversion((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("!=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1773 "31_A4.tab.c"
    break;

  case 37: /* logical_and_expression: equality_expression  */
#line 470 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1781 "31_A4.tab.c"
    break;

  case 38: /* logical_and_expression: logical_and_expression LOGICAL_AND A equality_expression  */
#line 474 "31_A4.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
        }
#line 1795 "31_A4.tab.c"
    break;

  case 39: /* logical_or_expression: logical_and_expression  */
#line 487 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1803 "31_A4.tab.c"
    break;

  case 40: /* logical_or_expression: logical_or_expression LOGICAL_OR A logical_and_expression  */
#line 491 "31_A4.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);
        }
#line 1817 "31_A4.tab.c"
    break;

  case 41: /* conditional_expression: logical_or_expression  */
#line 504 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1825 "31_A4.tab.c"
    break;

  case 42: /* conditional_expression: logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression  */
#line 508 "31_A4.y"
        {   
            (yyval.expr)->STaddress = currentSymbolTable->gentemp((yyvsp[-4].expr)->STaddress->symbolTableEntryType);
            (yyval.expr)->STaddress->update_symbol((yyvsp[-4].expr)->STaddress->symbolTableEntryType);
            emit("=", (yyval.expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());
            emit("=", (yyval.expr)->STaddress->name, (yyvsp[-4].expr)->STaddress->name);
            list<int> l2 = makelist(nextinstr());
            l1 = merge(l1, l2);
            emit("goto", "");
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            backpatch(l1, nextinstr());
        }
#line 1847 "31_A4.tab.c"
    break;

  case 43: /* A: %empty  */
#line 528 "31_A4.y"
        {   
            (yyval.instr) = nextinstr();
        }
#line 1855 "31_A4.tab.c"
    break;

  case 44: /* B: %empty  */
#line 534 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 1865 "31_A4.tab.c"
    break;

  case 45: /* assignment_expression: conditional_expression  */
#line 543 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1873 "31_A4.tab.c"
    break;

  case 46: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 547 "31_A4.y"
        {
            if((yyvsp[-2].arr)->arrayType == "arr") {
                (yyvsp[0].expr)->STaddress = convertType((yyvsp[0].expr)->STaddress, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->array->name, (yyvsp[-2].arr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else if((yyvsp[-2].arr)->arrayType == "ptr") {
                emit("*=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                (yyvsp[0].expr)->STaddress = convertType((yyvsp[0].expr)->STaddress, (yyvsp[-2].arr)->array->symbolTableEntryType->type);
                emit("=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->STaddress->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1892 "31_A4.tab.c"
    break;

  case 47: /* assignment_operator: ASSIGN  */
#line 565 "31_A4.y"
        {}
#line 1898 "31_A4.tab.c"
    break;

  case 48: /* expression: assignment_expression  */
#line 571 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1906 "31_A4.tab.c"
    break;

  case 49: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 578 "31_A4.y"
        {}
#line 1912 "31_A4.tab.c"
    break;

  case 50: /* init_declarator: declarator  */
#line 584 "31_A4.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr);
        }
#line 1920 "31_A4.tab.c"
    break;

  case 51: /* init_declarator: declarator ASSIGN initializer  */
#line 588 "31_A4.y"
        {   
            if((yyvsp[0].symptr)->val != "") {
                (yyvsp[-2].symptr)->val = (yyvsp[0].symptr)->val;
            }
            emit("=", (yyvsp[-2].symptr)->name, (yyvsp[0].symptr)->name);
        }
#line 1931 "31_A4.tab.c"
    break;

  case 52: /* type_specifier: VOID  */
#line 598 "31_A4.y"
        {
            prevType = "void";
        }
#line 1939 "31_A4.tab.c"
    break;

  case 53: /* type_specifier: CHAR  */
#line 602 "31_A4.y"
        {
            prevType = "char";
        }
#line 1947 "31_A4.tab.c"
    break;

  case 54: /* type_specifier: INT  */
#line 606 "31_A4.y"
        {
            prevType = "int";
        }
#line 1955 "31_A4.tab.c"
    break;

  case 55: /* declarator: pointer direct_declarator  */
#line 614 "31_A4.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 1968 "31_A4.tab.c"
    break;

  case 56: /* declarator: direct_declarator  */
#line 623 "31_A4.y"
        {}
#line 1974 "31_A4.tab.c"
    break;

  case 57: /* intermediate_identifier: IDENTIFIER  */
#line 628 "31_A4.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 1983 "31_A4.tab.c"
    break;

  case 58: /* direct_declarator: IDENTIFIER  */
#line 636 "31_A4.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 1992 "31_A4.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 641 "31_A4.y"
        {
            symbolTableData* t = (yyvsp[-3].symptr)->symbolTableEntryType;
            symbolTableData* prev = NULL;
            while(t->type == "arr") {
                prev = t;
                t = t->arrElementType;
            }
            if(prev == NULL) {
                int temp = (yyvsp[-1].int_value);
                symbolTableData* tp = new symbolTableData("arr", (yyvsp[-3].symptr)->symbolTableEntryType, temp);
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol(tp);
            }
            else {
                int temp = (yyvsp[-1].int_value);
                prev->arrElementType = new symbolTableData("arr", t, temp);
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol((yyvsp[-3].symptr)->symbolTableEntryType);
            }
        }
#line 2015 "31_A4.tab.c"
    break;

  case 60: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse parameter_list RIGHT_PARENTHESIS  */
#line 660 "31_A4.y"
        {
            currentSymbolTable->name = (yyvsp[-4].symptr)->name;
            if((yyvsp[-4].symptr)->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol((yyvsp[-4].symptr)->symbolTableEntryType);
            }
            (yyvsp[-4].symptr)->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = (yyval.symptr);
        }
#line 2031 "31_A4.tab.c"
    break;

  case 61: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse RIGHT_PARENTHESIS  */
#line 672 "31_A4.y"
        {
            currentSymbolTable->name = (yyvsp[-3].symptr)->name;
            if((yyvsp[-3].symptr)->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol((yyvsp[-3].symptr)->symbolTableEntryType);
            }
            (yyvsp[-3].symptr)->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = (yyval.symptr);
        }
#line 2047 "31_A4.tab.c"
    break;

  case 62: /* pointer: MULTIPLICATION  */
#line 687 "31_A4.y"
        {
            (yyval.symType) = new symbolTableData("ptr");
        }
#line 2055 "31_A4.tab.c"
    break;

  case 63: /* parameter_list: parameter_declaration  */
#line 694 "31_A4.y"
        {}
#line 2061 "31_A4.tab.c"
    break;

  case 64: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 696 "31_A4.y"
        {}
#line 2067 "31_A4.tab.c"
    break;

  case 65: /* intermediate_declarator: pointer intermediate_identifier  */
#line 701 "31_A4.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 2080 "31_A4.tab.c"
    break;

  case 66: /* intermediate_declarator: intermediate_identifier  */
#line 710 "31_A4.y"
        {}
#line 2086 "31_A4.tab.c"
    break;

  case 67: /* parameter_declaration: type_specifier intermediate_declarator  */
#line 715 "31_A4.y"
        {}
#line 2092 "31_A4.tab.c"
    break;

  case 68: /* parameter_declaration: type_specifier  */
#line 717 "31_A4.y"
        {}
#line 2098 "31_A4.tab.c"
    break;

  case 69: /* initializer: assignment_expression  */
#line 722 "31_A4.y"
        {
            (yyval.symptr) = (yyvsp[0].expr)->STaddress;
        }
#line 2106 "31_A4.tab.c"
    break;

  case 70: /* statement: compound_statement  */
#line 729 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2114 "31_A4.tab.c"
    break;

  case 71: /* statement: expression_statement  */
#line 733 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2123 "31_A4.tab.c"
    break;

  case 72: /* statement: selection_statement  */
#line 738 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2131 "31_A4.tab.c"
    break;

  case 73: /* statement: iteration_statement  */
#line 742 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2139 "31_A4.tab.c"
    break;

  case 74: /* statement: jump_statement  */
#line 746 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2147 "31_A4.tab.c"
    break;

  case 75: /* loop_statement: expression_statement  */
#line 753 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2156 "31_A4.tab.c"
    break;

  case 76: /* loop_statement: selection_statement  */
#line 758 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2164 "31_A4.tab.c"
    break;

  case 77: /* loop_statement: iteration_statement  */
#line 762 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2172 "31_A4.tab.c"
    break;

  case 78: /* loop_statement: jump_statement  */
#line 766 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2180 "31_A4.tab.c"
    break;

  case 79: /* compound_statement: LEFT_CURLY_BRACKET NESTPARSER replaceActiveSymbolTableParse block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 773 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[-1].stmt);
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2189 "31_A4.tab.c"
    break;

  case 80: /* block_item_list: block_item  */
#line 782 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2197 "31_A4.tab.c"
    break;

  case 81: /* block_item_list: block_item_list A block_item  */
#line 786 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 2206 "31_A4.tab.c"
    break;

  case 82: /* block_item: declaration  */
#line 794 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2214 "31_A4.tab.c"
    break;

  case 83: /* block_item: statement  */
#line 798 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2222 "31_A4.tab.c"
    break;

  case 84: /* expression_statement: expression SEMICOLON  */
#line 805 "31_A4.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 2230 "31_A4.tab.c"
    break;

  case 85: /* expression_statement: SEMICOLON  */
#line 809 "31_A4.y"
        {
            (yyval.expr) = new Expression();
        }
#line 2238 "31_A4.tab.c"
    break;

  case 86: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B  */
#line 816 "31_A4.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-5].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2251 "31_A4.tab.c"
    break;

  case 87: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement  */
#line 825 "31_A4.y"
        {
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-8].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2265 "31_A4.tab.c"
    break;

  case 88: /* iteration_statement: FOR F LEFT_PARENTHESIS NESTPARSER replaceActiveSymbolTableParse expression_statement A expression_statement A expression B RIGHT_PARENTHESIS A loop_statement  */
#line 838 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            intToBoolConversion((yyvsp[-6].expr));
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", to_string((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;
            currentBlock = "";
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2281 "31_A4.tab.c"
    break;

  case 89: /* iteration_statement: FOR F LEFT_PARENTHESIS NESTPARSER replaceActiveSymbolTableParse expression_statement A expression_statement A expression B RIGHT_PARENTHESIS A LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 850 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            intToBoolConversion((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));
            emit("goto", to_string((yyvsp[-7].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;
            currentBlock = "";
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2297 "31_A4.tab.c"
    break;

  case 90: /* F: %empty  */
#line 864 "31_A4.y"
        {   
            currentBlock = "FOR";
        }
#line 2305 "31_A4.tab.c"
    break;

  case 91: /* NESTPARSER: %empty  */
#line 871 "31_A4.y"
        {   
            string newST = currentSymbolTable->name + "." + currentBlock + "$" + to_string(symbolTableCounter++);
            symbolTableInit* sym = currentSymbolTable->lookup(newST);
            sym->nestedTable = new SymbolTable(newST);
            sym->name = newST;
            sym->nestedTable->parent = currentSymbolTable;
            sym->symbolTableEntryType = new symbolTableData("block");
            currentSymbol = sym;
        }
#line 2319 "31_A4.tab.c"
    break;

  case 92: /* replaceActiveSymbolTableParse: %empty  */
#line 883 "31_A4.y"
        {   
            if(currentSymbol->nestedTable != NULL) {
                replaceActiveSymbolTable(currentSymbol->nestedTable);
                emit("label", currentSymbolTable->name);
            }
            else {
                replaceActiveSymbolTable(new SymbolTable(""));
            }
        }
#line 2333 "31_A4.tab.c"
    break;

  case 93: /* jump_statement: RETURN expression SEMICOLON  */
#line 896 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", (yyvsp[-1].expr)->STaddress->name);
        }
#line 2342 "31_A4.tab.c"
    break;

  case 94: /* jump_statement: RETURN SEMICOLON  */
#line 901 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", "");
        }
#line 2351 "31_A4.tab.c"
    break;

  case 95: /* translation_unit: external_declaration  */
#line 909 "31_A4.y"
        {}
#line 2357 "31_A4.tab.c"
    break;

  case 96: /* translation_unit: translation_unit external_declaration  */
#line 911 "31_A4.y"
        {}
#line 2363 "31_A4.tab.c"
    break;

  case 97: /* external_declaration: function_definition  */
#line 916 "31_A4.y"
        {}
#line 2369 "31_A4.tab.c"
    break;

  case 98: /* external_declaration: declaration  */
#line 918 "31_A4.y"
        {}
#line 2375 "31_A4.tab.c"
    break;

  case 99: /* function_definition: type_specifier declarator declaration_list_opt replaceActiveSymbolTableParse LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 923 "31_A4.y"
        {   
            currentSymbolTable->parent = globalSymbolTable;
            symbolTableCounter = 0;
            replaceActiveSymbolTable(globalSymbolTable);
        }
#line 2385 "31_A4.tab.c"
    break;

  case 100: /* declaration_list: declaration  */
#line 933 "31_A4.y"
        {}
#line 2391 "31_A4.tab.c"
    break;

  case 101: /* declaration_list: declaration_list declaration  */
#line 935 "31_A4.y"
        {}
#line 2397 "31_A4.tab.c"
    break;

  case 102: /* argument_expression_list_opt: argument_expression_list  */
#line 941 "31_A4.y"
    {
        (yyval.numParams) = (yyvsp[0].numParams);
    }
#line 2405 "31_A4.tab.c"
    break;

  case 103: /* argument_expression_list_opt: %empty  */
#line 945 "31_A4.y"
    {
        (yyval.numParams) = 0;
    }
#line 2413 "31_A4.tab.c"
    break;

  case 104: /* block_item_list_opt: block_item_list  */
#line 952 "31_A4.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2421 "31_A4.tab.c"
    break;

  case 105: /* block_item_list_opt: %empty  */
#line 956 "31_A4.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2429 "31_A4.tab.c"
    break;

  case 106: /* declaration_list_opt: declaration_list  */
#line 962 "31_A4.y"
        {}
#line 2435 "31_A4.tab.c"
    break;

  case 107: /* declaration_list_opt: %empty  */
#line 964 "31_A4.y"
        {}
#line 2441 "31_A4.tab.c"
    break;


#line 2445 "31_A4.tab.c"

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

#line 968 "31_A4.y"


void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Line: " << yylineno << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}
