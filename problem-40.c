#include<stdio.h>
#include<string.h>
int pow1(int x,int k)
{
    if(k==0)
        return 1;
    else
        return x*pow1(x,k-1);
}
int main()
{
    int t,X,K,i,sum=0;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d %d",&X,&K);
        for(i=0;i<=K;i++)
        {
            sum+=pow1(X,i);
        }
        printf("Result = %d\n",sum);
        sum=0;
        t--;
    }
    return 0;
}
