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

    queue<pair<pair<ll,ll>,ll>>q;
    q.push({{n,m},0});

    while(true){
        auto it = q.front();
        q.pop();

        if(it.first.first==0){
            cout << it.second <<endl;
            return ;
        }

        q.push({{it.first.first/it.first.second,it.first.second},it.second+1});
        q.push({{it.first.first,it.first.second+1},it.second+1});

    }


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
