#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    double ret;
    double tmp = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //ͨ��ѭ���õ���ĸ
    {
        ret = 1.0 / i; // �õ�ÿһ��
        tmp += ret;
    }
    printf("%.6lf", tmp);
    return 0;
}