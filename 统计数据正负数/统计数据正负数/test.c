#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    int count = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            count++;
    }
    printf("positive:%d\n", count);
    printf("negative:%d\n", 10 - count);
    return 0;
}