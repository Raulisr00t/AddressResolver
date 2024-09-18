#include <windows.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "[!] USAGE: resolver.exe <library> <function-name>" << endl;
        return 1;
    }

    HMODULE hlib;
    LPCSTR function;
    FARPROC address;

    hlib = LoadLibraryA(argv[1]);
    if (!hlib) {
        cout << "[!] Error loading library: " << argv[1] << endl;
        return -1;
    }

    function = argv[2];

    address = GetProcAddress(hlib, function);
    if (!address) {
        cout << "[!] Error retrieving address of function '" << function << "' in " << argv[1] << endl;
        FreeLibrary(hlib);
        return -1;
    }

    cout << "[+] Address of '" << function << "' in " << argv[1] << " is: 0x" << address << endl;

    FreeLibrary(hlib);

    return 0;
}
