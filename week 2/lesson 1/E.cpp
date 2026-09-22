#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int len=s.size();
    for(int i=len-1;i>=0;i--)
        cout<<s[i];
    return 0;
}