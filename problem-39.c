#include<string.h>
int main()
{
    char str1[1002];
    char str2[1002];
    int t,len,i,j;
    scanf("%d",&t);
    while(t)
    {
        scanf(" %[^\n]s",str1);
        len=strlen(str1);
        for(i=len-1,j=0;i>=0;i--,j++)
            str2[j]=str1[i];
        str2[len]='\0';
        if(strcmp(str1,str2)==0)
            printf("Yes! It is Palindrome!\n");
        else
            printf("Sorry! It is not Palindrome!\n");
        t--;
    }
    return 0;
}
