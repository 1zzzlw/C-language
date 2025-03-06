#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  2.exit  *******\n");
	printf("************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 }; //二维数组的定义
	InitBoard(board, ROW, COL); //初始化棋盘
	DisplayBoard(board,ROW,COL); //打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //判断游戏输赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board,ROW,COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 2:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input != 2);

}