#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;

vector<int>v;
vector<int> v4,v2,v3,dp;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<< (a==b&&b==c&&a==d?"YES":"NO")<<endl;
}


int main(){
    int _=1;
    cin>>_;
   // Mul();
    while (_--)
        solve();

    return 0;
}
