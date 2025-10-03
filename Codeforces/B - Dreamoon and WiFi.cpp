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


void solve(){
    cin>>s>>t;
    int num=0;

    for(auto it:s)
        if(it=='+')num+=1;
        else num-=1;

    int num2=0,num3=0;

    for(auto it:t)
        if(it=='+')num2+=1;
        else if(it=='-')num2-=1;
        else num3+=1;


    int number = abs(num2-num);
    
    if(num3<num2)
        number*=-1;

        
    queue<pair<int,int>>q;
    int i=0,num4=0;
    q.push({0,0});

    while(!q.empty()){
        auto x = q.front();
        q.pop();

        if(x.second==num3){
            if(x.first==number)
                i+=1;

            num4+=1;
            continue;
        }

         q.push({x.first+1,x.second+1});
         q.push({x.first-1,x.second+1});

    }

    double d=i*1.0/num4*1.0;

     cout<<fixed<<setprecision(12)<<d<<endl;

}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
