// //star pattern 9.c
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j<=5-i||j>=3+i)
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
//star pattern 9.c
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for (int i = 1; i <=4; i++)
//     {
//         k='A';
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j<=5-i||j>=3+i)
//             {
//                 printf("%c",k);
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
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for (int i = 1; i <=4; i++)
//     {
//         k='A';
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j<=5-i||j>=3+i)
//             {
//                 printf("%c",k);
//                 k++;
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
    int i,j,k;
    for (int i = 1; i <=4; i++)
    {
        k='A';
        for (int j = 1; j <= 7; j++)
        {
            if (j<=5-i||j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if (j==4)
                {
                    k--;
                }
                
            }           
        }
        printf("\n");        
    }
    return 0;    
}