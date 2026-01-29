#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   cin>>n ;
   ll mx=0,mn=MOD;

   while(n--){
      cin>>x;
      mn=min(x,mn);
      mx=max(x,mx);
   }

   cout<<mx-mn<<endl;


}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
