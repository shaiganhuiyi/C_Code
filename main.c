#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�


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

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

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