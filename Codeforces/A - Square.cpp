#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){

    cin>>n>>x>>y>>z;

    cout <<(n==x&&x==y&&y==z?"YES":"NO")<<endl;




}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
