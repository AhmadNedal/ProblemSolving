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


void solve() {

    ll m,k;
    cin>>n;

    v.resize(n);
    IN(v);

    string str ="1";
    ll mn=v[0];

    for(int i=1;i<n-1;++i){

        if(v[i]<mn) {
            mn = min (mn , v[i]) ;
            str+="1";
            continue;
        }
            mn = min (mn , v[i]) ;
        str+="0";
    }




    mn=v[n-1];
    for(int i=n-2;i>0;--i){

        if(v[i]>mn){
            str[i]='1';
        }
        mn = max(mn,v[i]);
    }

    str+="1";
    cout << str <<endl;


}

int main() {
    SPEED;

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
