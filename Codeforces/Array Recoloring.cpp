#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Link Problem : https://codeforces.com/contest/2075/problem/B



void solve() {


   ll n,k ; cin >>n>>k;
   vector <ll> v(n) ;

   for (int i=0;i<n;++i)cin>>v[i];


   if (k==1) {

        if ( n == 1 ){
            cout << v[0] <<"\n";
            return ;
        }

        ll maxnum =0 ;

        for (int i=1;i<n-1;++i){
            maxnum =max(maxnum,v[i]);
        }

        if ( min (v[0],v[n-1])>maxnum){
            maxnum=  min (v[0],v[n-1]);
        }

        cout << maxnum+max(v[0],v[n-1])<<"\n";
        return ;

   }



   sort ( v.rbegin() , v.rend() );

   ll sum =0 ;

   for (int i=0;i<k+1;++i){
        sum += v[i] ;
   }

   cout << sum << "\n";




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
