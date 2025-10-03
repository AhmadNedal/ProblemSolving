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
vector<set<int>>v;
const int N = 1e5*2+1;
map<ll,bool>vis;
map<ll,ll>mp;
vector<ll>b;
map<int, vector<int>> g;



ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}




void solve(){


   cin>>n;
   map<int,int>m;
   int num,mx=0;

   while(n--){
       cin>>num;
       m[num]+=1;
       mx=max(mx,m[num]);
   }

   //

    if(mx>=m.size())
        mx=min(mx-1,(int)m.size());
    

   cout << mx <<endl;

}
int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
