#include<stdio.h>
#include<string.h>
int main()
{
    int key,i;
    char str[5000];
    gets(str);
    scanf(" %d",&key);
    int len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==' '){
            printf("%c",' ');
        }else{
            if(str[i]>='A' && str[i]<='Z'){
                if((str[i]+key)>90){
                    printf("%c",str[i]+key-26);
                }else{
                    printf("%c",str[i]+key);
                }
            }else{
                if((str[i]+key)>122){
                    printf("%c",str[i]+key-26);
                }else{
                    printf("%c",str[i]+key);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
