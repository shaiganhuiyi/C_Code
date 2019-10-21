#define _CRT_SECURE_NO_WARNINGS 1

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，  
//例如：2 + 22 + 222 + 2222 + 22222
 //递归解法(非本人所想出）

//#include<stdio.h>
//#include<Windows.h>
// 
//int sn(int n, int val)
//{
//	if (n > 1)
//		return val*n + sn(n - 1, val) * 10;
//	else
//		return val;
//		
//}
//
//int main()
//{
//	int sum = sn(5, 2);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//
//}