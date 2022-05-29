#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>


// BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

// 输入描述：
// 每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
// 输出描述：
// 针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。


int main()

{
    int n;
    int h;
    int m;
    int p;
    int a;

    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%d", &m);
    if (m <= (n * h))
    {
        if ((m % h) != 0) //判断kiki是否正在喝一瓶而且没喝完

        {
            p = m / h + 1; //kiki实际喝的瓶数
            p = n - p; //还未喝的酸奶
            printf("%d", p);
        }
        else
        {
            p = m / h;
            p = n - p;
            printf("%d", p);
        }

    }
    else
        printf("输入错误，请重新输入！");
    return 0;
}