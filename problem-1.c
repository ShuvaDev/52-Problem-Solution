#include<stdio.h>
int main()
{
    int t,i,num;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        if((num&1)==0)
        {
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return 0;
}
