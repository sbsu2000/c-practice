#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����������
//ÿ�������������������n��m��(1 �� n �� 10E9��1 �� m �� 10E9)

//���������
//����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�

int main()
{
    long long int n, m, i, j, tmp;
    scanf("%lld %lld", &n, &m);
    if (n > m) //�ҵ�����������С����
    {
        tmp = n;
        n = m;
        m = tmp;
    }

    for (i = n; i > 1; i--) // �����Լ��
    {
        if ((m % i == 0) && (n % i == 0)) // �ҵĴ������ if (m % i && n % i == 0)
        {                                // ���ȼ� && > % > ==
            break;
        }
    }
    j = (n * m / i) + i; //


    printf("%lld", j); //�������������Լ������С������֮�� = ���������Ļ�
    return 0;
}
