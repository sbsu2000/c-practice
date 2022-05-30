#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述
//牛牛有一个半径为 r 的球，他想知道这个球的体积。
//其中 \pi \π  取3.14 ， r 是一个整数
//输入描述：
//输入球的半径
//输出描述：
//输出球的体积

int main()

{
    int r;
    float v;
    scanf("%d", &r);
    v = 4.0 / 3 * 3.14 * (r * r * r);// 4/3要写成4.0/3或4/3.0或4.0/3.0，这样才能算出小数，不然就是向上取整，精度丢失
    printf("%.2f", v);
    return 0;
}