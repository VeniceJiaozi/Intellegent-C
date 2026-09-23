#include<stdio.h>
const double CHOCOLATE=230.0;
int main(){
    double h,w,a;
    char s;
    scanf("%lf %lf %lf %c",&h,&w,&a,&s);
    double bmr=0;
    if(s=='F')bmr=655+(4.3*w*2.2)+(4.7*h*0.39)-(4.7*a);
    else bmr=66+(6.3*w*2.2)+(12.9*h*0.39)-(6.8*a);
    printf("消耗%.2lf块巧克力\n",bmr/CHOCOLATE);
    return 0;
}