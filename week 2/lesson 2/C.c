#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double s=(a+b+c)/2;
    double sq=s*(s-a)*(s-b)*(s-c);
    sq=pow(sq,0.5);
    printf("%.6lf",sq);
    return 0;
}