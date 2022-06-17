// //star pattern 18.c
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             if (j>=i&&j<=10-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//star pattern 18.c
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if (j>=i&&j<=10-i)
            {
                printf("%d",k++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}