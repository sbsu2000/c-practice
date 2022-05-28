#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
// 计算三角形周长与面积（海伦公式）
int main()
{
    //由于sart参数类型是double类型，我就把所有用得到的参数类型为 double
    double a;
    double b;
    double c;
    double p;
    double l;
    double s;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)// 先判断一下三遍是否能构成三角形
    {
        l = a + b + c; //算周长
        //使用海伦公式计算面积（坏处：会损失精度），不用 底*高/2 的原因是复杂度太高了
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2lf area=%.2lf", l, s);
    }
    else
        printf("这不是个三角形三边！");

    return 0;
}
