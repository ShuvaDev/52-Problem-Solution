#include<stdio.h>
void print(int n)
{
    if(n==1){
        printf("2 + 1");
        return;
    }else{
        printf("%d^%d + ",2,n);
    }
    print(n-1);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n==0){
            printf("1");
        }else{
            print(n);
        }
        printf("\n");
    }
    return 0;
}
