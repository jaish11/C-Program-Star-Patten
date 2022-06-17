// // star pattern 28
// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++)
//     {
//         k=1;
//         for (j = 1; j <= 9; j++)
//         {
//             if (j<=2*i-1)
//             {
//                 if (k == 1)
//                 {
//                     printf("#");
//                 }
//                 else
//                 {
//                     printf("*");
//                 }
//                 k = 1 - k;
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
// star pattern 28
#include <stdio.h>
int main()
{
    int i, j,flag ,k=0,p;
    for (i = 1; i <= 5; i++)
    {
        if (i%2==1)
        {
            k=k+1;
        }
        else
        {
            k--;
            k=k+i;
        }
        flag=1;
        p=k;
        for (j = 1; j <= 9; j++)
        {
            if (j<=2*i-1)
            {
                if (flag == 1)
                {
                    printf("%d",p);
                    if (i%2)
                    {
                        p++;
                        k++;
                    }
                    else
                    {
                        p--;
                    }                    
                }
                else
                {
                    printf("*");
                }
                flag = 1 - flag;
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