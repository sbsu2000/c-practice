#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int N, M;
    int i, j;
    int count;
    int arr[50];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &M);
    for (i = 0; i < N; i++)
    {
        if (arr[i] == M)
        {
            if (i != N - 1)
            {
                for (j = i; j < N; j++)
                {
                    arr[j] = arr[j + 1];
                }
            }
            i--;
            N--;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}