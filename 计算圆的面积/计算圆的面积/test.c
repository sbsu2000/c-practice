#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>


//����
//ţţ��һ���뾶Ϊ r ��Բ������������Բ�������
//Բ�������ʽ�� �С�(r*r) ���Ц�ȡ 3.14
//����������
//����һ���뾶 r
//���������
//���Բ�����


int main()

{
    float r, s;
    scanf("%f", &r);
    s = 3.14 * (r * r);
    printf("%.2f", s);
    return 0;
}