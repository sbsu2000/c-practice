#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    // 把金菱形分成一个小的三角形和一个大的倒立三角形
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)  // 打印小三角形
        {
            for (j = n + 1; j > 0; j--) //这里变成n+1是为了让小三角形每一列中的空格和倒立大三角形的保持一致，否则就会变成歪的菱形
            {
                if (j > i)
                    printf(" ");
                else
                    printf("* ");
            }
            printf("\n");
        }
        for (i = n + 1; i > 0; i--)  // 打印大倒立三角形
        {
            for (j = n + 1; j > 0; j--)
            {
                if (j > i)
                    printf(" ");
                else
                    printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}