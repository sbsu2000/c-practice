#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    double ret;
    double tmp = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //通过循环得到分母
    {
        ret = 1.0 / i; // 得到每一项
        tmp += ret;
    }
    printf("%.6lf", tmp);
    return 0;
}