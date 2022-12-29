#include <stdio.h>

#include "MyDynamic.h"

#pragma comment(lib, "MyDynamic.lib")

int main()
{
	int ret = add(1, 2);

	printf("result : %d\n", ret);
}