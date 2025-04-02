
//swig -c++ -outdir ../CSharpCall/GenerateCode -outfile MergedCode.cs -namespace CSharpCall -dllimport CppLibExample -csharp example.i

%module SwigGenModule

%{
#include <string>
#include "Bar.h"
#include "Foo.h"
%}


%include <windows.i>
%include <stdint.i>
%include <std_string.i>
%include <std_array.i>
%include <std_auto_ptr.i>
%include <std_complex.i>
%include <std_deque.i>
%include <std_list.i>
%include <std_map.i>
%include <std_pair.i>
%include <std_set.i>
%include <std_vector.i>
%include <std_wstring.i>
%include <std_shared_ptr.i>
%include <cpointer.i>
%include <typemaps.i>
%include "carrays.i"
%include <arrays_csharp.i>


%typemap(cscode) SWIGTYPE %{
	public System.IntPtr Ptr => getCPtr(this).Handle;
%}

//%typemap(out) SWIGTYPE %{ 
//$result = new2 $1_ltype($1); 
//%}

//%typemap(newfree) SWIGTYPE {
//delete $1;
//}


//%array_class(Foo,FooArray);

//%template(TestVector) std::vector<int>;

//map T*& to ref T
%typemap(ctype) Bar*& "void**";
%typemap(imtype,out="IntPtr") Bar*& "ref System.IntPtr";
%typemap(csin,pre="System.IntPtr temp_$csinput = Bar.getCPtr($csinput).Handle; System.IntPtr back_$csinput = temp_$csinput;",post="if(temp_$csinput != back_$csinput) $csinput = new Bar(temp_$csinput,true);") Bar*& "ref temp_$csinput";
%typemap(cstype) Bar*& "ref Bar";



%typemap(ctype) char*& kcp "char*&"
%typemap(imtype) char*& kcp "ref string"
%typemap(csin) char*& kcp "ref $csinput";
%typemap(cstype) char*& kcp "ref string"


//%typemap(argout) char*& {
//        jarg2=*$1;
//}

%apply char* INOUT {char *};

//map char** to string[]
CSHARP_ARRAYS(char *, string)
%typemap(imtype,out="IntPtr", inattributes="[System.Runtime.InteropServices.In,System.Runtime.InteropServices.Out, System.Runtime.InteropServices.MarshalAs(System.Runtime.InteropServices.UnmanagedType.LPArray, SizeParamIndex=0, ArraySubType=System.Runtime.InteropServices.UnmanagedType.LPStr)]") char *INPUT[] "string[]";
%apply char *INPUT[]  { char ** };
%typemap(out) char**{
    $result=$1;
}

%typemap(csvarout,excode=SWIGEXCODE2) char** %{
    get{
	    IntPtr ptr = $imcall;$excode
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
%}




//%apply int* INOUT {int *abc};





//%array_class(PointAsC,PointAsCArray);

%typemap(csin) void(*)(const char*,int) "System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate($csinput)";
%typemap(imtype,out="IntPtr") void(*)(const char*,int) "System.IntPtr";
%typemap(cstype) void(*)(const char*,int) "TestDelegate";
%pragma(csharp) moduleimports=%{
public delegate void TestDelegate(string a,int b);
%}


%include "Bar.h"
%include "Foo.h"

