using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CppSharpConsole
{
    public class SampleLibrary : ILibrary
    {
        public void Postprocess(CppSharp.Driver driver, ASTContext ctx)
        {
        }

        public void Preprocess(CppSharp.Driver driver, ASTContext ctx)
        {
        }

        public void Setup(CppSharp.Driver driver)
        {
            var options = driver.Options;
            options.GeneratorKind = GeneratorKind.CLI;
            var module = options.AddModule("Sample");
            module.IncludeDirs.Add(@"H:\MyProgram\SWIG-Playground\SWIGExample\CppLibExample");
            module.Headers.Add("Foo.h");
            module.LibraryDirs.Add(@"H:\MyProgram\SWIG-Playground\SWIGExample\Dist");
            module.Libraries.Add("CppLibExample.lib");
        }

        public void SetupPasses(CppSharp.Driver driver)
        {
        }
    }
}
