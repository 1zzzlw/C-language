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
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");		}
		else
		{
			printf("恭喜猜对");
			system("shutdown -a");
			printf("电脑已停止关机");
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
	printf("输入1开始，输入2退出:");
	do
	{
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("开始游戏,一分钟内猜不出来电脑关机，输入数字:\n");
			game();
			break;;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入:");
			break;
		}
	} while (n != 2);
	return 0;
}