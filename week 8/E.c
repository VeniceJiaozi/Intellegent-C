#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
float maxx(float a,float b){
    return a>b?a:b;
}
int main(void){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%.3f",maxx(a,maxx(b,c)));
    printf("\n%.3f",MAX(a,MAX(b,c)));
    return 0;
}