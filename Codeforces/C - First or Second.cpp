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
    vector<ll>v(n);
    for(auto&it : v )
        cin>>it;

    ll num,mx=v[n-1],ans=0;
    num =v[n-1];
    num*=-1;

    for(int i=n-2;i>-1;--i){

        ans= num+max(0ll,v[i]+mx);
        num-=v[i];
        mx= max(mx,ans-num);

    }

    cout << ans <<endl;


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
