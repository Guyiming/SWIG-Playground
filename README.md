# SWIG-Playground
SWIG游乐场，主要讲解swig对C++类型的处理及如何修改默认行为。<br/>

完整内容可参考系列文章：
1.  [基本概念](https://blog.csdn.net/catshitone/category_12272201.html)
2.  [C++代码的包装](https://catshitone.blog.csdn.net/article/details/129895200)
3.  [Typemap 类型映射](https://catshitone.blog.csdn.net/article/details/129896510)
4.  [C#使用SWIG简介与实践](https://catshitone.blog.csdn.net/article/details/129899584)


# 1. 探索SWIG如何包装不同类型的对象
对于这样的一个修改变量a的值的c++函数：
```cpp
	void SetValue(Bar bObj, Bar* barPtr, Bar* barPtrMalloc, Bar& barRef, Bar& barRefMalloc)
	{
		//因为是值传递，所以修改a的值并【不会】影响输入参数
		bObj.a = 100;

		//指针属于引用传递，修改a的值【会】影响输入参数
		barPtr->a = 100;

		//指针属于引用传递，但指针被指向了一个新地址，此时修改a的值【不会】影响输入参数
		barPtrMalloc = new Bar();
		barPtrMalloc->a = 100;

		//引用传递，修改a的值【会】影响输入参数
		barRef.a = 100;

		//引用传递，赋值操作【会】影响输入参数
		Bar* temp_ref = new Bar();
		temp_ref->a = 100;
		barRefMalloc = (*temp_ref);
	}
```
我们用C#调用：
```csharp
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
```
可以看到结果里只有第一和第三个没有生效：
![ptr_ref](https://github.com/Guyiming/SWIG-Playground/blob/main/Pics/ptr_or_ref.png)

- 从第二个结果我们可以看出，c++的指针传值方式等价于c#中普通的传值方式（当然对于类来说，c#默认就是引用传递）
- 从第五个结构我们可以看出，c++的&引用传值等价于c#中的`ref`。

在c++中还有一种常见的参数类型为`*&`:
```cpp
	void SetValue2(Bar*& b)
	{
		//指针的引用
		Bar* temp_ref = new Bar();
		temp_ref->a = 100;
		b = temp_ref;
	}
```
对于指针的引用，在c++中有可能会new一个新的变量赋值上去。对新变量的任何修改我们希望能反映到入参上，所以需要我们对`Bar*&`类型做些处理（见example.i），以符合c#类似的语义，即`ref`。在c#中我们可以这样调用：
```csharp
static void PlayPointerAndRef()
{
    Bar b = new Bar();
    b.a = 1;
    IntPtr bPtr = b.Ptr;
    Foo foo = new Foo();
    foo.SetValue2(ref b);
    Console.WriteLine(b.a.ToString().PadRight(10) + $"Ptr diff:{bPtr} vs {b.Ptr}");
}
```
在输出结果中我们可以看到：
![ptr_ref](https://github.com/Guyiming/SWIG-Playground/blob/main/Pics/ptr_and_ref.png)

拿到了修改后的值，最重要的是对象指向内存的地址已经改变，变量`b`指向一个新地址。












