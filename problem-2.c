#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len,last_digit;
    char ch;
    char str[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",str);
        len=strlen(str);
        last_digit=str[len-1]-48;if((last_digit&1)==0)
        {
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return 0;
}
