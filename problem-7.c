#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,num,count=0;
    char str[10000],*token;
    scanf("%d ",&t);
    for(i=1;i<=t;i++)
    {
        gets(str);
        token=strtok(str," ");
        while(token!=NULL)
        {
            count++;
            token=strtok(NULL," ");
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
