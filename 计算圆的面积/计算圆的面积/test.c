#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>


//描述
//牛牛有一个半径为 r 的圆，请你计算这个圆的面积。
//圆的面积公式是 π×(r*r) 其中π取 3.14
//输入描述：
//输入一个半径 r
//输出描述：
//输出圆的面积


int main()

{
    float r, s;
    scanf("%f", &r);
    s = 3.14 * (r * r);
    printf("%.2f", s);
    return 0;
}