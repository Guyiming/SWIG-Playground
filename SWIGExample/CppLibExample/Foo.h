#pragma once
#include "Bar.h"
class Foo
{
private:

public:
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
};

