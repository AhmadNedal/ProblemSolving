#include <bits/stdc++.h>
#define ll long long
using namespace std;
//link : https://codeforces.com/contest/1873/problem/G
const ll OO = 1e9 * -1;

ll n,k;
vector<ll> v;
vector<vector<ll>> dp;

ll rec(ll idx, ll helthy) {
    if (helthy < 0) {
        return OO;
    }
    if (idx == n) {
        return 0;
    }
    ll &res = dp[idx][helthy];

    if (res!= -1) {
        return dp[idx][helthy];
    }

    if (v[idx] < 0) {
        res = max(rec(idx + 1, helthy), rec(idx + 1, helthy + v[idx]) + 1);
    } else {
        res = rec(idx + 1, helthy + v[idx]) + 1;
    }

    return res;
}


 bool can(ll hei) {
      ll sum =0 ;
      for (int i=0;i<n; ++i ) {
            if (hei-v[i]>0)sum+=(hei-v[i]);
      }
      if ( sum <=k) return true ;
      return false;
 }

void solve() {

      string str; cin>>str;
      n = str.length() ;
      ll numA= 0,sum=0 ;
      bool bol = false ;
      v.clear();

      for(int i=0;i<n;++i) {
         if(i>0) {
            if(str[i]=='B'&&str[i+1]=='B')bol=true;
         }
         if ( str [i] == 'B') {
            v.push_back(numA);
            sum+=numA;
            numA=0 ;
         } else {
            numA++;
         }
      }

      if (numA>0){
         v.push_back(numA);
         sum +=numA;
      }
      
      if ( str[0] =='B' || str[n-1]=='B'){
        bol = true ;
      }


      if ( bol ) {
        cout<<sum <<"\n";
      }else {
        sort (v.begin() , v.end() ) ;
        cout << sum-v[0] << "\n";
      }





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t--)solve();
    return 0;
}