//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	if (1 <= a && a <= 100000 && 1 <= b && b <= 100000)
//	{
//		int i = (a > b ? a : b);
//		for (i; i <= 100000; i++)
//		{
//			if (i % a == 0 && i % b == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}