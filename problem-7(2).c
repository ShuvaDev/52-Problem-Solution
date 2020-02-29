#include<stdio.h>
int main()
{
    int t,i,count=0;
    scanf("%d",&t);
    char ara[10000];
    char *sEnd,*ptr;
    long input;
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",ara);
        for(ptr=ara;;ptr=sEnd)
        {
            input=strtol(ptr,&sEnd,10);
            if(ptr==sEnd)
            {
                break;
            }
            count++;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}


