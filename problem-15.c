#include<stdio.h>
#include<string.h>
int main()
{
    int count[26];
    int t,i,j,length;
    char str[1002];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<26;j++)
        {
            count[j]=0;
        }
        scanf(" %[^\n]",str);
        length=strlen(str);
        for(j=0;j<length;j++)
        {
            count[str[j]-97]+=1;
        }
        for(j=0;j<26;j++)
        {
            if(count[j]!=0)
            {
                printf("%c = %d\n",j+97,count[j]);
            }
        }
        if(i<t)
        {
            printf("\n");
        }
    }
    return 0;
}
