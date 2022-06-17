// //star pattern 11
// #include<stdio.h>
// int main()
// {
//     int i,j,k=0,row;
//     printf("ENter the number of row:");
//     scanf("%d",&row);
//     for(i=1;i<=row;i++)
//     {
//         i<=(row+1)/2?k++:k--;
//         for(j=1;j<=(row+1)/2;j++)
//         {
//             if (j<=k)
//             {
//                 printf(" * ");
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
//star pattern 11
#include<stdio.h>
int main()
{
    int i,j,k=0,row;
    printf("ENter the number of row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
       if (row%2==0)
       {
           if (i<=row/2)
           {
               k++;
           }
           if (i>row/2+1)
           {
               k--;
           }                            
        }   
        else
        {
            i<=(row+1)/2?k++:k--;
        }
            
        for(j=1;j<=(row+1)/2;j++)
        {
            if (j<=k)
            {
                printf(" * ");
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