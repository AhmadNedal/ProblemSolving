#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    ll n; cin>>n;

    map<int,int>m;
    id=0 ,mx = 0,ans =0 ;

    while(n--){
        cin>>id;
        m[id]+=1;

        if(m[id] > mx )
            ans=id;

        mx = max(mx,1LL*m[id]);

    }

    cout  << ans <<endl;




}

int main(){

    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
