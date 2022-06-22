#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    float a;
    float price = 0;
    char b;
    scanf("%f %c", &a, &b);
    if (a <= 1)
    {
        price += 20;
    }
    else
    {
        if (a - (int)a != 0)
        {
            price = 20 + (int)a;
        }
        else
        {
            price = 20 + (a - 1);
        }
    }
    if (b == 'y')
    {
        price += 5;
    }

    printf("%.f", price);


    return 0;
}