#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    int tmp;
    scanf("%d %d", &n, &m);
    int arr[2000];
    // ‰»Î1
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // ‰»Î2
    for (i = 0; i < m; i++)
    {
        scanf("%d ", &arr[n + i]);
    }
    //√∞≈›≈≈–Ú
    for (i = 0; i < (n + m - 1); i++)
        for (j = 0; j < (n + m - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    //¥Ú”°
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}