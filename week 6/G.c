#include<stdio.h>
int main(void){
    char c1,c2;
    scanf("%c",&c1);
    if(c1=='M' || c1=='m'){
        printf("Monday");
        return 0;
    }
    if(c1=='W' || c1=='w'){
        printf("Wednesday");
        return 0;
    }
    if(c1=='F' || c1=='f'){
        printf("Friday");
        return 0;
    }
    if(c1=='T' || c1=='t'){
        scanf(" %c",&c2);
        if(c2=='u' || c2=='U'){
            printf("Tuesday");
            return 0;
        }
        if(c2=='h' || c2=='H'){
            printf("Thursday");
            return 0;
        }
    }
    if(c1=='S' || c1=='s'){
        scanf(" %c",&c2);
        if(c2=='a' || c2=='A'){
            printf("Saturday");
            return 0;
        }
        if(c2=='u' || c2=='U'){
            printf("Sunday");
            return 0;
        }
    }
    printf("Illegal input!\n");
    return 0;
}