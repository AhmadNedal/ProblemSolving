#include bitsstdc++.h
#define ll long long
#define SPEED iossync_with_stdio(0); cin.tie(0);
#define YES cout  YESendl;
#define NO cout  NOendl;
#define IN(vec) for(auto&itvec) cin  it;
using namespace std;


ll const MOD =1e9+7;

vectorpairll,llv;
vectorvectorintseg,arr,v2;
vectorpairint,boolv;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
map pair int,int , ll m;


vectorll getPrimesUpTo(ll n=MOD) {
    vectorll primes;

    bitset1000000001 isPrime;
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;

    for (ll i = 2; i  i = n; i++) {
        if (isPrime[i]) {
             primes.push_back(i);
            for (ll j = i  i; j = n; j += i) {
                isPrime[j] = 0;
            }
        }
    }



    return primes;
}



void solve(){

    cinnk;

    if(kn(k==1&&(n&(n-1)))){
        cout  NOendl;
        return ;
    }

    if(k==1&&!(n&(n-1))){
        cout YESn  n endl;
        return ;
    }



    priority_queuell v;
    for(ll i=0;(1i)=n;i++)
        if(n&(1i))
            v.push(1i);

            

    if(v.size()k){
        cout  NOendl;
        return ;
    }


    while(v.size()k){
        ll num = v.top() ;
        if(num==1){
            cout NOendl;
            return;
        }
        v.pop();
        v.push(num2);
        v.push(num2);
    }


    coutYESendl;
    while (!v.empty()){
        coutv.top()(v.empty()n );
        v.pop();
    }
    

}


int main(){
    SPEED;
    int t=1;cint;

    while (t--)solve();

    return 0;
}
