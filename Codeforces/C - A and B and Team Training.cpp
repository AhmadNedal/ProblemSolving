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

    ll ans=0;

    while(n!=0&&m!=0){

        if(n>=m&&n>1){
            ans+=1;
            n-=2;
            m-=1;
        }else if(m>=n&&m>1){
            ans+=1;
            m-=2;
            n-=1;
        }else break;

    }


    cout <<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
