#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    cin>>n;
    string s;
    cin>>s;

    ans=0;
    for(auto&it:s)
        if(it!=s[s.size()-1])
            ans+=1;

    cout<<ans<<endl;


}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
