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
    // Free Gaza // 
    
    ll m;
    cin>>n>>m;

    bitset<32>a(m);
    bitset<32>b(n);
     
    ll ans=0;

     for(int i=0;i<32;++i)
        if(a[i]!=b[i])
            ans += pow(2,i);        

     cout <<ans <<endl;


}



int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
