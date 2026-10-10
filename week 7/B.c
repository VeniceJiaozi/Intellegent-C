#include<stdio.h>
int main(void){
    int sum=7;
    const int ANS=495;
    int a;
    scanf("%d",&a);
    int large=0,small=1000;
    printf("%d-",a);
    while(sum--){
        int x=a%10;
        a/=10;
        int y=a%10;
        a/=10;
        int z=a%10;
        int total=x+y+z;
        int max=x>y?x:y;
        max=max>z?max:z;
        int min=x<y?x:y;
        min=min<z?min:z;
        large=max*100+(total-max-min)*10+min;
        small=min*100+(total-max-min)*10+max;
        int temp=large-small;
        a=temp;
        if(temp==ANS){
            printf("%d",temp);
            return 0;
        }
        if(sum==0){
            printf("%d",temp);
        }
        else{
            printf("%d-",temp);
        }
    }
    return 0;
}