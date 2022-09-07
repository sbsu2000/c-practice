#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int count = 0;
    int arr[100] = { 0 };
    //输入
    while (scanf("%d", &n) != EOF)
    {
        //输入数组
        for (i = 0; i <= n - 2; i++)  //输入n-1个数据
        {
            arr[i] = i + 2;
        }
        //筛选
        for (i = 0; i < n - 2; i++)
        {
            for (j = i + 1; j < n - 1; j++)
            {
                if (arr[i] != 0 && arr[j] % arr[i] == 0)
                {
                    arr[j] = 0;
                }
            }
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
        else
            count++;
    }
    printf("\n");
    printf("%d", count);
    return 0;
}