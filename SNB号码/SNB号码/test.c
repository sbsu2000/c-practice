#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char arr[13] = { 0 };
    scanf("%s", arr);
    int i;
    int tmp = 0;
    int j = 1;

    for (i = 0; i < 12; i++)
        if (arr[i] != '-')
        {
            tmp += (arr[i] - '0') * j;  //�������ַ��õ��õ����ֲ��Ҽ���
            j++;
        }
    if (tmp % 11 == (arr[12] - '0')) //�������ȷ���ֺ��ַ��е�ʶ������ͬ
        printf("Right");
    else if (tmp % 11 == 10) //�ֻ�������������� 10 
    {
        if (arr[12] == 'X')
        {
            printf("Right");

        }

        else
        {
            arr[12] = 'X';
            printf("%s", arr);

        }
    }

    else  //��������ֺ�ʶ���벻ͬ
    {
        arr[12] = (tmp % 11) + '0';
        printf("%s", arr);
    }

    return 0;
}