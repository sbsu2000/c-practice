#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcpy(char* dest,const char* source)
{
	assert(source != NULL);
	assert(dest != NULL);
	 char* ret = dest;
	 while (*dest++ = *source++) //������ \0 �ĵ�ַ���������Ժ��Ҹ�ֵ�󣬾ͻ�ֹͣѭ��
	 {
		 ;
	}
	return ret;
	
}
int main()
{
	char arr1[10] = "";
	char arr2[] = "bnm"; //���ﷸ�˴�����[]����д���˷�Χ�����д�ñ��ַ��������٣�Ȼ������ַ������ʾ͹����ˣ�ȫ����������
	printf("%s\n", arr1);
	printf("%s\n",my_strcpy(arr1, arr2));

	return 0;
}