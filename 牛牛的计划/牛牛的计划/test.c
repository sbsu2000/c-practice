#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int y1, m1, d1;
    int y, d, m;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);
    if (y1 >= y)
    {
        if (m1 >= m)
        {
            if (y1 >= y)
                printf("yes");
            else
                printf("no");

        }
        else
            printf("no");
    }
    else
        printf("no");

    return 0;
}