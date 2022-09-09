#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    float arr[5][5] = { 0 };
    int i, j;
    //二维数组输入
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)

        {
            scanf("%f ", &arr[i][j]);
        }
    }
    //计算并且输出
     //二维数组输入
    for (i = 0; i < 5; i++)
    {
        float count = 0;
        for (j = 0; j < 5; j++)

        {
            count += arr[i][j];
            printf("%.1f ", arr[i][j]);
        }
        printf("%.1f", count);
        printf("\n");
    }

    return 0;
}