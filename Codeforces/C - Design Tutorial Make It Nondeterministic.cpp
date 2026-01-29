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
    cin>>n;

    vector<pair<string,int>>v(n*2);

    for(auto&it:v)
        cin>>it.first;

    int idx=1;

    for(int i=0;i<n;++i){
        cin>>x;
        x*=2;
        v[--x].second=idx;
        v[--x].second=idx;
        idx+=1;
    }

    sort(v.begin(),v.end());

    idx=1;
    for(auto it : v )
        if(idx==it.second)
            idx+=1;


    cout<<(idx>n?"YES":"NO")<<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
   // cin>>_;
    while(_--)
        solve();

    return 0;
}
