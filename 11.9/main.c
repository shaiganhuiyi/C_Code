#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && 3 != a) || (2 != b && 3 == a))
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e))
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d))
//								{
//									if ((5 == c && 3 != d) || (5 != c && 3 == d))
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a))
//										{
//											if (120 == a*b*c*d*e)
//											{
//												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//
//	}
//	system("pause");
//
//}
//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	char i;
//	for (i = 'a'; i < 'd'; i++)
//	{
//		if ((i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') == 3)
//		{
//			printf("������%c", i);
//		}
//	}
//	system("pause");
//}
//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1

//#define N 9
//void SetTriangle(int(*a)[N])
//{
//	for (int row = 0; row < N; row++)
//	{
//		for (int col = 0; col <= row; col++)
//		{
//			a[row][0] = 1;//ÿһ�еĵ�һ��ֵ��Ϊ1
//			if (row >= 1 && col >= 1)
//			{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//		}
//	}
//}
//
//void PrintTriangle(int(*a)[N])
//{
//	for (int row = 0; row < N; row++)
//	{
//		for (int col = 0; col <= row; col++)
//		{
//			printf("%3d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[N][N] = { 0 };
//	SetTriangle(arr);
//	PrintTriangle(arr);
//
//	system("pause");
//	return 0;
//}