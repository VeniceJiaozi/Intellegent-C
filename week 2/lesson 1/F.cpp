#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double m;
    cin>>m;
    int ans=floor(m*1000/7/0.35);
    //printf("%.0lf",ans);
    cout<<ans;
    return 0;
}