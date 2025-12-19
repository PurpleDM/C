#define _CRT_SECURE_NO_WARNINGS //如想用scanf必须在源文件的第一行放#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//C语言代码中一定要有main函数
//主函数

//VS2026环境如何运行代码：Ctrl + F5
//Ctrl+k+c ： 注释
//Ctrl+k+u ： 取消注释

//printf是一个库函数
//专门用来打印数据的
//#include <stdio.h>  包含 这个头文件
//std - 标准
//i - input
//o - 输出output
// 
//标准的主函数的写法：
//int main()
//{
//	
//}

//古老的写法：
//void main
// {
// 
// }

//C语言规定：
//main函数是程序的入口 ， 不能有多个main函数 ， 有且仅有一个
//
//int main()
//{
//	printf("hehe\n");
//	return 0;         //0 - 整数 习惯是0
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));  //zu - 打印一个sizeof返回的无符号整型
//	printf("%zu\n", sizeof(short ));//z - 是指对应的size_t的类型，sizeof运算符返回的是一个size_t类型的值
//	printf("%zu\n", sizeof(int));   //% - 用于输出十进制整数 
//	printf("%zu\n", sizeof(long));  //u - “无符号十进制数”（unsigned decimal integer）
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20;//向内存申请了int大小的空间，4个字节的空间，把20放进去、
//	double price = 66.6;//类型通过后面的名字创建变量，创建变量的本质是向内存申请空间，有了空间就可以存放一定的数据
//	return 0;
//}

//变量和常量的概念

//写一个代码，计算2个整数的和：

//scanf：是一个输入函数
//printf:是一个输出函数

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化：习惯在变量创建的同时给他一个值，不初始化的话，里面默认放的随机值
//
//	//输入两个整数
//	scanf("%d %d", &num1,&num2);//"%d %d" : 指定格式，我按照2个整型的形式读取，读取的数据放 num1,&num2 中
//	//如想用scanf必须在源文件的第一行放#define _CRT_SECURE_NO_WARNINGS
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n",sum);
//
//	return 0;
//}

//变量的作用域   ——   意思是这个变量哪里能起到作用（哪里可以使用）哪里就是他的作用域
// 1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 2.全局变量
// 全局变量的作用域是整个工程
// 
//变量的生理周期
//局部变量
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//全局变量
//全局变量的生命周期是：整个程序的生命周期


//声明来自外部的符号
//extern int a;
//
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c  ",i);
//	}
//	return 0;
//    
//}
//
//int main()
//{
//	char arr1[4] = "abc";//4各单位 有\0
//	printf ("%s",arr1);//%s 打印字符串 %c 打印字符+
//
//
//
//	return 0;
//
//}
//
//int main()
//{
//	char ch = 'w';
//	scanf("%c\n",&ch);
//	printf("%c\n",ch);
//	return 0;
//}

//int main()
//{
//	printf("%f\n", 123.45);
//	printf("%12f\n", 123.45);
//	printf("%12.2f\n", 123.45);
//	printf("%5f\n", 123.45);
//	printf("%5.2f\n", 123.45);
//	printf("%5.1f\n", 123.45);
//	printf("%6.1f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%8.1f\n", 123.45);
//	
//	return 0;
//}

int main()
{
	char ch[20];
//	char ch1[20];
	scanf("%[^\n]s", ch);
//	scanf("%s", ch1);
	printf("%s\n", ch);
//	printf("%s\n", ch1);
	//int x = 0;
	//scanf("%d", &x);
	//printf("%d\n",x);
	return 0;
}