#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){

    ll x,y,k;
    cin>>x>>y>>k;

    x+=k-1,y+=k-1;
    ll maxnum=2*max(x/k,y/k);

    maxnum-=x/k>y/k?1:0;

    cout<<maxnum<<endl;


}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
