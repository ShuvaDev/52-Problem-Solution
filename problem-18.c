#include<stdio.h>
#include<string.h>
void check_str(char str[],int len)
{
    int i,v=0,c=0;
    char vowel[100];
    char consonant[100];
    char ch;
    for(i=0;i<len;i++)
    {
        ch=str[i]&95;
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowel[v++]=str[i];
        }else if(ch>='A' && ch<='Z'){
            consonant[c++]=str[i];
        }
    }
    vowel[v]='\0';
    consonant[c]='\0';
    printf("%s\n",vowel);
    printf("%s\n",consonant);
}
int main()
{
    int t,i;
    char str[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",str);
        check_str(str,strlen(str));
    }
    return 0;
}

