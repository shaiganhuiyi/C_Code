#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

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
//	��һ���ַ����������Ϊ:"student a am i",
//				���㽫��������ݸ�Ϊ"i am a student".
//				Ҫ��
//				����ʹ�ÿ⺯����
//				ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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



    