#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����
//ţţ�Ӽ����������� x �����ұ߽� l �� r �����������������ж� x �Ƿ��� l �� r ֮��
//����������
//�������� x ��l ��r �����������ÿո������
//���������
//������������ true ��������� false

int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x >= l && x <= r)
        printf("true");
    else
        printf("false");
    return 0;
}