# SerBugDemo
Demonstrates a bug in Blazor WebAssembly native dependencies parameter serialization.

A very simple C DLL was created. 
The functions return allocated memory from C to C# in various signature configurations.
When a function involves (more than one) double parameter, the program crashes in runtime.
A single double signature will NOT cause program crashing.
Float (any number) will not cause crashes.
Combination with double will cause crashes (see inside code).
