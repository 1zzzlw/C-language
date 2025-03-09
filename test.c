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
	printf("*******  1.�½�����  *******\n");
	printf("*******  2.�������  *******\n");
	printf("*******  3.ɾ������  *******\n");
	printf("*******  4.����      *******\n");
	printf("*******  5.��ѯ      *******\n");
	printf("*******  6.�˳�      *******\n");
}

void PrintDate()
{
	printf("ѧ��       ����       ��ѧ�ɼ�       ��������Ƴɼ�\n");
	for (int i = 0; i < count; i++)
	{
		printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
	}

}

void NewDateScreen()
{
	printf("����ѧ������:");
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		printf("�����%d��ѧ��ѧ��:", i + 1);		
		scanf("%s",id[i]);
		printf("�����%d��ѧ������:", i + 1);
		scanf("%s", name[i]);
		printf("�����%d��ѧ����ѧ�ɼ�:", i + 1);
		scanf("%d", &math[i]);
		printf("�����%d��ѧ��������ƻ����ɼ�:", i + 1);
		scanf("%d", &design[i]);
	}
	PrintDate();
}

void AddDateScreen()
{
	int i = count;
	printf("������ӵ�ѧ��ѧ��:");
	scanf("%s", id[i]);
	printf("������ӵ�ѧ������:");
	scanf("%s", name[i]);
	printf("������ӵ�ѧ����ѧ�ɼ�:");
	scanf("%d", &math[i]);
	printf("������ӵ�ѧ��������ƻ����ɼ�:");
	scanf("%d", &design[i]);
	count++;
	PrintDate();
	printf("����%d��ѧ��\n", count);
}

void DeleteDate()
{
	char key[50];
	int found = 0;
	printf("������Ҫɾ����ѧ��������ѧ��:");
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
		printf("ɾ���ɹ���ʣ��ѧ����Ϣ���£�\n");
		PrintDate();
	}
	else
	{
		printf("ѧ�ţ������������ڡ�\n");
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
			if (strcmp(id[j],id[j + 1]) > 0) //�ж���id����
			{
				strcpy(tempid, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], tempid); //����id
				
				strcpy(tempname, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tempname); //��������
				
				tempmath = math[j]; //������ѧ�ɼ�
				math[j] = math[j + 1];
				math[j + 1] = tempmath;
				
				tempdesign = design[j]; //������������Ƴɼ�
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
			if (math[j] + design[j] < math[j + 1] + design[j + 1]) //�ж��óɼ��ܷ�����
			{
				strcpy(tempid, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], tempid); //����id

				strcpy(tempname, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tempname); //��������

				tempmath = math[j]; //������ѧ�ɼ�
				math[j] = math[j + 1];
				math[j + 1] = tempmath;

				tempdesign = design[j]; //������������Ƴɼ�
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
		printf("��ѡ����ѧ��(1)�������óɼ��ܷ�(2)����:>");
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (choice != 1 && choice != 2);
}

void SearchId()
{
	char temp[20];
	printf("������Ҫ��ѯѧ����ѧ��:");
	scanf("%s", temp);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(id[i], temp) == 0)
		{
			printf("ѧ��       ����       ��ѧ�ɼ�       ��������Ƴɼ�\n");
			printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
			break;
		}
		else
		{
			printf("�����ѧ�Ų�����\n");
		}
	}
}

void SearchName()
{
	char temp[50];
	printf("������Ҫ��ѯѧ��������:");
	scanf("%s", temp);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(name[i], temp) == 0)
		{
			printf("ѧ��       ����       ��ѧ�ɼ�       ��������Ƴɼ�\n");
			printf("%s %s %7d %14d\n", id[i], name[i], math[i], design[i]);
			break;
		}
		else
		{
			printf("�����ѧ������������\n");
		}
	}
}

void SearchDate()
{
	int choice = 0;
	do
	{
		printf("��ѡ����ѧ��(1)��ѯ����������(2)��ѯ:>");
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
			printf("ѡ�����������ѡ��\n");
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
		printf("��ѡ��:>");
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
				printf("�������˳�\n");
				break;
			default:
				printf("�����������������:>");
				printf("\n");
				break;
		}
	} while(input != 6);	
	return 0;
}
