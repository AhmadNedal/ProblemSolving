#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,m,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];





void solve() {


   cin>>n>>x;
   v.resize(n);
   for(auto&it:v)cin>>it;

   sort(v.begin(),v.end());
   ll ans =0 ;
   
   for(auto it : v) {
     ans += it*x;

     if(x>1)x-=1;

   }

   cout << ans <<endl;




}

int main() {
    SPEED;

    int t=1;
    while (t--)solve();

    return 0;
}
