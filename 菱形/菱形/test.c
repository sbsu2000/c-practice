#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    // �ѽ����ηֳ�һ��С�������κ�һ����ĵ���������
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)  // ��ӡС������
        {
            for (j = n + 1; j > 0; j--) //������n+1��Ϊ����С������ÿһ���еĿո�͵����������εı���һ�£�����ͻ����������
            {
                if (j > i)
                    printf(" ");
                else
                    printf("* ");
            }
            printf("\n");
        }
        for (i = n + 1; i > 0; i--)  // ��ӡ����������
        {
            for (j = n + 1; j > 0; j--)
            {
                if (j > i)
                    printf(" ");
                else
                    printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}