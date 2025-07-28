#include <bits/stdc++.h>
#define ll long long
using namespace std;


void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}

ll const MOD =1e9+7;

vector<ll>v;
ll n,x,o,l,k,mn=LLONG_MAX,r=MOD,a,c,m,b,y;
string s,t;


void solve(){

    cin>>a>>b>>c;

    x = abs(a-b)+abs(a-c);

    ll mx=MOD;
    int const N= 120 ;

    for(int i=0;i<120;++i) {
        if(i==a)continue;
        mx = min(abs(i-b)+abs(i-c),mx) ;
    }


    if(mx<x)
        cout << "YES"<<endl;
    else
        cout << "NO" <<endl;
    
}

int main() {
    speed();

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
