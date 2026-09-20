#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    float m,t0,t1;
    cin>>m>>t0>>t1;
    float q=m*(t1-t0)*4184;
    printf("%.6f",q);
    return 0;
}