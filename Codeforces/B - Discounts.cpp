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


void solve(){

    cin>>n>>k;
    v.resize(n);
    a.resize(k);
    ll sum =0;
    for(auto&it:v){
        cin>>it;
        sum+=it;
    }

    for(auto&it:a)cin>>it;

    sort(v.rbegin(),v.rend());
    sort(a.begin(),a.end());


    int idx= 0;

    for(int i=0;i<k;++i){
        idx += a[i]-1;

        if(idx>=v.size())
            break;

        sum-=v[idx];

        idx+=1;
    }

    cout << sum<<endl;

}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}