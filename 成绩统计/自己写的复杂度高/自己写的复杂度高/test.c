#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����Ŀ��������ÿ�ο�Ŀ�ĳɼ�
//��ӡ�������С��ƽ���ɼ�
int main()

{
    int i;
    int j;
    float count = 0.0;
    int n = 0;
    float score[100] = { 0.0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++)  //�����������ܺ�
    {
        printf("������ɼ�>>");
        scanf("%f", &score[i]);
        count += score[i];
    }


    for (i = 0; i <= n - 1; i++)//ʹ��ð������ʹ�ɼ��ɴ�������
    {
        float tmp = 0.0;
        for (j = 0; j < n - 1 - i; j++)//����ÿѭ��һ�ξͰ�û�������Ԫ�����ķ��ں���   
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