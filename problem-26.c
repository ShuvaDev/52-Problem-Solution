#include<stdio.h>
int main()
{
    int t,count=0;
    double x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&x);
        while(x>=1.0)
        {
            x=x/2;
            count++;
        }
        printf("%d days\n",count);
        count=0;
    }
    return 0;
}
