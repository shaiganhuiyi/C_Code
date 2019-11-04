#define _CRT_SECURE_NO_WARNINGS 1
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：


#include<stdio.h>
#include<Windows.h>


//int count_one_bits(unsigned int value)
//{
//	 //返回 1的位数
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
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//void show_bits(unsigned int data)
//{
//	int i = 0;
//	int num = sizeof(data)* 8;
//	printf("奇数：");
//	for (; i < num;i+=2){
//		if (data&(1 << i)){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//	printf("偶数：");
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
//3. 输出一个整数的每一位。
\