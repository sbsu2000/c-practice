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
            if (i == 1 || i == n)
            {
                for (j = 1; j <= n; j++)
                {
                    printf("* ");

                }
            }
            else
                for (j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n)
                        printf("* ");
                    else
                        printf("  ");
                }
            printf("\n");
        }
    }
    return 0;
}