#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//这是一个计算阶乘的小练习
int main()
{
	int a = 0;
	int i;
	int tmp = 1;
	scanf("%d", &a);   // 需要用户输入一个整数
	for (i = 1; i <= a; i++)//用循环得到1至这个输入的数字，再进行阶乘算法
		tmp *= i;
	printf("%d", tmp);
	return 0;
}