#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];
	int h = 0;
	int count = 0;

	printf("������ʮ��ƻ���������ľ���:");

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n");
	printf("����������ֱ�ֹ��������߶�:");
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