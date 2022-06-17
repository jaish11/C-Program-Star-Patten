#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of row:");
    scanf("%d",&n);
   // k=1;
    for (int i = 1; i <= n; i++)
    {
        k=1;
        for (int j = 1; j <= n+i-1; j++)
        {
            if (j>=6-i&&j<=4+i)
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
}
    
// /#include<stdio.h>
// int main()
// {
//     int i,j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j>=6-i&&j<=4+i)
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