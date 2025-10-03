#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<pair<ll,ll>>v;
//vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
map <pair <int,int> , ll> m;



ll rec(int idx, int last){

    if(idx==n)
        return 0;

    ll ans=0;

    if(m.count({idx,last}))
         return m[{idx,last}] ;


    if (idx==n-1)
        return m[{idx,last}]= rec(idx+1,MOD)+1;


    if (idx==0)
        return m[{idx,last}]=rec(idx+1,v[idx].first)+1;


    if(v[idx].first-last>v[idx].second)
        ans=rec(idx+1,v[idx].first)+1;


    if(idx<n-1&&v[idx+1].first-v[idx].first>v[idx].second)
        ans = max({ans,
            rec(idx+1,v[idx].first+v[idx].second)+1
       });

    ans = max(ans , rec(idx+1 , v[idx].first ));

    return m[{idx,last}]=ans;


}



void solve() {

   cin>>n;

   v.resize(n);

   for(auto&it:v)
      cin>>it.first>>it.second;


   cout << rec(0,-MOD) << endl;




}

int main() {
    SPEED;

    int t=1;
    while (t--)solve();

    return 0;
}
