#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int arr[51];
    int i, j;
    int N, M;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &M);
    for (i = 0; i < N; i++)
    {
        if (M < arr[i])
        {
            for (j = N; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = M;
            break;
        }
        else if (i == N - 1)
        {
            arr[N] = M;
        }
    }

    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}