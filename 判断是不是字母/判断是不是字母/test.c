#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    char a = 0;
    while ((scanf("%c", &a)) != EOF)
    {
        getchar();// 当遇见字符时，输出的时候回车\n 空格\r 等转义字符也会被字符输出,所以这里用则会该函数来吸收掉回车键导致的\n
        if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
            printf("%c is an alphabet.\n", a);
        else
            printf("%c is not an alphabet.\n", a);
    }
    return 0;
}