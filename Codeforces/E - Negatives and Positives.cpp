#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    cin>>n;
    ll sum=0,x,num=0,mn=MOD;
    bool bol = false;

    while(n--){
        cin>>x;
        bol|=x==0;

        if(x<0)
            num+=1;

        mn=min(mn,abs(x));
        sum+=abs(x);
    }


    cout << (bol||num%2==0?sum:sum-2*mn)<<endl;



}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
