#include<stdio.h>
int check(long long a){
    int digit[30];
    int i=0;
    while(a>0){
        digit[i++]=a%10;
        a/=10;
    }
    for(int j=0;j<i;j++){
        if(digit[j]!=digit[i-j-1]){
            return 0;
        }
    }
    return 1;
}
int main(void){
    long long a;
    scanf("%lld",&a);
    if(check(a)){
        printf("%lld,0",a);
        return 0;
    }
    for(int i=0;i<10000;i++){
        if(check(a)){
            printf("%lld,%d",a,i);
            return 0;
        }
        long long temp=a;
        long long reverse=0;
        while(temp>0){
            reverse=reverse*10+temp%10;
            temp/=10;
        }
        a+=reverse;
    }
    printf("-1");
    return 0;
}