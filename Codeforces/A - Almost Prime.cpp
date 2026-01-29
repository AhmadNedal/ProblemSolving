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

vector<bool>v;
vector<int> v4,v2,v3,dp;

void solve(){

    ll n; cin>>n;
    map<int,int> m;
    v.resize(3002);
    fill(v.begin(),v.end(),false);

    for(int i=2;i<1+n;++i)
        if(!v[i]){
            v[i]=true;
            for(int j=i+i;j<n+1;j+=i){
                v[ j ] = true;
                m[ j ] += 1;
            }
        }


    int ans=0;
    for(auto it:m)
        if(it.second==2&&it.first<=n)
            ans+=1;

    cout <<ans<<endl;







}


int main(){
    int _=1;
   // cin>>_;
   // Mul();
    while (_--)
        solve();

    return 0;
}
