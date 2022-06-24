#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int year, mon;
    while (scanf("%d %d", &year, &mon) != EOF)
    {
        switch (mon)
        {
        case 1:
            printf("%d\n", 31);
            break;
        case 2:
            if ((0 == year % 4 && year % 100 != 0) || (0 == year % 100 && 0 == year % 400)) //这里需要判断闰年还是平年
                printf("%d\n", 29);
            else
                printf("%d\n", 28);
            break;
        case 3:
            printf("%d\n", 31);
            break;
        case 4:
            printf("%d\n", 30);
            break;
        case 5:
            printf("%d\n", 31);
            break;
        case 6:
            printf("%d\n", 30);
            break;
        case 7:
            printf("%d\n", 31);
            break;
        case 8:
            printf("%d\n", 31);
            break;
        case 9:
            printf("%d\n", 30);
            break;
        case 10:
            printf("%d\n", 31);
            break;
        case 11:
            printf("%d\n", 30);
            break;
        case 12:
            printf("%d\n", 31);
            break;



        }
    }
    return 0;
}