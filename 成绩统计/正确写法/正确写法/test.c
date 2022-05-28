#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{
    int i;
    float count = 0.0;
    int n = 0;

    //这里的max和min这样赋值的原因是先让第一个输入的成绩输入进去，后面的成绩才能和前面输入的成绩作比较
    float max = 0;
    float min = 100;
    float score[100] = { 0.0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++)  //算输入数的总和
    {
        scanf("%f", &score[i]);
        count += score[i];
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];

    }

    printf("%.2f %.2f %.2f", max, min, count / n);
    return 0;
}