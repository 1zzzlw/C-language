#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	& ���������ƣ�λ ��
	| ���������ƣ�λ ��
	^ �� �������ƣ�λ ���
*/

int main()
{
	int a = 0;
	int count = 0;
	printf("������һ������:>");
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
	printf("������1�ĸ���Ϊ:%d", count);
	return 0;
}