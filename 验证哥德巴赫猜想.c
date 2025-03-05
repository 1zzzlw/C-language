//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int prime(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int a = 1; a <= n / 2; a++)
//	{
//		for (int b = 1; b <= n; b++)
//		if (a + b == n)
//		{
//			int a1 = prime(a);
//			int b1 = prime(b);
//			if (a1 != 0 && b1 != 0)
//			{
//				printf("%d %d\n", a1, b1);
//			}
//		}
//	}	
//}