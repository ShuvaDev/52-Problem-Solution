#include<stdio.h>
int even[21];
int odd[21];
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int x=1;x<=t;x++){
        scanf("%d",&n);
        if(n==0){
            printf("1\n");
        }
        else if(n==1){
            printf("1\n");
            printf("%d %d\n",1,1);
        }else if(n==2){
            even[0]=1;
            even[1]=1;
            printf("%d\n",1);
            printf("%d %d\n",even[0],even[1]);
            printf("%d %d %d\n",even[0],2,even[1]);
        }else{
            printf("1\n");
            even[0]=1;even[1]=1;
            printf("%d %d\n",even[0],even[1]);
            for(int i=3;i<=n+1;i++)
            {
                if(i%2!=0){
                    odd[0]=1;
                    for(int j=1;j<i-1;j++){
                       odd[j] =even[j]+even[j-1];
                    }
                    odd[i-1]=1;
                    printf("%d",odd[0]);
                    for(int k=1;k<i;k++){
                        printf(" %d",odd[k]);
                    }
                    printf("\n");
                }else{
                    even[0]=1;
                    for(int j=1;j<i-1;j++){
                       even[j] =odd[j]+odd[j-1];
                    }
                    even[i-1]=1;
                    printf("%d",even[0]);
                    for(int k=1;k<i;k++){
                        printf(" %d",even[k]);
                    }
                    printf("\n");
                }
            }
        }
        if(x<t){
            printf("\n");
        }
    }
    return 0;
}
