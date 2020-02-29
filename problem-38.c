#include<stdio.h>
int main()
{
    int t,n,m,i,j,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(i==j){
                    printf("%d",m);
                }else{
                    printf("%d ",m);
                }
            }
            printf("\n");
        }
        for(i=n-1;i>=1;i--){
            for(j=1;j<=i;j++){
                if(i==j){
                    printf("%d",m);
                }else{
                    printf("%d ",m);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
