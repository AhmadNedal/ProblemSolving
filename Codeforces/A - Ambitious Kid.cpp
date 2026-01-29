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
   ans=MOD;
   while(n--){
      cin>>x;
      ans=min(ans,abs(x));
   }


   cout<<ans<<endl;

}

int main(){

    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
