#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
const int NN = 1e3+3;
ll v2[NN][NN];
vector<ll>v;



void solve(){
    ll a;
    cin>>n>>k;
    map<ll,int>m1,m2;

    for(int i=0;i<n;++i){
        cin>>a;
        a%=k;
        m1[max(a,k-a)]+=1;
    }

    for(int i=0;i<n;++i){
        cin>>a;
        a%=k;
        m2[max(a,k-a)]+=1;
    }



    cout <<(m1==m2?"YES":"NO")<<endl;




}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
