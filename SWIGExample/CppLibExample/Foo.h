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

};

