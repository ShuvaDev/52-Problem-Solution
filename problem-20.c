#include<stdio.h>
#include<string.h>
int count_word(char str[])
{
    int count=0,i;
    char *token=strtok(str," ");
    while(token!=NULL)
    {
        count++;
        token=strtok(NULL," ");
    }
    return count;
}
int main()
{
    char str[10001];
    int t,total;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        total=count_word(str);
        printf("Count = %d\n",total);
    }
    return 0;
}
