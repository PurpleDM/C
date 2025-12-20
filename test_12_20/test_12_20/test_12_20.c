#define _CRT_SECURE_NO_WARNINGS

//
//写一个关机程序
//功能：
//程序运行起来后，电脑就倒计时1分钟关机
//如果在一分钟内输入，“我是猪”，就取消关机
//不输入的话，1分钟后就关机
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };//字符数组用来存放字符串
	system("shutdown -s -t 60");
again:
	printf("请注意你的电脑将在1分钟后关机，如果输入“我是猪”就取消关机\n");
		scanf("%s", input);
	//判断
	//strcmp - string compare
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");//取消关机
		printf("关机已取消\n");
	}
	else
	{
		goto again;//这里也可以用while循环等 while（1）
	}

	return 0;
}