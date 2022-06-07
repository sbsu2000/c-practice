#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>

int main()
{
    long int a, b, c, d, p;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    p = (a + b - c) * d;
    printf("%ld", p);
    return 0;
}