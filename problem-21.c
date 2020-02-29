#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int t,i,len,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        len=strlen(str);
        for(j=len-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
