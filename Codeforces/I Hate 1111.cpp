#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link : https://codeforces.com/contest/1526/problem/B


void solve() {
    
    ll n ; cin>>n; 
    
    
    for (int i=0;i<n;++i){
        
        ll num = n-111*i ;
        if ( num%11==0 && num>=0) {
            cout << "YES"<<endl; 
            return ; 
        }
    }
    
    cout << "NO" <<endl; 
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
