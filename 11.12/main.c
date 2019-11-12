#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

//1.递归和非递归分别实现求第n个斐波那契数。

//int fib1(int n)
//{
//	int c = 0;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{
//		return 1;
//
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int fib2(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib2(n - 1) + fib2(n - 2);
//}
//
//int main()
//{
//	int n = 10;
//	printf("%d\n", fib1(n));
//	printf("%d\n", fib2(n));
//	system("pause");
//}
//2.编写一个函数实现n^k，使用递归实现

//int factorial(int n, int k)
//{
//	if (k==0)
//	{
//		return 1;
//
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*factorial(n, k - 1);
//	}
//	
//		
//	
//}
//int main()
//{
//	printf("%d", factorial(2, 5));
//	system("pause");
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//int DigitSum(int n)
//{
//	int sum =0;
//	if (n >0)
//	{
//		sum = n % 10;
//		sum+=DigitSum(n / 10);
//		
//	}
//	return sum;
//	 
//	 
//}
//int main()
//{
//	printf("%d", DigitSum(1224));
//	system("pause");
//}