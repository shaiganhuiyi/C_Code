#define _CRT_SECURE_NO_WARNINGS 1

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//#include<Windows.h>
//
//void swap(int arr1[],int arr2[],int sz)
//{
//	int temp;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//void show(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int arr1[] = { 1, 5, 9, 7, 5, 3, 4, 9, 7, 2 };
//	int arr2[] = { 5, 9, 7, 71, 52, 78, 95, 34, 58, 69 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1, arr2, sz);
//	show(arr1,sz);
//	show(arr2,sz);
//	system("pause");
//}
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ⋯⋯ + 1 / 99 - 1 / 100 的值。
//#include<stdio.h>
//#include<Windows.h>
//
//
//void Cal()
//{
//	double res = 0.0;
//	int i = 1;
//	int flag = 1;
//	for (; i <= 100; i++){
//		res += (1.0 / i)*flag;
//		flag = -flag;
//	}
//	printf("res: %f\n", res);
//}
//int main()
//{
//	Cal();
//	system("pause");
//}
//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	int count = 0;
//	
//	for (int i = 1 ; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("res: %d", count);
//	system("pause");
//}


//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*

//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 8; i <= 13; i++)
//	{
//		for (int j = 1; j <= 27 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//}

