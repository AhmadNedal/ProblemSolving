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
   ll mx=0;
   v.resize(n);

   for(auto&it:v){
       cin>>it;
       mx=max(mx,it);
   }

   ll ans=0;
   for(auto it:v)
      ans+=mx-it;


   cout<<ans<<endl;


}

int main(){

    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
