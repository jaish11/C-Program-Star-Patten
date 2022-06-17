// // //wap to print pattern
// // #include<stdio.h>
// // int main()
// // {
// //     int i,j;
// //     for (int i = 0; i < 5; i++)
// //     {
// //         for (int j = 0; j < 5; j++)
// //         {
// //             if (j<=i)
// //             {
// //                 printf("*");
// //             }
// //             else
// //             {
// //                 printf(" ");
// //             }            
// //         }
// //         printf("\n");        
// //     }
// //     return 0;    
// // }
// //wap to print pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("Enter number of row:");
//     scanf("%d",&n);

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <i; j++)
//         {            
//             if (j<=i)
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
//wap to print pattern
#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter no of n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
         //k=1;
        for (int j = 0; j < n; j++)
        {
            if (j<=i)
            {
                printf("%d ",k++);
            
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