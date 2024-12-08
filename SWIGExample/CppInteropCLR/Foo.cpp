// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "Foo.h"
#include "Bar.h"

using namespace System;
using namespace System::Runtime::InteropServices;

Sample::Foo::Foo(class ::Foo* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

Sample::Foo^ Sample::Foo::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::Sample::Foo((class ::Foo*) native.ToPointer());
}

Sample::Foo::Foo(class ::Foo* native, bool ownNativeInstance)
    : __ownsNativeInstance(ownNativeInstance)
{
    NativePtr = native;
}

Sample::Foo^ Sample::Foo::__CreateInstance(::System::IntPtr native, bool __ownsNativeInstance)
{
    return gcnew ::Sample::Foo((class ::Foo*) native.ToPointer(), __ownsNativeInstance);
}

Sample::Foo::~Foo()
{
    delete NativePtr;
}

void Sample::Foo::SetValue(Sample::Bar^ bObj, Sample::Bar^ barPtr, Sample::Bar^ barPtrMalloc, Sample::Bar^ barRef, Sample::Bar^ barRefMalloc)
{
    if (ReferenceEquals(bObj, nullptr))
        throw gcnew ::System::ArgumentNullException("bObj", "Cannot be null because it is passed by value.");
    auto __arg0 = *(class ::Bar*)bObj->NativePtr;
    auto __arg1 = (class ::Bar*)barPtr->NativePtr;
    auto __arg2 = (class ::Bar*)barPtrMalloc->NativePtr;
    if (ReferenceEquals(barRef, nullptr))
        throw gcnew ::System::ArgumentNullException("barRef", "Cannot be null because it is a C++ reference (&).");
    auto &__arg3 = *(class ::Bar*)barRef->NativePtr;
    if (ReferenceEquals(barRefMalloc, nullptr))
        throw gcnew ::System::ArgumentNullException("barRefMalloc", "Cannot be null because it is a C++ reference (&).");
    auto &__arg4 = *(class ::Bar*)barRefMalloc->NativePtr;
    ((class ::Foo*)NativePtr)->SetValue(__arg0, __arg1, __arg2, __arg3, __arg4);
}

void Sample::Foo::SetValue2(Sample::Bar^ b)
{
    if (ReferenceEquals(b, nullptr))
        throw gcnew ::System::ArgumentNullException("b", "Cannot be null because it is a C++ reference (&).");
    auto __arg0 = (class ::Bar*)b->NativePtr;
    ((class ::Foo*)NativePtr)->SetValue2(__arg0);
}

int Sample::Foo::SimpleForBenchmark(int a, int b)
{
    auto ___ret = ((class ::Foo*)NativePtr)->SimpleForBenchmark(a, b);
    return ___ret;
}

void Sample::Foo::ComplexForBenchmark(Sample::Bar^ bar1, Sample::Bar^ barPtr, Sample::Bar^ barRef)
{
    if (ReferenceEquals(bar1, nullptr))
        throw gcnew ::System::ArgumentNullException("bar1", "Cannot be null because it is passed by value.");
    auto __arg0 = *(class ::Bar*)bar1->NativePtr;
    auto __arg1 = (class ::Bar*)barPtr->NativePtr;
    if (ReferenceEquals(barRef, nullptr))
        throw gcnew ::System::ArgumentNullException("barRef", "Cannot be null because it is a C++ reference (&).");
    auto &__arg2 = *(class ::Bar*)barRef->NativePtr;
    ((class ::Foo*)NativePtr)->ComplexForBenchmark(__arg0, __arg1, __arg2);
}

Sample::Foo::Foo()
{
    __ownsNativeInstance = true;
    NativePtr = new class ::Foo();
}

Sample::Foo::Foo(Sample::Foo^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(class ::Foo*)_0->NativePtr;
    NativePtr = new class ::Foo(__arg0);
}

::System::IntPtr Sample::Foo::__Instance::get()
{
    return ::System::IntPtr(NativePtr);
}

void Sample::Foo::__Instance::set(::System::IntPtr object)
{
    NativePtr = (class ::Foo*)object.ToPointer();
}
