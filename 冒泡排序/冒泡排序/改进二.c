////ǰ�������붼ֻ����int���͵�����
////���������õ�һ���⺯������ qsort ʹ�ÿ��������˼���һ�������� ���������������͵�����
////void qsort( void *base, Ҫ��������ݵ���ʼλ��
////			  size_t num, ������������м���Ԫ��
////			  size_t width, �����һ������Ԫ�صĴ�С��ռ�ü����ֽ�
////			  int (__cdecl *compare )(const void *elem1, const void *elem2 ) ); �ȽϺ��� �õ���void*ָ����ص� 
////__cdecl ��һ����������Լ��
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
//void test1() //��������
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
//void test2() //����ṹ���ڵ���
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