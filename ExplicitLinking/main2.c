#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

//#include "MyDynamic.h"
//#pragma comment(lib, "MyDynamic.lib")

typedef int (*F)(int, int);	// __cdecl 함수 방식의 포인터

typedef int (__stdcall *F1)(int, int);
int main()
{
	getchar();

	// 1. DLL Load
	HMODULE hDll = LoadLibrary(_T("MyDynamic.dll"));

	printf("DLL 주소 : %p\n", hDll);

	// 2. DLL 안에서 함수 찾기
	F1 f = (F1)GetProcAddress(hDll, "_sub@8");	// __stdcall : _sub@8
	printf("sub 함수 주소 : %p\n", f);

	int ret = f(1, 2);

	printf("result : %d\n", ret);

	FreeLibrary(hDll);
}