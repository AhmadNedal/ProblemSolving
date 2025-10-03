#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ret(tuple<ll, ll, ll> a, tuple<ll, ll, ll> b) {
    return get<0>(a) < get<0>(b);
}


void solve() {
    ll n,k ; cin>>n>>k;
    string str; cin>>str ;

    ll one= 0,Zero=0;

    for ( auto it :str ) {
        if ( it =='1')one++;
        if ( it =='0')Zero++;
    }
    
    if(k>n/2) {
        cout << "NO"<<endl; 
        return ; 
    }
    
    
    ll k2= k ;
    while ( k2-- ) {
        if ( one>Zero && one >1 ){
            one-=2;
        }else if(Zero>=one&&Zero>1 ){
            Zero-=2;
        }else{
            cout << "NO"<<endl;
            return ;
        }
    }
    
    

    if ( abs(one-Zero)>1) {
            cout << "NO"<<endl;
    }else {
            cout << "YES"<<endl;
    }





}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}


