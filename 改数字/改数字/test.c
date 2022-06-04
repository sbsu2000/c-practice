#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//描述
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。


//输入描述：
//输入包含一个整数n (0 ≤ n ≤ 109)

//输出描述：
//输出一个整数，即小乐乐修改后得到的数字。

int main()
{
    int a;
    int i = 0;
    int p;
    int tmp = 0;
    scanf("%d", &a);
    while (a)
    {
        p = a % 10;
        if (0 == (p % 2))
            p = 0;
        else
            p = 1;
        tmp = tmp + p * pow(10, i++);
        a /= 10;
    }
    printf("%d", tmp);
    return 0;
}