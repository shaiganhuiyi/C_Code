#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char i;
//	for (i = 'a'; i < 'd'; i++)
//	{
//		if ((i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') == 3)
//		{
//			printf("犯人是%c", i);
//		}
//	}
//	system("pause");
//}
//3.在屏幕上打印杨辉三角。
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
//			a[row][0] = 1;//每一行的第一列值都为1
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