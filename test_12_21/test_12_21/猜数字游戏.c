#define _CRT_SECURE_NO_WARNINGS
//电脑自动生成玩家自定义范围内的随机数
//玩家猜数字，猜数字过程中，根据猜测数据的大小给出大了还是小了的反馈
//玩家可设置难度，自定义猜数字的次数
//猜对游戏结束，猜错，游戏结束，再接再厉
//游戏可以重复玩，由玩家自己选择

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("***********************\n");
	printf("******* 1. Play *******\n");
	printf("******* 0. Exit *******\n");
	printf("***********************\n");
}

void game()
{
	int a = 0;
	int b = 0;
	int c = 0;//猜的数字
	int d = 0;

	printf("请输入要猜的数字范围：\n");
	scanf("%d", &a);
	scanf("%d", &b);
	int r = a + rand() % (b-a+1);//生成随机数
	printf("请输入游戏难度（几次机会）：\n");
	scanf("%d",&d);

	while (d)
	{
		printf("还有%d次机会\n",d);
		printf("请猜数字=> ");
		scanf("%d", &c);

		if (c < r)
		{
			printf("猜小了\n");
		}
		else if (c > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你！猜对了!\n");
			printf("\n");
			break;
		}
		d--;
	}
	if (d == 0)
	{
		printf("次数用尽，游戏结束，正确答案是：%d\n",r);
	}
}

int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择--->\n");
		scanf("%d", &i);

		switch(i)
		{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("选择错误，请从新选择\n");
				break;
		}
	} while (i);

	return 0;
}
