
using BenchmarkDotNet.Attributes;

namespace CSharpCall
{
    public class BenchmarkPlay
    {
        Sample.Foo _fooCLR = new();
        Foo _foo = new Foo();
        public BenchmarkPlay()
        {

        }

        public void TestSimpleCLR()
        {
            int result;
            for (int i = 0; i < 50; i++)
            {
                result = _fooCLR.SimpleForBenchmark(i, i + 1);
            }
        }

        public void TestSimpleSWIG()
        {
            int result;
            for (int i = 0; i < 50; i++)
            {
                result = _foo.SimpleForBenchmark(i, i + 1);
            }
        }



        public void TestComplexCLR()
        {
            _fooCLR.ComplexForBenchmark(new Sample.Bar(), new Sample.Bar(), new Sample.Bar());
        }

        public void TestComplexSWIG()
        {
            _foo.ComplexForBenchmark(new Bar(), new Bar(), new Bar());
        }
    }
}
