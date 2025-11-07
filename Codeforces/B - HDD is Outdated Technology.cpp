#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){
    cin>>n;

    map<int,int>m ;

    for(int i=0;i<n;++i){
        cin>>x;
        m[x]=i;
    }


    ll ans=0,idx=m[1];

    for(int i=2;i<1+n;++i){
        ans+= abs(m[i]-idx);
        idx=m[i];
    }

    cout << ans << endl;



}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
