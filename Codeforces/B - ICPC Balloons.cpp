#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){
  string s;
  cin>>n>>s;

  bool arr[26];
  memset(arr,false,sizeof arr);
  ans=0;

  for(auto it : s ){
      ++ans+=!arr[it-'A'];
      arr[it-'A']=true;
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
