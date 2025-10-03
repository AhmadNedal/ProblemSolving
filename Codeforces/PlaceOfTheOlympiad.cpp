#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Problem Link : https://codeforces.com/contest/2091/problem/D


ll num,n,k,m;


bool can ( ll mid ) {

      mid +=1;
      ll ans ;
      ans = m/mid;
      ans *=(mid-1);
      ans += m%mid;



      if (ans>=num){
         return true;
      }

      return false ;

}


void solve() {


   cin>>n>>m>>k;

   num = k/n;

   if(k%n!=0)num++;

    // 3 4 7 ;
    ll l=1,r=1e9+1,mid,ans=1;

    while (r>=l){

       mid = (l+r)/2;

       if (can(mid)){
            r=mid-1;
            ans = mid ;
            continue;
       }

       l=mid+1 ;
    }

    cout << ans << endl;




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
