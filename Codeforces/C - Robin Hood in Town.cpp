#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr,v2;
vector<ll>v;
ll n,x,o,a,b,sum=0,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;




void solve() {
   sum=0;
   cin>>n;
   v.resize(n);
   for(auto&it:v){
        cin>>it;
        sum+=it;
   }

   if(n<3){
       cout<<-1<<endl;
       return;
   }
   
   sort(v.begin(),v.end()); 

   cout << max(v[n/2]*2*n-sum+1,0LL) <<endl;



}


int main(){
    SPEED;s

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
