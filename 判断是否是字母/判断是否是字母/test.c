#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int main()
{
    char a = 0;
    int i;
    scanf("%c", &a);
    for (i = 65; i <= 90; i++)   // ������������ֱ��ͬ�ַ��Ƚϴ�С���Ƚϵľ�������ASCll��ֵ
    {
        if ((int)a == i)
        {
            printf("YES");
            break;
        }
        else if ((int)a == i + 32)
        {
            printf("YES");
            break;
        }
    }
    if ((int)a > 122 || (int)a < 65)
        printf("NO");


    return 0;
}