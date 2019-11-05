#define _CRT_SECURE_NO_WARNINGS 1
//3. 输出一个整数的每一位。
#include<stdio.h>
#include<Windows.h>

//void show_int(unsigned int data)
//{
//	unsigned int flag = 1;
//	int num = sizeof(data)* 8;
//	flag <<= (num - 1);
//	int i = 0;
//	for (; i < num; i++){
//		if (i % 4 == 0){
//			printf(" ");
//		}
//		if (data&(flag >> i)){
//
//
//			printf("1");
//		}
//		else{
//			printf("0");
//		}
//		}
//	printf("\n");
//	
//}
//int main()
//{
//	show_int(0xF0);
//	system("pause");
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
int count_one_bits(unsigned int value)
{
	 //返回 1的位数
	int count = 0;
	while (value){
		               //0000 1100
		               //0000 1011
		               //0000 1000
		value &= (value - 1);
		count++;
	}
	return count;
}

int diff_bits(unsigned int m, unsigned int n)
{
	return count_one_bits(m^n);
}

int main(){
	int num = diff_bits(0xF0, 0x0F);
	printf("%d\n", num);
	system("pause");
}
