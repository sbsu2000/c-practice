#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int ret1, ret2;
    int arr[20];
    int i, j;
    int count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)  // ��������ͨ��ѭ���õ��õ�����Ѱ���жϵ�����
    {
        int tmp = 0;
        ret1 = i;  // ��������õ�����ʱ�� i �޸������ѭ��
        while (ret1) // ��ͨ��ѭ���õ�����һ����������(���� ��12345  �Ϳ��Եõ� {5,4,3,2,1)�����η���������
        {
            arr[count] = ret1 % 10;
            ret1 /= 10;
            count++;
        }
        ret2 = count;
        for (j = 0; j < ret2; j++) //����ͨ��������ϵ�õ� ������ ��ɵ�һ�����������磺������õ�������������{5��4��3��2��1��}��ͨ�����µļ���Ϳ��Եõ� ���� 54321 ��
        {
            tmp += arr[j] * pow(10, count - 1);
            count--;
        }

        if (tmp == i)  // ����ԭ���������������12345���Ƚϣ���Ⱦ�֤��ԭ����������������ǻ�����������Ⱦ�֤�����ǻ�����
        {
            printf("%d\n", tmp);
        }

    }
    return 0;
}