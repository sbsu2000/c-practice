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
            tmp += (arr[i] - '0') * j;  //从数字字符得到得到数字并且计算
            j++;
        }
    if (tmp % 11 == (arr[12] - '0')) //算出的正确数字和字符中的识别码相同
        printf("Right");
    else if (tmp % 11 == 10) //又或者算出的数字是 10 
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

    else  //算出的数字和识别码不同
    {
        arr[12] = (tmp % 11) + '0';
        printf("%s", arr);
    }

    return 0;
}