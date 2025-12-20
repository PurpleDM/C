#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算1~100之间3的倍数的数字之和

//方法1：循环100次，判断100次
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			b += a;
//		}
//	}
//	printf("%d", b);
//
//	return 0;
//}

//方法2：只循环了33次，更为高效
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	for (a = 3; a <= 100; a += 3)
//	{
//		b += a;
//	}
//	printf("%d", b);
//	return 0;
//}

//输入一个正整数，计算这个整数是几位数？
//至少是一位数，所以用do while循环先执行一次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	do
//	{
//		a /= 10;
//		b++;
//	} while (a);//a！=0
//
//	printf("%d",b);
//
//	return 0;
//}

//for循环
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	for (a; a; a/=10)
//	{
//		b++;
//	}
//	printf("%d", b);
//	return 0;
//}

//while循环
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a /= 10;
//		b++;
//	}
//	printf("%d", b);
//	return 0;
//}

//找出100~200之间的质数，并打印在屏幕上
//质数：只能被1和本身整除得的数

//int main()//最终打印除2-7以外的所有质数，这种方法不好
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (a%2==0 || a%3==0 || a%5==0 || a%7==0)
//			continue;
//		printf("%d ", a);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//int flag = 1;//错误的
//	for (i = 2; i <= 100; i++)
//	{
//	
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是质数，不打印
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//随机输入两个正整数，输出这两个数之间的所有质数
int main()
{
	int j = 0;
	int i = 0;
	int k = 0;
	scanf("%d", &i);//输入第一个数
	scanf("%d", &j);//输入第二个数
	for (i; i <= j; i++)
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0)
				break;
		}
		if (k == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}