#include<stdio.h>
int main()
{
    int ara[]={6,28,496,8128,33550336};
    int t,n,i=0,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d",&n);
        i=0;
        while(1){
            if(i<5){
                if(ara[i]<=n){
                    printf("%d\n",ara[i]);
                }else{
                    break;
                }
                i++;
            }else{
                break;
            }
        }
        if(k<t){
        printf("\n");

        }
    }
    return 0;
}
