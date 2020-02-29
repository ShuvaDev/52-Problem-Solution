#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,len,i;
    long long int mul1=1,mul2=1;
    scanf("%d",&t);
    char str1[22];
    char str2[22];
    while(t--)
    {
        scanf("%s%s",str1,str2);
        len=strlen(str1);
        for(i=0;i<len;i++){
            mul1=fmod(mul1*str1[i],97);
        }
        len=strlen(str2);
        for(i=0;i<len;i++){
            mul2=fmod(mul2*str2[i],97);
        }
        if(mul1==mul2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        mul1=mul2=1;
    }
    return 0;
}
