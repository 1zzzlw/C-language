#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k = 0;
	int n = 1;
	scanf("%d", &k);

	for (int i = 1; i <= k; i++)
	{
		n += 1 / i;
	}

	printf("%d", n);
	return 0;
}