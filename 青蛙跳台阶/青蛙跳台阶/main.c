//前提是青蛙只能条一阶台阶或者二阶台阶
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	printf("输入台阶数量:");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}