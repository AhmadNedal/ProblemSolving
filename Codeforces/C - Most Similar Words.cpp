#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<string>v,v2;
vector<int> v4,v3,dp;

void solve(){

    ll n,m; cin>>n>>m;
    v.resize(n);
    mx=MOD;

    for(auto&it:v)
        cin>>it;



    for(int i= 0; i<n;++i)
        for(int j=i+1;j<n;++j){
             x=0;

             for(int l=0;l<m;++l)
                 x+=abs(v[i][l]-v[j][l]);

                mx=min(mx,x);
            }


     cout<<mx<<endl;

}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
