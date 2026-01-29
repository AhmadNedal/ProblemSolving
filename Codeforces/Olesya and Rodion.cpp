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

    // queue<ll>q;

    if ( m == 10 && n == 1 ) {
        cout << -1 <<endl;
        return ;
    }

    if ( m == 10){
        m=0;
        cout <<1;
        n-=1;
    }

    while(n--)cout << m;




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
