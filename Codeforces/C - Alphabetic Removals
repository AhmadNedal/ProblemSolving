#include <bits/stdc++.h>
#define ll long long
using namespace std;




void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}



ll const MOD =1e9+7;

vector<ll>v,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
//int const N =1e5+10 ;
ll dp[1001];
bool bol = false ;

ll powerMod(ll a, ll b) {
    if (b == 0)
        return 1;

    ll h = powerMod(a, b/2);
    ll res= (h*h)%(bol?MOD:MOD-1);

    if (b%2==1)
        res=(res*a)%(bol?MOD:MOD-1);

    return res;
}







ll start =0 ;

/*
ll can(ll mid ){

    b = mid*(mid+1)/2;
    a=(n+k)*(n+k-1)/2;
    a-=b;

    b-=start ;


    return abs(a-b);
}
*/




void solve() {

    cin>>n>>k;
    cin>>s;
    int frq[26];
    memset(frq,0,sizeof frq) ;
    int idx=0 ;
    for(auto it :s){
        frq[it-'a']+=1;
    }


    map <char,int>m ;

    idx=0 ;
    for (auto it:frq) {
        if (it<=k) {
            m[idx+'a']+=it;
            k-=it ;
        }else {
            m[idx+'a']+=k;
            k=0 ;
        }

        idx+=1;

        if (k==0)break;
    }




    for (auto it : s ) {
        if( m[it]>0 ){
            m[it]-=1;
        }else {
            cout << it;
        }
    }









}

int main() {
    speed();

    int t=1;//cin>>t ;

    while (t--)solve();

    return 0;
}
