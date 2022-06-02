#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入描述：
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 10E9，1 ≤ m ≤ 10E9)

//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。

int main()
{
    long long int n, m, i, j, tmp;
    scanf("%lld %lld", &n, &m);
    if (n > m) //找到两个数中最小的数
    {
        tmp = n;
        n = m;
        m = tmp;
    }

    for (i = n; i > 1; i--) // 求最大公约数
    {
        if ((m % i == 0) && (n % i == 0)) // 我的错误代码 if (m % i && n % i == 0)
        {                                // 优先级 && > % > ==
            break;
        }
    }
    j = (n * m / i) + i; //


    printf("%lld", j); //这两个数的最大公约数与最小公倍数之积 = 这两个数的积
    return 0;
}
