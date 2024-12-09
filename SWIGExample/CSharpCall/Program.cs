using CSharpCall;
using System.Diagnostics;


//PlayPointerOrReference();
//PlayPointerAndRef();

BenchmarkSWIG_CLR();



Console.Read();


//SWIG与CLR性能对比
static void BenchmarkSWIG_CLR()
{
    //https://stackoverflow.com/questions/1433334/performance-differences-between-p-invoke-and-c-wrappers
    //实际情况也是CLR比SWIG快了20多倍


    BenchmarkPlay mark = new BenchmarkPlay();
    Stopwatch sw = Stopwatch.StartNew();


    #region TestSimple
    for (int i = 0; i < 999999; i++)
    {
        mark.TestSimpleCLR();
    }
    sw.Stop();
    Console.WriteLine($"Simple-CLR:{sw.ElapsedMilliseconds}ms");

    sw.Restart();
    for (int i = 0; i < 999999; i++)
    {
        mark.TestSimpleSWIG();
    }
    sw.Stop();
    Console.WriteLine($"Simple-SWIG:{sw.ElapsedMilliseconds}ms");
    #endregion

    #region 复杂对象
    sw.Restart();
    for (int i = 0; i < 999999; i++)
    {
        mark.TestComplexCLR();
    }
    sw.Stop();
    Console.WriteLine($"Complex-CLR:{sw.ElapsedMilliseconds}ms");

    sw.Restart();
    for (int i = 0; i < 999999; i++)
    {
        mark.TestComplexSWIG();
    }
    sw.Stop();
    Console.WriteLine($"Complex-SWIG:{sw.ElapsedMilliseconds}ms"); 
    #endregion
}

//测试指针的引用
static void PlayPointerAndRef()
{
    Bar b = new Bar();
    b.a = 1;
    IntPtr bPtr = b.Ptr;
    Foo foo = new Foo();
    foo.SetValue2(ref b);
    Console.WriteLine(b.a.ToString().PadRight(10) + $"Ptr diff:{bPtr} vs {b.Ptr}");
}


//测试指针、引用、引用
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


