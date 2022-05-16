## Dynamic Libraries

Static library is a collection of object files, while dynamic or shared library is a collection of functions compiled and stored in an executable with purpose of being linked by other programs at run-time.

With Static libraries, you will be using the code stored inside the .a files, that will be taken from them and embedded into your own binary. In Visual Studio, these would be the .lib files.

With Dynamic libraries, the code stored inside them, will be not taken and embedded into your own binary. Instead, will be just referenced, so the binary will depend on them and the code from the so file is added/loaded at runtime. In Visual Studio/Windows these would be .dll files (with small .lib files containing linking information).