#define _CRT_SECURE_NO_WARNINGS
 
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-------------------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = Mine;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int CountMine(char board[ROWS][COLS],int row,int col) //计算周围雷的数量
{
	return (board[row - 1][col - 1] + board[row - 1][col] + board[row - 1][col + 1] + board[row][col - 1] + board[row][col + 1] + board[row + 1][col + 1] + board[row + 1][col] + board[row + 1][col + 1] - 8 * '0');
}

void AutoFindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col) //自动清楚周围不是雷的盲区
{
		if (CountMine(mine, row, col) == 0) //首先判断选定坐标周围是否有雷
		{
			for (int i = -1; i <= 1; i++) //如果周围一个雷也没有，就判断以选定坐标为中心，周围坐标的周围是否有雷
			{
				for (int j = -1; j <= 1; j++)
				{
					if (i != 0 && j != 0)
					{
						if (show[row][col] == '*')
						{
							if (CountMine(mine, row + i, col + i) == 0) //周围的某一个坐标 他的周围一个雷也没有,应该让此处标记为0，并且继续排查他的周围坐标
							{
								show[row + i][col + j] = '0';
								AutoFindMine(mine, show, row + i, col + i);
							}
							else //周围的某一个坐标 他的周围有雷，应该在此处标记他周围雷的个数，并且停止排查他周围的坐标
							{
								int count = CountMine(mine, row + i, col + i);
								show[row + i][col + i] = count + '0'; //转换成数字字符
							}
						}
					}
				}
			}
		}
		else
		{
			int count = CountMine(mine, row, col);
			show[row][col] = count + '0';
		}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int win = row * col - Mine;

	while (win)
	{
		printf("请输入排雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '0')
		{
			printf("坐标已被占用，请重新输入\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1') //排雷的坐标是雷的情况
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else //排雷的坐标没有雷
				{
					//int count = CountMine(mine, x, y);
					//show[x][y] = count + '0'; //转换成数字字符
					AutoFindMine(mine,show,x,y); //自动排除是否有雷
					DisplayBoard(show, row, col);
					win--;
				}
			}
			else
			{
				printf("输入非法，请重新输入\n");
			}
		}
	}
	if (win == 0)
	{
		printf("恭喜你获得胜利\n");
		DisplayBoard(mine, row, col);
	}
}
