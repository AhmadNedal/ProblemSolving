#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
vector<int>v;



void solve(){

    int n;
    cin>>n;

    ll l=0,r=0;
    map<ll,bool>m;

    m[0]=true;

    ll x;
    bool bol = false;

    for(int i=0;i<n;++i){
        cin>>x;

        if(i%2==0)
            r+=x;
        else
            l+=x;

        if (m[r-l])
            bol = true ;

        m[r-l]=true;

    }

    cout<<(bol?"YES":"NO")<<endl;


}


int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
