#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];






void solve() {

    ll n,m; cin>>n;
    v.clear();
    v.resize(10);

    while(n--){
        cin>>m;
        v[m%10]+=1; 
    }



    
    for (int i=0 ;i<10;++i){

        for (int j=0 ;j<10;++j){
            if(j==i)
                if ( v[j]<2)continue; 
            
            for (int k=0;k<10;++k){
                
                if (i==j&&j==k) {
                    if(v[i]<3) continue;
                } else if(i==j) {
                    if (v[i]<2||v[k]<1) continue;
                } else if (j==k) {
                    if (v[j]<2||v[i]<1) continue;
                } else if (i==k) {
                    if (v[i]<2||v[j]<1) continue;
                } else {
                    if (v[i]<1||v[j]<1||v[k]<1) continue;
                }

                
                int num = i+j+k ; 
                if(num%10 ==3 ){
                    cout << "YES"<<endl;
                    return;
                }
            }

        }
    }

    cout <<"NO"<<endl;



}

int main() {
    SPEED;

    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
