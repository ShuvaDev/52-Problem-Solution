#include<stdio.h>
#include<string.h>
int find_letter(char str[],int len,char letter)
{
    int i,total=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==letter)
        {
            total++;
        }
    }
    return total;
}
int main()
{
    char str[10001];
    char letter;
    int t,i,total;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        scanf(" %c",&letter);
        total=find_letter(str,strlen(str),letter);
        if(total==0)
        {
            printf("'%c' is not present\n",letter);
        }else{
            printf("Occurrence of '%c' in '%s' = %d\n",letter,str,total);
        }
    }
    return 0;
}
