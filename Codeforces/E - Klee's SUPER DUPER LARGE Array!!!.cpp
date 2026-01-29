#include <bits/stdc++.h>
#define ll long long
using namespace std;




void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}



ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,l,k,mn=LLONG_MAX,r=MOD,a,c,m,b,y;
string s,t;
//int const N =1e5+10 ;



ll powerMod(ll a, ll b) {
    if (b == 0)
        return 1;

    ll h = powerMod(a, b / 2);
    ll res= (h*h)%MOD;

    if (b%2==1)
        res=(res*a)%MOD;

    return res;
}







ll start =0 ;


ll can(ll mid ){

    b = mid*(mid+1)/2;
    a=(n+k)*(n+k-1)/2;
    a-=b;

    b-=start ;


    return abs(a-b);
}





void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;


    cin>>n>>k;

    start =(k-1)*(k)/2;

    ll l=0,r=n+k;

    ll m1,m2,ans=MOD*2;

    while(l<=r){

        m1=l+(r-l)/3 ;
        m2=r-(r-l)/3 ;
        o=can(m1);
        x=can(m2);
        ans = min({o,x,ans});

        if(o>x){
            l = m1+1;
            continue;
        }
        r=m2-1;

    }

    cout <<ans <<endl;





}

int main() {
    speed();

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
