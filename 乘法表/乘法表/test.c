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
            printf("%d*%d=%2d ", j, i, tmp);  // %数字d，表示数字表示字符的输出宽度，如果不够的化则会以空格来占位
        }
        printf("\n");
    }
    return 0;
}