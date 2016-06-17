#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>

char DLL[1024]{};

LRESULT CALLBACK WindowProc(
  _In_ HWND   hwnd,
  _In_ UINT   uMsg,
  _In_ WPARAM wParam,
  _In_ LPARAM lParam
  ) {
  switch (uMsg) {
     case WM_CLOSE:
         PostMessageA(hwnd, WM_DESTROY, 0, 0);
         return 0;
       break;
    case WM_KEYDOWN:
      if (wParam == VK_ESCAPE) {
        PostMessageA(hwnd, WM_DESTROY, 0, 0);
        return 0;
      }
      break;
    case WM_PAINT:
      HDC hdc;
      PAINTSTRUCT lp;
      hdc = BeginPaint(hwnd, &lp);
      HBRUSH br = CreateSolidBrush(RGB(0,0,0));
      SelectObject(hdc, br);
      RECT r;
      GetWindowRect(hwnd, &r);
      Rectangle(hdc, 0,0, r.right, r.bottom);
      DeleteObject(br);
      EndPaint(hwnd, &lp);
      break;
  }
  return DefWindowProcA(hwnd, uMsg, wParam, lParam);
}

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
      HWND(_stdcall*call)(WNDPROC);
      call = (HWND(_stdcall*)(WNDPROC))GetProcAddress(h, argv[2]);
      if (call) {
        HWND hwnd = call(WindowProc);
        if (hwnd) {
          ShowWindow(hwnd, SW_SHOW);

          bool(_fastcall *GetWH)();
          GetWH = (bool(_fastcall*)())GetProcAddress(h, "GetScreenWH");
          unsigned int X = 0, Y = 0;
          bool ret = GetWH();
          _asm {
            mov X, ebx
            mov Y, ecx
          }

          std::cout << "GetScreenWH returned: " << ret << std::endl;
          std::cout << "screen X size: " << X << "\nscreen Y size: " << Y << std::endl;

          void(_stdcall*GLMainLoop)();
          GLMainLoop = (void(_stdcall*)())GetProcAddress(h, "GLMainLoop");
          if (GLMainLoop)
            GLMainLoop();
          else
            std::cout << "GLMainLoop not found\n";
        }
        std::cout << argv[2] << " returned: " << hwnd;
      }
      else
        std::cout << argv[2] << " not found\n";
      FreeLibrary(h);
    }
    else
      std::cout << "wrong structure dll\n";
  }
  else
    std::cout << "dll not found\n";
}