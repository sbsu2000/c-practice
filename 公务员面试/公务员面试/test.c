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
            if (arr[i] >= low)  // �ҵ����ķ���
            {
                low = arr[i];
            }
            if (arr[i] <= hight) // �ҵ���С�ķ���
            {
                hight = arr[i];
            }
            tmp += arr[i]; // �����еķ������
        }

        printf("%.2lf\n", (tmp - hight - low) / 5); // ������ѵõ�����߷ֺ���ͷּ�������ƽ��ֵ
    }
    return 0;
}