#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int ret;
    int tmp = 0;
    scanf("%d", &n);
    ret = n;
    while (ret)
    {
        tmp += ret % 10;
        ret /= 10;
    }
    printf("%d", tmp);
    return 0;
}