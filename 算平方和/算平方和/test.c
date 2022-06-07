#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1;
    int x2, y2;
    int p;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    p = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    printf("%d", p);
    return 0;
}