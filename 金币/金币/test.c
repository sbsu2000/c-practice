#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int k;
    int tmp = 0;
    int count = 0;
    int i, j;
    scanf("%d", &k); // 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5
    for (i = 1; i <= k; i++)   // ��õĽ����
    {
        for (j = 1; j <= i; j++)  //��øý������������
        {
            if (count == k)
                break;        // �ﵽ���û���ý�ҵ�����������������Ȼ���漸��Ҳ���Ի����ô���ң������û������������ˣ���������
            else
            {
                tmp += i;
                count++;
            }
        }
    }
    printf("%d", tmp);
    return 0;
}