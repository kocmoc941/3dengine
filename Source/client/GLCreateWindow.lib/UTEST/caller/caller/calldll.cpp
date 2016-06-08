#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>

char DLL[1024]{};

int main(int argc, char** argv) {
  if (argc < 4)
  {
    std::cout << "USAGE:\ncalldll <path_to_dll> <function_name> <return type> [<value1> <value2>]\n";
    return -1;
  }
  strcpy(DLL, argv[1]);
  DWORD att = GetFileAttributesA(DLL);
  if (att != INVALID_FILE_ATTRIBUTES) {
    HMODULE h = LoadLibraryA(DLL);
    if (h) {
      HWND(*call)(int a, int b);
      char func[1024]{};
      strcpy(func, argv[2]);
      call = (HWND(*)(int a, int b))GetProcAddress(h, func);
      if (call) {
        std::cout << "returned: " << (int)call(10, 20);
        std::cout << "\n";
      }
      else
        std::cout << argv[2] << " not found";
      FreeLibrary(h);
    }
    else
      std::cout << "wrong structure dll";
  }
  else
    std::cout << "dll not found";
  std::cout << "\n";
}