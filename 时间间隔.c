//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int HmsToS(int h, int m, int s) //��ʱ����ת�����벢����, ���������ֱ�Ϊ���ڱ�ʾһ��ʱ����ʱ���֡���
//{
//	return s = s + m * 60 + h * 3600;
//}
//
//void PrintTime(int s) //��ʱ���ת��Ϊ��Ӧ�ġ�Сʱ:����:�롱 ��ʽ��� ,�β�s��ʾһ��ʱ��εĳ��ȣ���λ����
//{
//	int h = 0;
//	int m = 0;
//	h = s / 3600;
//	m = (s % 3600) / 60;
//	s = (s % 3600) % 60;
//	printf("%02d:%02d:%02d", h, m, s);
//}
//
//int main()
//{
//	int h1, h2 = 0;
//	int m1, m2 = 0;
//	int s1, s2 = 0;
//	int n = 0;
//	scanf("%d:%d:%d", &h1, &m1, &s1);
//	scanf("%d:%d:%d", &h2, &m2, &s2);
//	int ret1 = HmsToS(h1, m1, s1);
//	int ret2 = HmsToS(h2, m2, s2);
//	int a = ret2 - ret1;
//	PrintTime(a);
//	return 0;
//}