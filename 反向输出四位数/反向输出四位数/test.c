#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    int ret = 0;
    int tmp = 1000;
    scanf("%d", &n);
    for (i = 0; i < 4; i++)
    {
        ret += (n % 10) * tmp;
        n /= 10;
        tmp /= 10;
    }
    printf("%04d", ret);
    return 0;
}