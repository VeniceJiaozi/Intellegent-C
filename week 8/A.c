#include<stdio.h>
int a[10];
int b[10];
int max=0,min=0x7fffffff;
int max_index=0,min_index=0;
void init(void){
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
}
void func(void){
    for(int i=0;i<10;i++){
        if(max<a[i]){
            max=a[i];
            max_index=i;
        }
        if(min>a[i]){
            min=a[i];
            min_index=i;
        }
    }
    int temp=a[0];
    a[0]=a[min_index];
    a[min_index]=temp;

    if(max_index==0){
        max_index=min_index;
    }

    temp=a[9];
    a[9]=a[max_index];
    a[max_index]=temp;
}
void print(void){
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
int main(void){
    init();
    func();
    print();
    return 0;
}