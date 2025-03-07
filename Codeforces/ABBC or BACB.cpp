#include <bits/stdc++.h>
#define ll long long
using namespace std;
//link : https://codeforces.com/contest/1873/problem/G
const ll OO = 1e9 * -1;

ll n,k;
vector<ll> v;

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
