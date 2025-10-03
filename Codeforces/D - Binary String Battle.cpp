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

    ll n ,k; cin>>n>>k;
    cin>>s;

    int num =0 ;
    for (auto it : s ) {
        if (it == '1')num+=1;
    }

    if ( num <= k || k*2>n){
        cout << "Alice"<<endl;
        return ;
    }

    cout << "Bob"<<endl;




}

int main() {
    SPEED;

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
