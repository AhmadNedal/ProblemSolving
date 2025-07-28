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


  cin>>n>>m;
  int div[m+1]={};

  while(n--){
    cin>>x;
    div[x%m]++;
  }



  ans=0;



  for(int i=1;i<m/2+1;++i){

    if(i+i==m){
        if(div[i]>0)ans++;
           div[i]=0 ;
        continue;
    }

    int num = min(div[i],div[m-i]);

    if(num==0){
        ans += max(div[i],div[m-i]);
        div[i]=div[m-i]=0 ;
        continue;
    }

    ans +=+1+max(0,abs(div[i]-div[m-i])-1);


    div[i]=div[m-i]=0 ;
   
  }

  if(div[0]>0)ans +=1;


  cout << ans <<endl;



}

int main() {
    SPEED;

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
