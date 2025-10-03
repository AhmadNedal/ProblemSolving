#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;
//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr;
//vector<pair<int,bool>>v;
ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;
vector<ll>v,v2,primes;


ll pow(ll a,ll n) {
    if(n==0)return 1;
    if(n%2==0){
        ll h= pow(a,n/2)%MOD;
        return h*h%MOD;
    }else{
        return a*pow(a,n-1)%MOD;
    }
}



void solve(){
    
    cin>>n>>m;
    ll num=1,ans=0;

    while(m--){
        cin>>x;
        if(x>=num)
            ans+=x-num;
        else
            ans+=(n-num)+x;
            
        num=x;
    }

    cout<<ans<<endl;

}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
