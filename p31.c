//star pattern 31
#include<stdio.h>
int main()
{
    int i,j,k,line,num;
    char alpha;
    printf("Enter the number of line:");
    scanf("%d",&line);
    for(i=1;i<=4;i++)
    {
        k=1;
        num=1;
        alpha='A';
        for(j=1;j<=2*line-1;j++)
        {
            if (j>=line+1-i&&j<=line-1+i)
            {
                if (k)
                {
                    if (i%2==1)
                    {
                        printf("%d",num++);
                    }
                    else
                    {
                        printf("%c",alpha++);
                    }
                }
                else
                {
                    printf(" ");
                }
                k=1-k;
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