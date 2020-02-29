#include<stdio.h>
int main()
{
    int t,i,num,total=0,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        total=0;
        scanf("%d",&num);
        for(j=5;j<=num;j=j*5){
            total=total+num/j;
        }
        printf("%d\n",total);
    }
    return 0;
}
