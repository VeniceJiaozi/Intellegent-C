#include<stdio.h>
int main(void){
    for(int i=100000;i<1000000;i++){
        int a=i/100000;
        int b=i/10000%10;
        int c=i/1000%10;
        int d=i/100%10;
        int e=i/10%10;
        int f=i%10;
        if(a==f&&b==e&&c==d){
            for(int j=100;j*j<1000000;j++){
                if(j*j==i){
                    printf("%d\n",i);
                }
            }
        }
    }
    return 0;
}