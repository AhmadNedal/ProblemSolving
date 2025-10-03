#include <bits/stdc++.h>
#define ll long long
using namespace std;
void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}

ll const MOD =1e9+7;
vector<ll>v,v2,dp;
ll n,x,o,l,k,mn=LLONG_MAX,r=MOD,y;
string s,t;
//int const N =1e5+10 ;

bool bol = false ;

ll powerMod(ll a, ll b) {
    if (b == 0)
        return 1;

    ll h = powerMod(a, b/2);
    ll res= (h*h)%(bol?MOD:MOD-1);

    if (b%2==1)
        res=(res*a)%(bol?MOD:MOD-1);

    return res;
}



/*
ll can(ll mid ){

    b = mid*(mid+1)/2;
    a=(n+k)*(n+k-1)/2;
    a-=b;

    b-=start ;


    return abs(a-b);
}
*/




void solve() {
    cin>>n>>x;

    ll num = abs(n-x);

    ll ans =min(n,x)*2;

    if(num>0){
        num-=1;
        ans+=1;
    }

    ans +=(num*2);

    cout << ans<<endl;


}

int main() {
    speed();

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}