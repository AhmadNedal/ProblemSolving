#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<ll>v,seg,arr,v2;
ll n,x,o,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


bool can(int mid, int i , int j ){


    return (mid+i+j<=x&& (i*j+i*mid+mid*j)<=n );

}




void solve() {


  ll k1,k2;
  cin>>n>>k1>>k2;
  k = k1+k2;
  int a[n],b[n];


  for(auto&it:a)cin>>it;
  for(auto&it:b)cin>>it;


  v.clear();
  priority_queue<ll> p ;
  ll num;

  for(int i=0;i<n;++i){
    num =abs(a[i]-b[i]);
    if(num!=0)p.push(num);
  }


  while(!p.empty()&&k>0) {

    num = p.top() ;
    p.pop();
    num-=1;
    k-=1;

    if(num>0)p.push(num);

  }

  if(k>0&&k%2==1){
    cout <<1 <<endl;
  }else {

   num =0 ;
   while (!p.empty()) {
        num += (p.top()*p.top());
        p.pop();
    }

    cout << num <<endl;

  }




}

int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
