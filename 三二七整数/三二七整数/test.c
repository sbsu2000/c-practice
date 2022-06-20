#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a = 0;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    scanf("%d", &a);
    if ((0 == a % 2) || (0 == a % 3) || (0 == a % 7))
    {
        if (0 == a % 2)
            printf("2 ");
        if (0 == a % 3)
            printf("3 ");
        if (0 == a % 7)
            printf("7 ");
    }
    else
        printf("n");

    return 0;
}