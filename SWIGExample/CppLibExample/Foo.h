#pragma once
#include "Bar.h"
typedef void (*TestDelegate)(const char* buf, int len);

class Foo
{
public:
	/// <summary>
	/// ����ί�У�ע��c#��Ҫ�������ί�д����������ⱻGC
	/// </summary>
	/// <param name="kcp"></param>
	/// <param name="TestDelegate"></param>
	void SetDelegate(char*& kcp, TestDelegate action)
	{
		char* buf= new char[10];
		strcpy(buf, "buffer");
		action(buf,6);
		char* temp = new char[10];
		strcpy(temp, "123");
		kcp = temp;

		//...
	}

	void SetValue(Bar bObj, Bar* barPtr, Bar* barPtrMalloc, Bar& barRef, Bar& barRefMalloc)
	{
		//��Ϊ��ֵ���ݣ������޸�a��ֵ�������᡿Ӱ���������
		bObj.a = 100;

		//ָ���������ô��ݣ��޸�a��ֵ���᡿Ӱ���������
		barPtr->a = 100;

		//ָ���������ô��ݣ���ָ�뱻ָ����һ���µ�ַ����ʱ�޸�a��ֵ�����᡿Ӱ���������
		barPtrMalloc = new Bar();
		barPtrMalloc->a = 100;

		//���ô��ݣ��޸�a��ֵ���᡿Ӱ���������
		barRef.a = 100;

		//���ô��ݣ���ֵ�������᡿Ӱ���������
		Bar* temp_ref = new Bar();
		temp_ref->a = 100;
		barRefMalloc = (*temp_ref);
	}

	void SetValue2(Bar*& b)
	{
		//ָ�������
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

	Bar GetBar()
	{
		return Bar();
	}

	void WriteStringArray(char** arr,int length)
	{
		PrintStringArray(arr, length);
	}

	void SetBar(Bar bar)
	{
		bar.a = 100;
		PrintStringArray(bar.stringArray, bar.stringArrayLength);

		bar.stringArray = new char* [3];
		bar.stringArray[0] = _strdup("Hello");
		bar.stringArray[1] = _strdup("World");
		bar.stringArray[2] = nullptr;
	}
private:
	void PrintStringArray(char** arr, int length)
	{
		for (int i = 0; i<length; i++)
		{
			printf("%s\n", arr[i]);
		}
	}
};

