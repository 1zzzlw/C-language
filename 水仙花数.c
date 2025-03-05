//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int narcissus(int n) //判断n是否为水仙花数， 若是函数返回1，否则返回0
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = n / 100;
//	b = n % 100 / 10;
//	c = n % 100 % 10;
//	if (n == a * a * a + b * b * b + c * c * c)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//
//	scanf("%d %d", &m, &n);
//
//	if (m >= 100 && m <= 999 && n >= 100 && n <= 999 && m <= n)
//	{
//		for (int i = m; i <= n; i++)
//		{
//			int ret = narcissus(i);
//			if (ret)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		if (count == 0)
//			printf("no\n");
//	}
//	return 0;
//}