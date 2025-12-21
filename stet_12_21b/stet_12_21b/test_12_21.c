#define _CRT_SECURE_NO_WARNINGS
//给定一个升序的数组，在这个数组中查找到指定的值n
//找到了就打印n的下标，找不到就打印“找不到”

#include<stdio.h>
#include<string.h>
//暴力查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 7;
//	int i = 0;
//    //int j = strlen(arr);//错误的
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < j; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == j)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//二分查找
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 0;
	printf("输入要找的数：\n");
	scanf("%d", &n);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int i = 0;
	while (left <= right)
	{
		int m = (left + right) / 2;//这里定义的变量m必须在while循环中
		if (arr[m] < n)//这里不可以是m<n，因为m是数组的下标，不是数组的元素值
		{
			left = m + 1;
		}
		else if (arr[m] > n)
		{
			right = m - 1;
		}
		else
		{
			printf("找到了，下标是：%d", m);
			i = 1;
			break;
		}
	}
	if (i == 0)
	{
		printf("没找到");
	}
	return 0;
}