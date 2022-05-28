#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入科目数；输入每课科目的成绩
//打印出最大，最小，平均成绩
int main()

{
    int i;
    int j;
    float count = 0.0;
    int n = 0;
    float score[100] = { 0.0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++)  //算输入数的总和
    {
        printf("请输入成绩>>");
        scanf("%f", &score[i]);
        count += score[i];
    }


    for (i = 0; i <= n - 1; i++)//使用冒泡排序使成绩由大到下排序
    {
        float tmp = 0.0;
        for (j = 0; j < n - 1 - i; j++)//这里每循环一次就把没排序里的元素最大的放在后面   
        {
            if (score[j] > score[j = 1])
            {
                tmp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmp;
            }

        }
    }

    printf("%.2f %.2f %.2f", score[n - 1], score[0], count / n);
    return 0;
}