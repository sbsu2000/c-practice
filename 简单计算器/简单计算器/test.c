#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int main()
{
    double a, b, tmp;
    char ret;
    char arr[4] = { '+','-','*','/' };
    scanf("%lf%c%lf", &a, &ret, &b);

    if (arr[0] == ret)  //加法操作
    {
        tmp = a + b;
        printf("%.4lf+%.4lf=%.4lf", a, b, tmp);
    }
    else if (arr[1] == ret)  //减法操作
    {
        tmp = a - b;
        printf("%.4lf-%.4lf=%.4lf", a, b, tmp);
    }
    else if (arr[2] == ret) //乘法操作
    {
        tmp = a * b;
        printf("%.4lf*%.4lf=%.4lf", a, b, tmp);
    }
    else
    {
        if (arr[3] == ret) //减法操作
        {
            if (0.0 == b)
                printf("Wrong!Division by zero!");// 操作数2为0时；
            else
            {
                tmp = a / b;
                printf("%.4lf/%.4lf=%.4lf", a, b, tmp);
            }
        }
        else
            printf("Invalid operation!");  // 输入的操作符错误时
    }

    return 0;
}