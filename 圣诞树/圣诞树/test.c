#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int h;
    int i, j, k;
    int count;
    while (scanf("%d", &h) != EOF)
    {
        count = h * 3; // ������λ��ÿ����ʼ�� * ��λ��
        for (i = 1; i <= h; i++) // ����������Ϊһ�飩 
        {
            for (j = 0; j < count - 1; j++) // ��ӡÿ��ǰ��Ŀո�
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // ��ӡÿ��ĵ�һ��
            {
                printf("*     ");
            }
            printf("\n");

            for (j = 0; j < count - 2; j++) // ��ӡÿ��ǰ��Ŀո�
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // ��ӡÿ��ĵڶ���
            {
                printf("* *   ");
            }
            printf("\n");

            for (j = 0; j < count - 3; j++) // ��ӡÿ��ǰ��Ŀո�
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++) // ��ӡÿ��ĵ�����
            {
                printf("* * * ");
            }
            printf("\n");
            count = count - 3;

        }

        for (i = 1; i <= h; i++) //��ӡ�ֱ�
        {
            for (j = 1; j <= h * 3; j++)
            {
                if (j == h * 3)
                    printf("*\n");
                else
                    printf(" ");
            }
        }

    }
    return 0;
}