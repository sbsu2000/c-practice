#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int i, j, k;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)   //��ӡ������
        {
            for (k = 0; k < n - i; k++)  // ��ӡ * ֮ǰ�Ŀո�
            {
                printf(" ");
            }
            for (j = 0; j < i; j++) //ÿ�д�ӡ���ٸ� * 
            {
                printf("* ");
            }
            printf("\n");  //��ӡ֮��ͻ���
        }
    }
    return 0;
}