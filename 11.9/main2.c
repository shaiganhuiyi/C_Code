#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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
//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//	// i,jΪ���Ͻ�����
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
//		printf("������!");
//	}
//	else
//	{
//		printf("����");
//	}
//	system("pause");
//
//}
