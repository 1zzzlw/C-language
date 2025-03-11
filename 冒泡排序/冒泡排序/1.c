//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//
//	}
//
//	for (int k = 0; k < n; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//
//	return 0;
//}