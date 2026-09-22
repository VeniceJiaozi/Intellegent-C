#include<stdio.h>
//using namespace std;
int main(void){
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    double sum;
    scanf("%lf",&sum);

    if(sum<0){printf("sign:-\n");sum=-sum;}
    else printf("sign:+\n");

    int i_sum=(int)sum;
    printf("integral part:%d\n",i_sum);

    sum-=(double)i_sum;
    printf("decimal fraction part:%.6lf",sum);
    return 0;
}