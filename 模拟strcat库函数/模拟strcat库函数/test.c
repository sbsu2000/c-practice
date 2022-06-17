#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* rest,const char* source)
{
	assert(rest != NULL);
	assert(source != NULL);
	char* ret = rest;
	// 思路：让目标字符串\0及其以后替换正追加的字符串
	while (*rest)  //先找到 \0
	{
			rest++;
	}
	while (*rest++ = *source++)//从 \0 开始追加
		;
	return ret;
}

int main()
{
	char arr1[20] = "abcdef"; //这里的字符串要有个范围，不然arr1在追加后会使stack损坏
	char arr2[] = "gdk";
	printf("%s", my_strcat(arr1, arr2)); //模拟字符串追加函数
	return 0;
}