#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

vector<pair<ll,pair<ll,ll>>>v;

vector<int> v4,v3;
map<tuple<ll,ll,ll>,bool> dp;


void solve(){

    ll n,m;cin>>n>>m;

    vector<ll>v;
    v.resize(n);


    for(auto&it:v)
        cin>>it;

    sort(v.begin(),v.end());




    for(int i=1;i<n;++i)
        v[i]+=v[i-1];


    ans=0;

    for(ll i=0;i<=m;i++) {

        ll l=2*i;
        ll r=n-(m-i)-1;

        if(l>r)
            continue;

        ll sum=v[r]-(l==0?0:v[l-1]);
        ans=max(ans,sum);


    }


    cout <<ans <<endl;



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    cin>>_;
    while(_--)
        solve();

    return 0;
}
