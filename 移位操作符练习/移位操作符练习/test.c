#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

// ����������������2��n�η�

int main()

{

    int n;
    int b = 0;
    scanf("%d", &n);

    b = 1 << n;//������� b = n << 1,û���������

    printf("%d", b);

    return 0;
}