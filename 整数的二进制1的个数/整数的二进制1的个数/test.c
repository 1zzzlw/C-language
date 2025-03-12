#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	& 按（二进制）位 与
	| 按（二进制）位 或
	^ 按 （二进制）位 异或
*/

int main()
{
	int a = 0;
	int count = 0;
	printf("请输入一个整数:>");
	scanf("%d", &a);
	for (int i = 0; i < 32; i++)
	{
		if (a & 1 == 1)
		{
			count++;
			a = a >> 1;
		}
		else
		{
			a = a >> 1;
		}
	}
	printf("二进制1的个数为:%d", count);
	return 0;
}