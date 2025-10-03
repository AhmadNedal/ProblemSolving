#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<ll>v,seg,arr,v2;
ll n,x,o,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


bool can(int mid, int i , int j ){


    return (mid+i+j<=x&& (i*j+i*mid+mid*j)<=n );

}




void solve() {
  cin>>n;
  v.resize(n);

  ll ans =0,x=0;

  for(auto it:v){
      cin>>it;

      if(it>=0){
          x+=it;
          continue;
      }

      
        if(abs(it)>x){
           ans-=it+x;
           x=0;
        }
        else x+=it;

  }

  cout << ans<<endl;


}

int main() {
    SPEED;

    int t=1;cin>>t;
    while (t--)solve();

    return 0;
}
