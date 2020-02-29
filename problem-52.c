#include<stdio.h>
#include<string.h>
int main()
{
    int t,len1,len2,i,count=0;
    char *ptr;
    char str1[150];
    char str2[150];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",str1,str2);
        len1=strlen(str1);
        len2=strlen(str2);
        for(i=0;i<len1;i++){
            ptr=&str1[i];
            if(strncmp(ptr,str2,len2)==0){
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
