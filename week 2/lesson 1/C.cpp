#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,y=0,d=0;
    cin>>n;
    y+=n/525600;
    n-=y*525600;
    d+=n/1440;
    n-=d*1440;
    if(n>0)d++;
    cout<<y<<"年"<<d<<"天";
    return 0;
}