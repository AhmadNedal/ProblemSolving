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
    ll n;
    cin>>n;
    vector<ll>v;
    v.resize(n);

    for(auto&it : v) {
        cin>>it;
    }

    sort(v.begin(), v.end());

    ll counter=1,mx=1,last=v[0];

    for(int i=1;i<n;++i){
        if(v[i]==last)continue;

        if(v[i]==last+1){
            counter+=1;
        }else
            counter=1;

        last=v[i];
        mx=max(mx,counter);

    }

    cout<<mx<<endl;


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
