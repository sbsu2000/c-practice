#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i, j;

    while (scanf("%d", &n) != EOF)
    {
        int count = 1; // ʹ��һ������������¼��б�ߵ�*�ô�ӡ��λ��
        for (i = n; i > 0; i--) // ��ӡ����
        {
            for (j = 1; j <= n; j++) // ��ӡ����
            {
                if (j == count || j == i) //�ж�ʲôʱ���ӡ
                    printf("*");
                else
                    printf(" ");
            }
            count++;
            printf("\n");
        }
    }
    return 0;
}