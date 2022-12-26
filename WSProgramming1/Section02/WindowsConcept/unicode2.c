/*#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
	char s[] = "abcd가나다라";

	char* p = s;

	while (*p != 0)
	{
		printf("%s\n", p);

		//p = p + 1;

		//if (IsDBCSLeadByte(*p))
		//	p = p + 2;
		//else
		//	p = p + 1;

		p = CharNextA(p);
	}
}*/