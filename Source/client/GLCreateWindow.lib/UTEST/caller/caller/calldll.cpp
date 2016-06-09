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
    case WM_KEYDOWN:
      if (wParam == VK_ESCAPE) {
        PostQuitMessage(0);
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
      HWND(*call)(WNDPROC);
      call = (HWND(*)(WNDPROC))GetProcAddress(h, argv[2]);
      if (call) {
        HWND hwnd = call(WindowProc);
        if (hwnd) {
          ShowWindow(hwnd, SW_SHOW);
          MSG msg;
          while (GetMessageA(&msg, 0, 0, 0)) {
            if (msg.message == WM_QUIT)
              break;
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
          }
        }
        std::cout << "returned: " << hwnd;
        std::cout << "\n";
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