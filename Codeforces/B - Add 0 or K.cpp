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



void solve(){

   cin>>n>>k;

   while(n--){
          cin>>x;
          
          if(k%2==1){
              if(x%2==0)cout<<x<< " ";
              else cout <<x+k<<" ";
          }
          else
              cout<<x+(x%(k+1))*k<<" ";
     }

    cout <<endl;


}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
