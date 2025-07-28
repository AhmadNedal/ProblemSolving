#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Link Problem : https://codeforces.com/contest/701/problem/C

void solve() {

    ll n; cin>>n;
    string str ; cin>>str ;

    set <char> s ;
    set <char> q ;
    map <char , int > m ;

    int l=0,r=0;

     for(int i=0;i<n;++i) {
        q.insert(str[i]);
     }

    int k = q.size();
    int counter = 1e6+1;

    for (;r<n;) {


     while(s.size()<k){
          m[ str[r] ] ++ ;
          s.insert( str[r] );
          r++;
     }


     while(m[str[l]]>1){
        m[str[l]]-=1;
        l++;
     }


     if (s.size()==k){
          counter = min ( counter , r-l) ;
          m[str[r]]++;
          r++ ;
      }

    }


     while(m[str[l]]>1){
        m[str[l]]-=1;
        l++;
     }



    counter = min ( counter , r-l) ;
    cout <<  counter << "\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;

    while (t--)solve();

    return 0;
}
