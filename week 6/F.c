#include<stdio.h>
int main(void){
    float I,bonus;
    int grade;
    scanf("%f",&I);
    if(I>=100)
        grade=10;
    else
        grade=(int)I/10;
    switch (grade) {
        case 0:  // I <= 10万
            bonus = I * 0.10;
            break;
        case 1:  // 10 < I <= 20
            bonus = 10.0 * 0.10 + (I - 10.0) * 0.075;
            break;
        case 2:  // 20 < I <= 30
        case 3:  // 30 < I <= 40
            bonus = 10.0 * 0.10 + 10.0 * 0.075 + (I - 20.0) * 0.05;
            break;
        case 4:  // 40 < I <= 50
        case 5:  // 50 < I <= 60
            bonus = 10.0 * 0.10 + 10.0 * 0.075 + 20.0 * 0.05 + (I - 40.0) * 0.03;
            break;
        case 6:  // 60 < I <= 70
        case 7:  // 70 < I <= 80
        case 8:  // 80 < I <= 90
        case 9:  // 90 < I <= 100
            bonus = 10.0 * 0.10 + 10.0 * 0.075 + 20.0 * 0.05
                  + 20.0 * 0.03 + (I - 60.0) * 0.015;
            break;
        case 10: // I > 100
            bonus = 10.0 * 0.10 + 10.0 * 0.075 + 20.0 * 0.05
                  + 20.0 * 0.03 + 40.0 * 0.015 + (I - 100.0) * 0.01;
            break;
    }
    printf("%.2f\n",bonus);
    return 0;
}