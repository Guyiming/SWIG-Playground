/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


#define SWIG_VERSION 0x040101
#define SWIGCSHARP

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_SwigGenModule(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_SwigGenModule(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_SwigGenModule(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) do { if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } } while (0)

/* SWIG Errors applicable to all language modules, values are reserved from -1 to -99 */
#define  SWIG_UnknownError    	   -1
#define  SWIG_IOError        	   -2
#define  SWIG_RuntimeError   	   -3
#define  SWIG_IndexError     	   -4
#define  SWIG_TypeError      	   -5
#define  SWIG_DivisionByZero 	   -6
#define  SWIG_OverflowError  	   -7
#define  SWIG_SyntaxError    	   -8
#define  SWIG_ValueError     	   -9
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12
#define  SWIG_NullReferenceError   -13



/* Callback for returning strings to C# without leaking memory */
typedef void * (SWIGSTDCALL* SWIG_CSharpWStringHelperCallback)(const wchar_t *, int length);
static SWIG_CSharpWStringHelperCallback SWIG_csharp_wstring_with_length_callback = NULL;


#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterWStringCallback_SwigGenModule(SWIG_CSharpWStringHelperCallback callback_utf16, SWIG_CSharpWStringHelperCallback callback_utf32) {
  SWIG_csharp_wstring_with_length_callback = sizeof(wchar_t) == 2 ? callback_utf16 : callback_utf32;
}


/* Callback for returning strings to C# without leaking memory */
typedef void (SWIGSTDCALL* SWIG_CSharpWStringExceptionHelperCallback)(const wchar_t *, int length);
static SWIG_CSharpWStringExceptionHelperCallback SWIG_csharp_ApplicationException_callback = NULL;


#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterWStringExceptionCallback_SwigGenModule(SWIG_CSharpWStringExceptionHelperCallback callback_utf16, SWIG_CSharpWStringExceptionHelperCallback callback_utf32) {
  SWIG_csharp_ApplicationException_callback = sizeof(wchar_t) == 2 ? callback_utf16 : callback_utf32;
}


#ifdef __cplusplus
#include <utility>
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigSmartPointer {
    T *ptr;
    SwigSmartPointer(T *p) : ptr(p) { }
    ~SwigSmartPointer() { delete ptr; }
    SwigSmartPointer& operator=(SwigSmartPointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
    void reset(T *p) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = p; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigSmartPointer tmp(new T(t)); pointer = tmp; return *this; }
#if __cplusplus >=201103L
  SwigValueWrapper& operator=(T&& t) { SwigSmartPointer tmp(new T(std::move(t))); pointer = tmp; return *this; }
  operator T&&() const { return std::move(*pointer.ptr); }
#else
  operator T&() const { return *pointer.ptr; }
#endif
  T *operator&() const { return pointer.ptr; }
  static void reset(SwigValueWrapper& t, T *p) { t.pointer.reset(p); }
};

/*
 * SwigValueInit() is a generic initialisation solution as the following approach:
 * 
 *       T c_result = T();
 * 
 * doesn't compile for all types for example:
 * 
 *       unsigned int c_result = unsigned int();
 */
template <typename T> T SwigValueInit() {
  return T();
}

#if __cplusplus >=201103L
# define SWIG_STD_MOVE(OBJ) std::move(OBJ)
#else
# define SWIG_STD_MOVE(OBJ) OBJ
#endif

#endif


#include "Bar.h"
#include "Foo.h"


#include <stdint.h>		// Use the C99 official header


#include <string>


#include <algorithm>
#include <array>
#include <stdexcept>


#include <typeinfo>
#include <stdexcept>


#include <complex>


#include <deque>
#include <stdexcept>


#include <list>
#include <algorithm>
#include <stdexcept>


#include <map>
#include <algorithm>
#include <stdexcept>


SWIGINTERN void SWIG_CSharpException(int code, const char *msg) {
  if (code == SWIG_ValueError) {
    SWIG_CSharpExceptionArgumentCodes exception_code = SWIG_CSharpArgumentOutOfRangeException;
    SWIG_CSharpSetPendingExceptionArgument(exception_code, msg, 0);
  } else {
    SWIG_CSharpExceptionCodes exception_code = SWIG_CSharpApplicationException;
    switch(code) {
    case SWIG_MemoryError:
      exception_code = SWIG_CSharpOutOfMemoryException;
      break;
    case SWIG_IndexError:
      exception_code = SWIG_CSharpIndexOutOfRangeException;
      break;
    case SWIG_DivisionByZero:
      exception_code = SWIG_CSharpDivideByZeroException;
      break;
    case SWIG_IOError:
      exception_code = SWIG_CSharpIOException;
      break;
    case SWIG_OverflowError:
      exception_code = SWIG_CSharpOverflowException;
      break;
    case SWIG_RuntimeError:
    case SWIG_TypeError:
    case SWIG_SyntaxError:
    case SWIG_SystemError:
    case SWIG_UnknownError:
    default:
      exception_code = SWIG_CSharpApplicationException;
      break;
    }
    SWIG_CSharpSetPendingException(exception_code, msg);
  }
}


#include <typeinfo>
#include <stdexcept>


#include <utility>


#include <set>
#include <algorithm>
#include <stdexcept>


#include <vector>
#include <algorithm>
#include <stdexcept>


#include <wchar.h>
#include <limits.h>
#ifndef WCHAR_MIN
#  define WCHAR_MIN 0
#endif
#ifndef WCHAR_MAX
#  define WCHAR_MAX 65535
#endif


static void * SWIG_csharp_wstring_callback(const wchar_t *s) {
  return SWIG_csharp_wstring_with_length_callback(s, (int)wcslen(s));
}


#include <string>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Bar_a_set(void * jarg1, int jarg2) {
  Bar *arg1 = (Bar *) 0 ;
  int arg2 ;
  
  arg1 = (Bar *)jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->a = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_CSharpCall_Bar_a_get(void * jarg1) {
  int jresult ;
  Bar *arg1 = (Bar *) 0 ;
  int result;
  
  arg1 = (Bar *)jarg1; 
  result = (int) ((arg1)->a);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Bar_stringArray_set(void * jarg1, char ** jarg2) {
  Bar *arg1 = (Bar *) 0 ;
  char **arg2 = (char **) 0 ;
  
  arg1 = (Bar *)jarg1; 
  arg2 = jarg2;
  if (arg1) (arg1)->stringArray = arg2;
  
  
}


SWIGEXPORT char ** SWIGSTDCALL CSharp_CSharpCall_Bar_stringArray_get(void * jarg1) {
  char ** jresult ;
  Bar *arg1 = (Bar *) 0 ;
  char **result = 0 ;
  
  arg1 = (Bar *)jarg1; 
  result = (char **) ((arg1)->stringArray);
  {
    jresult=result;
  }
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Bar_stringArrayLength_set(void * jarg1, int jarg2) {
  Bar *arg1 = (Bar *) 0 ;
  int arg2 ;
  
  arg1 = (Bar *)jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->stringArrayLength = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_CSharpCall_Bar_stringArrayLength_get(void * jarg1) {
  int jresult ;
  Bar *arg1 = (Bar *) 0 ;
  int result;
  
  arg1 = (Bar *)jarg1; 
  result = (int) ((arg1)->stringArrayLength);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_CSharpCall_new_Bar() {
  void * jresult ;
  Bar *result = 0 ;
  
  result = (Bar *)new Bar();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_delete_Bar(void * jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  arg1 = (Bar *)jarg1; 
  delete arg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_SetDelegate(void * jarg1, char * jarg2, void * jarg3) {
  Foo *arg1 = (Foo *) 0 ;
  char *arg2 = (char *) 0 ;
  void (*arg3)(char const *,int) = (void (*)(char const *,int)) 0 ;
  
  arg1 = (Foo *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (void (*)(char const *,int))jarg3; 
  (arg1)->SetDelegate(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_SetValue(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Foo *arg1 = (Foo *) 0 ;
  Bar arg2 ;
  Bar *arg3 = (Bar *) 0 ;
  Bar *arg4 = (Bar *) 0 ;
  Bar *arg5 = 0 ;
  Bar *arg6 = 0 ;
  Bar *argp2 ;
  
  arg1 = (Foo *)jarg1; 
  argp2 = (Bar *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Bar", 0);
    return ;
  }
  arg2 = *argp2; 
  arg3 = (Bar *)jarg3; 
  arg4 = (Bar *)jarg4; 
  arg5 = (Bar *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Bar & is null", 0);
    return ;
  } 
  arg6 = (Bar *)jarg6;
  if (!arg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Bar & is null", 0);
    return ;
  } 
  (arg1)->SetValue(arg2,arg3,arg4,*arg5,*arg6);
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_SetValue2(void * jarg1, void** jarg2) {
  Foo *arg1 = (Foo *) 0 ;
  Bar **arg2 = 0 ;
  
  arg1 = (Foo *)jarg1; 
  arg2 = (Bar **)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Bar *& is null", 0);
    return ;
  } 
  (arg1)->SetValue2(*arg2);
}


SWIGEXPORT int SWIGSTDCALL CSharp_CSharpCall_Foo_SimpleForBenchmark(void * jarg1, int jarg2, int jarg3) {
  int jresult ;
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  int arg3 ;
  int result;
  
  arg1 = (Foo *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (int)(arg1)->SimpleForBenchmark(arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_ComplexForBenchmark(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Foo *arg1 = (Foo *) 0 ;
  Bar arg2 ;
  Bar *arg3 = (Bar *) 0 ;
  Bar *arg4 = 0 ;
  Bar *argp2 ;
  
  arg1 = (Foo *)jarg1; 
  argp2 = (Bar *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Bar", 0);
    return ;
  }
  arg2 = *argp2; 
  arg3 = (Bar *)jarg3; 
  arg4 = (Bar *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Bar & is null", 0);
    return ;
  } 
  (arg1)->ComplexForBenchmark(arg2,arg3,*arg4);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_CSharpCall_Foo_GetBar(void * jarg1) {
  void * jresult ;
  Foo *arg1 = (Foo *) 0 ;
  Bar result;
  
  arg1 = (Foo *)jarg1; 
  result = (arg1)->GetBar();
  jresult = new Bar(result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_WriteStringArray(void * jarg1, char ** jarg2, int jarg3) {
  Foo *arg1 = (Foo *) 0 ;
  char **arg2 = (char **) 0 ;
  int arg3 ;
  
  arg1 = (Foo *)jarg1; 
  arg2 = jarg2;
  arg3 = (int)jarg3; 
  (arg1)->WriteStringArray(arg2,arg3);
  
  
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_Foo_SetBar(void * jarg1, void * jarg2) {
  Foo *arg1 = (Foo *) 0 ;
  Bar arg2 ;
  Bar *argp2 ;
  
  arg1 = (Foo *)jarg1; 
  argp2 = (Bar *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Bar", 0);
    return ;
  }
  arg2 = *argp2; 
  (arg1)->SetBar(arg2);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_CSharpCall_new_Foo() {
  void * jresult ;
  Foo *result = 0 ;
  
  result = (Foo *)new Foo();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_CSharpCall_delete_Foo(void * jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  arg1 = (Foo *)jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

