#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   cin>>n;
   ll mx=0,num=0,sum=0;
   ll n2=n;
   while(n--){
      cin>>x;
      sum+=x;
      if(x&1)
         num+=1;

     mx=max(mx,x);

   }


    cout<<(abs(n2*2-num)%n2==0?mx:(sum-(num-1))) <<endl;



}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
