#include<stdio.h>
int main(void){
    int a[10];
    float ans;
    int max=0,min=101;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        ans+=a[i];
    }
    ans=ans-max-min;
    ans=ans/8;
    printf("%.2f",ans);
    return 0;
}