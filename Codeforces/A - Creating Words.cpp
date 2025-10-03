#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,N=1e7-1,num,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>v,a,b;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}

vector<int>f;



void solve(){

    cin>>s>>t;
    cout<<t[0];
    t[0]=s[0];
    s.erase(s.begin());
    cout<<s<<" "<<t<<endl;
    
    
}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
