#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n + 1; i++)  //��ӡ�ϰ벿��
        {
            for (j = n + 1; j > 0; j--)
            {
                if (j > i)
                {
                    printf("  ");
                }
                else
                    printf("*");
            }
            printf("\n");
        }
        for (i = n; i > 0; i--)  //��ӡ�°벿��
        {
            for (j = n + 1; j > 0; j--)
            {
                if (j > i)
                {
                    printf("  ");
                }
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}