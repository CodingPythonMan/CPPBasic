#include <stdio.h>
#include "mymath.h"

#pragma comment(lib, "mystaticmanual.lib")

int main()
{
	int ret = add(1, 2);
	printf("result : %d\n", ret);
}