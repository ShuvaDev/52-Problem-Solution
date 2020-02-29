#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char temp[100];
    scanf("%d",&n);
    char ara[n][100];
    for(i=0;i<n;i++){
        scanf(" %[^\n]s",&ara[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(ara[j],ara[j+1])>0){
                strcpy(temp,ara[j]);
                strcpy(ara[j],ara[j+1]);
                strcpy(ara[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",ara[i]);
    }
    return 0;
}
