#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
//	printf("�������ַ���S1��\n");
//	scanf("%s", s1);
//	printf("�������ַ���S2: \n");
//	scanf("%s", s2);
//	if (1 == compare(s1, s2))
//	{
//		printf("s1Ϊs2��ת����ַ�����\n");
//
//	}
//	else
//	{
//		printf("s1����s2��ת����ַ�����\n");
//	}
//	system("pause");
//}