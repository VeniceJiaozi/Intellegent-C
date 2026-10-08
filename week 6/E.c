#include<stdio.h>
int main(void){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(i>0&&a[i]<a[i-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}