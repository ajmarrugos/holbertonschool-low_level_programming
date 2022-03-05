# Static Libraries #

Is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.

Static libraries aren’t loaded by the compiler at run-time; only the executable file need be loaded. Static library object files instead are loaded near the end of compilation during it's linking phase.