#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

    int n, tmp;
    int i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &tmp);
        arr[i] = tmp;
    }
    // ð������
    for (i = 0; i < n - 1; i++) // ����
    {
        for (j = 0; j <= n - 1 - i; j++)  //ÿ���ܵĴ���
        {
            if (j != (n - 1))
            {
                if (arr[j] < arr[j + 1])
                {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}