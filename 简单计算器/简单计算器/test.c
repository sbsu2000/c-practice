#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int main()
{
    double a, b, tmp;
    char ret;
    char arr[4] = { '+','-','*','/' };
    scanf("%lf%c%lf", &a, &ret, &b);

    if (arr[0] == ret)  //�ӷ�����
    {
        tmp = a + b;
        printf("%.4lf+%.4lf=%.4lf", a, b, tmp);
    }
    else if (arr[1] == ret)  //��������
    {
        tmp = a - b;
        printf("%.4lf-%.4lf=%.4lf", a, b, tmp);
    }
    else if (arr[2] == ret) //�˷�����
    {
        tmp = a * b;
        printf("%.4lf*%.4lf=%.4lf", a, b, tmp);
    }
    else
    {
        if (arr[3] == ret) //��������
        {
            if (0.0 == b)
                printf("Wrong!Division by zero!");// ������2Ϊ0ʱ��
            else
            {
                tmp = a / b;
                printf("%.4lf/%.4lf=%.4lf", a, b, tmp);
            }
        }
        else
            printf("Invalid operation!");  // ����Ĳ���������ʱ
    }

    return 0;
}