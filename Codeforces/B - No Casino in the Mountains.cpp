#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,num,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>a;
//vector<set<int>>v;
const int N = 1e5*2+1;
map<ll,bool>vis;
map<ll,ll>mp;
vector<ll>b,v;
map<int, vector<int>> g;



ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}





void solve(){

    int n,k;
    cin>>n>>k;
    v.resize(n);

    for(auto&it:v)
        cin>>it;

    int num=0,ans=0;

    for(int i=0;i<n;++i){
        if(v[i]==0)
            num+=1;
        else 
            num=0;

        if(num==k){
            ans+=1;
            i+=1;
            num=0;
        }
    }

    cout<<ans<<endl;

}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
