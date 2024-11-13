

using CSharpCall;


PlayPointerOrReference();

Console.Read();


static void PlayPointerOrReference()
{
    Bar bObj = new Bar();
    bObj.a = 1;
    IntPtr bObjPtr = bObj.Ptr;

    Bar barPtr = new Bar();
    barPtr.a = 1;
    IntPtr barPtrPtr = barPtr.Ptr;

    Bar barPtrMalloc = new Bar();
    barPtrMalloc.a = 1;
    IntPtr barPtrMallocPtr = barPtrMalloc.Ptr;

    Bar barRef = new Bar();
    barRef.a = 1;
    IntPtr barRefPtr = barRef.Ptr;

    Bar barRefMalloc = new Bar();
    barRefMalloc.a = 1;
    IntPtr barRefMallocPtr = barRefMalloc.Ptr;

    Foo foo = new Foo();
    foo.SetValue(bObj, barPtr, barPtrMalloc, barRef, barRefMalloc);
    Console.WriteLine(bObj.a.ToString().PadRight(10) + $"Ptr diff:{bObjPtr} vs {bObj.Ptr}");
    Console.WriteLine(barPtr.a.ToString().PadRight(10) + $"Ptr diff:{barPtrPtr} vs {barPtr.Ptr}");
    Console.WriteLine(barPtrMalloc.a.ToString().PadRight(10) + $"Ptr diff:{barPtrMallocPtr} vs {barPtrMalloc.Ptr}");
    Console.WriteLine(barRef.a.ToString().PadRight(10) + $"Ptr diff:{barRefPtr} vs {barRef.Ptr}");
    Console.WriteLine(barRefMalloc.a.ToString().PadRight(10) + $"Ptr diff:{barRefMallocPtr} vs {barRefMalloc.Ptr}");
}


