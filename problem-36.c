#include<stdio.h>
int main()
{
    long long int n,div,rem,sum=0;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        div=n;
        while(div!=0){
            rem=div%10;
            sum=sum*10+rem;
            div=div/10;
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
