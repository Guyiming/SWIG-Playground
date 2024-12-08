// See https://aka.ms/new-console-template for more information


// CppSharp 驱动生成器
using CppSharp;
using CppSharpConsole;

//var generator = new CppSharp.Generators.CSharpGenerator();

//// 注册 C++ 文件
//var options = new DriverOptions();
//options.lib    //("-Ipath_to_your_header_files");  // 添加头文件路径
//options.LibraryDirectories.Add("path_to_your_cpp_libraries"); // 添加库文件路径
//options.InputFiles.Add("Math.h");

//// 生成绑定代码
//var driver = new CppSharp.Driver(options);
//driver.Run();

ConsoleDriver.Run(new SampleLibrary());

Console.WriteLine("Bindings generated successfully.");


Console.Read();
