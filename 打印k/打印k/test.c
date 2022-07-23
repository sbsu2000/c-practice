#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = n + 1; i > 0; i--)
        {
            for (j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 2; i <= n + 1; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}