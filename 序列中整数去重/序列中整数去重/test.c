#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    int count;
    int* arr = (int*)calloc(n, sizeof(int)); // ��̬��������
    scanf("%d", &n);
    // �������ʱ��ͽ��бȽϣ�����Ѿ������������������Ѿ����˲���������
    for (i = 0; i < n; i++)
    {
        count = 0;
        if (i == 0)  // Ŀ����Ϊ�˽���һ�����������ȥ����һ�������������������
        {
            scanf("%d ", &arr[0]);
        }
        else
        {
            int tmp;
            scanf("%d ", &tmp);
            for (j = 0; j < i; j++)
            {
                if (arr[j] == tmp)
                {
                    count++;
                    i--;
                    n--;
                    break;
                }
            }
            if (count == 0)
            {
                arr[i] = tmp;
            }
        }



    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}