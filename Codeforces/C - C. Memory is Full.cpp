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
vector<int>v;



void solve(){

   cin>>k>>m>>n;
   v.resize(n);
   ll sum=0;

   for(int&it:v){
       cin>>it;
       sum+=it;
   }

   sort(v.rbegin(),v.rend());
   sum+=m;
   
   for(int i=0;i<n;++i){
      if(sum<=k){
         cout <<i<<endl;
         return;
      }
      sum-=v[i];
   }

   cout << n <<endl;



}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
