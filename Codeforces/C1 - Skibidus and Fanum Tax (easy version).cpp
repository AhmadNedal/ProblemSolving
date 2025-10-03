#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<ll>v,seg,arr,v2;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;





void solve() {
   ll x;
   cin>>n>>x;

   v.resize(n);

   for(auto&it:v)cin>>it;

   cin>>x;


   v[0]=min(v[0],(x-v[0]));


   for(int i=1;i<n;++i){
        
        if(v[i]==v[i-1]){
            continue; 
        }else if(v[i]<v[i-1]){
            v[i]=max(x-v[i],v[i]); 
        }else if(x-v[i]>=v[i-1]&&((x-v[i])<=v[i]))
            v[i]=x-v[i];
        
   }
   
   
        v2=v;
        sort(v2.begin(),v2.end());
        cout <<(v==v2?"YES":"NO")<<endl;
        
        
   
}


int main() {
    SPEED;

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
