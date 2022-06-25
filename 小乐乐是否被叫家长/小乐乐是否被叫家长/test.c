#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int mh, ch, eh;
    scanf("%d %d %d", &mh, &ch, &eh);
    if ((mh + ch + eh) / 3.0 >= 60)
        printf("NO");
    else
        printf("YES");
    return 0;
}