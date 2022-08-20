#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int count = 0;
    int i;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count += arr[i];
    }

    printf("%d", count);
}