#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    int n;cin >>n ;

    if ( n % 2 == 1 ){
        n-=1;
    }

    cout << n/2 <<endl;
}


int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
