#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{
    int i;
    float count = 0.0;
    int n = 0;

    //�����max��min������ֵ��ԭ�������õ�һ������ĳɼ������ȥ������ĳɼ����ܺ�ǰ������ĳɼ����Ƚ�
    float max = 0;
    float min = 100;
    float score[100] = { 0.0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++)  //�����������ܺ�
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