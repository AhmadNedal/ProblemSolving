#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin>>n;
 
    x=(n*(n+1)/2);

    cout << x*6+1<<endl; 

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t ;

    while (t--)solve();

    return 0;
}
