#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int F(int n)
{


}

int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int n = 0;
	scanf("%d", &n);
	if (n > 2)
	{
		for (int i = 0; i < n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	else
	{
		c = 1;
	}
	printf("%d", c);
	return 0;
}