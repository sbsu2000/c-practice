#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    char a = 0;
    while ((scanf("%c", &a)) != EOF)
    {
        getchar();// �������ַ�ʱ�������ʱ��س�\n �ո�\r ��ת���ַ�Ҳ�ᱻ�ַ����,�������������ú��������յ��س������µ�\n
        if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
            printf("%c is an alphabet.\n", a);
        else
            printf("%c is not an alphabet.\n", a);
    }
    return 0;
}