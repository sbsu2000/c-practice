#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int b;
    while (scanf("%d", &b) != EOF) //�������������д�˸��ֺţ�һֱѭ��һ�ξͳ����ˣ�������
    {
        if (b % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}