#include<stdio.h>
#include<math.h>
int isPrime(long long int n){
    long long int i;
    if(n==2){
        return 1;
    }else if(n%2==0){
        return 0;
    }else{
        for(i=3;i*i<=n;i+=2){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    long long int n,x,i;
    int flag=0;
    while(scanf("%lld",&n))
    {
        if(n==-1){
            break;
        }
        if(flag==1){
            printf("\n");
        }
        for(i=2;i*i<=n;i++){
            if(isPrime(i)){
                while(n%i==0){
                    printf("    %lld\n",i);
                    n/=i;
                }
            }
        }
        if(n>1){
            printf("    %lld\n",n);
        }
        flag=1;
    }
    return 0;
}
