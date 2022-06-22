#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    unsigned int l;
    scanf("%u", &l);
    if (l / 1 > (l / 10.0) + 10)
        printf("%C", 'v');
    else
        printf("%C", 'w');
    return 0;
}