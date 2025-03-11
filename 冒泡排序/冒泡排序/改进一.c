////改进点是 当数字已经拍好序之后不在进行重复的排序
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
//		int flag = 1;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;
//			}
//		}
//		
//		if (flag == 1) //说明数字已经有序了
//		{
//			break;
//		}		
//	}
//
//	for (int k = 0; k < n; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//
//	return 0;
//}