#include <bits/stdc++.h>
#define ll long long
using namespace std;

void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}

vector<ll>v;
ll n,x,o,l,k,mn=LLONG_MAX,r=MOD,a,c,m,b,y;
string s,t;
//int const N =1e5+10 ;



void solve(){

    cin>>n;
    v.clear();
    v.resize(n);
    for(auto&it:v)cin>>it;

    for(int i=1;i<n;++i){
        if(abs(v[i]-v[i-1])<2){
            cout << "0"<<endl;
            return;
        }
    }


    for(int i=0;i<n;++i) {
        
        if((i>1&&v[i]>=min(v[i-1],v[i-2]) && v[i]<=max(v[i-1],v[i-2]))||i<n-2&&v[i]>=min(v[i+1],v[i+2]) && v[i]<=max(v[i+1],v[i+2]) ){
            cout << "1"<<endl;
            return ;
        }
        
    }


    cout << "-1"<<endl;



}

int main() {
    speed();

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
