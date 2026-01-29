#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;

void Mul(){

    ll x =2;
    while(x<=1e14+2){
        s.insert(x);
        x*=2;
    }

}

vector<vector<int>>v;
vector<int> v4,v2,v3,dp;

void solve(){
    string s;
    cin>>s;
    n=s.size();

    v.assign(n,vector<int>());
    v2.assign(n,0);
    v3.assign(n,0);
    v4.clear();
    dp.assign(n,0);

    for(int i=0;i<n;++i) {
        char x=s[i];
        if(x=='<'||x=='*') {
            if (i==0)
                v2[i] = 1;
            else {
                v[i].push_back(i-1);
                v3[i-1]+=1;
            }
        }
        if(x=='>'||x=='*') {
            if(i==n-1)
                v2[i]=1;
            else{
                v[i].push_back(i+1);
                v3[i+1]+=1;
            }
        }
    }

    queue<int> q;
    for (int i=0;i<n;++i)
        if(v3[i]==0)
           q.push(i);

    while(!q.empty()) {
        int x=q.front();
        q.pop();
        v4.push_back(x);
        for(int y:v[x]){
            v3[y]-=1;
            if(v3[y]==0)
             q.push(y);
        }
    }

    if(v4.size()!=n){
        cout<<-1<<endl;
        return;
    }

    for (int i=n-1;i>-1;--i) {
        int u=v4[i];

        dp[u]=v2[u] ? 1 : 0;
        for(int y:v[u])
            dp[u]=max(dp[u],1+dp[y]);
    }

    ll ans =0 ;
    for(auto it : dp ){
        ans=max(it*1LL,ans);
    }


    cout <<ans<<endl;

}


int main(){
    int _=1;
    cin>>_;
    Mul();
    while (_--)
        solve();

    return 0;
}
