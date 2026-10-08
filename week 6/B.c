#include<stdio.h>
#include<math.h>
int main(void){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float delta=b*b-4*a*c;
    if(delta<0)
        printf("方程没有实根！");
    else{
        float root1=(-b+sqrt(delta))/(2*a);
        float root2=(-b-sqrt(delta))/(2*a);
        printf("方程的实根为%.2f %.2f",root1,root2);
    }
    return 0;
}