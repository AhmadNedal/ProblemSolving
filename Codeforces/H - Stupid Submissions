#include <bits/stdc++.h>
#define ll long long
using namespace std;




void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}



ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;



void solve() {
    ll n,m,k; cin>>n>>m>>k;
    char ch[n];
    ans=0 ;
    for(auto&it:ch)cin>>it;


    char c;
    ll num;

    bool bol = false ;

    while(m--){

        cin>>c;


        if(c=='A'){
            k=n;
            continue;
        }

        cin>>num ;


       if(ch[num-1]=='B') {
           k=max(k,num);
           continue;
       }


       if(num<=k){
          ans+=1;
       }else{
           k=num;
       }

    }

    cout << ans <<endl;

}

int main() {
    speed();

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
