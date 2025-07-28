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


void solve() {
    cin>>s ;
    ll n=0,a=0,ans=0;

    for (auto it : s ) {
        if (it == '(')n+=1;
        if (it == '[')a+=1;


        if (it == ')'){
            if (n>0){
                ans +=1;
                n-=1;
            }
        }

        if (it == ']'){
            if (a>0){
                ans +=1;
                a-=1;
            }
        }

    }

    cout << ans <<endl ;


}

int main() {
    speed();

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
