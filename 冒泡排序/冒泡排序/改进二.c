////前两个代码都只能排int类型的数组
////接下来会用到一个库函数叫做 qsort 使用快速排序的思想的一个排序函数 可以排序任意类型的数据
////void qsort( void *base, 要排序的数据的起始位置
////			  size_t num, 排序的数据中有几个元素
////			  size_t width, 排序的一个数据元素的大小即占用几个字节
////			  int (__cdecl *compare )(const void *elem1, const void *elem2 ) ); 比较函数 用到了void*指针的特点 
////__cdecl 是一个函数调用约定
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int cmp_f(const void* e1, const void* e2) 
//{
//	/*if (*(int*)e1 > *(int*)e2)
//	{
//		return 1;
//	}
//	else if (*(int*)e1 == *(int*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}*/
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1() //排序整形
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_f);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_Stu_name(const void* e1, const void* e2)
//{
//	 return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_Stu_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2() //排序结构体内的数
//{
//	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_name);
//
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}