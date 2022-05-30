#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//描述
//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)
//输入描述：
//输入一个浮点数f(1 <= f<= 100000)
//输出描述：
//输出浮点数,保留3位小数


int main()

{
    float f, c;
    scanf("%f", &f);
    c = 5.0 / 9 * (f - 32);// 要想c为浮点数，/两边只要有一边为浮点数就行
    printf("%.3f", c);


    return 0;
}