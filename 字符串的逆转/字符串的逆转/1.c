// ��ĿҪ��:����I am a student
//			���tneduts a ma I
//ע�ⲻ��ʹ��scanf����Ϊscanf���ܶ�ȡ�ո�

#include <stdio.h>
#include <string.h>

//ð�����������arr[]���鳤�Ȳ���̫������Ϊgets����������ĳ��ȣ����ܻᵼ�»��������


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