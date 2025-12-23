#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//打印1-100之间的奇数

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//打印9*9乘法口诀表

//方法一
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 0;
//    while(i<=9)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			k = i * j;
//			if (i >= j)
//			{
//				printf("%d*%d=%2d ", i, j, k);
//				if (i == j)
//				{
//					printf("\n");
//				}
//			}
//			//printf("%d*%d=%d ",i,j,k);
//			//if (i == j)
//			//{
//			//	printf("\n");
//			//}
//		}
//		i++;
//	}
//
//
//	return 0;
//}

//优化
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}

//