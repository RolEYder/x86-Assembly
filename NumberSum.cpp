#include "stdafx.h"
#include <cstdio>


extern "C" int NumberSum_(int a, int b, int c);


int NumberSum()
{
	int a = 1, b = 2, c=3;
	int sum = NumberSum_(a,b,c);
	printf("sum: %d\n", sum);

return 0;
}

