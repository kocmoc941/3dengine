#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>

char DLL[1024]{};

struct SCREENSIZE
{
  LONG width;
  LONG height;
};

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
      SCREENSIZE*(_fastcall *GetWH)();
      GetWH = (SCREENSIZE*(_fastcall*)())GetProcAddress(h, "GetScreenWH");
      unsigned int X = 0, Y = 0;
      SCREENSIZE *ret = GetWH();
      X = ret->width;
      Y = ret->height;

      std::cout << "GetScreenWH returned " << std::endl;
      std::cout << "screen X size: " << X << "\nscreen Y size: " << Y << std::endl;

      void(_stdcall*GLChangeResolution)(LONG width, LONG height);
      GLChangeResolution = (void(_stdcall*)(LONG, LONG))GetProcAddress(h, "GLChangeResolution");
      if (GLChangeResolution)
        GLChangeResolution(1024,768);
      HWND(_stdcall*call)(WNDPROC, RECT* pos, const char*);
      call = (HWND(_stdcall*)(WNDPROC, RECT*, const char*))GetProcAddress(h, argv[2]);
      if (call) {
        RECT pos{ (LONG)X/2-1024/4, (LONG)Y/2-768/2, 1024, 768 };
        HWND hwnd = call(WindowProc, &pos, "3D engine test");
        if (hwnd) {
          ShowWindow(hwnd, SW_SHOW);
          void(_stdcall*GLMainLoop)();
          GLMainLoop = (void(_stdcall*)())GetProcAddress(h, "GLMainLoop");
          if (GLMainLoop)
            GLMainLoop();
          else
            std::cout << "GLMainLoop not found\n";
          std::cout << "GetLastError return: " << GetLastError() << std::endl;
        }
        std::cout << argv[2] << " returned: " << hwnd << std::endl;
      }
      else
        std::cout << argv[2] << " not found\n";
      FreeLibrary(h);
    }
    else
      std::cout << "wrong load dll\n";
  }
  else
    std::cout << "dll not found\n";
}
