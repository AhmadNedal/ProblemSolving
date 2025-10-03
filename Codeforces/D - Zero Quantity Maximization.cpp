#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num;


void solve(){

    cin>>n;
    vector<ll>a,b;
    a.resize(n);
    b.resize(n);
    for(auto&it:a)cin>>it;
    for(auto&it:b)cin>>it;



    map<long double,int>m ;

    ll add=0;

    for(int i=0;i<n;++i){
        if(a[i]==0&&b[i]!=0)continue;
        if(a[i]==0&&b[i]==0){
            add+=1;
            continue;
        }
        long double d = (long double)b[i] / (long double)a[i];
        d=-d;
        m[d]+=1;
    }

    ll ans =0;


    for(auto it:m){
        ans=max(ans,1ll*it.second);
    }


    cout <<ans+add<<endl;








}

int main(){
    int t=1;//cin>>t;

    while (t--)
        solve();

    return 0;
}
