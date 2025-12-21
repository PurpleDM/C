#define _CRT_SECURE_NO_WARNINGS
//多个字符从两端移动，向中间汇聚

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "Hello  word!!!!";
	char arr2[] = "***************";
	int left = 0;
	int right = (sizeof(arr1) / sizeof(arr1[0]))-2;
	printf("%s\n", arr2);

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr2);

	return 0;
}