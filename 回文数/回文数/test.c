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
    for (i = 1; i <= n; i++)  // 这里首先通过循环得到得到我们寻妖判断的整数
    {
        int tmp = 0;
        ret1 = i;  // 避免下面得到整数时将 i 修改造成死循环
        while (ret1) // 再通过循环得到逆序一个个的整数(例如 ：12345  就可以得到 {5,4,3,2,1)，依次放入数组中
        {
            arr[count] = ret1 % 10;
            ret1 /= 10;
            count++;
        }
        ret2 = count;
        for (j = 0; j < ret2; j++) //这里通过算数关系得到 逆序数 组成的一个整数（例如：由上面得到的数组里存的是{5，4，3，2，1，}，通过以下的计算就可以得到 整数 54321 ）
        {
            tmp += arr[j] * pow(10, count - 1);
            count--;
        }

        if (tmp == i)  // 再与原来的正序的整数（12345）比较，相等就证明原来的正序的整数就是回文数，不相等就证明不是回文数
        {
            printf("%d\n", tmp);
        }

    }
    return 0;
}