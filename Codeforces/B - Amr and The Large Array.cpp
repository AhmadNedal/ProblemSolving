#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,l=0,ans=0,mn=LLONG_MAX,r=MOD,y;
vector<ll>b,v;


void solve(){
    cin>>n;

    v.resize(n);
    map<ll,pair<ll,ll>>m;
    map<ll,ll>mp;
    ll mx=0 ;
    l=0,r=MOD;

    int i=0;

    for(ll&it:v){
        cin>>it;
        mp[it]+=1;
        mx=max(1ll*mp[it],mx);

        auto it2=m.find(it);

        if(it2!=m.end())
            it2->second.second = i+1;
        else
            m[it]={i+1,i+1};

        i+=1;
    }

    for(auto&it:mp){

        if(it.second!=mx)
            continue;

        auto it2=m.find(it.first);

        if(it2->second.second-it2->second.first < r-l) {
            r=it2->second.second;
            l=it2->second.first;
        }

    }



    cout << l << " " << r <<endl;



}



int main(){
    SPEED;
    int t=1;

    while (t--)solve();

    return 0;

}
