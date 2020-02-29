#include<stdio.h>
int main()
{
    int t,i,n1,n2,n3,m1,m2,m3;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n1,&n2,&n3);
        if(n1<n2 && n1<n3){
            m1=n1;
        }else if(n2<n1 && n2<n3){
            m1=n2;
        }else{
            m1=n3;
        }
        if(m1==n1)
        {
            if(n2<n3)
            {
                 m2=n2;
                 m3=n3;
            }
            else
            {
                m2=n3;
                m3=n2;
            }
        }else if(m1==n2)
        {
            if(n1<n3)
            {
                 m2=n1;
                 m3=n3;
            }
            else
            {
                m2=n3;
                m3=n1;
            }
        }else{
            if(n1<n2)
            {
                 m2=n1;
                 m3=n2;
            }
            else
            {
                m2=n2;
                m3=n1;
            }
        }
        printf("Case %d: %d %d %d\n",i,m1,m2,m3);
    }
    return 0;
}
