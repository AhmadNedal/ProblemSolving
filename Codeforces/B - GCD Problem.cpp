#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e18+1;

vector<ll>v,dp;
ll n,x;

void solve(){

    cin>>n;

    if(n%2==0){
        cout << n-3 <<" 2 1" <<endl;
        return ;
    }


     ll num = (n-1)/2 ;

     if ( num%2==0 )
         cout << num+1 << " " << num-1 <<" 1"<<endl;
     else
         cout << num+2 << " " << num-2 <<" 1"<<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
