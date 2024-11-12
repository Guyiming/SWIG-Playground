

using CSharpCall;


Bar bObj = new Bar();
bObj.a = 1;
Bar barPtr = new Bar();
barPtr.a = 1;
Bar barPtrMalloc = new Bar();
barPtrMalloc.a = 1;
Bar barRef = new Bar();
barRef.a = 1;
Bar barRefMalloc = new Bar();
barRefMalloc.a = 1;


Foo foo = new Foo();
foo.SetValue(bObj, barPtr, barPtrMalloc, barRef, barRefMalloc);
Console.WriteLine(bObj.a);
Console.WriteLine(barPtr.a);
Console.WriteLine(barPtrMalloc.a); 
Console.WriteLine(barRef.a); 
Console.WriteLine(barRefMalloc.a);

Console.WriteLine("End");
Console.Read();
