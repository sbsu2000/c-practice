#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    float p;
    int a, b, c;
    scanf("%f %d %d %d", &p, &a, &b, &c);
    if (a == 11)
        p *= 0.7;
    else
        p *= 0.8;
    if (c == 1)
        p -= 50;
    if (p <= 0)
        p = 0;
    printf("%.2f", p);
    return 0;
}