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
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];



void solve() {

    cin>>n>>m;
    v.resize(n);
    for(auto&it:v)cin>>it;

    sort(v.begin(),v.end());

    ans =0 ;

    for(int i=0;i<n;++i){

        if(m<v[n/2]&&v[i]>m&&i<=n/2)
            ans += abs(m-v[i]);

        if(m>v[n/2]&&v[i]<m&&i>=n/2)
            ans += abs(m-v[i]);

    }

    
    cout<<ans<<endl;


}


int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
