#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//以下是垃圾写法

// int main()
// {
//     int h;
//     while (scanf("%d",&h) != EOF )
//     { 
//         if (200 == h)
//             printf("%s","OK\n");
//         else if(202 == h)
//             printf("%s","Accepted\n");
//         else if(400 == h)
//             printf("%s","Bad Request\n");
//            else if(403 == h)
//             printf("%s","Forbidden\n");
//         else if(404 == h )
//             printf("%s","Not Found\n");
//         else if(500 == h)
//             printf("%s","Internal Server Error\n");
//         else if(502 == h)
//             printf("%s","Bad Gateway\n");
//         }


//     return 0;
// }

// 聪明写法
int main()
{
    int h;
    while (scanf("%d", &h) != EOF)
    {
        switch (h)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;

        }
    }
    return 0;
}