#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STUDENTS 100

char id[MAX_STUDENTS][20];
char name[MAX_STUDENTS][50];
int math[MAX_STUDENTS];
int design[MAX_STUDENTS];
int count = 0;

void menu()
{
	printf("*******  1.新建数据  *******\n");
	printf("*******  2.添加数据  *******\n");
	printf("*******  3.删除数据  *******\n");
	printf("*******  4.排序      *******\n");
	printf("*******  5.查询      *******\n");
	printf("*******  6.退出      *******\n");
}

void PrintDate()
{
	printf("学号       姓名       数学成绩       程序与设计成绩\n");
	for (int i = 0; i < count; i++)
	{
		printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
	}

}

void NewDateScreen()
{
	printf("输入学生人数:");
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		printf("输入第%d个学生学号:", i + 1);		
		scanf("%s",id[i]);
		printf("输入第%d个学生姓名:", i + 1);
		scanf("%s", name[i]);
		printf("输入第%d个学生数学成绩:", i + 1);
		scanf("%d", &math[i]);
		printf("输入第%d个学生程序设计基础成绩:", i + 1);
		scanf("%d", &design[i]);
	}
	PrintDate();
}

void AddDateScreen()
{
	int i = count;
	printf("输入添加的学生学号:");
	scanf("%s", id[i]);
	printf("输入添加的学生姓名:");
	scanf("%s", name[i]);
	printf("输入添加的学生数学成绩:");
	scanf("%d", &math[i]);
	printf("输入添加的学生程序设计基础成绩:");
	scanf("%d", &design[i]);
	count++;
	PrintDate();
	printf("共有%d个学生\n", count);
}

void DeleteDate()
{
	char key[50];
	int found = 0;
	printf("请输入要删除的学生姓名或学号:");
	scanf("%s",key);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(id[i], key) == 0 || strcmp(name[i], key) == 0)
		{
			found = 1;
			for (int j = i; j < count - 1; j++)
			{
				strcpy(id[j], id[j + 1]);
				strcpy(name[j], name[j + 1]);
				math[j] = math[j + 1];
				design[j] = design[j + 1];
			}
			count --;
			break;
		}
	}
	if (found)
	{
		printf("删除成功，剩余学生信息如下：\n");
		PrintDate();
	}
	else
	{
		printf("学号（姓名）不存在。\n");
	}
}

void SortId()
{
	char tempid[20];
	char tempname[50];
	int tempmath = 0;
	int tempdesign = 0;
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (strcmp(id[j],id[j + 1]) > 0) //判断用id排序
			{
				strcpy(tempid, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], tempid); //交换id
				
				strcpy(tempname, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tempname); //交换姓名
				
				tempmath = math[j]; //交换数学成绩
				math[j] = math[j + 1];
				math[j + 1] = tempmath;
				
				tempdesign = design[j]; //交换程序与设计成绩
				design[j] = design[j + 1];
				design[j + 1] = tempdesign;
			}

		}
	}
	PrintDate();
}

void SortScore()
{
	char tempid[20];
	char tempname[50];
	int tempmath = 0;
	int tempdesign = 0;
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (math[j] + design[j] < math[j + 1] + design[j + 1]) //判断用成绩总分排序
			{
				strcpy(tempid, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], tempid); //交换id

				strcpy(tempname, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tempname); //交换姓名

				tempmath = math[j]; //交换数学成绩
				math[j] = math[j + 1];
				math[j + 1] = tempmath;

				tempdesign = design[j]; //交换程序与设计成绩
				design[j] = design[j + 1];
				design[j + 1] = tempdesign;
			}
		}
	}
	PrintDate();
}

void SortDate()
{
	int choice = 0;
	do
	{
		printf("请选择用学号(1)排序还是用成绩总分(2)排序:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			SortId();
			break;
		case 2:
			SortScore();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (choice != 1 && choice != 2);
}

void SearchId()
{
	char temp[20];
	printf("请输入要查询学生的学号:");
	scanf("%s", temp);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(id[i], temp) == 0)
		{
			printf("学号       姓名       数学成绩       程序与设计成绩\n");
			printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
			break;
		}
		else
		{
			printf("输入的学号不存在\n");
		}
	}
}

void SearchName()
{
	char temp[50];
	printf("请输入要查询学生的姓名:");
	scanf("%s", temp);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(name[i], temp) == 0)
		{
			printf("学号       姓名       数学成绩       程序与设计成绩\n");
			printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
			break;
		}
		else
		{
			printf("输入的学生姓名不存在\n");
		}
	}
}

void SearchDate()
{
	int choice = 0;
	do
	{
		printf("请选择用学号(1)查询还是用姓名(2)查询:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			SearchId();
			break;
		case 2:
			SearchName();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (choice != 1 && choice != 2);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				NewDateScreen();
				break;
			case 2:
				AddDateScreen();
				break;
			case 3:
				DeleteDate();
				break;
			case 4:
				SortDate();
				break;
			case 5:
				SearchDate();
				break;
			case 6:
				printf("程序已退出\n");
				break;
			default:
				printf("输入错误，请重新输入:>");
				printf("\n");
				break;
		}
	} while(input != 6);	
	return 0;
}
