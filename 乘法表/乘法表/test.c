#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int i, j, tmp;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            tmp = i * j;
            printf("%d*%d=%2d ", j, i, tmp);  // %����d����ʾ���ֱ�ʾ�ַ��������ȣ���������Ļ�����Կո���ռλ
        }
        printf("\n");
    }
    return 0;
}