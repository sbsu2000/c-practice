#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int i, j, k;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)   //打印的行数
        {
            for (k = 0; k < n - i; k++)  // 打印 * 之前的空格
            {
                printf(" ");
            }
            for (j = 0; j < i; j++) //每行打印多少个 * 
            {
                printf("* ");
            }
            printf("\n");  //打印之后就换行
        }
    }
    return 0;
}