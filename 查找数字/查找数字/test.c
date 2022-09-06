#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    int i;
    int count = 0; //¼ÆÊýÆ÷
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}