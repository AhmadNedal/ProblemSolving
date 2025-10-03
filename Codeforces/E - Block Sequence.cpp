#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a,ll b) {
    return (a * b) / gcd(a, b);
}

ll MOD = 1e9+7;


ll power(ll num, ll p) {
    if (p == 0) return 1;
    if (p == 1) return num % MOD;

    ll res = power(num, p / 2);
    res = (res * res) % MOD;

    if (p % 2 == 1) {
        res = (res * num) % MOD;
    }

    return res;
}



ll n ;
vector <ll>v ;
int const N= 2*1e5+1;

int dp[N];

ll rec(ll idx =0) {

    if ( idx == n ) {
        return 0 ;
    }else if ( idx > n ) {
        return MOD ;
    }

    if( dp[idx]!=-1) {
        return dp[idx];
    }


    ll ans = min(rec(idx+v[idx]+1 ),rec(idx+1)+1 );

    return dp[idx]=ans ;

}


void solve() {

    cin>>n;
    ll num ;
    v.clear();

    memset( dp, -1 , sizeof dp );

    for (int i=0;i<n;++i){
        cin>>num;
        v.push_back(num);
    }

    cout << rec() <<endl ;






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
