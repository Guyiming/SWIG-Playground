using BenchmarkDotNet.Attributes;
using Sample;

namespace CSharpCall
{
    public class BenchmarkPlay
    {
        Sample.Foo _fooCLR = new ();
        Foo _foo = new Foo();
        public BenchmarkPlay()
        {

        }



        [Benchmark]
        public void TestSimpleCLR()
        {
            for (int i = 0; i < 50; i++)
            {
                _fooCLR.SimpleForBenchmark(i, i + 1);
            }
        }

        [Benchmark]
        public void TestSimpleSWIG()
        {
            for (int i = 0; i < 50; i++)
            {
                _foo.SimpleForBenchmark(i, i + 1);
            }
        }



        //[Benchmark]
        //public void TestComplexCLR()
        //{
        //    _fooCLR.ComplexForBenchmark(new BarCLR(), new BarCLR(), new BarCLR());
        //}

        //[Benchmark]
        //public void TestComplexSWIG()
        //{
        //    _foo.ComplexForBenchmark(new Bar(), new Bar(), new Bar());
        //}
    }
}
