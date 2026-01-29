#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){
string s ;
n=8;
string ans="";
// AABBSA

while(n--){
    cin>>s;
    for(auto it : s )
        if(it!='.')
            ans+=it;
}

cout <<ans<<endl;




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
