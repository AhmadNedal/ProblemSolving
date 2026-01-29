#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){


    ll x,y;
    cin>>x>>y>>n;

    if(y*n<=x||x-1<y){
        cout <<1<<endl;
        return ;
    }

    cout << 2 <<endl;



}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
