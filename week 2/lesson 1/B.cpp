#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,ans=0;
    cin>>n;
    while(n/10){
        ans+=n%10;
        //cout<<ans<<endl;
        n/=10;
    }
    ans+=n;
    cout<<ans;
    return 0;
}