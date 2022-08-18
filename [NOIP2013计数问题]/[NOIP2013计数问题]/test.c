#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n, m, x;
    int count = 0;
    int tmp;
    int i;
    scanf("%d %d", &n, &x);
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 10)
        {
            if (arr[i] == x)
            {
                count++;
            }
        }
        else
        {
            m = arr[i];
            while (m)
            {
                tmp = m % 10;
                if (tmp == x)
                {
                    count++;
                }
                m /= 10;
            }
        }
    }
    printf("%d", count);
}