#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}