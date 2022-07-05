#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int i;
    int tmp, ret;
    int count = 0;
    for (i = 1; i <= 2019; i++)
    {
        tmp = i;
        while (tmp)
        {
            ret = tmp % 10;
            if (ret == 9)
            {
                count++;
                break;
            }

            else
                tmp /= 10;

        }

    }
    printf("%d", count);
    return 0;
}