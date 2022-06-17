//star pattern 15.c
#include<stdio.h>
int main()
{
    int i,j,k=0,x;
    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        x=1;
        for (int j = 1; j <= 5; j++)
        {
            if (j>=6-k)
            {
                printf("%d",x++);
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