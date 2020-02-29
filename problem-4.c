#include<stdio.h>
int main()
{
    int t,i,num,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        printf("Case %d: ",i);
        for(j=1;j<=((int)(num/2));j++)
        {
            if(num%j==0){
                printf("%d ",j);
            }
        }
        printf("%d\n",num);
        j=1;
    }
    return 0;
}

