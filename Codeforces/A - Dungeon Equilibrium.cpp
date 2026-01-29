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
    map<ll,ll>m ;

    ll x,ans=0;

    while(n--){
        cin>>x;
        m[x]+=1;
    }


    for(auto it:m) {

        if (it.first==it.second)continue;

        if ( it.first<it.second )
            ans+=it.second-it.first;
        else
            ans+=it.second;

    }

    cout <<ans<<endl;

}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
