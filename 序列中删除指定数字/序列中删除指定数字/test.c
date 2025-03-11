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
	
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	
	printf("\n");
	int del = 0;
	int j = 0;
	scanf("%d", &del);
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	
	for (int i = 0; i < j; i++)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}