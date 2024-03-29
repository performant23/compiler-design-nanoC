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
#line 1 "31_A5.y"

    #include <iostream>
    #include "31_A5_translator.h"
    using namespace std;

    extern int yylex();                
    void yyerror(string s);               
    extern char* yytext;                   
    extern int yylineno;                   

    extern int nextinstr;                  
    extern quadArray quadList;             
    extern symbolTable globalSymbolTable;           
    extern symbolTable* ST;                
    extern vector<string> stringConstant;    
    int strCount = 0;                      
    expression* tmpForBool;

#line 90 "31_A5.tab.c"

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

#include "31_A5.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR_LEX = 3,                   /* CHAR_LEX  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT_LEX = 7,                    /* INT_LEX  */
  YYSYMBOL_RETURN_LEX = 8,                 /* RETURN_LEX  */
  YYSYMBOL_VOID_LEX = 9,                   /* VOID_LEX  */
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
  YYSYMBOL_ADD_LEX = 20,                   /* ADD_LEX  */
  YYSYMBOL_SUBTRACTION = 21,               /* SUBTRACTION  */
  YYSYMBOL_BITWISE_NOR = 22,               /* BITWISE_NOR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_DIVISION = 24,                  /* DIVISION  */
  YYSYMBOL_MODULO = 25,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 26,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 27,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_OR_EQUAL_TO = 28,     /* LESS_THAN_OR_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL_TO = 29,  /* GREATER_THAN_OR_EQUAL_TO  */
  YYSYMBOL_EQUAL = 30,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 31,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 32,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 33,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 34,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 36,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN_LEX = 37,                /* ASSIGN_LEX  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 40,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 41,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_primary_expression = 44,        /* primary_expression  */
  YYSYMBOL_argument_expression_list = 45,  /* argument_expression_list  */
  YYSYMBOL_postfix_expression = 46,        /* postfix_expression  */
  YYSYMBOL_unary_expression = 47,          /* unary_expression  */
  YYSYMBOL_unary_operator = 48,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 49, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 50,       /* additive_expression  */
  YYSYMBOL_relational_expression = 51,     /* relational_expression  */
  YYSYMBOL_equality_expression = 52,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 53,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 54,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 55,    /* conditional_expression  */
  YYSYMBOL_A = 56,                         /* A  */
  YYSYMBOL_B = 57,                         /* B  */
  YYSYMBOL_assignment_expression = 58,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 59,       /* assignment_operator  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_init_declarator_list = 62,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 63,           /* init_declarator  */
  YYSYMBOL_type_specifier = 64,            /* type_specifier  */
  YYSYMBOL_declarator = 65,                /* declarator  */
  YYSYMBOL_intermediate_identifier = 66,   /* intermediate_identifier  */
  YYSYMBOL_direct_declarator = 67,         /* direct_declarator  */
  YYSYMBOL_parameter_list_opt = 68,        /* parameter_list_opt  */
  YYSYMBOL_pointer = 69,                   /* pointer  */
  YYSYMBOL_parameter_list = 70,            /* parameter_list  */
  YYSYMBOL_intermediate_declarator = 71,   /* intermediate_declarator  */
  YYSYMBOL_parameter_declaration = 72,     /* parameter_declaration  */
  YYSYMBOL_initializer = 73,               /* initializer  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_compound_statement = 75,        /* compound_statement  */
  YYSYMBOL_block_item_list = 76,           /* block_item_list  */
  YYSYMBOL_block_item = 77,                /* block_item  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_selection_statement = 79,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 80,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 81,            /* jump_statement  */
  YYSYMBOL_translation_unit = 82,          /* translation_unit  */
  YYSYMBOL_external_declaration = 83,      /* external_declaration  */
  YYSYMBOL_function_definition = 84,       /* function_definition  */
  YYSYMBOL_function_prototype = 85,        /* function_prototype  */
  YYSYMBOL_declaration_list = 86           /* declaration_list  */
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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

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
       0,   122,   122,   129,   138,   147,   153,   161,   169,   181,
     183,   200,   205,   225,   227,   235,   237,   274,   278,   282,
     286,   290,   297,   315,   338,   361,   387,   390,   415,   442,
     444,   471,   498,   525,   555,   560,   587,   617,   619,   629,
     631,   641,   645,   665,   673,   683,   686,   704,   709,   715,
     778,   783,   791,   796,   804,   808,   812,   820,   825,   833,
     842,   848,   859,   888,   890,   897,   904,   909,   916,   921,
     929,   944,   950,   958,   959,   960,   961,   962,   968,   970,
     978,   983,   992,   996,  1000,  1002,  1009,  1019,  1034,  1049,
    1056,  1066,  1068,  1074,  1076,  1081,  1083,  1091,  1111,  1113
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR_LEX", "ELSE",
  "FOR", "IF", "INT_LEX", "RETURN_LEX", "VOID_LEX", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW",
  "BITWISE_AND", "MULTIPLICATION", "ADD_LEX", "SUBTRACTION", "BITWISE_NOR",
  "NOT", "DIVISION", "MODULO", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN_OR_EQUAL_TO", "EQUAL",
  "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON",
  "SEMICOLON", "ASSIGN_LEX", "COMMA", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "$accept", "primary_expression",
  "argument_expression_list", "postfix_expression", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "A", "B",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "intermediate_identifier",
  "direct_declarator", "parameter_list_opt", "pointer", "parameter_list",
  "intermediate_declarator", "parameter_declaration", "initializer",
  "statement", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "function_prototype", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,  -131,  -131,  -131,  -131,   -10,    87,  -131,  -131,    19,
    -131,    18,    29,  -131,    12,    69,  -131,    -1,  -131,  -131,
     125,  -131,  -131,   -10,   248,  -131,   -10,    34,     6,    13,
    -131,    58,    77,    65,   248,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,    98,    72,   248,
      78,     3,    93,    14,    63,    40,  -131,  -131,    81,  -131,
    -131,  -131,   108,  -131,  -131,  -131,  -131,  -131,  -131,    76,
    -131,  -131,  -131,  -131,   113,    -5,   116,    97,  -131,   213,
     248,  -131,   100,   128,   248,   238,    99,   103,  -131,   248,
    -131,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,  -131,  -131,   119,  -131,  -131,   165,  -131,  -131,
    -131,   115,  -131,  -131,    13,  -131,  -131,  -131,  -131,   136,
    -131,    -6,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
      78,    78,     3,     3,     3,     3,    93,    93,   248,   248,
    -131,  -131,  -131,  -131,   213,   142,  -131,  -131,   248,    14,
      63,   248,  -131,  -131,  -131,  -131,  -131,   203,   121,   248,
    -131,  -131,  -131,   153,   248,   145,  -131,  -131,  -131,   203,
     203,  -131,  -131,  -131
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    55,    56,    54,    94,     0,     0,    91,    93,     0,
      65,    60,     0,    50,    52,     0,    58,     0,     1,    92,
       0,    96,    49,     0,     0,    98,     0,     0,     0,    64,
      57,     0,     0,     0,     0,    78,    17,    18,    19,    20,
      21,    85,     2,     3,     4,     5,     9,    15,    22,     0,
      26,    29,    34,    37,    39,    41,    45,    48,     0,    82,
      83,    73,    43,    80,    74,    75,    76,    77,    51,    52,
      72,    53,    99,    95,     0,    71,     0,    63,    66,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    47,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    43,     0,    84,    79,     0,    61,    59,
      69,     0,    70,    62,     0,    43,    44,    90,     6,     0,
      11,     0,     7,    13,    14,    46,    23,    24,    25,    22,
      27,    28,    30,    31,    32,    33,    35,    36,     0,     0,
      43,    81,    68,    67,     0,     0,    10,    12,     0,    38,
      40,     0,    44,    43,     8,    44,    43,     0,     0,     0,
      44,    43,    44,    86,     0,     0,    43,    42,    43,     0,
       0,    44,    88,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,   -39,  -131,    -2,    53,    11,    21,
      23,  -131,    -4,   -90,   -80,   -21,  -131,   -33,    -9,  -131,
     140,     2,   164,   -69,   158,  -131,   101,  -131,  -131,    64,
    -131,  -130,     8,  -131,    73,   -75,  -131,  -131,  -131,  -131,
     175,  -131,  -131,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    46,   121,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   107,   104,    57,    89,    58,     4,    12,
      13,    26,    69,    15,    16,    76,    17,    77,   112,    78,
      71,    60,    61,    62,    63,    64,    65,    66,    67,     6,
       7,     8,     9,    27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    83,     5,    70,   115,    25,   110,   147,     5,    10,
      90,    59,   138,   139,    10,     1,     1,    21,    72,     2,
       2,     3,     3,    94,    95,   144,   -97,   160,   -59,    11,
     -59,    75,   148,    20,   109,    73,   145,     1,    11,   171,
     172,     2,   142,     3,   100,   101,    74,   116,    20,    24,
     151,   119,   126,   127,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   157,   122,    22,   159,    23,   125,   152,
      79,   164,   156,   103,   -44,   158,   169,    34,   170,    28,
     163,    29,   165,    36,    37,    38,    39,    18,    40,    80,
       1,   173,   130,   131,     2,   102,     3,    91,    59,   129,
     129,    81,    92,    93,    42,    43,    44,    45,    84,    88,
      85,   136,   137,    24,    86,    87,    75,   105,   155,    96,
      97,    98,    99,   106,   108,   129,   162,   154,     1,   113,
      31,    32,     2,    33,     3,   114,   117,    34,   123,    20,
      35,   118,   124,    36,    37,    38,    39,   146,    40,   132,
     133,   134,   135,   140,   109,   153,   161,   166,   168,   149,
     167,    41,   150,    68,    42,    43,    44,    45,     1,    14,
      31,    32,     2,    33,     3,    30,   111,    34,   143,    20,
     141,    19,     0,    36,    37,    38,    39,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,    42,    43,    44,    45,    31,    32,
       0,    33,     0,     0,     0,    34,     0,    20,     0,     0,
       0,    36,    37,    38,    39,    34,    40,     0,     0,     0,
       0,    36,    37,    38,    39,     0,    40,     0,     0,    41,
       0,     0,    42,    43,    44,    45,     0,     0,     0,    41,
      34,   120,    42,    43,    44,    45,    36,    37,    38,    39,
      34,    40,     0,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,     0,     0,     0,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,    42,    43,    44,
      45
};

static const yytype_int16 yycheck[] =
{
      33,    34,     0,    24,    79,    14,    75,    13,     6,    19,
      49,    20,   102,   103,    19,     3,     3,     9,    27,     7,
       7,     9,     9,    20,    21,   115,    14,   157,    10,    39,
      12,    29,    38,    14,    39,    27,   116,     3,    39,   169,
     170,     7,   111,     9,    30,    31,    40,    80,    14,    37,
     140,    84,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   153,    85,    36,   156,    38,    89,   144,
      12,   161,   152,    33,    34,   155,   166,    12,   168,    10,
     160,    12,   162,    18,    19,    20,    21,     0,    23,    12,
       3,   171,    94,    95,     7,    32,     9,    19,   107,   138,
     139,    36,    24,    25,    39,    40,    41,    42,    10,    37,
      12,   100,   101,    37,    16,    17,   114,    36,   151,    26,
      27,    28,    29,    15,    11,   164,   159,   148,     3,    13,
       5,     6,     7,     8,     9,    38,    36,    12,    39,    14,
      15,    13,    39,    18,    19,    20,    21,    11,    23,    96,
      97,    98,    99,    34,    39,    13,    35,     4,    13,   138,
     164,    36,   139,    23,    39,    40,    41,    42,     3,     5,
       5,     6,     7,     8,     9,    17,    75,    12,   114,    14,
     107,     6,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    39,    40,    41,    42,     5,     6,
      -1,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    12,    23,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    36,
      12,    13,    39,    40,    41,    42,    18,    19,    20,    21,
      12,    23,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    61,    64,    82,    83,    84,    85,
      19,    39,    62,    63,    65,    66,    67,    69,     0,    83,
      14,    75,    36,    38,    37,    61,    64,    86,    10,    12,
      67,     5,     6,     8,    12,    15,    18,    19,    20,    21,
      23,    36,    39,    40,    41,    42,    44,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    58,    60,    61,
      74,    75,    76,    77,    78,    79,    80,    81,    63,    65,
      58,    73,    61,    75,    40,    64,    68,    70,    72,    12,
      12,    36,    60,    60,    10,    12,    16,    17,    37,    59,
      47,    19,    24,    25,    20,    21,    26,    27,    28,    29,
      30,    31,    32,    33,    57,    36,    15,    56,    11,    39,
      66,    69,    71,    13,    38,    78,    60,    36,    13,    60,
      13,    45,    58,    39,    39,    58,    47,    47,    47,    47,
      49,    49,    50,    50,    50,    50,    51,    51,    56,    56,
      34,    77,    66,    72,    56,    57,    11,    13,    38,    52,
      53,    56,    78,    13,    58,    60,    57,    56,    57,    56,
      74,    35,    60,    57,    56,    57,     4,    55,    13,    56,
      56,    74,    74,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    45,    45,    46,
      46,    46,    46,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    50,    50,    50,    51,
      51,    51,    51,    51,    52,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    57,    58,    58,    59,    60,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      67,    67,    67,    68,    68,    69,    70,    70,    71,    71,
      72,    72,    73,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     3,     1,
       4,     3,     4,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     9,     0,     0,     1,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     2,     1,     1,
       1,     4,     4,     1,     0,     1,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     3,     1,     1,     2,     1,     8,    12,    12,     2,
       3,     1,     2,     1,     1,     4,     2,     2,     1,     2
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
#line 123 "31_A5.y"
        {
            (yyval.expression_parse) = new expression(); 
            string s = *((yyvsp[0].str));
            ST->lookup(s);         
            (yyval.expression_parse)->loc = s;            
        }
#line 1323 "31_A5.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 130 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();                 
            (yyval.expression_parse)->loc = ST->gentemp(INT);             
            emit((yyval.expression_parse)->loc, (yyvsp[0].intval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->constructorInit((yyvsp[0].intval));                  
            ST->lookup((yyval.expression_parse)->loc)->initVal = val;    
        }
#line 1336 "31_A5.tab.c"
    break;

  case 4: /* primary_expression: CHARACTER_CONSTANT  */
#line 139 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();                
            (yyval.expression_parse)->loc = ST->gentemp(CHAR);           
            emit((yyval.expression_parse)->loc, (yyvsp[0].charval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->constructorInit((yyvsp[0].charval));              
            ST->lookup((yyval.expression_parse)->loc)->initVal = val;    
        }
#line 1349 "31_A5.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 148 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();           
            (yyval.expression_parse)->loc = ".LC" + to_string(strCount++);
            stringConstant.push_back(*((yyvsp[0].str)));          
        }
#line 1359 "31_A5.tab.c"
    break;

  case 6: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 154 "31_A5.y"
        {
            (yyval.expression_parse) = (yyvsp[-1].expression_parse);                               
        }
#line 1367 "31_A5.tab.c"
    break;

  case 7: /* argument_expression_list: assignment_expression  */
#line 162 "31_A5.y"
        {
            param* first = new param();                
            first->name = (yyvsp[0].expression_parse)->loc;
            first->type = ST->lookup((yyvsp[0].expression_parse)->loc)->type;
            (yyval.list_for_params) = new vector<param*>;
            (yyval.list_for_params)->push_back(first);                   
        }
#line 1379 "31_A5.tab.c"
    break;

  case 8: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 170 "31_A5.y"
        {
            param* next = new param();             
            next->name = (yyvsp[0].expression_parse)->loc;
            next->type = ST->lookup(next->name)->type;
            (yyval.list_for_params) = (yyvsp[-2].list_for_params);
            (yyval.list_for_params)->push_back(next);                        
        }
#line 1391 "31_A5.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 182 "31_A5.y"
        {}
#line 1397 "31_A5.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 184 "31_A5.y"
        {
            symbolType to = ST->lookup((yyvsp[-3].expression_parse)->loc)->type;    
            string f = "";
            if(!((yyvsp[-3].expression_parse)->fold)) {
                f = ST->gentemp(INT);                       
                emit(f, 0, ASSIGN);
                (yyvsp[-3].expression_parse)->folder = new string(f);
            }
            string temp = ST->gentemp(INT);

            
            emit(temp, (yyvsp[-1].expression_parse)->loc, "", ASSIGN);
            emit(temp, temp, "4", MULT);
            emit(f, temp, "", ASSIGN);
            (yyval.expression_parse) = (yyvsp[-3].expression_parse);
        }
#line 1418 "31_A5.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS  */
#line 201 "31_A5.y"
        {   
            symbolTable* funcTable = globalSymbolTable.lookup((yyvsp[-2].expression_parse)->loc)->nestedTable;
            emit((yyvsp[-2].expression_parse)->loc, "0", "", CALL);
        }
#line 1427 "31_A5.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS  */
#line 206 "31_A5.y"
        {   
            symbolTable* funcTable = globalSymbolTable.lookup((yyvsp[-3].expression_parse)->loc)->nestedTable;
            vector<param*> parameters = *((yyvsp[-1].list_for_params));                      
            vector<symbol*> paramsList = funcTable->symbols;

            for(int i = 0; i < (int)parameters.size(); i++) {
                emit(parameters[i]->name, "", "", PARAM);   
            }

            DataType retType = funcTable->lookup("RETVAL")->type.type;
            if(retType == VOID)                                         
                emit((yyvsp[-3].expression_parse)->loc, (int)parameters.size(), CALL);
            else {                                                      
                string retVal = ST->gentemp(retType);
                emit((yyvsp[-3].expression_parse)->loc, to_string(parameters.size()), retVal, CALL);
                (yyval.expression_parse) = new expression();
                (yyval.expression_parse)->loc = retVal;
            }
        }
#line 1451 "31_A5.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 226 "31_A5.y"
        {}
#line 1457 "31_A5.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 228 "31_A5.y"
        {}
#line 1463 "31_A5.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 236 "31_A5.y"
        {}
#line 1469 "31_A5.tab.c"
    break;

  case 16: /* unary_expression: unary_operator unary_expression  */
#line 238 "31_A5.y"
        {
            switch((yyvsp[-1].charval)) {
                case '&':   
                    (yyval.expression_parse) = new expression();
                    (yyval.expression_parse)->loc = ST->gentemp(POINTER);                
                    emit((yyval.expression_parse)->loc, (yyvsp[0].expression_parse)->loc, "", REFERENCE);         
                    break;
                case '*':   
                    (yyval.expression_parse) = new expression();
                    (yyval.expression_parse)->loc = ST->gentemp(INT);                     
                    (yyval.expression_parse)->fold = 1;
                    (yyval.expression_parse)->folder = new string((yyvsp[0].expression_parse)->loc);
                    emit((yyval.expression_parse)->loc, (yyvsp[0].expression_parse)->loc, "", DEREFERENCE);       
                    break;
                case '-':   
                    (yyval.expression_parse) = new expression();
                    (yyval.expression_parse)->loc = ST->gentemp();                        
                    emit((yyval.expression_parse)->loc, (yyvsp[0].expression_parse)->loc, "", U_MINUS);           
                    break;
                case '!':   
                    (yyval.expression_parse) = new expression();
                    (yyval.expression_parse)->loc = ST->gentemp(INT);                    
                    int temp = nextinstr + 2;
                    emit(to_string(temp), (yyvsp[0].expression_parse)->loc, "0", GOTO_EQ);   
                    temp = nextinstr + 3;
                    emit(to_string(temp), "", "", GOTO);
                    emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
                    temp = nextinstr + 2;
                    emit(to_string(temp), "", "", GOTO);
                    emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
                    break;
            }
        }
#line 1507 "31_A5.tab.c"
    break;

  case 17: /* unary_operator: BITWISE_AND  */
#line 275 "31_A5.y"
        {
            (yyval.charval) = '&';
        }
#line 1515 "31_A5.tab.c"
    break;

  case 18: /* unary_operator: MULTIPLICATION  */
#line 279 "31_A5.y"
        {
            (yyval.charval) = '*';
        }
#line 1523 "31_A5.tab.c"
    break;

  case 19: /* unary_operator: ADD_LEX  */
#line 283 "31_A5.y"
        {
            (yyval.charval) = '+';
        }
#line 1531 "31_A5.tab.c"
    break;

  case 20: /* unary_operator: SUBTRACTION  */
#line 287 "31_A5.y"
        {
            (yyval.charval) = '-';
        }
#line 1539 "31_A5.tab.c"
    break;

  case 21: /* unary_operator: NOT  */
#line 291 "31_A5.y"
        {
            (yyval.charval) = '!';
        }
#line 1547 "31_A5.tab.c"
    break;

  case 22: /* multiplicative_expression: unary_expression  */
#line 298 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();                                  
            symbolType tp = ST->lookup((yyvsp[0].expression_parse)->loc)->type;
            if(tp.type == ARRAY) {                                  
                string t = ST->gentemp(tp.nextType);                
                if((yyvsp[0].expression_parse)->folder != NULL) {
                    emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);   
                    (yyvsp[0].expression_parse)->loc = t;
                    (yyvsp[0].expression_parse)->type = tp.nextType;
                    (yyval.expression_parse) = (yyvsp[0].expression_parse);
                }
                else
                    (yyval.expression_parse) = (yyvsp[0].expression_parse);        
            }
            else
                (yyval.expression_parse) = (yyvsp[0].expression_parse);           
        }
#line 1569 "31_A5.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULTIPLICATION unary_expression  */
#line 316 "31_A5.y"
        {   
            
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                  
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                  
            if(two->type.type == ARRAY) {                      
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expression_parse)->loc = ST->gentemp(final);                     
            emit((yyval.expression_parse)->loc, (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, MULT);
        }
#line 1596 "31_A5.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIVISION unary_expression  */
#line 339 "31_A5.y"
        {
            
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                  
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expression_parse)->loc = ST->gentemp(final);                       
            emit((yyval.expression_parse)->loc, (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, DIV);
        }
#line 1623 "31_A5.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MODULO unary_expression  */
#line 362 "31_A5.y"
        {
            
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                  
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                 
            if(two->type.type == ARRAY) {                     
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }

            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expression_parse)->loc = ST->gentemp(final);                     
            emit((yyval.expression_parse)->loc, (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, MOD);
        }
#line 1650 "31_A5.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 388 "31_A5.y"
        {}
#line 1656 "31_A5.tab.c"
    break;

  case 27: /* additive_expression: additive_expression ADD_LEX multiplicative_expression  */
#line 391 "31_A5.y"
        {   

            
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                 
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                 
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }

            
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expression_parse)->loc = ST->gentemp(final);                       
            emit((yyval.expression_parse)->loc, (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, ADD);
        }
#line 1685 "31_A5.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUBTRACTION multiplicative_expression  */
#line 416 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);               
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);           
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                    
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }

            
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expression_parse)->loc = ST->gentemp(final);                
            emit((yyval.expression_parse)->loc, (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, SUB);
        }
#line 1712 "31_A5.tab.c"
    break;

  case 29: /* relational_expression: additive_expression  */
#line 443 "31_A5.y"
        {}
#line 1718 "31_A5.tab.c"
    break;

  case 30: /* relational_expression: relational_expression LESS_THAN additive_expression  */
#line 445 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                 
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                 
            if(two->type.type == ARRAY) {                  
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                                   
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);                
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_LT);              
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);               
            emit("", "", "", GOTO);                           
        }
#line 1749 "31_A5.tab.c"
    break;

  case 31: /* relational_expression: relational_expression GREATER_THAN additive_expression  */
#line 472 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                  
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                  
            if(two->type.type == ARRAY) {                   
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                                    
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);            
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_GT);            
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);           
            emit("", "", "", GOTO);                           
        }
#line 1780 "31_A5.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LESS_THAN_OR_EQUAL_TO additive_expression  */
#line 499 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                  
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);              
            if(two->type.type == ARRAY) {                     
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                                    
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);                
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_LTE);              
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);                
            emit("", "", "", GOTO);                            
        }
#line 1811 "31_A5.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GREATER_THAN_OR_EQUAL_TO additive_expression  */
#line 526 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);               
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);          
            if(two->type.type == ARRAY) {                  
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                      
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                                 
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);              
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_GTE);           
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);             
            emit("", "", "", GOTO);                          
        }
#line 1842 "31_A5.tab.c"
    break;

  case 34: /* equality_expression: relational_expression  */
#line 556 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse) = (yyvsp[0].expression_parse);
        }
#line 1851 "31_A5.tab.c"
    break;

  case 35: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 561 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);             
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);                
            if(two->type.type == ARRAY) {                       
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                              
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);            
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_EQ);         
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);            
            emit("", "", "", GOTO);                         
        }
#line 1882 "31_A5.tab.c"
    break;

  case 36: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 588 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expression_parse)->loc);                  
            symbol* two = ST->lookup((yyvsp[0].expression_parse)->loc);               
            if(two->type.type == ARRAY) {                    
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expression_parse)->loc, *((yyvsp[0].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[0].expression_parse)->loc = t;
                (yyvsp[0].expression_parse)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {               
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expression_parse)->loc = t;
                (yyvsp[-2].expression_parse)->type = one->type.nextType;
            }
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->loc = ST->gentemp();
            (yyval.expression_parse)->type = BOOL;                                    
            emit((yyval.expression_parse)->loc, "1", "", ASSIGN);
            (yyval.expression_parse)->truelist = makelist(nextinstr);              
            emit("", (yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, GOTO_NEQ);              
            emit((yyval.expression_parse)->loc, "0", "", ASSIGN);
            (yyval.expression_parse)->falselist = makelist(nextinstr);              
            emit("", "", "", GOTO);                     
        }
#line 1913 "31_A5.tab.c"
    break;

  case 37: /* logical_and_expression: equality_expression  */
#line 618 "31_A5.y"
        {}
#line 1919 "31_A5.tab.c"
    break;

  case 38: /* logical_and_expression: logical_and_expression LOGICAL_AND A equality_expression  */
#line 620 "31_A5.y"
        {
            backpatch((yyvsp[-3].expression_parse)->truelist, (yyvsp[-1].expression_parse)->instr);                   
            (yyval.expression_parse)->falselist = merge((yyvsp[-3].expression_parse)->falselist, (yyvsp[0].expression_parse)->falselist);   
            (yyval.expression_parse)->truelist = (yyvsp[0].expression_parse)->truelist;                           
            (yyval.expression_parse)->type = BOOL;                                       
        }
#line 1930 "31_A5.tab.c"
    break;

  case 39: /* logical_or_expression: logical_and_expression  */
#line 630 "31_A5.y"
        {}
#line 1936 "31_A5.tab.c"
    break;

  case 40: /* logical_or_expression: logical_or_expression LOGICAL_OR A logical_and_expression  */
#line 632 "31_A5.y"
        {
            backpatch((yyvsp[-3].expression_parse)->falselist, (yyvsp[-1].expression_parse)->instr);                  
            (yyval.expression_parse)->truelist = merge((yyvsp[-3].expression_parse)->truelist, (yyvsp[0].expression_parse)->truelist);      
            (yyval.expression_parse)->falselist = (yyvsp[0].expression_parse)->falselist;                        
            (yyval.expression_parse)->type = BOOL;                                      
        }
#line 1947 "31_A5.tab.c"
    break;

  case 41: /* conditional_expression: logical_or_expression  */
#line 642 "31_A5.y"
        {
            (yyval.expression_parse) = (yyvsp[0].expression_parse);    
        }
#line 1955 "31_A5.tab.c"
    break;

  case 42: /* conditional_expression: logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression  */
#line 646 "31_A5.y"
        {   
            symbol* one = ST->lookup((yyvsp[-4].expression_parse)->loc);
            (yyval.expression_parse)->loc = ST->gentemp(one->type.type);     
            (yyval.expression_parse)->type = one->type.type;
            emit((yyval.expression_parse)->loc, (yyvsp[0].expression_parse)->loc, "", ASSIGN);    
            list<int> temp = makelist(nextinstr);
            emit("", "", "", GOTO);                  
            backpatch((yyvsp[-3].expression_parse)->nextlist, nextinstr);     
            emit((yyval.expression_parse)->loc, (yyvsp[-4].expression_parse)->loc, "", ASSIGN);
            temp = merge(temp, makelist(nextinstr));
            emit("", "", "", GOTO);                  
            backpatch((yyvsp[-7].expression_parse)->nextlist, nextinstr);      
            convertIntToBool((yyvsp[-8].expression_parse));                       
            backpatch((yyvsp[-8].expression_parse)->truelist, (yyvsp[-5].expression_parse)->instr);         
            backpatch((yyvsp[-8].expression_parse)->falselist, (yyvsp[-1].expression_parse)->instr);        
            backpatch((yyvsp[-7].expression_parse)->nextlist, nextinstr);         
        }
#line 1977 "31_A5.tab.c"
    break;

  case 43: /* A: %empty  */
#line 666 "31_A5.y"
        {   
            
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->instr = nextinstr;
        }
#line 1987 "31_A5.tab.c"
    break;

  case 44: /* B: %empty  */
#line 674 "31_A5.y"
        {
            
            (yyval.expression_parse) = new expression();
            (yyval.expression_parse)->nextlist = makelist(nextinstr);
            emit("", "", "", GOTO);
        }
#line 1998 "31_A5.tab.c"
    break;

  case 45: /* assignment_expression: conditional_expression  */
#line 684 "31_A5.y"
        {}
#line 2004 "31_A5.tab.c"
    break;

  case 46: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 687 "31_A5.y"
        {

            symbol* sym1 = ST->lookup((yyvsp[-2].expression_parse)->loc);         
            symbol* sym2 = ST->lookup((yyvsp[0].expression_parse)->loc);         
            if((yyvsp[-2].expression_parse)->fold == 0) {
                if(sym1->type.type != ARRAY)
                    emit((yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, "", ASSIGN);
                else
                    emit((yyvsp[-2].expression_parse)->loc, (yyvsp[0].expression_parse)->loc, *((yyvsp[-2].expression_parse)->folder), ARR_IDX_RES);
            }
            else
                emit(*((yyvsp[-2].expression_parse)->folder), (yyvsp[0].expression_parse)->loc, "", L_DEREF);
            (yyval.expression_parse) = (yyvsp[-2].expression_parse);        
        }
#line 2023 "31_A5.tab.c"
    break;

  case 47: /* assignment_operator: ASSIGN_LEX  */
#line 705 "31_A5.y"
        {}
#line 2029 "31_A5.tab.c"
    break;

  case 48: /* expression: assignment_expression  */
#line 710 "31_A5.y"
        {}
#line 2035 "31_A5.tab.c"
    break;

  case 49: /* declaration: type_specifier init_declarator_list SEMICOLON  */
#line 716 "31_A5.y"
        {

            DataType currType = (yyvsp[-2].types);
            int currSize = -1;
            
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            else if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            vector<declaration*> decs = *((yyvsp[-1].list_for_declarations));
            for(vector<declaration*>::iterator it = decs.begin(); it != decs.end(); it++) {
                declaration* currDec = *it;
                if(currDec->type == FUNCTION) {
                    ST = &globalSymbolTable;
                    emit(currDec->name, "", "", FUNC_END);
                    symbol* one = ST->lookup(currDec->name);        
                    symbol* two = one->nestedTable->lookup("RETVAL", currType, currDec->pointers);
                    one->size = 0;
                    one->initVal = NULL;
                    continue;
                }

                symbol* three = ST->lookup(currDec->name, currType);        
                three->nestedTable = NULL;
                if(currDec->li == vector<int>() && currDec->pointers == 0) {
                    three->type.type = currType;
                    three->size = currSize;
                    if(currDec->initVal != NULL) {
                        string rval = currDec->initVal->loc;
                        emit(three->name, rval, "", ASSIGN);
                        three->initVal = ST->lookup(rval)->initVal;
                    }
                    else
                        three->initVal = NULL;
                }
                else if(currDec->li != vector<int>()) {         
                    three->type.type = ARRAY;
                    three->type.nextType = currType;
                    three->type.dims = currDec->li;
                    vector<int> temp = three->type.dims;
                    int sz = currSize;
                    for(int i = 0; i < (int)temp.size(); i++)
                        sz *= temp[i];
                    ST->offset += sz;
                    three->size = sz;
                    ST->offset -= 4;
                }
                else if(currDec->pointers != 0) {               
                    three->type.type = POINTER;
                    three->type.nextType = currType;
                    three->type.pointers = currDec->pointers;
                    ST->offset += (__POINTER_SIZE - currSize);
                    three->size = __POINTER_SIZE;
                }
            }
        }
#line 2096 "31_A5.tab.c"
    break;

  case 50: /* init_declarator_list: init_declarator  */
#line 779 "31_A5.y"
        {
            (yyval.list_for_declarations) = new vector<declaration*>;      
            (yyval.list_for_declarations)->push_back((yyvsp[0].declaration_parse));
        }
#line 2105 "31_A5.tab.c"
    break;

  case 51: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 784 "31_A5.y"
        {
            (yyvsp[-2].list_for_declarations)->push_back((yyvsp[0].declaration_parse));                  
            (yyval.list_for_declarations) = (yyvsp[-2].list_for_declarations);
        }
#line 2114 "31_A5.tab.c"
    break;

  case 52: /* init_declarator: declarator  */
#line 792 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
            (yyval.declaration_parse)->initVal = NULL;         
        }
#line 2123 "31_A5.tab.c"
    break;

  case 53: /* init_declarator: declarator ASSIGN_LEX initializer  */
#line 797 "31_A5.y"
        {   
            (yyval.declaration_parse) = (yyvsp[-2].declaration_parse);
            (yyval.declaration_parse)->initVal = (yyvsp[0].expression_parse);           
        }
#line 2132 "31_A5.tab.c"
    break;

  case 54: /* type_specifier: VOID_LEX  */
#line 805 "31_A5.y"
        {
            (yyval.types) = VOID;
        }
#line 2140 "31_A5.tab.c"
    break;

  case 55: /* type_specifier: CHAR_LEX  */
#line 809 "31_A5.y"
        {
            (yyval.types) = CHAR;
        }
#line 2148 "31_A5.tab.c"
    break;

  case 56: /* type_specifier: INT_LEX  */
#line 813 "31_A5.y"
        {
            (yyval.types) = INT; 
        }
#line 2156 "31_A5.tab.c"
    break;

  case 57: /* declarator: pointer direct_declarator  */
#line 821 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
            (yyval.declaration_parse)->pointers = (yyvsp[-1].intval);
        }
#line 2165 "31_A5.tab.c"
    break;

  case 58: /* declarator: direct_declarator  */
#line 826 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
            (yyval.declaration_parse)->pointers = 0;
        }
#line 2174 "31_A5.tab.c"
    break;

  case 59: /* intermediate_identifier: IDENTIFIER  */
#line 834 "31_A5.y"
        {

            (yyval.declaration_parse) = new declaration();
            (yyval.declaration_parse)->name = *((yyvsp[0].str));
        }
#line 2184 "31_A5.tab.c"
    break;

  case 60: /* direct_declarator: IDENTIFIER  */
#line 843 "31_A5.y"
        {

            (yyval.declaration_parse) = new declaration();
            (yyval.declaration_parse)->name = *((yyvsp[0].str));
        }
#line 2194 "31_A5.tab.c"
    break;

  case 61: /* direct_declarator: intermediate_identifier LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 849 "31_A5.y"
        {

            (yyvsp[-3].declaration_parse)->type = ARRAY;       
            (yyvsp[-3].declaration_parse)->nextType = INT;     
            (yyval.declaration_parse) = (yyvsp[-3].declaration_parse);
            
            int index = (yyvsp[-1].intval);   

            (yyval.declaration_parse)->li.push_back(index);
        }
#line 2209 "31_A5.tab.c"
    break;

  case 62: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS parameter_list_opt RIGHT_PARENTHESIS  */
#line 860 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[-3].declaration_parse);
            (yyval.declaration_parse)->type = FUNCTION;    
            symbol* funcData = ST->lookup((yyval.declaration_parse)->name, (yyval.declaration_parse)->type);
            symbolTable* funcTable = new symbolTable();
            funcData->nestedTable = funcTable;
            vector<param*> paramList = *((yyvsp[-1].list_for_params));   
            for(int i = 0; i < (int)paramList.size(); i++) {
                param* curParam = paramList[i];
                if(curParam->type.type == ARRAY) {          
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else if(curParam->type.type == POINTER) {   
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else                                        
                    funcTable->lookup(curParam->name, curParam->type.type);
            }
            ST = funcTable;         
            emit((yyval.declaration_parse)->name, "", "", FUNC_BEG);
        }
#line 2239 "31_A5.tab.c"
    break;

  case 63: /* parameter_list_opt: parameter_list  */
#line 889 "31_A5.y"
        {}
#line 2245 "31_A5.tab.c"
    break;

  case 64: /* parameter_list_opt: %empty  */
#line 891 "31_A5.y"
        {
            (yyval.list_for_params) = new vector<param*>;
        }
#line 2253 "31_A5.tab.c"
    break;

  case 65: /* pointer: MULTIPLICATION  */
#line 898 "31_A5.y"
        {
            (yyval.intval) = 1;
        }
#line 2261 "31_A5.tab.c"
    break;

  case 66: /* parameter_list: parameter_declaration  */
#line 905 "31_A5.y"
        {
            (yyval.list_for_params) = new vector<param*>;         
            (yyval.list_for_params)->push_back((yyvsp[0].params_parse));              
        }
#line 2270 "31_A5.tab.c"
    break;

  case 67: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 910 "31_A5.y"
        {
            (yyvsp[-2].list_for_params)->push_back((yyvsp[0].params_parse));              
            (yyval.list_for_params) = (yyvsp[-2].list_for_params);
        }
#line 2279 "31_A5.tab.c"
    break;

  case 68: /* intermediate_declarator: pointer intermediate_identifier  */
#line 917 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
            (yyval.declaration_parse)->pointers = (yyvsp[-1].intval);
        }
#line 2288 "31_A5.tab.c"
    break;

  case 69: /* intermediate_declarator: intermediate_identifier  */
#line 922 "31_A5.y"
        {
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
            (yyval.declaration_parse)->pointers = 0;
        }
#line 2297 "31_A5.tab.c"
    break;

  case 70: /* parameter_declaration: type_specifier intermediate_declarator  */
#line 930 "31_A5.y"
        {
            (yyval.params_parse) = new param();
            (yyval.params_parse)->name = (yyvsp[0].declaration_parse)->name;
            if((yyvsp[0].declaration_parse)->type == ARRAY) {
                (yyval.params_parse)->type.type = ARRAY;
                (yyval.params_parse)->type.nextType = (yyvsp[-1].types);
            }
            else if((yyvsp[0].declaration_parse)->pc != 0) {
                (yyval.params_parse)->type.type = POINTER;
                (yyval.params_parse)->type.nextType = (yyvsp[-1].types);
            }
            else
                (yyval.params_parse)->type.type = (yyvsp[-1].types);
        }
#line 2316 "31_A5.tab.c"
    break;

  case 71: /* parameter_declaration: type_specifier  */
#line 945 "31_A5.y"
        {}
#line 2322 "31_A5.tab.c"
    break;

  case 72: /* initializer: assignment_expression  */
#line 951 "31_A5.y"
        {
            (yyval.expression_parse) = (yyvsp[0].expression_parse);   
        }
#line 2330 "31_A5.tab.c"
    break;

  case 73: /* statement: compound_statement  */
#line 958 "31_A5.y"
                          {}
#line 2336 "31_A5.tab.c"
    break;

  case 74: /* statement: expression_statement  */
#line 959 "31_A5.y"
                              {}
#line 2342 "31_A5.tab.c"
    break;

  case 75: /* statement: selection_statement  */
#line 960 "31_A5.y"
                             {}
#line 2348 "31_A5.tab.c"
    break;

  case 76: /* statement: iteration_statement  */
#line 961 "31_A5.y"
                             {}
#line 2354 "31_A5.tab.c"
    break;

  case 77: /* statement: jump_statement  */
#line 962 "31_A5.y"
                        {}
#line 2360 "31_A5.tab.c"
    break;

  case 78: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 969 "31_A5.y"
        {}
#line 2366 "31_A5.tab.c"
    break;

  case 79: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 971 "31_A5.y"
        {

            (yyval.expression_parse) = (yyvsp[-1].expression_parse);
        }
#line 2375 "31_A5.tab.c"
    break;

  case 80: /* block_item_list: block_item  */
#line 979 "31_A5.y"
        {
            (yyval.expression_parse) = (yyvsp[0].expression_parse);    
            backpatch((yyvsp[0].expression_parse)->nextlist, nextinstr);
        }
#line 2384 "31_A5.tab.c"
    break;

  case 81: /* block_item_list: block_item_list A block_item  */
#line 984 "31_A5.y"
        {   
            (yyval.expression_parse) = new expression();
            backpatch((yyvsp[-2].expression_parse)->nextlist, (yyvsp[-1].expression_parse)->instr);    
            (yyval.expression_parse)->nextlist = (yyvsp[0].expression_parse)->nextlist;
        }
#line 2394 "31_A5.tab.c"
    break;

  case 82: /* block_item: declaration  */
#line 993 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();   
        }
#line 2402 "31_A5.tab.c"
    break;

  case 83: /* block_item: statement  */
#line 996 "31_A5.y"
                   {}
#line 2408 "31_A5.tab.c"
    break;

  case 84: /* expression_statement: expression SEMICOLON  */
#line 1001 "31_A5.y"
        {}
#line 2414 "31_A5.tab.c"
    break;

  case 85: /* expression_statement: SEMICOLON  */
#line 1003 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();  
        }
#line 2422 "31_A5.tab.c"
    break;

  case 86: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B  */
#line 1010 "31_A5.y"
        {
            backpatch((yyvsp[-4].expression_parse)->nextlist, nextinstr);         
            convertIntToBool((yyvsp[-5].expression_parse));                       
            backpatch((yyvsp[-5].expression_parse)->truelist, (yyvsp[-2].expression_parse)->instr);         
            (yyval.expression_parse) = new expression();                      
            
            (yyvsp[-1].expression_parse)->nextlist = merge((yyvsp[0].expression_parse)->nextlist, (yyvsp[-1].expression_parse)->nextlist);
            (yyval.expression_parse)->nextlist = merge((yyvsp[-5].expression_parse)->falselist, (yyvsp[-1].expression_parse)->nextlist);
        }
#line 2436 "31_A5.tab.c"
    break;

  case 87: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement B  */
#line 1020 "31_A5.y"
        {
            backpatch((yyvsp[-8].expression_parse)->nextlist, nextinstr);         
            convertIntToBool((yyvsp[-9].expression_parse));                       
            backpatch((yyvsp[-9].expression_parse)->truelist, (yyvsp[-6].expression_parse)->instr);         
            backpatch((yyvsp[-9].expression_parse)->falselist, (yyvsp[-2].expression_parse)->instr);
            (yyval.expression_parse) = new expression();                      
            
            (yyval.expression_parse)->nextlist = merge((yyvsp[-5].expression_parse)->nextlist, (yyvsp[-4].expression_parse)->nextlist);
            (yyval.expression_parse)->nextlist = merge((yyval.expression_parse)->nextlist, (yyvsp[-1].expression_parse)->nextlist);
            (yyval.expression_parse)->nextlist = merge((yyval.expression_parse)->nextlist, (yyvsp[0].expression_parse)->nextlist);
        }
#line 2452 "31_A5.tab.c"
    break;

  case 88: /* iteration_statement: FOR LEFT_PARENTHESIS expression_statement A expression_statement B A expression B RIGHT_PARENTHESIS A statement  */
#line 1035 "31_A5.y"
        {
            (yyval.expression_parse) = new expression();                   
            emit("", "", "", GOTO);
            (yyvsp[0].expression_parse)->nextlist = merge((yyvsp[0].expression_parse)->nextlist, makelist(nextinstr - 1));
            backpatch((yyvsp[0].expression_parse)->nextlist, (yyvsp[-5].expression_parse)->instr);    
            backpatch((yyvsp[-3].expression_parse)->nextlist, (yyvsp[-8].expression_parse)->instr);     
            backpatch((yyvsp[-6].expression_parse)->nextlist, nextinstr);     
            convertIntToBool((yyvsp[-7].expression_parse));                   
            backpatch((yyvsp[-7].expression_parse)->truelist, (yyvsp[-1].expression_parse)->instr);    
            (yyval.expression_parse)->nextlist = (yyvsp[-7].expression_parse)->falselist;           
        }
#line 2468 "31_A5.tab.c"
    break;

  case 89: /* jump_statement: RETURN_LEX SEMICOLON  */
#line 1050 "31_A5.y"
        {
            if(ST->lookup("RETVAL")->type.type == VOID) {
                emit("", "", "", RETURN);           
            }
            (yyval.expression_parse) = new expression();
        }
#line 2479 "31_A5.tab.c"
    break;

  case 90: /* jump_statement: RETURN_LEX expression SEMICOLON  */
#line 1057 "31_A5.y"
        {
            if(ST->lookup("RETVAL")->type.type == ST->lookup((yyvsp[-1].expression_parse)->loc)->type.type) {
                emit((yyvsp[-1].expression_parse)->loc, "", "", RETURN);      
            }
            (yyval.expression_parse) = new expression();
        }
#line 2490 "31_A5.tab.c"
    break;

  case 91: /* translation_unit: external_declaration  */
#line 1067 "31_A5.y"
        {}
#line 2496 "31_A5.tab.c"
    break;

  case 92: /* translation_unit: translation_unit external_declaration  */
#line 1069 "31_A5.y"
        {}
#line 2502 "31_A5.tab.c"
    break;

  case 93: /* external_declaration: function_definition  */
#line 1075 "31_A5.y"
        {}
#line 2508 "31_A5.tab.c"
    break;

  case 94: /* external_declaration: declaration  */
#line 1077 "31_A5.y"
        {}
#line 2514 "31_A5.tab.c"
    break;

  case 95: /* function_definition: type_specifier declarator declaration_list compound_statement  */
#line 1082 "31_A5.y"
        {}
#line 2520 "31_A5.tab.c"
    break;

  case 96: /* function_definition: function_prototype compound_statement  */
#line 1084 "31_A5.y"
        {
            ST = &globalSymbolTable;                     
            emit((yyvsp[-1].declaration_parse)->name, "", "", FUNC_END);
        }
#line 2529 "31_A5.tab.c"
    break;

  case 97: /* function_prototype: type_specifier declarator  */
#line 1092 "31_A5.y"
        {
            DataType currType = (yyvsp[-1].types);
            int currSize = -1;
            if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            declaration* currDec = (yyvsp[0].declaration_parse);
            symbol* sym = globalSymbolTable.lookup(currDec->name);
            if(currDec->type == FUNCTION) {
                symbol* retval = sym->nestedTable->lookup("RETVAL", currType, currDec->pointers);   
                sym->size = 0;
                sym->initVal = NULL;
            }
            (yyval.declaration_parse) = (yyvsp[0].declaration_parse);
        }
#line 2550 "31_A5.tab.c"
    break;

  case 98: /* declaration_list: declaration  */
#line 1112 "31_A5.y"
        {}
#line 2556 "31_A5.tab.c"
    break;

  case 99: /* declaration_list: declaration_list declaration  */
#line 1114 "31_A5.y"
        {}
#line 2562 "31_A5.tab.c"
    break;


#line 2566 "31_A5.tab.c"

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

#line 1118 "31_A5.y"


void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Line: " << yylineno << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}

