#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
const int NN = 1e3+3;
ll v[NN][NN];
vector<ll>v2;



void solve(){

/*
    11
    aaabaaaaaba
    12323456767
*/
    ll a,b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    for(int i=1;i<1e3+1;++i)
        if(min(a,b)*i==max(a,b)){
            cout<<1<<endl;
            return;
        }



    cout<<2<<endl;




}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
