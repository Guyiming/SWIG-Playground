#pragma once
#include "Bar.h"
class Foo
{
private:

public:
	void SetValue(Bar bObj, Bar* barPtr, Bar* barPtrMalloc, Bar& barRef, Bar& barRefMalloc)
	{
		bObj.a = 100;


		barPtr->a = 100;
		barPtrMalloc = new Bar();
		barPtrMalloc->a = 100;

		barRef.a = 100;



		Bar* temp_ref = new Bar();
		temp_ref->a = 100;
		barRefMalloc = (*temp_ref);
	}
};

