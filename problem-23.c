#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len,j;
    scanf("%d",&t);
    char str[101];
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            printf("%d",((str[j]&95)-65)+1);
        }
        printf("\n");
    }
    return 0;
}
