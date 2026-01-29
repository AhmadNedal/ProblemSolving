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
    ans =0;
    vector<ll>v;
    v.resize(n);
    for(auto&it:v)
        cin>>it;

    ll ans =0 ;
    for(int i=0;i<n-1;++i)
        ans+=abs(v[i]-v[i+1]);

    mx = max(abs(v[n-1]-v[n-2]),abs(v[0]-v[1]));

    for(int i=1;i<n-1;i++)
        mx=max(mx,abs(v[i-1]-v[i])+abs(v[i]-v[i+1])-abs(v[i-1]-v[i+1]));


    cout<<ans-mx<<endl;


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
