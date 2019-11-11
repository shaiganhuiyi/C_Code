#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//void Swp(char a[], int k,int num)
//{
//	
//	while(k >0)
//	{
//		int i = 0;
//		while(i<num-1)
//		{
//			a[i] ^= a[i + 1];
//			a[i + 1] ^= a[i];
//			a[i] ^= a[i + 1];
//			i++;
//		}
//		k--;
//	}
//		
//}
//
//int main()
//{
//	int i = 0;
//	char a[] = "ABCDEFGHI";                                  
//	int num = strlen(a);
//	Swp(a, 3,num);
//	printf("%s", a);
//	system("pause");
//
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int compare(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int length = strlen(str1);
//	for (; j < length; j++)
//	{
//		for (i = 0; i < length - 1; i++)
//		{
//			str1[i] ^= str1[i + 1];
//			str1[i + 1] ^= str1[i];
//		    str1[i] ^= str1[i + 1];
//		}
//		if (0 == strcmp(str1, str2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//
//}
//int main()
//{
//	char s1[10];
//	char s2[10];
//	printf("请输入字符串S1：\n");
//	scanf("%s", s1);
//	printf("请输入字符串S2: \n");
//	scanf("%s", s2);
//	if (1 == compare(s1, s2))
//	{
//		printf("s1为s2旋转后的字符串！\n");
//
//	}
//	else
//	{
//		printf("s1不是s2旋转后的字符串！\n");
//	}
//	system("pause");
//}