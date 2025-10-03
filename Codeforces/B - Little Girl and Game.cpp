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

    string s; cin>>s;

    int num=0;

    map<char,int>m;

    for(auto it:s)
        m[it-'a']++;

    for(auto it :m)
        if(it.second%2==1)
            num++;


    cout <<((num<2||(num-1)%2==0)? "First":"Second")<<endl;



}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;

}
