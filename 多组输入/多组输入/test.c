#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int b;
    while (scanf("%d", &b) != EOF) //啊啊啊，这里多写了个分号，一直循环一次就出来了！！！！
    {
        if (b % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}