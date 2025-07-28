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


    ll n,s; cin>>n>>s;
    int dirx,diry;
    ll x,y ;
    ans =0 ;
        
    while(n--){

        cin>>dirx>>diry>>x>>y;

        if ( x == y&& dirx == diry) {
            ans +=1;
        }

        if (x+y==s && dirx!=diry)ans +=1;

    }

    cout <<ans<<endl;


}

int main() {
    SPEED;

    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
