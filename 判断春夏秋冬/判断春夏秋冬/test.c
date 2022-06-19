#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    a %= 100;
    if (a >= 3 && a <= 5)
        printf("spring");
    else if (a >= 6 && a <= 8)
        printf("summer");
    else if (a >= 9 && a <= 11)
        printf("autumn");
    else if (a >= 12 || a <= 2)
        printf("winter");

    return 0;
}