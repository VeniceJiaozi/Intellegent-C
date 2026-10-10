#include<stdio.h>
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43
    ,47,53,59,61,67,71,73,79,83,89,97};
int main(void){
    int a;
    scanf("%d",&a);
    printf("%d=",a);
    while(a>1){
        for(int i=0;i<25;i++){
            if(a%prime[i]==0){
                printf("%d",prime[i]);
                a/=prime[i];
                if(a>1){
                    printf("*");
                }
                break;
            }
        }
    }
    printf("\n");
    return 0;
}