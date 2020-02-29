#include<stdio.h>
#include<string.h>
char word[10][21];
int split(char *str)
{
    int total_word=0,i=0;
    char *token;
    token=strtok(str," ");
    while(token!=NULL)
    {
        strcpy(word[i++],token);
        total_word++;
        token=strtok(NULL," ");
    }
    return total_word;
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int check_repated(int index,int total)
{
    int i,count=1;
    for(i=index+1;i<total;i++)
    {
        if(strcmp(word[index],word[i])==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t,i,n,j,probality,total_repeat;
    scanf("%d",&t);
    char str[210];
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        int total_word=split(str);
        n=fact(total_word);
        probality=n;
        for(j=0;j<total_word-1;j++)
        {
            if((total_repeat=check_repated(j,total_word))!=1)
            {
                probality=probality/total_repeat;
            }
        }
        printf("1/%d\n",probality);
    }
    return 0;
}

