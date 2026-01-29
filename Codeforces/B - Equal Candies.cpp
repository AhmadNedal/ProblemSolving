#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    ll n; cin>>n;
    v.resize(n);
    mx=MOD;
    for(auto&it:v){
        cin>>it;
        mx=min(mx,it);
    }

    ans=0;

    for(auto&it:v)
        ans+=it-mx;



    cout <<ans<<endl;







}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
