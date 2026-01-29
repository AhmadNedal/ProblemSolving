#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    ll m;;
    cin>>n>>m ;
    v.resize(n);

    for(auto&it:v)
        cin>>it;

    vector<ll>v2;


    for(int i=0;i<n;++i)
        v2.push_back(v[i]+i+1);


    sort(v2.begin(),v2.end());


    ans = 0;

    for (auto it:v2)
        if (m>=it) {
            m-=it;
            ans++;
        }



    cout <<ans<<endl;


    /*
    2 14
    7 5
    */
}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
