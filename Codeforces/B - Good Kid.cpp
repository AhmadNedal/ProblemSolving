#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll OO = 1e9 * -1;

ll n;
vector<ll> v;
vector<vector<ll>> dp;

void solve() {


      cin>>n;
      ll arr[n];

      for( int i=0;i<n;++i) {
        cin>>arr[i];
      }

      ll ans =1 ;
      sort (arr ,arr+n);
      arr[0]+=1;

      for( auto it : arr) {
        ans *= it;
      }

      cout << ans << "\n" ;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t--)solve();
    return 0;
}
