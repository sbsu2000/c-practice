#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, tmp, x1, x2, ret;
    while (scanf("%f %f %f", &a, &b, &c) != EOF)
    {
        if (a != 0)
        {
            tmp = b * b - 4 * a * c;
            if (0 == b)
            {
                x1 = x2 = b;
                printf("x1=x2=%.2f\n", x1);
            }
            else if (0 == tmp)
            {
                x1 = -b / (2 * a);
                printf("x1=x2=%.2f\n", x1);
            }
            else if (tmp > 0)
            {
                x1 = (-b - sqrt(tmp)) / (2 * a);
                x2 = (-b + sqrt(tmp)) / (2 * a);
                printf("x1=%.2f;x2=%.2f\n", x1, x2);
            }
            else if (tmp < 0)
            {
                float real = -b / (2.0 * a);
                float imaginary = sqrt(-tmp) / (2.0 * a);
                if (imaginary < 0)
                    imaginary *= -1;
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real, imaginary, real, imaginary);
            }


        }
        else
            printf("Not quadratic equation");
    }




    return 0;
}