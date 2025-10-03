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
vector<pair<int,bool>>v;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


vector<ll> getPrimesUpTo(ll n=MOD) {
    vector<ll> primes;

    bitset<1000000001> isPrime;
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;

    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
             primes.push_back(i);
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }



    return primes;
}



void solve(){
    ll h ;
    cin>>n>>h>>k;

    vector<ll>v;
    v.resize(n);


    for(int i=0;i<n;++i)
       cin>>v[i];


    ll num =0 ;
    ll sum =0 ;


    for(int i=0;i<n;++i){

        if(h-sum>=v[i]){
            sum+=v[i];
        }else {
            if(sum%k!=0){
                num+=1 ;
                sum=0 ;
            }
            sum+=v[i];
        }

        ll e=sum/k;
        num+=e;
        sum -= (e*k);
  }

    if(sum%k!=0)num+=1;



    cout << num <<endl;






}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
