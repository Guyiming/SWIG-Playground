//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (https://www.swig.org).
// Version 4.1.1
//
// Do not make changes to this file unless you know what you are doing - modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace CSharpCall {

public class Bar : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Bar(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(Bar obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(Bar obj) {
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new global::System.ApplicationException("Cannot release ownership as memory is not owned");
      global::System.Runtime.InteropServices.HandleRef ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.Dispose();
      return ptr;
    } else {
      return new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
    }
  }

  ~Bar() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          SwigGenModulePINVOKE.delete_Bar(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

	/// <summary>
	/// 获取当前对象的指针
	/// </summary>
	public System.IntPtr Ptr => getCPtr(this).Handle;

  public int a {
    set {
      SwigGenModulePINVOKE.Bar_a_set(swigCPtr, value);
    } 
    get {
      int ret = SwigGenModulePINVOKE.Bar_a_get(swigCPtr);
      return ret;
    } 
  }

  public string[] stringArray {
    set {
      SwigGenModulePINVOKE.Bar_stringArray_set(swigCPtr, value);
    } 
    get{
	    IntPtr ptr = SwigGenModulePINVOKE.Bar_stringArray_get(swigCPtr);
        List<string> strings = new List<string>();
        int offset = 0;
        while (true) 
        {
            ptr = System.Runtime.InteropServices.Marshal.ReadIntPtr(ptr, offset);
            if (ptr == IntPtr.Zero)
            {
                break; 
            }
            strings.Add(System.Runtime.InteropServices.Marshal.PtrToStringAnsi(ptr));
            offset += IntPtr.Size;
        }
        return strings.ToArray();
    }

  }

  public int stringArrayLength {
    set {
      SwigGenModulePINVOKE.Bar_stringArrayLength_set(swigCPtr, value);
    } 
    get {
      int ret = SwigGenModulePINVOKE.Bar_stringArrayLength_get(swigCPtr);
      return ret;
    } 
  }

  public Bar() : this(SwigGenModulePINVOKE.new_Bar(), true) {
  }

}

}
namespace CSharpCall {

public class Foo : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Foo(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(Foo obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(Foo obj) {
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new global::System.ApplicationException("Cannot release ownership as memory is not owned");
      global::System.Runtime.InteropServices.HandleRef ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.Dispose();
      return ptr;
    } else {
      return new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
    }
  }

  ~Foo() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          SwigGenModulePINVOKE.delete_Foo(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

	/// <summary>
	/// 获取当前对象的指针
	/// </summary>
	public System.IntPtr Ptr => getCPtr(this).Handle;

  public void SetValue(Bar bObj, Bar barPtr, Bar barPtrMalloc, Bar barRef, Bar barRefMalloc) {
    SwigGenModulePINVOKE.Foo_SetValue(swigCPtr, Bar.getCPtr(bObj), Bar.getCPtr(barPtr), Bar.getCPtr(barPtrMalloc), Bar.getCPtr(barRef), Bar.getCPtr(barRefMalloc));
    if (SwigGenModulePINVOKE.SWIGPendingException.Pending) throw SwigGenModulePINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetValue2(ref Bar b) {
System.IntPtr temp_b = Bar.getCPtr(b).Handle; System.IntPtr back_b = temp_b;
    try {
      SwigGenModulePINVOKE.Foo_SetValue2(swigCPtr, ref temp_b);
      if (SwigGenModulePINVOKE.SWIGPendingException.Pending) throw SwigGenModulePINVOKE.SWIGPendingException.Retrieve();
    } finally {
if(temp_b != back_b) b = new Bar(temp_b,true);
    }
  }

  public int SimpleForBenchmark(int a, int b) {
    int ret = SwigGenModulePINVOKE.Foo_SimpleForBenchmark(swigCPtr, a, b);
    return ret;
  }

  public void ComplexForBenchmark(Bar bar1, Bar barPtr, Bar barRef) {
    SwigGenModulePINVOKE.Foo_ComplexForBenchmark(swigCPtr, Bar.getCPtr(bar1), Bar.getCPtr(barPtr), Bar.getCPtr(barRef));
    if (SwigGenModulePINVOKE.SWIGPendingException.Pending) throw SwigGenModulePINVOKE.SWIGPendingException.Retrieve();
  }

  public Bar GetBar() {
    Bar ret = new Bar(SwigGenModulePINVOKE.Foo_GetBar(swigCPtr), true);
    return ret;
  }

  public void WriteStringArray(string[] arr, int length) {
    SwigGenModulePINVOKE.Foo_WriteStringArray(swigCPtr, arr, length);
  }

  public void SetBar(Bar bar) {
    SwigGenModulePINVOKE.Foo_SetBar(swigCPtr, Bar.getCPtr(bar));
    if (SwigGenModulePINVOKE.SWIGPendingException.Pending) throw SwigGenModulePINVOKE.SWIGPendingException.Retrieve();
  }

  public Foo() : this(SwigGenModulePINVOKE.new_Foo(), true) {
  }

}

}
namespace CSharpCall {

class SwigGenModulePINVOKE {

  protected class SWIGExceptionHelper {

    public delegate void ExceptionDelegate(string message);
    public delegate void ExceptionArgumentDelegate(string message, string paramName);

    static ExceptionDelegate applicationDelegate = new ExceptionDelegate(SetPendingApplicationException);
    static ExceptionDelegate arithmeticDelegate = new ExceptionDelegate(SetPendingArithmeticException);
    static ExceptionDelegate divideByZeroDelegate = new ExceptionDelegate(SetPendingDivideByZeroException);
    static ExceptionDelegate indexOutOfRangeDelegate = new ExceptionDelegate(SetPendingIndexOutOfRangeException);
    static ExceptionDelegate invalidCastDelegate = new ExceptionDelegate(SetPendingInvalidCastException);
    static ExceptionDelegate invalidOperationDelegate = new ExceptionDelegate(SetPendingInvalidOperationException);
    static ExceptionDelegate ioDelegate = new ExceptionDelegate(SetPendingIOException);
    static ExceptionDelegate nullReferenceDelegate = new ExceptionDelegate(SetPendingNullReferenceException);
    static ExceptionDelegate outOfMemoryDelegate = new ExceptionDelegate(SetPendingOutOfMemoryException);
    static ExceptionDelegate overflowDelegate = new ExceptionDelegate(SetPendingOverflowException);
    static ExceptionDelegate systemDelegate = new ExceptionDelegate(SetPendingSystemException);

    static ExceptionArgumentDelegate argumentDelegate = new ExceptionArgumentDelegate(SetPendingArgumentException);
    static ExceptionArgumentDelegate argumentNullDelegate = new ExceptionArgumentDelegate(SetPendingArgumentNullException);
    static ExceptionArgumentDelegate argumentOutOfRangeDelegate = new ExceptionArgumentDelegate(SetPendingArgumentOutOfRangeException);

    [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="SWIGRegisterExceptionCallbacks_SwigGenModule")]
    public static extern void SWIGRegisterExceptionCallbacks_SwigGenModule(
                                ExceptionDelegate applicationDelegate,
                                ExceptionDelegate arithmeticDelegate,
                                ExceptionDelegate divideByZeroDelegate, 
                                ExceptionDelegate indexOutOfRangeDelegate, 
                                ExceptionDelegate invalidCastDelegate,
                                ExceptionDelegate invalidOperationDelegate,
                                ExceptionDelegate ioDelegate,
                                ExceptionDelegate nullReferenceDelegate,
                                ExceptionDelegate outOfMemoryDelegate, 
                                ExceptionDelegate overflowDelegate, 
                                ExceptionDelegate systemExceptionDelegate);

    [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="SWIGRegisterExceptionArgumentCallbacks_SwigGenModule")]
    public static extern void SWIGRegisterExceptionCallbacksArgument_SwigGenModule(
                                ExceptionArgumentDelegate argumentDelegate,
                                ExceptionArgumentDelegate argumentNullDelegate,
                                ExceptionArgumentDelegate argumentOutOfRangeDelegate);

    static void SetPendingApplicationException(string message) {
      SWIGPendingException.Set(new global::System.ApplicationException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingArithmeticException(string message) {
      SWIGPendingException.Set(new global::System.ArithmeticException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingDivideByZeroException(string message) {
      SWIGPendingException.Set(new global::System.DivideByZeroException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingIndexOutOfRangeException(string message) {
      SWIGPendingException.Set(new global::System.IndexOutOfRangeException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingInvalidCastException(string message) {
      SWIGPendingException.Set(new global::System.InvalidCastException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingInvalidOperationException(string message) {
      SWIGPendingException.Set(new global::System.InvalidOperationException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingIOException(string message) {
      SWIGPendingException.Set(new global::System.IO.IOException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingNullReferenceException(string message) {
      SWIGPendingException.Set(new global::System.NullReferenceException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingOutOfMemoryException(string message) {
      SWIGPendingException.Set(new global::System.OutOfMemoryException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingOverflowException(string message) {
      SWIGPendingException.Set(new global::System.OverflowException(message, SWIGPendingException.Retrieve()));
    }
    static void SetPendingSystemException(string message) {
      SWIGPendingException.Set(new global::System.SystemException(message, SWIGPendingException.Retrieve()));
    }

    static void SetPendingArgumentException(string message, string paramName) {
      SWIGPendingException.Set(new global::System.ArgumentException(message, paramName, SWIGPendingException.Retrieve()));
    }
    static void SetPendingArgumentNullException(string message, string paramName) {
      global::System.Exception e = SWIGPendingException.Retrieve();
      if (e != null) message = message + " Inner Exception: " + e.Message;
      SWIGPendingException.Set(new global::System.ArgumentNullException(paramName, message));
    }
    static void SetPendingArgumentOutOfRangeException(string message, string paramName) {
      global::System.Exception e = SWIGPendingException.Retrieve();
      if (e != null) message = message + " Inner Exception: " + e.Message;
      SWIGPendingException.Set(new global::System.ArgumentOutOfRangeException(paramName, message));
    }

    static SWIGExceptionHelper() {
      SWIGRegisterExceptionCallbacks_SwigGenModule(
                                applicationDelegate,
                                arithmeticDelegate,
                                divideByZeroDelegate,
                                indexOutOfRangeDelegate,
                                invalidCastDelegate,
                                invalidOperationDelegate,
                                ioDelegate,
                                nullReferenceDelegate,
                                outOfMemoryDelegate,
                                overflowDelegate,
                                systemDelegate);

      SWIGRegisterExceptionCallbacksArgument_SwigGenModule(
                                argumentDelegate,
                                argumentNullDelegate,
                                argumentOutOfRangeDelegate);
    }
  }

  protected static SWIGExceptionHelper swigExceptionHelper = new SWIGExceptionHelper();

  public class SWIGPendingException {
    [global::System.ThreadStatic]
    private static global::System.Exception pendingException = null;
    private static int numExceptionsPending = 0;
    private static global::System.Object exceptionsLock = null;

    public static bool Pending {
      get {
        bool pending = false;
        if (numExceptionsPending > 0)
          if (pendingException != null)
            pending = true;
        return pending;
      } 
    }

    public static void Set(global::System.Exception e) {
      if (pendingException != null)
        throw new global::System.ApplicationException("FATAL: An earlier pending exception from unmanaged code was missed and thus not thrown (" + pendingException.ToString() + ")", e);
      pendingException = e;
      lock(exceptionsLock) {
        numExceptionsPending++;
      }
    }

    public static global::System.Exception Retrieve() {
      global::System.Exception e = null;
      if (numExceptionsPending > 0) {
        if (pendingException != null) {
          e = pendingException;
          pendingException = null;
          lock(exceptionsLock) {
            numExceptionsPending--;
          }
        }
      }
      return e;
    }

    static SWIGPendingException() {
      exceptionsLock = new global::System.Object();
    }
  }


  protected class SWIGStringHelper {

    public delegate string SWIGStringDelegate(string message);
    static SWIGStringDelegate stringDelegate = new SWIGStringDelegate(CreateString);

    [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="SWIGRegisterStringCallback_SwigGenModule")]
    public static extern void SWIGRegisterStringCallback_SwigGenModule(SWIGStringDelegate stringDelegate);

    static string CreateString(string cString) {
      return cString;
    }

    static SWIGStringHelper() {
      SWIGRegisterStringCallback_SwigGenModule(stringDelegate);
    }
  }

  static protected SWIGStringHelper swigStringHelper = new SWIGStringHelper();


  static SwigGenModulePINVOKE() {
  }


  protected class SWIGWStringHelper {

    [return: global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]
    public delegate string SWIGWStringDelegate(global::System.IntPtr message, int length);
    static SWIGWStringDelegate wstringUTF16Delegate = new SWIGWStringDelegate(CreateWStringFromUTF16);
    static SWIGWStringDelegate wstringUTF32Delegate = new SWIGWStringDelegate(CreateWStringFromUTF32);

    [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="SWIGRegisterWStringCallback_SwigGenModule")]
    public static extern void SWIGRegisterWStringCallback_SwigGenModule(SWIGWStringDelegate wstringUTF16Delegate, SWIGWStringDelegate wstringUTF32Delegate);

    public static string CreateWStringFromUTF16([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      return global::System.Runtime.InteropServices.Marshal.PtrToStringUni(cString, length);
    }

    public static string CreateWStringFromUTF32([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      if (length == 0)
        return string.Empty;

      byte[] buffer = new byte[length * 4];
      global::System.Runtime.InteropServices.Marshal.Copy(cString, buffer, 0, buffer.Length);
      return global::System.Text.Encoding.UTF32.GetString(buffer);
    }

    static SWIGWStringHelper() {
      SWIGRegisterWStringCallback_SwigGenModule(wstringUTF16Delegate, wstringUTF32Delegate);
    }
  }

  static protected SWIGWStringHelper swigWStringHelper = new SWIGWStringHelper();


  protected class SWIGWStringExceptionHelper {

    [return: global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]
    public delegate void SWIGWStringExceptionDelegate(global::System.IntPtr message, int length);
    static SWIGWStringExceptionDelegate applicationExceptionUTF16Delegate = new SWIGWStringExceptionDelegate(SetPendingApplicationExceptionUTF16);
    static SWIGWStringExceptionDelegate applicationExceptionUTF32Delegate = new SWIGWStringExceptionDelegate(SetPendingApplicationExceptionUTF32);

    [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="SWIGRegisterWStringExceptionCallback_SwigGenModule")]
    public static extern void SWIGRegisterWStringExceptionCallback_SwigGenModule(SWIGWStringExceptionDelegate applicationExceptionUTF16Delegate, SWIGWStringExceptionDelegate applicationExceptionUTF32Delegate);

    static string CreateWStringFromUTF16([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      return global::System.Runtime.InteropServices.Marshal.PtrToStringUni(cString, length);
    }

    public static string CreateWStringFromUTF32([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      if (length == 0)
        return string.Empty;

      byte[] buffer = new byte[length * 4];
      return global::System.Text.Encoding.UTF32.GetString(buffer);
    }

    static void SetPendingApplicationExceptionUTF16([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      string message = SWIGWStringHelper.CreateWStringFromUTF16(cString, length);
      SWIGPendingException.Set(new global::System.ApplicationException(message, SWIGPendingException.Retrieve()));
    }

    static void SetPendingApplicationExceptionUTF32([global::System.Runtime.InteropServices.MarshalAs(global::System.Runtime.InteropServices.UnmanagedType.LPWStr)]global::System.IntPtr cString, int length) {
      string message = SWIGWStringHelper.CreateWStringFromUTF32(cString, length);
      SWIGPendingException.Set(new global::System.ApplicationException(message, SWIGPendingException.Retrieve()));
    }

    static SWIGWStringExceptionHelper() {
      SWIGRegisterWStringExceptionCallback_SwigGenModule(applicationExceptionUTF16Delegate, applicationExceptionUTF32Delegate);
    }
  }

  static protected SWIGWStringExceptionHelper swigWStringExceptionHelper = new SWIGWStringExceptionHelper();


  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_a_set")]
  public static extern void Bar_a_set(global::System.Runtime.InteropServices.HandleRef jarg1, int jarg2);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_a_get")]
  public static extern int Bar_a_get(global::System.Runtime.InteropServices.HandleRef jarg1);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_stringArray_set")]
  public static extern void Bar_stringArray_set(global::System.Runtime.InteropServices.HandleRef jarg1, [System.Runtime.InteropServices.In,System.Runtime.InteropServices.Out, System.Runtime.InteropServices.MarshalAs(System.Runtime.InteropServices.UnmanagedType.LPArray, SizeParamIndex=0, ArraySubType=System.Runtime.InteropServices.UnmanagedType.LPStr)]string[] jarg2);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_stringArray_get")]
  public static extern IntPtr Bar_stringArray_get(global::System.Runtime.InteropServices.HandleRef jarg1);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_stringArrayLength_set")]
  public static extern void Bar_stringArrayLength_set(global::System.Runtime.InteropServices.HandleRef jarg1, int jarg2);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Bar_stringArrayLength_get")]
  public static extern int Bar_stringArrayLength_get(global::System.Runtime.InteropServices.HandleRef jarg1);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_new_Bar")]
  public static extern global::System.IntPtr new_Bar();

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_delete_Bar")]
  public static extern void delete_Bar(global::System.Runtime.InteropServices.HandleRef jarg1);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_SetValue")]
  public static extern void Foo_SetValue(global::System.Runtime.InteropServices.HandleRef jarg1, global::System.Runtime.InteropServices.HandleRef jarg2, global::System.Runtime.InteropServices.HandleRef jarg3, global::System.Runtime.InteropServices.HandleRef jarg4, global::System.Runtime.InteropServices.HandleRef jarg5, global::System.Runtime.InteropServices.HandleRef jarg6);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_SetValue2")]
  public static extern void Foo_SetValue2(global::System.Runtime.InteropServices.HandleRef jarg1, ref System.IntPtr jarg2);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_SimpleForBenchmark")]
  public static extern int Foo_SimpleForBenchmark(global::System.Runtime.InteropServices.HandleRef jarg1, int jarg2, int jarg3);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_ComplexForBenchmark")]
  public static extern void Foo_ComplexForBenchmark(global::System.Runtime.InteropServices.HandleRef jarg1, global::System.Runtime.InteropServices.HandleRef jarg2, global::System.Runtime.InteropServices.HandleRef jarg3, global::System.Runtime.InteropServices.HandleRef jarg4);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_GetBar")]
  public static extern global::System.IntPtr Foo_GetBar(global::System.Runtime.InteropServices.HandleRef jarg1);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_WriteStringArray")]
  public static extern void Foo_WriteStringArray(global::System.Runtime.InteropServices.HandleRef jarg1, [System.Runtime.InteropServices.In,System.Runtime.InteropServices.Out, System.Runtime.InteropServices.MarshalAs(System.Runtime.InteropServices.UnmanagedType.LPArray, SizeParamIndex=0, ArraySubType=System.Runtime.InteropServices.UnmanagedType.LPStr)]string[] jarg2, int jarg3);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_Foo_SetBar")]
  public static extern void Foo_SetBar(global::System.Runtime.InteropServices.HandleRef jarg1, global::System.Runtime.InteropServices.HandleRef jarg2);

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_new_Foo")]
  public static extern global::System.IntPtr new_Foo();

  [global::System.Runtime.InteropServices.DllImport("CppLibExample", EntryPoint="CSharp_CSharpCall_delete_Foo")]
  public static extern void delete_Foo(global::System.Runtime.InteropServices.HandleRef jarg1);
}

}
namespace CSharpCall {

public class SwigGenModule {
}

}
namespace CSharpCall {

public class SWIGTYPE_p_p_char {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;

  internal SWIGTYPE_p_p_char(global::System.IntPtr cPtr, bool futureUse) {
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  protected SWIGTYPE_p_p_char() {
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(SWIGTYPE_p_p_char obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(SWIGTYPE_p_p_char obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }
}

}
