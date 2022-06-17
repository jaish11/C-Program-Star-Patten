// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j<=6-i)
//             {
//                 printf("* ");
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
    //k=1;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for (int i = 1; i <= 5; i++)
    {
        k=1;
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf(" %d ",k++);
               //printf("*");
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