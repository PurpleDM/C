#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	printf("%zd\n", sizeof(i));
//	printf("%zd\n", sizeof i);
//	printf("%zd\n", sizeof (int));
//	printf("%zd\n", sizeof 10);
//	printf("%zd\n", sizeof(10 + 1.0));
//	printf("%zd\n", sizeof 1.0 + 10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	float j = 1.1;
//	double s = 0;
//	printf("%d\n", sizeof(s = i + j));
//	printf("s= %d\n", s);
//	return 0;
//}
 

//#include <stdio.h>
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));
//	printf("s = %d\n", s);
//	return 0;
//}


//#include<stdio.h>
//int i =10 ;
//int main()
//{
//	int i = 20;
//	printf("i = %d\n",i);
//	return 0;
//}
//


//
//#include<stdio.h>
//int i;
//int main()
//{
//	printf("i = %d\n",i);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int x = 4 + 5;
//	int y = 6;
//	printf("%d\n", x);
//	printf("%d\n", y + 7);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	printf("%d\n", num * num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x);// 输出1.000000
//	printf("%d\n", y);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 5;
//	x = (x / 20) * 100;
//	printf("%d\n", x); //输出
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 5 % 3;
//	printf("%d\n", x);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 5 % -3); //输出 	2
//	printf("%d\n", -5 % 3);  //输出 	-2
//	printf("%d\n", -5 % 3);  //输出 -2
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	c = b = (a + 6);
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 2;
	int b = ++a;
	printf("a=%d b=%d", a, b);
	return 0;
}
