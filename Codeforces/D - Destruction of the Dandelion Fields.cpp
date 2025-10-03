#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,a,N=1e7-1,num,b,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
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

    cin>>n;
    ll sum =0;
    v.clear();

    for(int i=0;i<n;++i){
        ll it ;
        cin>>it;

        if(it%2==1)
            v.push_back(it);
        else
            sum+=it;
    }
    
    if(v.size()==0){            
        cout << 0 <<endl;
        return;
    }

    sort(v.rbegin(),v.rend());
    
    
    for(int i=0;i<(v.size()+1)/2;++i)
        sum+=v[i];
    
    
    cout <<sum<<endl;
    

}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
