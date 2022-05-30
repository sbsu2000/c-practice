#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//描述
//牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。
//其中 π  取 3.14 ，h和 r是整数。
//输入描述：
//输入杯子的高度 h ，底面半径 r 。
//输出描述：
//输出牛牛最少要喝多少杯水


int main()

{
    int n;
    float h, r, v;
    scanf("%f %f", &h, &r);
    v = 3.14 * h * (r * r);//算出杯子体积
    n = 10000 / v;
    if (10000 % ((int)v) != 0)//假设喝的到九杯多，则只需要再喝一杯就行
        n += 1;
    printf("%d", n);
    return 0;
}