# AddressResolver

**AddressResolver** is a command-line tool designed to load a specified dynamic library (DLL) and retrieve the memory address of a given function within that library. This utility is useful for developers and reverse engineers who need to resolve function addresses in dynamic libraries.

## Features
- Load a specified DLL.
- Retrieve the address of a function from the specified library.
- Print the memory address of the function for further use.

## Usage

```bash
resolver.exe <library> <function-name>
```

<library>: The name of the DLL to load (e.g., kernel32.dll).
<function-name>: The name of the function to resolve (e.g., CreateFileA).

## Compilation
To compile the source code, use a C++ compiler on Windows. For example, using g++:

```powershell
g++ -o AddressResolver AddressResolver.cpp -lpsapi
```
## License
This project is licensed under the MIT License. See the LICENSE file for more details.
