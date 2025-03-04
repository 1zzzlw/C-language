#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Judge(int n)
{
	if (n % 2 == 0)
		return 0;
	else
		return 1;
}

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	int ret = Judge(n);
	if (ret == 0)
	{
		do
		{


		} while (n != 1);

	}
}