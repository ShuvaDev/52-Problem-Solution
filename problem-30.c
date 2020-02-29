#include<stdio.h>
int perfect(unsigned long long int n)
{
    int i;
    unsigned long long int sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int t;
    unsigned long long int n;
    scanf("%d",&t);
    while(t)
    {
        scanf("%llu",&n);
        if((n&1)==0)
        {
            if(perfect(n)){
                printf("YES, %d is a perfect number!\n",n);
            }else{
                printf("NO, %d is not a perfect number!\n",n);
            }
        }else{
            printf("NO, %d is not a perfect number!\n",n);
        }
        t--;
    }
}
