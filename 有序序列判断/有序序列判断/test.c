#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//莫名其妙想到的写法，通过两个变量来监测
int main()
{
    int n, m;
    int i;
    int count1 = -1; // 因为要把arr[0]赋值给tmp，让这个变量刚开始为0，所以这里初始化为-1
    int count2 = 0;
    int tmp = 0;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] >= tmp) // 如果是升序，这里的count1大于0，而且conut2会一直为0；只要从升序变为降序，count2便会大于0
        {
            count1++;
            tmp = arr[i];
        }
        else if (arr[i] < tmp) //同上理
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