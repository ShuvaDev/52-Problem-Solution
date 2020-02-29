#include<stdio.h>
int main()
{
    int t,i;
    long long int A,B,C,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld%lld",&A,&B,&C);
        for(j=A*B;j<=C;j+=A*B){
            printf("%d\n",j);
        }
        if(i<t){
            printf("\n");
        }
    }
    return 0;
}
