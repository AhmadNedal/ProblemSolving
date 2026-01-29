#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

  string s;
  cin>>n>>s;
  int num =0 ;
  for(auto it2 : s ){
    if(it2 == '1')
        num+=1;
  }
  if ( num == n ) {
    cout << 0 <<endl;
    return ;
  }

  vector<int> v;
  for (int i = 1; 1LL * i * i <= n; i++) {
      if (n % i == 0) {
          v.push_back(i);
          if (1LL * i * i != n)
              v.push_back(n / i);
      }
  }

  ll ans = MOD;

  for (int it:v) {

      int L=n/it;
      bool bol=true;
      int mx=0;

      for (int r=0;r<it;r++) {

          vector<int>v1;
          for (int k=0;k<L;k++) {
              if (s[r+k*it]=='1')
                  v1.push_back(k);
          }

          if (v1.empty()) {
              bol=false;
              break;
          }

          int mx2=0;
          int m=v1.size();

          for (int i=0;i<m;i++) {
              int x=v1[i];
              int y=v1[(i + 1)%m];
              int z=(y-x-1+L)%L;
              mx2=max(mx2, z);
          }

          mx = max(mx, mx2);

          if (1LL*mx*it>=ans) {
              bol=false;
              break;
          }
      }

      if (bol)
          ans=min(ans,1LL*mx*it);
  }

  cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    cin>>_;
    while(_--)
        solve();

    return 0;
}
