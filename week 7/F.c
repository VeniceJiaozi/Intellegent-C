#include<stdio.h>
#include<math.h>
int prime[10000];
void init_prime(int prime[]){
    for(int i=0;i<10000;i++){
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<10000;i++){
        if(prime[i]){
            for(int j=i*i;j<10000;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(void){
    init_prime(prime);
    int sum=0;
    int i=1;
    while(sum<5){
        if(prime[i]){
            for(int j=2;j<i;j++){
                if(i==pow(2,j)-1){
                    printf("%d\n",i);
                    sum++;
                }
            }
        }
        i++;
    }
    return 0;
}