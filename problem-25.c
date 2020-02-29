#include<stdio.h>
int main()
{
    int t,a,b,GCD,LCM,rem,a1,b1,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        a1=a;
        b1=b;
        if(a==0){
            GCD=b;
        }else if(b==0){
            GCD=a;
        }else{
            while((rem=(a%b))!=0){
                a=b;
                b=rem;
            }
            GCD=b;
        }
        printf("LCM = %d\n",a1*b1/GCD);
    }
    return 0;
}
