#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int h;
    int i, j, k;
    int count;
    while (scanf("%d", &h) != EOF)
    {
        count = h * 3; // 用来定位到每组的最开始的 * 的位置
        for (i = 1; i <= h; i++) // 组数（三排为一组） 
        {
            for (j = 0; j < count - 1; j++) // 打印每排前面的空格
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // 打印每组的第一排
            {
                printf("*     ");
            }
            printf("\n");

            for (j = 0; j < count - 2; j++) // 打印每排前面的空格
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // 打印每组的第二排
            {
                printf("* *   ");
            }
            printf("\n");

            for (j = 0; j < count - 3; j++) // 打印每排前面的空格
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // 打印每组的第三排
            {
                printf("* * * ");
            }
            printf("\n");
            count = count - 3;

        }

        for (i = 1; i <= h; i++) //打印手柄
        {
            for (j = 1; j <= h * 3; j++)
            {
                if (j == h * 3)
                    printf("*\n");
                else
                    printf(" ");
            }
        }

    }
    return 0;
}