#include<stdio.h>
int main()
{
    int t,i,total,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&total);
        int ara[total];
        for(j=0;j<total;j++)
        {
            scanf("%d",&ara[j]);
        }
        printf("%d",ara[0]);
        for(j=2;j<total;j+=2)
        {
            printf(" %d",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
