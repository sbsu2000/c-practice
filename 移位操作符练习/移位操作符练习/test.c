#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

// 不运用算术符号算2的n次方

int main()

{

    int n;
    int b = 0;
    scanf("%d", &n);

    b = 1 << n;//错误代码 b = n << 1,没有理解题意

    printf("%d", b);

    return 0;
}