#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。


//void Find(int a[], int num)
//{
//	assert(a);
//	assert(num);
//	int res = a[0];
//	for (int i = 1; i < num; i++)
//	{
//		res ^= a[i];
//	}
//	printf("%d", res);
//}
//
//int main()
//{
//	int a[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 9 };
//	int num = sizeof(a) / sizeof(a[0]);
//	Find(a, num);
//	system("pause");
//}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

//void Soda(int money)
//{
//	assert(money);
//	int sum = money;
//	int empty =money;
//	while (empty > 1)
//	{
//		sum += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n",sum);
//	
//}
//int main()
//{
//	Soda(20);
//	system("pause");
//}