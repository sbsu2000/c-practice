#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����
//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//����������
//�������룬ÿ������һ����ĸ��
//���������
//���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����

int main()
{
    char arr[] = { 'A','a','E','e','I','i','O','o','U','u' };
    char a = 0;
    int i;
    int sz;
    sz = sizeof(arr) / sizeof(arr[0]);
    while (scanf("%c", &a) != EOF)
    {
        if (a != '\n')
        {
            for (i = 0; i < sz; i++)
            {
                if (a == arr[i])
                {
                    printf("Vowel\n");
                    break;
                }
                if (i == sz - 1)
                    printf("Consonant\n");
            }
        }
    }
    return 0;
}