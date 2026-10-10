#include<stdio.h>
int prime[1000];
void init_prime(int prime[]){
    for(int i=0;i<1000;i++){
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<1000;i++){
        if(prime[i]){
            for(int j=i*i;j<1000;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(void){
    init_prime(prime);
    for(int i=100;i<1000;i++){
        int a=i/100;
        int b=i/10%10;
        int c=i%10;
        if(a==(b+c)%10&&prime[i]){
            printf("%d\n",i);
        }
    }
    return 0;
}