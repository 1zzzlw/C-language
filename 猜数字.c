#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>

void game()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	int guess = 0;
	int ret = rand() % 100 + 1;
	while(1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");		}
		else
		{
			printf("��ϲ�¶�");
			system("shutdown -a");
			printf("������ֹͣ�ػ�");
		}
	}
}

int main()
{
	int n = 0;
	int flag = 0;
	srand((unsigned int)time(NULL));
	printf("**************************\n");
	printf("**************************\n");
	printf("********** play **********\n");
	printf("********** exit **********\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("����1��ʼ������2�˳�:");
	do
	{
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("��ʼ��Ϸ,һ�����ڲ²��������Թػ�����������:\n");
			game();
			break;;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������:");
			break;
		}
	} while (n != 2);
	return 0;
}