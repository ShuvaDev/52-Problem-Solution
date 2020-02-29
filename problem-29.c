#include<stdio.h>
int main()
{
    // 48 -57
    // 97 - 122
    //65 -90
    int t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %c",&ch);
        if(ch>=48 && ch<=57)
        {
            printf("Numerical Digit\n");
        }else if(ch>=97 && ch<=122)
        {
            printf("Lowercase Character\n");
        }else if(ch>=65 && ch<=90){
            printf("Uppercase Character\n");
        }else{
            printf("Special Character\n");
        }
    }
    return 0;
}
