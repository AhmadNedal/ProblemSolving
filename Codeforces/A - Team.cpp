#include <bits/stdc++.h>
#define ll long long
using namespace std;

void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}



ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,l,r=MOD,a,c,m,b,y;
string s,t;


ll powerMod(ll a, ll b) {
    if (b == 0)
        return 1;

    ll h = powerMod(a, b / 2);
    ll res= (h*h)%MOD;

    if (b%2==1)
        res=(res*a)%MOD;

    return res;
}







void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;

    ll counter =0 ;
    cin>>n;

    while(n--){
        cin>>a>>b>>c;

        if(b+c+a>=2)counter++;

    }

    cout<<counter<<endl;


}

int main() {
    speed();

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
