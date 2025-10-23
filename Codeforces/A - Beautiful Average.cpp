#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;
string s,t,str;


void solve(){

    cin>>n;
    ll mx =0;
    y=0;
    while(n--){
        cin>>x;
        y=max(x,y);
    }

    cout <<y<<endl;







}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
