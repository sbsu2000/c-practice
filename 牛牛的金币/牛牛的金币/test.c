#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int x, y;
    int x1, y1;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &x1, &y1);
    if (x1 - x == 0)
    {
        if (y1 - y == 1)
            printf("%c", 'u');
        else
            printf("%c", 'd');
    }
    if (y1 - y == 0)
    {
        if (x1 - x == 1)
            printf("%c", 'r');
        else
            printf("%c", 'l');
    }

    return 0;
}