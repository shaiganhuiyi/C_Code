#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int ch =0;
//	while ((ch = getchar())!=EOF)
//	
//		putchar(ch);
//	
//	return 0;
//}
// 1.猜数字游戏


//2.写代码可以在整型有序数组中查找想要的数字， 
//     找到了返回下标，找不到返回 - 1.（折半查找）
 
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = num - 1;
//	int x =77;
//	while (left <= right){
//		printf("%d,%d\n", left, right);
//		int mid = (right + left) / 2;
//		if (x>arr[mid]){
//			left = mid+1;
//		}
//		else if(x<arr[mid]){
//			right = mid-1;
//
//		}
//		else{
//			printf("index: %d\n", mid);
//			break;
//		}
//
//	}
//	if (left>right){
//		printf("not found\n");
//	}
//}










