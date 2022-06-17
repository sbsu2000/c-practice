#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcpy(char* dest,const char* source)
{
	assert(source != NULL);
	assert(dest != NULL);
	 char* ret = dest;
	 while (*dest++ = *source++) //当遇见 \0 的地址，解引用以后并且赋值后，就会停止循环
	 {
		 ;
	}
	return ret;
	
}
int main()
{
	char arr1[10] = "";
	char arr2[] = "bnm"; //这里犯了错误，在[]里面写上了范围结果还写得比字符串个数少，然后这个字符串访问就过界了，全是烫烫烫烫
	printf("%s\n", arr1);
	printf("%s\n",my_strcpy(arr1, arr2));

	return 0;
}