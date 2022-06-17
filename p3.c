// //wap to print star pattern 
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j>=i)
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
    printf("enter number of row:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    { 
        k=1;
        for (int j = 1; j <= n; j++)
        {
            if (j>=i)
            {
               printf("%d ",k++);
               // printf("* ");
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