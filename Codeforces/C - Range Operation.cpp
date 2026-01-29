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

vector<ll> v;
vector<ll>v2;

void solve(){

    ll b,c,d,x,y,a,n;cin>>n;

    v.resize(n+1),v2.resize(n+1);
    fill(v2.begin(),v2.end(),0);


    for(int i=1;i<=n;i++) {
        cin>>v[i];
        v2[i]=v2[i-1]+v[i];
    }

    ll l=v2[n];
    c=0;d=0;

    for(ll i=1;i<=n;i++){
         x=v2[i-1]-i*i+i;
         c=max(c,x);

         ll x=i*(i+1)-v2[i];
         ll a=c+x;

         d=max(d,a);
   }


   cout<<(l+max(0LL,d))<<endl;


}


int main(){
    int _=1;
    cin>>_;
    Mul();
    while (_--)
        solve();

    return 0;
}
