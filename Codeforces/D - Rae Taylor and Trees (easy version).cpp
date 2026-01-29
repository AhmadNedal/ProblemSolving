#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    cin>>n;
    v.resize(n);
    for(auto&it:v)
        cin>>it;

    vector<ll>mn(n),mx(n);

    mn[0]=v[0];
    for(int i=1;i<n;++i)
        mn[i]=min(mn[i-1],v[i]);

    mx[n-1]=v[n-1];
    for(int i=n-2;i>-1;--i)
        mx[i]=max(mx[i+1],v[i]);


    for(int i=0;i<-1+n; ++i)
         if (mn[i]>mx[i+1]) {
             cout<<"No"<<endl;
             return;
          }

        cout <<"Yes"<< '\n';



}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
