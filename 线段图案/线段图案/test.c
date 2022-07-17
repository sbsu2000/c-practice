#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}