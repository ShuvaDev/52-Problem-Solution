#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double distance,Xc,Yc,r,X,Y;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf",&Xc,&Yc);
        scanf("%lf",&r);
        scanf("%lf%lf",&X,&Y);
        distance=sqrt(((Xc-X)*(Xc-X))+((Yc-Y)*(Yc-Y)));
        if(distance<=r){
            printf("The point is inside the circle\n");
        }else{
            printf("The point is not inside the circle\n");
        }
    }
    return 0;
}
