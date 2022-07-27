#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i, j;

    while (scanf("%d", &n) != EOF)
    {
        int count = 1; // 使用一个计数器来记录正斜线的*该打印的位置
        for (i = n; i > 0; i--) // 打印行数
        {
            for (j = 1; j <= n; j++) // 打印列数
            {
                if (j == count || j == i) //判断什么时候打印
                    printf("*");
                else
                    printf(" ");
            }
            count++;
            printf("\n");
        }
    }
    return 0;
}