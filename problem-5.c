#include<stdio.h>
int main()
{
    int t,i,num,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
            for(k=1;k<=num;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i<t)
        {
             printf("\n");
        }
    }
    return 0;
}
