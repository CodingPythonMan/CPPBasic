/*#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

int main()
{
	// 1. ������ Ŭ���� �����
	WNDCLASSEX wcex = { 0 };
	wcex.cbSize			= sizeof(wcex);
	wcex.lpfnWndProc	= DefWindowProc;
	wcex.lpszClassName = _T("Nanarachi Window");

	wcex.hbrBackground =
		CreateSolidBrush(RGB(255, 255, 255));

	wcex.hCursor = LoadCursor(0, IDC_ARROW);

	// 2. ������ Ŭ������ �ý��ۿ� ���
	ATOM atom = RegisterClassEx(&wcex);

	if (atom == 0)
	{
		_tprintf(_T("��� ���� : %d\n"), GetLastError());
	}

	// 3. ��ϵ� Ŭ������ ����ؼ� ������ ����
	HWND hwnd = CreateWindowEx(WS_EX_TOPMOST,
		_T("Nanarachi Window"),
		_T("Hello"),
		WS_OVERLAPPEDWINDOW & ~WS_MINIMIZEBOX
		,//& ~WS_SYSMENU,
		0, 0, 500, 500,
		0, 0, 0, 0);

	// 4. ������ ��Ÿ����
	ShowWindow(hwnd, SW_SHOW);

	MessageBox(0, _T(""), _T(""), MB_OK);
}*/