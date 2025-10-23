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

    cin>>n;

    cout<<n/100+(n%100)/20+(n%20)/10+(n%10)/5+n%5<<endl;

}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
