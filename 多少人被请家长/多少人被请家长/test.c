#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n;
    int ch, en, mt;
    int count;
    double tmp;
    scanf("%d", &n);
    while (scanf("%d %d %d", &ch, &en, &mt) != EOF)
    {
        tmp = (ch + en + mt) / 3.0;
        if (tmp < 60)
            count++;
    }
    printf("%d", count);
    return 0;
}