#include<stdio.h>
int isPrime(long long int n){
    long long int i;
    if(n==2){
        return 1;
    }else if((n&1)==0){
        return 0;
    }else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(isPrime(n)){
            printf("%lld is a prime\n",n);
        }else{
            printf("%lld is not a prime\n",n);
        }
    }
    return 0;
}
