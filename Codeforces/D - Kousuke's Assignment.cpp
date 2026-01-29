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
   ll arr[n];
   for(auto&it:arr)
       cin>>it;

   set <ll>s;
   s.insert(0);
   ll sum=0;
   ans=0;

   for(int i=0;i<n;++i) {
       sum+=arr[i] ;
       if(s.count(sum) ){
           ans+=1;
           sum=0;
           s.clear() ;
       }
       s.insert(sum) ;
   }



   cout<<ans<<endl;

}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
