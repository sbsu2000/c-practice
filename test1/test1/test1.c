#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ������׳˵�С��ϰ
int main()
{
	int a = 0;
	int i;
	int tmp = 1;
	scanf("%d", &a);   // ��Ҫ�û�����һ������
	for (i = 1; i <= a; i++)//��ѭ���õ�1�������������֣��ٽ��н׳��㷨
		tmp *= i;
	printf("%d", tmp);
	return 0;
}