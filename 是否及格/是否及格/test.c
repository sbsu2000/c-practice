#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int score;
    do
    {
        scanf("%d", &score);
        if (score >= 60)
            printf("Pass");
        else
            printf("Fail");
        printf("\n");
    } while (scanf("%d", &score) != EOF);


    return 0;
}