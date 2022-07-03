#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int ret = 0; // ¼ÆÊýÆ÷
    int n;
    scanf("%d", &n);
    while (n != 1)
    {
        if (0 == n % 2)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        ret++;
    }
    printf("%d", ret);
    return 0;
}