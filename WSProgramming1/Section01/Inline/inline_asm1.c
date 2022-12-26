/*#include <stdio.h>

int Add(int a, int b)
{
	int c = a + b;
	//return c;

	__asm
	{
		mov eax, c // return c
	}
}

int main()
{
	int n = 0;

	n = Add(1, 2);
	//Add(1, 2);

	//__asm
	//{
	//	mov n, eax
	//}

	printf("result : %d\n", n);
}*/