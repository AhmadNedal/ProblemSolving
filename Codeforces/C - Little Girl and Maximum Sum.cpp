#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>v;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}




void solve(){
    int n,q; cin>>n>>q;

    vector<int>v;
    vector<int>v2;
    v.resize(n);
    v2.resize(n);


    fill(v2.begin(),v2.end(),0);

    for(auto&it:v)cin>>it;

    int l,r;

    while(q--){
        cin>>l>>r;
        r-=1,l-=1;

        v2[l]+=1;
        if(r==n-1)
            continue;

        v2[r+1]-=1;

    }

    for(int i=1;i<n;++i)
        v2[i]+=v2[i-1];


    sort(v2.begin(),v2.end());
    sort(v.begin(),v.end());

    ll sum=0;

    for(int i=0;i<n;++i)
        sum+= v[i]*1ll*v2[i]*1ll;




    cout<<sum<<endl;








}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;

}
