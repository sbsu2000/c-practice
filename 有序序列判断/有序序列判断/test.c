#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ī�������뵽��д����ͨ���������������
int main()
{
    int n, m;
    int i;
    int count1 = -1; // ��ΪҪ��arr[0]��ֵ��tmp������������տ�ʼΪ0�����������ʼ��Ϊ-1
    int count2 = 0;
    int tmp = 0;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] >= tmp) // ��������������count1����0������conut2��һֱΪ0��ֻҪ�������Ϊ����count2������0
        {
            count1++;
            tmp = arr[i];
        }
        else if (arr[i] < tmp) //ͬ����
        {
            count2++;
            tmp = arr[i];
        }

    }

    if ((count1 != 0) && (count2 != 0))
        printf("unsorted\n");
    else
        printf("sorted\n");


    return 0;
}