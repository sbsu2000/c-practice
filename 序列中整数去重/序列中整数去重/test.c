#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    int count;
    int* arr = (int*)calloc(n, sizeof(int)); // 动态分配数组
    scanf("%d", &n);
    // 在输入的时候就进行比较，如果已经输入的数组里的整数已经有了不用输入了
    for (i = 0; i < n; i++)
    {
        count = 0;
        if (i == 0)  // 目的是为了将第一个整数输入进去，第一个输入的数不可能有重
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