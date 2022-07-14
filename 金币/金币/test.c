#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int k;
    int tmp = 0;
    int count = 0;
    int i, j;
    scanf("%d", &k); // 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5
    for (i = 1; i <= k; i++)   // 获得的金币数
    {
        for (j = 1; j <= i; j++)  //获得该金币数的总天数
        {
            if (count == k)
                break;        // 达到了用户获得金币的天数，就跳出，虽然后面几天也可以获得这么多金币，但是用户设置天数满了，必须跳出
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