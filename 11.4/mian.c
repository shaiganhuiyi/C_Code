#define _CRT_SECURE_NO_WARNINGS 1
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�


#include<stdio.h>
#include<Windows.h>


//int count_one_bits(unsigned int value)
//{
//	 //���� 1��λ��
//	int count = 0;
//	while (value){
//		               //0000 1100
//		               //0000 1011
//		               //0000 1000
//		value &= (value - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	printf("%d\n", count_one_bits(15));
//	system("pause");
//	return 0;
//
//}
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//void show_bits(unsigned int data)
//{
//	int i = 0;
//	int num = sizeof(data)* 8;
//	printf("������");
//	for (; i < num;i+=2){
//		if (data&(1 << i)){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//	printf("ż����");
//	for (int i=1; i < num; i += 2){
//		if (data&(1 << i)){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	show_bits(17);
//	system("pause");
//}
//3. ���һ��������ÿһλ��
\