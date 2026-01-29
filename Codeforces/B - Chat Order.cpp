#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    ll n; cin>>n;

    vector<string>v(n);

    for(auto&it:v)
        cin>>it;


    map<string,bool>m;


    for(int i=v.size()-1;i>-1;--i){

        if ( !m[ v[i] ] )
            cout << v[i]<< endl;

        m[ v[i] ] = true;

    }



}

int main(){

    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
