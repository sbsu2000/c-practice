#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

//描述
//牛牛刚接触等差数列， 他知道等差数列是每项与前一项的差值都相等的数列，已知第一项 a 和第二项 b 的值，他想知道第三项是多少。
//输入描述：
//输入等差数列的第一、二项 a ， b    
//输出描述：
//输出等差数列第三项的值

int main()

{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    d = b - a;
    c = b + d;
    printf("%d", c);


    return 0;
}