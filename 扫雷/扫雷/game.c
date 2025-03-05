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

int CountMine(char board[ROWS][COLS],int row,int col) //������Χ�׵�����
{
	return (board[row - 1][col - 1] + board[row - 1][col] + board[row - 1][col + 1] + board[row][col - 1] + board[row][col + 1] + board[row + 1][col + 1] + board[row + 1][col] + board[row + 1][col + 1] - 8 * '0');
}

void AutoFindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col) //�Զ������Χ�����׵�ä��
{
		if (CountMine(mine, row, col) == 0) //�����ж�ѡ��������Χ�Ƿ�����
		{
			for (int i = -1; i <= 1; i++) //�����Χһ����Ҳû�У����ж���ѡ������Ϊ���ģ���Χ�������Χ�Ƿ�����
			{
				for (int j = -1; j <= 1; j++)
				{
					if (i != 0 && j != 0)
					{
						if (show[row][col] == '*')
						{
							if (CountMine(mine, row + i, col + i) == 0) //��Χ��ĳһ������ ������Χһ����Ҳû��,Ӧ���ô˴����Ϊ0�����Ҽ����Ų�������Χ����
							{
								show[row + i][col + j] = '0';
								AutoFindMine(mine, show, row + i, col + i);
							}
							else //��Χ��ĳһ������ ������Χ���ף�Ӧ���ڴ˴��������Χ�׵ĸ���������ֹͣ�Ų�����Χ������
							{
								int count = CountMine(mine, row + i, col + i);
								show[row + i][col + i] = count + '0'; //ת���������ַ�
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
		printf("���������׵�����:>");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '0')
		{
			printf("�����ѱ�ռ�ã�����������\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1') //���׵��������׵����
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else //���׵�����û����
				{
					//int count = CountMine(mine, x, y);
					//show[x][y] = count + '0'; //ת���������ַ�
					AutoFindMine(mine,show,x,y); //�Զ��ų��Ƿ�����
					DisplayBoard(show, row, col);
					win--;
				}
			}
			else
			{
				printf("����Ƿ�������������\n");
			}
		}
	}
	if (win == 0)
	{
		printf("��ϲ����ʤ��\n");
		DisplayBoard(mine, row, col);
	}
}
