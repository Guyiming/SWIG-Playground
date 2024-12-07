
#include <Foo.h>
public ref class BarCLR
{
public:
	int a = 0;
};

public ref class FooCLR
{
private:
public:
	int SimpleForBenchmark(int a, int b)
	{
		Foo f;
		return f.SimpleForBenchmark(a, b);
	}

	void ComplexForBenchmark(BarCLR barObj,BarCLR^ barPtr,BarCLR% barRef)
	{
		Foo f;
		Bar b1;
		b1.a = barObj.a;

		Bar b2;
		b2.a = barPtr->a;

		Bar b3;
		b3.a = barRef.a;

		f.ComplexForBenchmark(b1, &b2, b3);
	}
};

