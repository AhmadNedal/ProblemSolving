#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    ll l,r; cin>>l>>r; 
    
    ll add=1; 
    ll ans=1;
    while (l+add<=r){
        l+=add; 
        add+=1;
        ans +=1;  
    }
    
    cout << ans <<endl; 
    




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
