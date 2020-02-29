#include<stdio.h>
int isPrime(int n)
{
    int flag=0,i;
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        if((n&1)==0)
        {
            return 0;
        }else{
            for(i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    return 0;
                }
            }
            if(flag==0)
            {
                return 1;
            }
        }
    }
}
int main()
{
    int t,i,n1,n2,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n1,&n2);
        for(;n1<=n2;n1++)
        {
            if(isPrime(n1))
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}

