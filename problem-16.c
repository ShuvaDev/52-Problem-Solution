#include<stdio.h>
#include<string.h>
void reverse_print(char str[])
{
    char ara[200];
    char *token;
    int len,i;
    token=strtok(str," ");
    while(token!=NULL)
    {
        strcpy(ara,token);
        len=strlen(ara);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",ara[i]);
        }
        token=strtok(NULL," ");
        if(token!=NULL)
        {
            printf(" ");
        }else{
            printf("\n");
        }
    }
}
int main()
{
    int t,i,j,len;
    char str[1002];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        reverse_print(str);
    }
    return 0;
}
