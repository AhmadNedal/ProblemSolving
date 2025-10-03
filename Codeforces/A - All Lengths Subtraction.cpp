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

    cin>>n;
    v.resize(n);
    for(auto&it:v)cin>>it;

    if(n<3){
        cout << "YES"<<endl;
        return;
    }


    for(int i=0;i<n;++i){
        
        
        if(
           (v[i]==n)||
           (i!=0 && i!=n-1 && (v[i-1]>v[i]||v[i+1]>v[i])) ||
           (i==n-1&& v[i-1]>v[i]) ||
           (i==0&& v[i+1]>v[i])
          ){
                continue;
        }

        cout<<"NO"<<endl;
        return;
    }


   cout << "YES"<<endl;


}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
