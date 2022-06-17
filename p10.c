// ///star pattern 10
// #include<stdio.h>
// int main()
// {
//     int i,j,k=0;
//     for(i=1;i<=7;i++)
//     {
//         i<=4?k++:k--;
//         for(j=1;j<=7;j++)
//         {
//             if (j>=5-k&&j<=3+k)
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
///star pattern 10
// #include<stdio.h>
// int main()
// {
//     int i,j,k=0,row,n;
//     printf("Enter the no of row:");
//     scanf("%d",&row);
//     n=(row+1)/2;
//     for(i=1;i<=row;i++)
//     {
//         i<=n?k++:k--;
//         for(j=1;j<=row;j++)
//         {
//             if (j>=n+1-k&&j<=n-1+k)
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
    int i,j,k=0,row,n;
    printf("Enter the no of row:");
    scanf("%d",&row);
    n=(row+1)/2;
    for(i=1;i<=row;i++)
    {
        if (row%2==0)
        {
            if (i<=n)
            {
                k++;
            }
            if (i>n+1)
            {
                k--;
            }           
        }
        else
        {
            i<=n?k++:k--;
        }
        
        
        for(j=1;j<=row;j++)
        {
            if (j>=n+1-k&&j<=n-1+k)
            {
                printf("*");
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