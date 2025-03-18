//#include<stdio.h>
//
//int isperfect(int x)
//{
//	int sum = 0;
//	for (int j = 1; j <= x / 2; j++)
//	{
//		if (x % j == 0)
//		{
//			sum += j;
//		}
//	}
//	if (sum == x)
//		return x;
//	return 0;
//}
//
//int main()
//{
//	for (int i = 1; i <= 1000; i++)
//	{
//		int ret = isperfect(i);
//			printf("%d is a perfect number\n", ret);
//	}
//	return 0;
//}