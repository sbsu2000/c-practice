#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* rest,const char* source)
{
	assert(rest != NULL);
	assert(source != NULL);
	char* ret = rest;
	// ˼·����Ŀ���ַ���\0�����Ժ��滻��׷�ӵ��ַ���
	while (*rest)  //���ҵ� \0
	{
			rest++;
	}
	while (*rest++ = *source++)//�� \0 ��ʼ׷��
		;
	return ret;
}

int main()
{
	char arr1[20] = "abcdef"; //������ַ���Ҫ�и���Χ����Ȼarr1��׷�Ӻ��ʹstack��
	char arr2[] = "gdk";
	printf("%s", my_strcat(arr1, arr2)); //ģ���ַ���׷�Ӻ���
	return 0;
}