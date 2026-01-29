#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

  ll k;cin>>n>>k ;

  for(ll i=1;i<=sqrtl(n);++i)
       if(i*i==n)
           v.push_back(i);
       else if(n%i==0){
           v.push_back(i) ;
           v.push_back(n/i) ;
       }


   sort ( v.begin(),v.end() );

   cout << (k>v.size()? -1 : v[k-1] ) <<endl;

}

int main(){

    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
