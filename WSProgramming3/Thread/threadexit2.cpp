/*// threadexit2.cpp
#include <stdio.h>
#include <windows.h>
#include <process.h>
#include <tchar.h>

UINT __stdcall foo(void* p)
{
	_tprintf(_T("start foo\n"));

	Sleep(5000);

	_tprintf(_T("end foo\n"));
	return 0;
}

int main()
{
	HANDLE hThread = (HANDLE)_beginthreadex(0, 0, foo, 0, 0, 0);

	//ExitThread(0); // 주 스레드만 종료

	return 0;
}*/