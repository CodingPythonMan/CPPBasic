#include <stdio.h>
#include <Windows.h>

int main()
{
	MessageBoxA(0, "A", "B", MB_OK);

	printf("hello\n");	// C 표준 함수, CRT 함수
}