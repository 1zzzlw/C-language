// 题目要求:输入I am a student
//			输出tneduts a ma I
//注意不能使用scanf，因为scanf不能读取空格

#include <stdio.h>
#include <string.h>

//冒泡排序的做法arr[]数组长度不能太长，因为gets不会检查输入的长度，可能会导致缓冲区溢出


//int main()
//{
//	char arr[20];
//	gets(arr);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz = strlen(arr);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//
//	for (int n = 0; n < sz; n++)
//	{
//		printf("%c", arr[n]);
//	}
//
//	return 0;
//}

int main()
{
	char arr[20];
	gets(arr);
	int sz = strlen(arr);
	for (int i = 0; i < sz; i++)
	{
		int j = sz - i - 1;
		if (j > i)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	for (int n = 0; n < sz; n++)
	{
		printf("%c", arr[n]);
	}
}