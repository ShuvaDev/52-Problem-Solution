#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double a,b,c,S,area;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf",&a,&b,&c);
        if((a+b)>c && (b+c)>a && (a+c)>b){
            S=(a+b+c)/2;
            area=sqrt(S*(S-a)*(S-b)*(S-c));
            printf("Area = %.3lf\n",area);
        }
    }
    return 0;
}
