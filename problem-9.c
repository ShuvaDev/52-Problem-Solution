#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&num);
        n=(int)sqrt(num);
        if((n*n)==num)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
