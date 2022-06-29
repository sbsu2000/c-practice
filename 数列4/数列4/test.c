#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n, i;
    int tmp1 = 0;
    int tmp = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        tmp1 += i;
        tmp += tmp1;
    }
    printf("%d", tmp);
    return 0;
}