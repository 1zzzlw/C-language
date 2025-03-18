#include<stdio.h>

int isperfect(int x)
{
	int sum = 0;
	for (int j = 1; j <= x / 2; j++)
	{
		if (x % j == 0)
		{
			sum += j;
		}
	}	
	if (sum == x)
		return x;
	return 0;
}

int Perfect(int x)
{
	for (int j = 1; j <= x / 2; j++)
	{
		if (x % j == 0)
			printf("%d+", j);
	}
	printf("\b \n"); //消除最后的加号
	return 0;
}

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		if (isperfect(i))
		{
			printf("%d is a perfect number\n", i);
			printf("%d=", i);
			Perfect(i);
		}
	}
	return 0;
}