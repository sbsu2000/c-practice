#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    double tmp1 = 0;
    double tmp = 0;
    int ret = 0;
    int h = 0;
    scanf("%d", &n);
    for (i = 1; i <= (2 * n - 1); i += 2)
    {
        if (0 == h)
        {
            ret += i;
            h++;

        }
        else
        {
            ret += -1 * i;
            h--;
        }
        tmp1 = 1.0 / ret;
        tmp += tmp1;
    }
    printf("%.3lf", tmp);
    return 0;
}