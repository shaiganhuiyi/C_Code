#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

//unsigned int reverse_bit(unsigned int value)
//{
//	int result=0;
//	int num = sizeof(value)* 8;
//	int i = 0;
//	for (; i < num; i++){
//		if (value&(1 << i)){
//			result |= (1 << num - 1 - i);
//		}
//		
//	}
//	return result;
//}
//int main(){
//
//	printf("%u\n",reverse_bit(25));
//	system("pause");
//}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。

//int avg(int a, int b)
//{
//	return (a&b)+((a^b)>>1);
//}
//
//int main()
//{
//	printf("%d\n", avg(10, 6));
//	system("pause");
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//int Fin_data(int a[],int num)
//{
//	int res = a[0];
//	int i = 1;
//	for (; i < num; i++){
//		res ^= a[i];
//	}
//	return res;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,1,2,3,4,5,6,7,9};
//	int num = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", Fin_data(a, num));
//	system("pause");
//}
//4.
//	有一个字符数组的内容为:"student a am i",
//				请你将数组的内容改为"i am a student".
//				要求：
//				不能使用库函数。
//				只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//				student a am i
//				i ma a tneduts
//i am a student
//void reverse(char *p, char *q)
//{
//	while (p<q)
//	{
//		*p ^= *q;
//		*q ^= *p;
//		*p ^= *q;
//		p++, q--;
//	}
//}
//
//void exchange(char str[])
//{
//	char *p = str;
//	char *q = str;
//	while(*q!='\0'){
//		if (*q != ' '){
//			q++;
//		}
//		else{
//			reverse(p, q - 1);
//			p = q + 1;
//			q = p;
//		}
//	}
//	reverse(p, q - 1);
//	reverse(str, q - 1);
//}
//int main()
//{
//	char str[] = "student a am l";
//	exchange(str);
//	printf("%s\n", str);
//	system("pause"); 
//}



    