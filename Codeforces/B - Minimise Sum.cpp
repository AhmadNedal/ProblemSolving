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
ll dp[1001];





void solve() {


    cin>>n ;
    v.resize(n);
    for(auto&it:v)cin>>it;

    ll sum =0 , mn =MOD;

    for (int i=0;i<n;++i) {
        mn=min(mn,v[i]);
        sum +=mn ;
    }
    ll ans = sum  ,sum2 =0 ;
    mn = MOD;

    for (int i=0;i<n;++i){
        if (i<n-1)
            ans=min(ans,sum2+min(v[i]+v[i+1],mn));

        mn= min(mn,v[i]);
        sum2+=mn ;
    }

    cout << ans <<endl;


}

int main() {
    SPEED;

    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
