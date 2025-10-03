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
vector<ll>v;


void MultiplesOf3(){
    ll num=1;
    
    for(ll i=0;i<30;++i){
        v.push_back(num);
        num*=3;
    }
}


void solve(){

    cin>>n;
    ll ans=0;

    if(n<3){
        cout <<3*n<<endl;
        return;
    }
    
    while(n>0){
    
        if(n<3){
            ans+=n*3;
            break;
        }
        
        int idx=lower_bound(v.begin(), v.end(),n)- v.begin();;

        if(v[idx]>n)
            idx-=1;

        ll num = v[idx];

        n-=num;
        
        ans+=v[idx+1]+idx*v[idx-1];

    }

    cout <<ans <<endl;

}


int main(){
    SPEED;
    int t=1;cin>>t;

    MultiplesOf3();

    while (t--)solve();

    return 0;

}
