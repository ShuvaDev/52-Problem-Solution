#include<stdio.h>
int check_sorted(int ara[],int len)
{
    int i;
    for(i=0;i<len-1;i++)
    {
        if(ara[0]<ara[1]){
            if(ara[i]>ara[i+1]){
                return 0;
            }
        }else{
            if(ara[i]<ara[i]){
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    if(check_sorted(ara,n)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
