#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

//int fib1(int n)
//{
//	int c = 0;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{
//		return 1;
//
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int fib2(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib2(n - 1) + fib2(n - 2);
//}
//
//int main()
//{
//	int n = 10;
//	printf("%d\n", fib1(n));
//	printf("%d\n", fib2(n));
//	system("pause");
//}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

//int Pow(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n*Pow(n, k - 1);
//}
//int Pow2(int n, int k)
//{
//	if (k==0)
//	{
//		return 1;
//
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*Pow2(n, k - 1);
//	}
//	
//		
//	
//}
//int main()
//{
//	printf("%d", Pow(2, 5));
//	system("pause");
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//int DigitSum(int n)
//{
//	if (n < 10){
//		return n;
//
//	}
//	return n % 10 + DigitSum(n / 10);
//
//}

//int DigitSum(int n)
//{
//	int sum =0;
//	if (n >0)
//	{
//		sum = n % 10;
//		sum+=DigitSum(n / 10);
//		
//	}
//	return sum;
//	 
//	 
//}
//int main()
//{
//	printf("%d", DigitSum(1224));
//	system("pause");
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//void reverse_string(char * string)
//{
	/*int len = strlen(string);
	int end = len - 1;
	while (end>=0)
	{
	printf("%c", *(string + end));
	end--;
	}
	printf("\n");*/
	
//	if (*string!='\0'&&*(string+1) != '\0')
//	{
//		reverse_string(string + 1);
//
//	}
//	printf("%c", *string);
//	
//if (*string == '\0')
//{
//	return;
//}
//reverse_string(string)
//printf("%c", *string);
//}

//int main()
//{
//	char string[] = "abcde12345";
//	reverse_string(string);
//	system("pause");
//}
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int mystrlen(char *string)
//{
	//int count = 0;
	//while (*string++  != '\0')
	//{
	//	count++;
	//}
	//return count;
//	int count = 0;
//	if (*string == '\0')
//	{
//		return count;
//	}
//	else{ 
//		count = 1;
//		return count + mystrlen(string + 1); 
//	}
//}
//int main()
//{
//	char string[] = "abcdefg";
//	printf("%d", mystrlen(string));
//	system("pause");
//
//}
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

//int factorial(int n)
//{
	//int sum=1;
	//while (n > 0)
	//{
	//	sum *= n;
	//	n--;
	//}
	//return sum;
	//int sum = 1;
	//if (n <= 1)
	//{
	//	return sum;
	//}
	//else
	//{
	//	sum *= n;
	//	return sum*factorial(n - 1);
	//}

//}
//int main()
//{
//	printf("%d", factorial(4));
//	system("pause");
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

//void print(int n)
//{
//	if (n >9)
//	{
//		print(n / 10);
//	}
//	
//	printf("%d ",n % 10);
//
//}
//int main()
//{
//  print(1234);
//  system("pause");
//}