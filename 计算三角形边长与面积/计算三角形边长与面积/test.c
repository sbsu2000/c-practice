#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
// �����������ܳ�����������׹�ʽ��
int main()
{
    //����sart����������double���ͣ��ҾͰ������õõ��Ĳ�������Ϊ double
    double a;
    double b;
    double c;
    double p;
    double l;
    double s;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)// ���ж�һ�������Ƿ��ܹ���������
    {
        l = a + b + c; //���ܳ�
        //ʹ�ú��׹�ʽ�������������������ʧ���ȣ������� ��*��/2 ��ԭ���Ǹ��Ӷ�̫����
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2lf area=%.2lf", l, s);
    }
    else
        printf("�ⲻ�Ǹ����������ߣ�");

    return 0;
}
