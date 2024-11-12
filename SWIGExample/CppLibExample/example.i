
//swig -c++ -outdir ../CSharpCall/GenerateCode -outfile MergedCode.cs -namespace CSharpCall -dllimport CppLibExample -csharp example.i

%module SwigGenModule

%{
#include "Bar.h"
#include "Foo.h"
%}

//添加基础库支持
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
%include <std_string.i>
%include <std_vector.i>
%include <std_wstring.i>
%include <std_shared_ptr.i>
%include <cpointer.i>
%include <typemaps.i>
%include "carrays.i"
%include <arrays_csharp.i>


//%array_class(Foo,FooArray);

//%template(TestVector) std::vector<int>;

//%typemap(ctype) PointAsC*& "void**";
//%typemap(imtype,out="IntPtr") PointAsC*& "ref System.IntPtr";
//%typemap(csin,pre="System.IntPtr temp_$csinput=PointAsC.getCPtr($csinput).Handle; System.IntPtr back_$csinput=temp_$csinput;",post="if(temp_$csinput!=back_$csinput) $csinput=new PointAsC(temp_$csinput,true);") PointAsC*& "ref temp_$csinput";
//%typemap(cstype) PointAsC*& "ref PointAsC";

//
//%apply int* INOUT {int *abc};


//%typemap(cstype) int *abc "ref int";
//%typemap(csin) int *abc "ref $csinput";
//%typemap(imtype) int *abc "ref int";
//%typemap(ctype) int *abc "int*";

//%array_class(PointAsC,PointAsCArray);


%include "Bar.h"
%include "Foo.h"

