#include<stdio.h>
int main()
{
    int t,k;
    long long int A,B,C,i;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&A,&B,&C);
        for(i=C;i<=B;i+=C){
            if(i>=A){
                printf("%lld\n",i);
            }
        }
        printf("\n");
    }
    return 0;
}
