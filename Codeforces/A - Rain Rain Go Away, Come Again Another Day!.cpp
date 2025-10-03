#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;

void solve() {

    cin>>n;
    v.resize(n);
    for (auto&it :v ) cin>>it;

    ll mx=v[0];
    ans=0;

    vector <ll>p1, p2 ;
    p1 = v ;
    p2 = v ;

    for (int i=1; i<n; ++i )
          p1[i]=max(p1[i], p1[i-1]) ;

    reverse(p2.begin(), p2.end());

    for (int i=1; i<n; ++i)
           p2[i]=max(p2[i], p2[i-1]) ;
    
    reverse(p2.begin(), p2.end());
    
    ans =0 ;
    
    for (int i=1;i<n-1;++i)
        ans += max({0LL, (min(p1[i-1],p2[i+1]))-v[i]});


    cout << ans<<endl;




}

int main() {
    SPEED;

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
