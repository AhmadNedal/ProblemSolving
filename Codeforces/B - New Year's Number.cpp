#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   cin>>n;

   for(int i=0;i<=n/2020;++i){
        x = 2020*i;

        if((x==n)||(x<n&&(n-x)%2021==0) ) {
            cout <<"YES"<<endl;
            return ;
        }

   }

   cout << "NO"<<endl;




}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
