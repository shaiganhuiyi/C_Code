#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。 
//#include<stdio.h>
//#include<Windows.h>
//#include<time.h>
//void Menu()
//{
//	printf("##################\n");
//	printf("#1.Play    2.Eixt#\n");
//	printf("##################\n");
//	printf("Please Select> ");
//}
//
//void Game()
//{
//	
//	int data = rand()%100+1;
//	int x = 0;
//	
//	while (1){
//		printf("Please Enter Your Data: ");
//		scanf("%d", &x);
//		if (x > data){
//			printf("猜大了！\n");
//		}
//		else if (x < data){
//			printf("猜小了！\n");
//		}
//		else if (x == data){
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned long)time(NULL));
//	int quit = 0;
//	while (!quit)
//	{
//
//		Menu();
//		int select = 0;
//
//		scanf("%d", &select);
//		switch (select){
//		case 1:
//			Game();
//			break;
//		case 2:
//			printf("Game Over!\n");
//			quit = 1;
//			break;
//		default:
//			break;
//
//
//		}
//	}
//	system("pause");
//}
//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）
//#include<stdio.h>
//#include<Windows.h>
//
//int binary_searc(int arr[],int sz,int x){
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right){
//		int mid = (left + right) >> 1;
//		if (x > arr[mid]){
//			left = mid + 1;
//		}
//		else if (x < arr[mid]){
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//		
//		
//	}
//	if (left>right)
//	{
//		return -1;
//	}
//
//}
//int main(){
//	
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	scanf("%d", &x);
//	
//	printf("%d\n",binary_searc(arr, sz, x));
//	system("pause");
//}
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//
//#define NAME "tom"
//#define PWD "123456"
//
//int main()
//{
//	int count = 3;
//	while (count > 0){
//		char name[64];
//		printf("Please Enter Your Name# ");
//		scanf("%s", name);
//		char password[64];
//		printf("please Enter Your Password# ");
//		scanf("%s", password);
//		if (strcmp(name, NAME) == 0 && 0 == strcmp(password, PWD))
//		{
//			printf("Login Success...Welcome!\n");
//			break;
//		}
//		else{
//			printf("账号密码错误！请重新尝试，你还有%d次机会\n",--count);
//		}
//	}
//	if (count > 0){
//
//
//		int i = 9;
//		while (i >= 0){
//			printf("正在为你加载:%d\r", i);
//			Sleep(1000);
//			i--;
//		}
//	}
//	else{
//		printf("你已经尝试多次，目前已经被锁定!\n");
//		int i = 60;
//		while (i >= 0){
//			printf("离下次登陆还有%dS\r",i);
//			Sleep(1000);
//			i--;
//		}
//		
//	}
//	printf("\n");
//	}

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include<stdio.h>
#include<Windows.h>

//void Tras()
//{
//	char c;
//	while ((c = getchar()) != EOF){
//		if (c >= 'a'&&c <= 'z'){
//			c -= ('a' - 'A');
//		}
//		else if (c >= 'A'&&c <= 'Z'){
//			c += ('a' - 'A');
//		}
//		else{
//			continue;
//		}
//		putchar(c);
//	}
//}
//int main()
//{
//	Tras();
//	system("pause");
//}

//#include<stdio.h>
//#include<Windows.h>
//
//void multiplication(int x)
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x;
//	printf("请输入行列数：");
//	scanf("%d", &x);
//	multiplication(x);
//	system("pause");
//}
//2.使用函数实现两个数的交换。
//#include<stdio.h>
//#include<Windows.h>
//
//void swap(int *a,int *b)
//{
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *a^*b;
//}
//                                                                                                    
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数： ");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d,b=%d ",a, b);
//	system("pause");
//}
//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//#include<windows.h>
//
//int Year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
//		return 1;
//	}
//	return 0;
//	
//
//}
//
//int main()
//{
//	int data = 0;
//	printf("Please Enter# ");
//	scanf("%d", &data);
//
//	if (Year(data)){
//		printf("%d：是闰年\n", data);
//
//	}
//	else{
//		printf("%d:不是闰年\n", data);
//	}
//	system("pause");
//}


//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

//#include<stdio.h>
//#include<Windows.h>
//
//void Core(int a[], int n,int op)
//{
//	
//	int i = 0;
//	for (; i < n; i++)
//	{
//		switch (op){
//		case 0:
//			a[i] = 0;
//			break;
//		case 1:
//			a[i] = -1;
//			break;
//		case 2:
//			printf("%d ", a[i]);
//		default:
//			break;
//		}
//		a[i] = 0;
//	}
//	if (op == 2)
//	{
//		printf("\n");
//	}
//}
//
//void Init(int a[], int n)
//{
//	Core(a, n, 0);
//}
//void Show(int a[],int n){
//	Core(a, n, 2);
//}
//void Empty(int a[], int n)
//{
//	Core(a, n, 1);
//}
//void Reverse(int a[], int n)
//{
//	int left =0;
//	int right = n - 1;
//	while (left<right)
//	{
//		a[left] ^= a[right];
//		a[right] ^= a[left];
//		a[left] ^= a[right];
//		left++, right--;
//	}
//
//}
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n=sizeof(a)/sizeof(a[0]) ;
//	/*Init(a, n);
//	Show(a, n);*/
//	Empty(a, n);
//	Show(a, n);
//	/*Reverse(a, n);
//	Show(a, n)*/;
//	system("pause");
//}

//5.实现一个函数，判断一个数是不是素数。

//#include<stdio.h>
//#include<windows.h>
//
//int IsSu(int data)
//{
//	int i = 2;
//	for (; i < data/2; i++)
//	{
//		if (data%i == 0){
//			return 0;
//		}
//
//	}
//	return 1;
//}
//
//int main()
//{
//	int data = 0;
//	printf("Please Enter# ");
//	scanf("%d", &data);
//
//	if (IsSu(data)){
//		printf("%d：是素数\n", data);
//
//	}
//	else{
//		printf("%d:不是素数\n", data);
//	}
//	system("pause");
//}

