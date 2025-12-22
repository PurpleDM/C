#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf如果返回的是 EOF 说明读取失败了
//	while (scanf("%d %d", &a, &b) != EOF)//注意 while 处理多个 case
//	{
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	float b = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%f", &b);
//	printf("%f\n", b);
//
//	return 0;
//}


//线段图案
int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		int i = 0;
		while (i < a)
		{
			printf("*");
			i++;
		}
		printf("\n");
		int j = 0;
		while (j < b)
		{
			printf("*");
			j++;
		}
	}
	return 0;
}