#include<stdio.h>
int main(void){
    float a,b,c,d,e,f;
    char ch;
    scanf("(%f%fi)%c(%f%fi)",&a,&b,&ch,&c,&d);
    if(ch=='+'){
        e=a+c;
        f=b+d;
    }
    else if(ch=='-'){
        e=a-c;
        f=b-d;
    }
    else if(ch=='*'){
        e=a*c-b*d;
        f=a*d+b*c;
    }
    printf("(%.6f+%.6fi)%c(%.6f+%.6fi)=(%.6f)+(%.6f)i",a,b,ch,c,d,e,f);
    return 0;
}