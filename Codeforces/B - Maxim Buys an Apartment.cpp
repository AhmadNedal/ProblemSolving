#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){
    ll n,k;
    cin>>n>>k;

    /*
     5 4
     0 1 0 1 0
     1 0 1 0 1
     1 1 0 1 1
     5 1
     0 1 0 0 0
    */


    cout<<(k>0&&k!=n?"1":"0")<<" "<<min(n-k,2*k)<<endl;




}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
