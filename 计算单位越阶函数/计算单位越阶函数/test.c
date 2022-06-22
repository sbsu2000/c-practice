#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
        {
            printf("%d\n", 1);
        }
        else if (0 == t)
            printf("%.1f\n", 0.5);
        else if (t < 0)
            printf("%d\n", 0);
    }

    return 0;
}