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

    cin>>n>>s>>s;

    int ans=0;

    if (s=="month"){
        ans+=n<30;

        if(n<=30)
            ans+=4;

        cout<<7+ans<<endl;
        return ;
    }

    ans=52+(n==5||n==6);

    cout<<ans<<endl;


}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
