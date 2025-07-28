#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;

ll const MOD =1e9+7;
vector<ll>v,seg,arr,v2;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;


void solve() {

    cin>>n>>s>>t;

    int num =0 ;

    for(int i=n-1;i>-1;--i) {
        if(s[i]==t[i])continue;

        if(s[i]!=t[i]&&i==0)
            ++num;

        if(i==0)break; 
        
        if(s[i]==t[i-1]&&t[i]==s[i-1])
            i-=1;

        num+=1;
        
    }


    cout<<num<<endl;


}


int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
