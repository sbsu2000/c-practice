#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>


// BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�

// ����������
// ÿ�������һ�У�����n��h��m����Ϊ���������������ݱ�֤m <= n * h��
// ���������
// ���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺�����


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
        if ((m % h) != 0) //�ж�kiki�Ƿ����ں�һƿ����û����

        {
            p = m / h + 1; //kikiʵ�ʺȵ�ƿ��
            p = n - p; //��δ�ȵ�����
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
        printf("����������������룡");
    return 0;
}