#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

ll n,k;
vector<int>dp;
vector<int>v;
vector<vector<int>>pos;


int rec(int idx ){
    if(idx>=n)
        return 0;


    if(dp[idx]!=-1)
        return dp[idx];

    int res=rec(idx+1);

    vector<int>&v2=pos[v[idx]];

    auto it=lower_bound(v2.begin(),v2.end(),idx);

    if(it!=v2.end()){
        int idx2=it-v2.begin();
        int num=v2.size();
        if(idx2+v[idx]-1<num)
            res=max(res,v[idx]+rec(v2[idx2+v[idx]-1]+1));
    }

    return dp[idx]=res;

}


void solve(){

     cin >> n;
     v.resize(n);
     for(auto&it:v)cin>>it;
     pos.assign(n+1,vector<int>());
     for(int i=0;i<n;++i)
        pos[v[i]].push_back(i);

     dp.assign(n,-1);

    cout<<rec(0)<<endl;

}

int main(){
    SPEED;
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
