#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;




void solve(){

    cin>>n>>m;

    vector<ll>v;
    v.resize(n);

    ll sum=0,sum2=0;

    for(auto&it:v){
        cin>>it;
        sum+=it;
    }

    vector<ll>pre(n),suf(n);

    pre[0]=v[0];
    suf[n-1]=v[n-1];

    for(int i=1;i<n;i++)
        pre[i]=pre[i-1]+v[i];

    for(int i=n-2;i>-1;i--)
        suf[i]=suf[i+1]+v[i];

    for(int i=0;i<n;i++){
        ll ans=sum-v[i]+m;
        if(i>0)ans=max(ans,pre[i-1]);
        if(i+1<n)ans=max(ans,suf[i+1]);
        cout<<ans<<' ';
    }

    cout<<endl;

}

int main(){
    int t=1;
    //cin>>t;
    while (t--)
        solve();

    return 0;
}
