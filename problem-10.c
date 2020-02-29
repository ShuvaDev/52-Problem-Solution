#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,r1,r2,B;
    double rr,cr;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&r1,&r2,&B);
        if(r1<r2)
        {
            cr=((double)r2/(300-B))*6;
            rr=0;
            printf("%.2lf %.2lf\n",cr,rr);
        }else{
            cr=((double)r2/(300-B))*6;
            rr=(((r1+1)-r2)/(double)B)*6.0;
            printf("%.2lf %.2lf\n",cr,rr);
        }
    }
    return 0;
}
