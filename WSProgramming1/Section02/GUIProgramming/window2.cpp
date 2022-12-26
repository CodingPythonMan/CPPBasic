/*#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

int main()
{
	// 1. 윈도우 클래스 만들기
	WNDCLASSEX wcex = { 0 };
	wcex.cbSize			= sizeof(wcex);
	wcex.lpfnWndProc	= DefWindowProc;
	wcex.lpszClassName = _T("Nanarachi Window");

	wcex.hbrBackground =
		CreateSolidBrush(RGB(255, 255, 255));

	wcex.hCursor = LoadCursor(0, IDC_ARROW);

	// 2. 윈도우 클래스를 시스템에 등록
	ATOM atom = RegisterClassEx(&wcex);

	if (atom == 0)
	{
		_tprintf(_T("등록 실패 : %d\n"), GetLastError());
	}

	// 3. 등록된 클래스를 사용해서 윈도우 생성
	HWND hwnd = CreateWindowEx(WS_EX_TOPMOST,
		_T("Nanarachi Window"),
		_T("Hello"),
		WS_OVERLAPPEDWINDOW & ~WS_MINIMIZEBOX
		,//& ~WS_SYSMENU,
		0, 0, 500, 500,
		0, 0, 0, 0);

	// 4. 윈도우 나타내기
	ShowWindow(hwnd, SW_SHOW);

	MessageBox(0, _T(""), _T(""), MB_OK);
}*/