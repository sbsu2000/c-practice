#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int i, ret;
    int tmp = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ret = i;
        if (0 == i % 2)
        {
            ret *= -1; // 得到每一项
        }
        tmp += ret;
    }
    printf("%d", tmp);
    return 0;
}