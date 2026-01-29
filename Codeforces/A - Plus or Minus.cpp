#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
vector<int>v;

set<ll>s;

void Mul(){

    ll x =2;
    while(x<=1e14+2){
        s.insert(x);
        x*=2;
    }

}


void solve(){


    int a,b,c;
    cin>>a>>b>>c;
    cout<< (a+b==c?'+':'-') <<endl;

}


int main(){
    int _=1;
    cin>>_;
    Mul();
    while (_--)
        solve();

    return 0;
}
