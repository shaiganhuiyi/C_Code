#define _CRT_SECURE_NO_WARNINGS 1

//1. 打印100~200之间的素数

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int i;
//	int j;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//
//		}
//		if (j >= i){
//			printf("%d\n", i);
//		}
//
//	}
//
//	system("pause");
//}

//2. 输出乘法口诀表 

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j=1; j<=i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//}
//
//3.判断1000年---2000年之间的闰年 
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i% 100 != 0 && i% 4 == 0)||(i% 400 == 0))
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
// 给定两个整形变量的值，将两个值的内容进行交换。
//#include<stdio.h>
//#include<Windows.h>


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	printf("a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//}

//不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int a = 1;
//	int b = 2;
//	
//	printf("a=%d,b=%d\n", a, b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//}
//求10 个整数中最大值。
//int main()
//{
//	int arr[10] = { 25, 65, 44, 88, 99, 44, 78, 32, 96, 45 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (int i = 0; i < num; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//
//	 }
//	printf("%d", max);
//	system("pause");
//}
//将三个数按从大到小输出
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("请输入三个数字: \n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)//创建一个随机变量,将较大的数的值放到a里面
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//将最大的数放在a中
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("三个数按照从大到小的顺序排列为%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
