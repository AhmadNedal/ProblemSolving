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

     ll a, b;
     cin>>a>>b;
     o=b;
     int num =0 ;

     while(o%2==0){
        num+=1;
        o/=2;

     }

      ans=-1;
      if(a%2==1){
            if(num==0)
                ans=a*b+1;
            else if(num!=1)
                ans=a*(b/2)+ 2;
      }
        else{
            if (num!=0)ans =a*(b/2)+2;

        }


 cout << //"Ans = "
    ans<<endl;


}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
