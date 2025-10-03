#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {


    ll n ,m,l,r; cin>>n>>m>>l>>r ;

    ll diffrent = n-m ;

    ll ans =min(diffrent,r);

    diffrent-=ans ;

    r-=ans ;

    l = l+diffrent;

    cout << l << " " << r <<endl;





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
