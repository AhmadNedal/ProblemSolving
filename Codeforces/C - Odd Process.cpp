#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){
    cin>>n;

    v.resize(n);
    for(auto& it:v) cin>>it;

    v1.clear();
    v2.clear();

    for(int i=0;i<n;i++)
        if(v[i]%2==0) v1.push_back(v[i]);
        else v2.push_back(v[i]);

    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());

    int m=v1.size();
    int z=v2.size();

    vector<ll>p(m+1,0);
    for(int i=0;i<m;i++)
        p[i+1]=p[i]+v1[i];

    mx=0;
    if(z>0)
        mx=v2[0];

    vector<ll>ans(n+1,0);

    if(z==0){
        for(int k=1;k<=n;k++)
            ans[k]=0;
    }
    else{
        for(int k=1;k<n;k++){
            int y=min(m,k-1);
            if(y==m){
                int s2=(k-1)-y;
                if(s2%2==1) y--;
            }
            if(y>=0) ans[k]=mx+p[y];
            else ans[k]=0;
        }

        if(z%2==1)
            ans[n]=mx+p[m];
        else
            ans[n]=0;
    }

    for(int k=1;k<=n;k++)
        cout<<ans[k]<<" ";

    cout<<endl;



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _;
    cin>>_;
    while(_--) solve();
}
