#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n, m;
    int min = 100, max = 0;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m >= max) // 找出最大的数
        {
            max = m;
        }
        if (m <= min) // 找出最小的数
        {
            min = m;
        }

    }
    printf("%d", max - min);


    return 0;
}