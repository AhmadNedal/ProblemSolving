#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link : https://codeforces.com/contest/2091/problem/C


void solve() {

   ll n;
   cin>>n;
   
   if ( n % 2 ==0 ) {
        cout << "-1\n" ;
        return ;
   }


   for (int i=1; i<n+1;) {
        cout << i << " " ;
        i+=2 ;
   }

   for (int i=2;i<n+1;) {
        cout << i << " " ;
        i+=2;
   }

   cout<<"\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
