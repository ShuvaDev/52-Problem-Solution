#include<stdio.h>
int main()
{
    int t,i,n1,n2,j,k,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n1);
        int a[n1];
        for(j=0;j<n1;j++){
            scanf("%d",&a[j]);
        }
        scanf("%d",&n2);
        int b[n2];
        for(j=0;j<n2;j++){
            scanf("%d",&b[j]);
        }
        int c[n1+n2];
        for(j=0;j<n1;j++){
            c[j]=a[j];
        }
        for(k=0;k<n2;k++,j++){
            c[j]=b[k];
        }
        for(k=0;k<n1+n2;k++)
        {
            for(j=0;j<(n1+n2)-1-k;j++){
                if(c[j]>c[j+1]){
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;
                }
            }
        }
        printf("%d",c[0]);
        for(k=1;k<n1+n2;k++)
        {
            printf(" %d",c[k]);
        }
        printf("\n");
    }
    return 0;
}
