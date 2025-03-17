#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];
	int h = 0;
	int count = 0;

	printf("请输入十个苹果距离地面的距离:");

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n");
	printf("输入陶陶伸直手够到的最大高度:");
	scanf("%d", &h);

	for (int j = 0; j < 10; j++)
	{
		if (arr[j] <= h || arr[j] <= h + 30)
		{
			count++;
		}
	}

	printf("%d", count);
	return 0;
}