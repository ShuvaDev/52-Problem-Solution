#include<stdio.h>
int main()
{
    int t,k;
    long long int mul,n,x,i;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%lld%lld",&x,&n);
        if(x>n){
            printf("Invalid!\n");
        }else{
            for(i=x;i<=n;i+=x){
                printf("%lld\n",i);
            }
        }
        printf("\n");
    }
    return 0;
}
