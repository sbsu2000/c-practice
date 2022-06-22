#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    float price;
    scanf("%f", &price);
    if (price >= 100 && price < 500)
        price *= 0.9;
    else if (price >= 500 && price < 2000)
        price *= 0.8;
    else if (price >= 2000 && price < 5000)
        price *= 0.7;
    else if (price >= 5000)
        price *= 0.6;
    printf("%.1f", price);


    return 0;
}