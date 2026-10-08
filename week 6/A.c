#include<stdio.h>
int main(void){
    char name1,name2;
    float math1,math2,phy1,phy2,che1,che2;
    scanf("%c %f %f %f",&name1,&math1,&phy1,&che1);
    scanf(" %c %f %f %f",&name2,&math2,&phy2,&che2);
    printf("*********************************************************\n");
    printf("    NAME    MATH    PHYSICS   CHEMISTRY    SUM    AVERAGE\n");
    printf("%8c%8.1lf%11.1lf%12.1lf%7.1lf%11.1lf\n"
    ,name1,math1,phy1,che1,math1+phy1+che1,(math1+phy1+che1)/3);
    printf("%8c%8.1lf%11.1lf%12.1lf%7.1lf%11.1lf\n"
    ,name2,math2,phy2,che2,math2+phy2+che2,(math2+phy2+che2)/3);
    printf("*********************************************************\n");
    return 0;
}