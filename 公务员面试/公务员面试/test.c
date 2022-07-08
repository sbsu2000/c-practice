#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    double arr[7];
    int i;
    while (scanf("%lf %lf %lf %lf %lf %lf %lf", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6) != EOF)
    {
        double hight = 100;
        double low = 0;
        double tmp = 0;
        for (i = 0; i < 7; i++)
        {
            if (arr[i] >= low)  // 找到最大的分数
            {
                low = arr[i];
            }
            if (arr[i] <= hight) // 找到最小的分数
            {
                hight = arr[i];
            }
            tmp += arr[i]; // 把所有的分数相加
        }

        printf("%.2lf\n", (tmp - hight - low) / 5); // 在这里把得到的最高分和最低分减掉在求平均值
    }
    return 0;
}