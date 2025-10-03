#include <bits/stdc++.h>
#define ll long long
using namespace std;


void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}


ll const MOD =1e9+7;

ll n,x,o,l,k,mn=LLONG_MAX,r=MOD,y;
string s,t;


void solve() {
    cin>>n ;
    ll ans =0 ;

    if ( n ==1 || n==2 ) {
        cout<<0<<endl;
        return ;
    }

    if( n==3 ) {
        cout <<1 <<endl;
        return;
    }


    if (n%2==1){
        n-=1;
        ans +=1;
    }

    cout << ans + (n-2)/2 <<endl;

}


int main() {
    speed();

    int t=1;//cin>>t ;

    while (t--)solve();

    return 0;
}
