#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;

void Mul(){

    ll x =2;
    while(x<=1e14+2){
        s.insert(x);
        x*=2;
    }

}

vector<bool>v;
vector<int> v4,v2,v3,dp;

void solve(){

    ll c,a,b; cin>>a>>b;
    c = (a+b)/2;
    cout<<(c-a)+(b-c)<<endl;


}


int main(){
    int _=1;
    cin>>_;
   // Mul();
    while (_--)
        solve();

    return 0;
}
