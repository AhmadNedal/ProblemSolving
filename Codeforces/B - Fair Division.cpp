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





void solve(){

    cin>>n;
    int one=0,two=0;

    while(n--){
        cin>>x;
        if(x==1)one+=1;
        else two+=1;
    }


    if((two%2==0&&one%2==0)||(two%2==1&&one%2==0&&one>0))
        cout << "YES" <<endl;
    else
        cout << "NO"<<endl;





}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
