#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述
//牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。请你判断 x 是否在 l 和 r 之间
//输入描述：
//依次输入 x ，l ，r 三个整数。用空格隔开。
//输出描述：
//如果存在则输出 true ，否则输出 false

int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x >= l && x <= r)
        printf("true");
    else
        printf("false");
    return 0;
}