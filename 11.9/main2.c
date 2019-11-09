#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void swap(int a[], int num)
//{
//	int i = 0;
//	int left = 0;
//	int right = num - 1;
//	while (left < right)
//	{
//		if (!(a[left] & 1) && (a[right] & 1)){
//			a[left] ^= a[right];
//			a[right] ^= a[left];
//			a[left] ^= a[right];
//			left++, right--;
//			continue;
//		}
//		
//		if (a[left] & 1)
//		{
//			left++;
//		}
//		 if (!(a[right] & 1))
//		{
//			right--;
//		}
//		 
//	}
//	for (; i < num; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int num = sizeof(a) / sizeof(a[0]);
//	swap(a, num);
//	system("pause");
//}
//2.
//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9




//#define ROW 3
//#define COL 3
//
//int find(int arr[ROW][COL],int value)
//
//{
//	int ret = 0;
//	// i,j为右上角坐标
//	int i = 0;
//	int j = COL - 1;
//	while (i < ROW && j >= 0)
//	{
//		if (value == arr[i][j])
//		{
//			ret = 1;
//			break;
//		}
//		else if (arr[i][j] > value)
//		{
//			--j;
//		}
//		else
//		{
//			++i;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int result = 0;
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int value = 0;
//	scanf("%d", &value);
//	result = find(arr,value);
//	if (result == 0)
//	{
//		printf("不存在!");
//	}
//	else
//	{
//		printf("存在");
//	}
//	system("pause");
//
//}
