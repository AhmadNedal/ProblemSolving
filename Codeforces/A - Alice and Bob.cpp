#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;

void Mul(){

    ll x =2;
    while(x<=1e14+2){
        s.insert(x);
        x*=2;
    }

}

vector<int>v;
vector<int> v4,v2,v3,dp;

void solve(){

    ll n,m,a=0,b=0,x;
    cin>>n>>m;

    while (n--){
        cin>>x;

        if(x>m)
            a++;
        else if(x<m)
            b++;

    }


    cout << (a>b?m+1:m-1) <<endl;


}


int main(){
    int _=1;
    cin>>_;
   // Mul();
    while (_--)
        solve();

    return 0;
}
