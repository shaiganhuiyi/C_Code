#define _CRT_SECURE_NO_WARNINGS 1

//1. ��ӡ100~200֮�������

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

//2. ����˷��ھ��� 

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
//3.�ж�1000��---2000��֮������� 
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
// �����������α�����ֵ��������ֵ�����ݽ��н�����
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

//����������ʱ���������������������ݣ������⣩
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
//��10 �����������ֵ��
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
//�����������Ӵ�С���
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("��������������: \n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)//����һ���������,���ϴ������ֵ�ŵ�a����
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//������������a��
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
//	printf("���������մӴ�С��˳������Ϊ%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
