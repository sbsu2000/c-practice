#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述
//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述：
//多组输入，每行输入一个字母。
//输出描述：
//针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。

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