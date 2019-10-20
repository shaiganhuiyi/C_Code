#define _CRT_SECURE_NO_WARNINGS 1
// 1234  1 2 3 4
#include<stdio.h>

void show(int x)
{
	if (x > 9)
	{
		show(x / 10);
	}
	printf("%d ", x % 10);
}
void main()
{
	show(1234);
}

                 