#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr;
//vector<pair<int,bool>>v;
ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;
vector<ll>v,v2,primes;


void AllPrime() {
    vector<int> lp(n+1,0);
    for (int i=2;i<=N;i++) {
        if (lp[i]==0) {
            lp[i]=i;
            primes.push_back(i);
        }
        for (int p:primes) {
            if (p>lp[i]||1LL*i*p>n)break;
            lp[i*p]=p;
        }
    }
}



ll pow(ll a,ll n) {
    if(n==0)return 1;
    if(n%2==0){
        ll h= pow(a,n/2);
        return h*h;
    }else{
        return a*pow(a,n-1);
    }
}
   map <int,int>mp;



bool can(int mid){
   int nn = mp.size();
   ll num=(n-nn)*(mid/2) ;

   //  cout << "num = "<<num << " : " << mid <<endl;

    for(auto it:mp){
        if(it.second==mid)continue;
        else if(it.second<mid )
            num+= (mid-it.second)/2;
        else
            num-=it.second-mid;
    }

 //  cout << "After Num = " << num<<endl;

    return num>=0;

}


void solve(){

    cin>>n>>m;
    priority_queue<pair<int ,int >> p ;
    mp.clear();

    int num;

    for(int i=0;i<m;++i){
        cin>>num;
        mp[num]+=1;
    }

  //  int cannumber ;
  //  cin>>cannumber ;
  //  cout << "can("<<cannumber <<") = "<< can(cannumber )<<endl;


    ll l=1,r=1e8+1,mid,ans;

    while(l<=r){
        mid=(l+r)/2;


        if(can(mid)){
          // cout << "MID :  " << mid <<endl;
            ans= mid;
            r=mid-1;
            continue;
        }

        l=mid+1;

    }


    cout <<ans<<endl;



}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
