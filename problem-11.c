#include<stdio.h>
long long int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int t,i,num;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        printf("%lld\n",fact(num));
    }
    return 0;
}

