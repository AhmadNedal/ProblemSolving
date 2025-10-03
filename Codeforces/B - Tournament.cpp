#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
//int const N =1e5+10 ;


void solve() {

    ll m,k;
    cin>>n>>m>>k;

    v.resize(n);
    IN(v);

    if(k>1){
        YES;
        return ;
    }

    ll num= v[m-1];
    sort(v.begin() , v.end());

    if(num == v[n-1]){
        YES;
        return ;
    }

    NO;



}

int main() {
    SPEED;

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
