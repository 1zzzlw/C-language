//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float a;
//	scanf("%f", &a);
//	if (a >= 90 && a <= 100)
//		printf("A");
//	else if (a >= 80 && a < 90)
//		printf("B");
//	else if (a >= 70 && a < 80)
//		printf("C");
//	else if (a >= 60 && a < 70)
//		printf("D");
//	else if (a >= 0 && a < 60)
//		printf("E");
//	else
//		printf("Input error!\n");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double money = 0;
	for (int year = 5; year >= 1; year--)
	{
		money = (money + 1000) / (1 + 12 * 0.01875);
	}
	printf("±¾½ð=%f\n", money);
	system("pause");
	return 0;
}