#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[50];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];

	}

	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];

	}

	printf("%d\n", max - min);
	return 0;
}