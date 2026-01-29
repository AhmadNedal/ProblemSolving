#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

//vector<pair<ll,pair<ll,ll>>>v;

vector<ll> v,v2;
map<tuple<ll,ll,ll>,bool> dp;


ll can(ll x ) {

    int num=upper_bound(v.begin(),v.end(),x-1)-v.begin();
    num=v.size()-num;

    int left=0,r=v.size(),mid=0;

    while(left<r){
        mid=(left+r+1)/2;

        if(v2[mid]<=num)
            left =mid;
        else
            r=mid - 1;
    }


    return left;
}


// sleepy
void solve(){


    ll n,y,q,sum=0;
    cin>>n;//>>q;

    v.resize(n);
    v2.resize(1+n);


    for(auto&it:v)
        cin>>it;

    for(int i=0;i<n;++i){
        cin>>x;
        v2[i+1]=v2[i]+x;
    }

    sort(v.begin(),v.end());

    ll ans=-MOD;

    for(int i=0;i<n;++i)
        ans= max(ans,v[i]*(1ll)*can(v[i]));


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
