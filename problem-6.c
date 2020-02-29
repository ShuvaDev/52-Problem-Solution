#include<stdio.h>
int main()
{
    int t,sum,i;
    scanf("%d",&t);
    char str[6];
    for(i=1;i<=t;i++)
    {
        scanf("%s%*c",str);
        sum=(str[0]-48)+(str[4]-48);
        printf("Sum = %d\n",sum);
    }
    return 0;
}
