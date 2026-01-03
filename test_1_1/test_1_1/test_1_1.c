#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////#include<stdio.h>
//
//int main()
//{
//	printf("Hello world !");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("There are %d apples\n", 3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%5d\n", 123);//"  123"
//	printf("%-5d\n", 123);//"123  "
//	printf("%5d\n", 1234567);//"1234567"
//	printf("%12f\n", 123.45);//"  123.450000"	
//	printf("%12f\n", 123.123456123);//"  123.123456"		
//	printf("%-12f\n", 123.123456123);//"123.123456  "		
//	printf("%6f\n", 123.45);//"123.450000"
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//printf("%+d\n", 12);
//	//printf("%+d\n", -12);
//	//return 0;
//	printf("%.2f\n", 12.45);//"12.45"
//	printf("%.2f\n", 12.4);//"12.40"
//	printf("%.2f\n", 12.456);//"12.46"
//	printf("%.2f\n", 12.432);//"12.43"
//	printf("%7.2f\n", 12.432);//"  12.43"
//	printf("%*.*f\n", 7,2,12.432);//"  12.43"
//}
//#include<stdio.h>
//int main()
//{
//	printf("%.5s\n", "Hello world !");  //"Hello"
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0.0f;
//	float d = 0.0f;
//	scanf("%d%d%f%f", &a,&b,&c,&d);
//	printf("%d\n%d\n%f\n%f\n", a, b, c, d);
//	return 0;
//}
// 

//#include<stdio.h>
//int main()
//{
//	int a;
//	float b;
//	scanf("%d", &a);
//	printf("%d\n", a);	
//	scanf("%f", &b);
//	printf("%f\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0.0f;
//	int r = scanf("%d %d %f",&a,&b,&c);
//	printf("%d %d %f\n", a, b, c);
//	printf("%d\n",r);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//while (scanf("%d %d", &a, &b) != EOF)
//
//	while (scanf("%d %d", &a, &b))
//	{
//		printf("%d\n",a + b);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char ch[10];
//	scanf("%9[^\n]s",ch);
//	printf("%s\n",ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch[10];
//	scanf("%9s", ch);
//	printf("%s\n", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d-%d-%d", &a, &b, &c);
//	printf("%d-%d-%d", a, b, c);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%*c%d%*c%d", &a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//三目操作符
//找出两数中最大值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int m = (a > b ? a : b);
//		printf("%d\n", m);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a % 3)
//	{
//	case 0:
//		printf("整除，余数为0");
//		break;
//	case 1:
//		printf("余数为1");
//		break;
//	case 2:
//		printf("余数为2");
//		break;
//	}
//	return 0;
//}

//输入一个正的整数，逆序打印这个整数的每一位。
//i=[]'. nx xk,my6t45r34t main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d",&i);
//	while (j = i % 10)
//	{
//		printf("%d ",j);
//		i /= 10;
//	}
//	return 0;
//}
//优化
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	while (i)
//	{
//		printf("%d ",i%10);
//		i /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	for (i; i != 0; i /= 10)
//	{
//		printf("%d ",i%10);
//	}
//	return 0;
//}

//输入一个正整数，计算这个整数是几位数
int main()
{
	int i = 0;
	scanf("%d",&i);
	int k = 0;
	do
	{
		//int k = 0;
		k++;
		i /= 10;
	} while (i);
	printf("%d",k);
	return 0;
}


