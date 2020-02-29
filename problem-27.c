#include<stdio.h>
int t;
int main()
{
    int t,n,sum=0,div,rem,i,x=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        div=n;
        while(div!=0){
            rem=div%10;
            for(i=1;i<=3;i++)
            {
                x=x*rem;
            }
            sum+=x;
            x=1;
            div=div/10;
        }
        if(sum==n){
            printf("%d is an armstrong number!\n",n);
        }else{
            printf("%d is not an armstrong number!\n",n);
        }
        sum=0;
    }
    return 0;
}
