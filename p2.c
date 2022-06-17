// //wap to print star pattern 
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             if (j>=6-i)
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
#include<stdio.h>
int main()
{
    int i,j,n,k;
    //int k=1;
    printf("Enter number of row:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        k=1;
        for (int j = 1; j <= n; j++)
        {
            if (j>=6-i)
            {
                printf("%d",k++);
               // printf("*");
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