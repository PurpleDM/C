#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//sprt()是开平方的函数
#include<string.h>
//求字符串长度，\0之前字符的个数，strlen()
//字符串比较：strcmp(ch1,ch2)
#include<stdlib.h>
//随机数：rand()	srand()
//清理屏幕信息：system("cls");
#include<windows.h>
//Sleep
#include<stdbool.h>



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ",i);
//		//i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ",i);
//		i = i + 1;
//	} while (i<=10);
//	return 0;
//}
//字符串比较
//int main()
//{
//	char ch[20] = {0};
//next:
//	printf("请输入“你好世界”\n");
//	scanf("%s",ch);
//	if (strcmp(ch, "你好世界") == 0)
//	{
//		printf("你好！\n");
//	}
//	else
//	{
//		printf("从新输入\n");
//		goto next;
//	}
//	return 0;
//}

//生成随机数
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand() % 100);//0~99
//	printf("%d\n", rand() % 100);//0~99
//	printf("%d\n", rand() % 100);//0~99
//	printf("%d\n", rand() % 100);//0~99
//	printf("%d\n", rand() % 100);//0~99
//	printf("\n");
//	printf("%d\n", rand() % 100 + 1);//1~100
//	printf("%d\n", rand() % 100 + 1);//1~100
//	printf("%d\n", rand() % 100 + 1);//1~100
//	printf("%d\n", rand() % 100 + 1);//1~100
//	printf("%d\n", rand() % 100 + 1);//1~100
//	printf("\n");
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//100~200
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//100~200
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//100~200
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//100~200
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//100~200
//	printf("\n");
//	//printf("%d\n", a + rand()%(b - a + 1));
//	return 0;
//}

//int main()
//{
//	//char ch[6] = { "hello" };
//	//printf("%s\n",ch);
//	int arr[10];
//	printf("%zd",sizeof(arr));
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d", sizeof(arr[0]));
//	printf("%d", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//strlen用法
//int main()
//{
//	//int i = strlen("arr");
//	//printf("%d",i);
//	char arr[] = { "qwerwr" };
//	printf("%d ", (int)strlen(arr));//强制类型转换
//	return 0;
//}

//多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = { "***************" };
//	char arr2[] = { "hello !!! world" };
//	int left = 0;
//	//1.
//	//int right = sizeof(arr2) / sizeof(arr2[0]) - 2;
//	//2.
//	int right = strlen(arr2) - 1;
//	for (left=0; left<=right; left++)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		right--;
//		printf("%s\n",arr1);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s",arr1);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	//int right = (int)strlen(arr);
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 0;
//	scanf("%d",&key);
//	bool found = false;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			found = true;
//			break;
//		}
//	}
//	if (found == true)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}