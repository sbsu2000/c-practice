#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    int tmp = 0;
    int ret1, ret2, ret3;
    int count = 0;
    int i;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        for (i = m; i <= n; i++)
        {
            ret1 = i % 10;
            ret2 = i / 10 % 10;
            ret3 = i / 100;
            if (pow(ret1, 3) + pow(ret2, 3) + pow(ret3, 3) == i)
            {
                count++;
                printf("%d ", i);
            }
        }
        if (0 == count)
            printf("no\n");
    }

    return 0;
}