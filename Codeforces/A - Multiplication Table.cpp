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

    cin>>n>>m;
    vector<ll>v;

    for(int i=1;i<=sqrtl(m);++i)
        if(m%i==0)
            if(i<=n&&m/i<=n){
                ans+=2;
                if(i==m/i)
                    ans-=1;
            }



    cout <<ans<<endl;

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
