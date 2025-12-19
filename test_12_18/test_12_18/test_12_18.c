#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
	//输入一个正的整数，逆序打印这个整数的每一位
	while (a)
	{
		b = a % 10;
		printf("%d ", b);
		a = a / 10;
		//printf("%d ", a % 10);
		//a = a / 10;
 	}
	return 0;
}


