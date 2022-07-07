#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i;
    int ret1, ret2, ret3, ret4;

    for (i = 10000; i < 100000; i++) // 1 2345
    {
        int tmp = 0;
        ret1 = (i / 10000) * (i % 10000);
        ret2 = (i / 1000) * (i % 1000);
        ret3 = (i / 100) * (i % 100);
        ret4 = (i / 10) * (i % 10);
        tmp = ret1 + ret2 + ret3 + ret4;
        if (tmp == i)
            printf("%d ", i);
    }
    return 0;
}