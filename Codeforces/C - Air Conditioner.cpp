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

bool rec(ll idx, ll deg, ll time) {

    if (idx == n) return true;

    if (dp.count(make_tuple(idx,deg,time)))
        return dp[make_tuple(idx,deg,time)];


    if (deg+v[idx].first-time<v[idx].second.first&&deg-v[idx].first-time>v[idx].second.second)
        return dp[make_tuple(idx,deg,time)]=false;

    bool bol=false;

    for (ll i=0;i<=v[idx].first-time;++i) {
        ll num=deg+i;

        if (num >=v[idx].second.first && num <=v[idx].second.second)
            bol |= rec(idx + 1, num, v[idx].first);


        if ((deg-i)>=v[idx].second.first&&(deg-i)<=v[idx].second.second)
            bol|=rec(idx+1,deg-i,v[idx].first);


        if (bol)
            return dp[make_tuple(idx,deg,time)]=true;
    }

    return dp[make_tuple(idx,deg,time)]=false;

}


void solve(){

    cin>>n>>m;

    bool bol = true;
    ll l=m,r=m,last=0;
    ll t,l2,rr;
    while(n--){

        cin>>t>>l2>>rr;


        l -=(t-last);
        r -=-(t-last);

        if(l2>l)
            l= l2 ;

        if(rr<r)
            r=rr;

        if ( l>r )
            bol = false;


        last = t ;
    }

    cout << (bol?"YES":"NO")<<endl;






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
