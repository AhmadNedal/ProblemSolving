#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,a,b,y;
string s,t;



void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;


    cin>>n>>x;
    v.resize(n);
    ll mx=0 , mn=MOD ;

    for(auto&it:v){
        cin>>it;
        mx = max(mx,it) ;
        mn = min(mn ,it) ;
    }

    if ( mn == mx) {
        cout << abs(x-mx) <<endl;
        return ;
    }

    if (mn>x && mx>x) {
        cout << mx-x <<endl;
        return;
    }

    if ( x>mn && x>mx) {
        cout << x-mn<<endl;
        return;
    }


    ll ans = min( mx-x , x-mn)*2;
    ans+= max( mx-x , x-mn);


    cout <<ans <<endl;







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
