#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,a,b,y;
string s,t;


ll B () {

    if (n<b) return 0;

    ll ans =0 ;
    ll num = n-b ;
    ans += num/y ;
    n-=(num-num%y);
    if(n>=b){
        ans +=1;
        n-=y;
    }

    return max(ans ,0LL);
}


ll A() {

    if (n<a) return 0;
    
    ll num = n-a ;
    ll ans = num/x ;
    n-=(num-num%x);

    if (n>=a){
        ans +=1;
        n-=x ;
    }

    return max ( 0LL , ans);

}


void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;


    cin>>n;
    o=n;
    cin>>a>>b>>x>>y ;


    ll ans =0 ;
    
        ans += A() ;
        ans += B();
        
    n=o; 
    ll ans2 =0 ;
        ans2 += B();
        ans2 += A();


    cout << max(ans , ans2) <<endl;








}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
