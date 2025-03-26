#pragma once
#include "Bar.h"
typedef void (*KcpOutputFunc)(const char* buf, int len);

class Foo
{
private:

public:
	void ikcp_setoutput(char *kcp, KcpOutputFunc func)
	{

	}

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

	void SetValue2(Bar*& b)
	{
		//指针的引用
		Bar* temp_ref = new Bar();
		temp_ref->a = 100;
		b = temp_ref;
	}

	int SimpleForBenchmark(int a, int b)
	{
		return a + b;
	}

	void ComplexForBenchmark(Bar bar1, Bar* barPtr, Bar& barRef)
	{
		bar1.a = 100;
		barPtr->a = 100;
		barRef.a = 100;
	}

};

