#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
vector<int>v;

set<ll>s;

void Mul(){

    ll x =2;
    while(x<=1e14+2){
        s.insert(x);
        x*=2;
    }

}


void solve(){
    ll n,m,x;
    cin>>n>>m>>x;

    map<ll,ll>mp;

    ll l,r;

    while(n--){
        cin>>l>>r;

        auto it = mp.find(l);
        if(it!=mp.end())
            it->second=min(it->second, r);
        else
            mp[l]=r;

    }



    ll ans=0;

    for(auto it : mp)
        ans+=it.second;


    cout << min(ans,x) << endl;



}


int main(){
    int _=1;
  // cin>>_;
  //  Mul();
    while (_--)
        solve();

    return 0;
}
