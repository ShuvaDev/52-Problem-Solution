#include<stdio.h>
double fact(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int t,n,i;
    double sum=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            sum=sum+(i/fact(i));
        }
        printf("%.4lf\n",sum);
        sum=0;
    }
    return 0;
}
