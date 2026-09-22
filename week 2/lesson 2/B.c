#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("sin(x):%.6lf\n",sin(x));
    printf("cos(x):%.6lf\n",cos(x));
    printf("|x|:%.6lf\n",fabs(x));
    printf("e的x次方:%.6lf\n",exp(x));
    printf("x的y次方:%.6lf",pow(x,y));
    return 0;
}