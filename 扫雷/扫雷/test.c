#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********   1,play   ********\n");
	printf("********   2,exit   ********\n");
	printf("****************************\n");
}

void game()
{
	//初始化数组
	char mine[ROWS][COLS] = { 0 }; //存放布置好雷的信息
	char show[ROWS][COLS] = { 0 }; //存放排查出雷的信息

	InitBoard(mine, ROWS, COLS,'0');

	InitBoard(show, ROWS, COLS,'*');

	SetMine(mine,ROW,COL);

	DisplayBoard(show, ROW, COL);

	DisplayBoard(mine, ROW, COL); //答案

	FindMine(mine,show, ROW, COL);
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 2:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input != 2);
	
	return 0;
}