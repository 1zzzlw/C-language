//自己设计qsort函数
#include <stdio.h>
#include <stdlib.h>

void swap(void* e1, void* e2, int sz)
{
	char* p1 = e1;
	char* p2 = e2;

	for (int i = 0; i < sz; i++)
	{
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	
		p1++;
		p2++;
	}

}

void My_qsort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp(void* e1, void* e2) 
{
	return (*(int*)e1 - *(int*)e2);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	My_qsort(arr, sz, sizeof(arr[0]), cmp);

	for (int i = 0; i < sz; i++)
	{		
		printf("%d ", arr[i]);
	}
	return 0;
}