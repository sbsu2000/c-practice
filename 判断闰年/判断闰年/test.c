#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    if ((0 == a % 4 && 0 != a % 100) || (0 == a % 100 && 0 == a % 400))     //4整除而且如果是是整年要能被400整除      
        printf("yes");
    else
        printf("no");

    return 0;
}