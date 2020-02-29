#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len,count=0;
    char str[1002],ch;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            ch=str[j]&95;
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
        count=0;
    }
    return 0;
}

