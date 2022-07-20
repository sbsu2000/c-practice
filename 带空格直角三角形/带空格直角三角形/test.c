#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = n; i > 0; i--)
        {
            for (j = 1; j <= n; j++)
            {
                if (j < i)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}