#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}
ll n;
// Problem Link : https://codeforces.com/contest/698/problem/A

const int oo = 1e6+1 ;
int dp[105][5] ;

int G(int idx=0 , int last=0 )  {

    if ( idx == n ) return 0 ;


    int&ans = dp[idx][last] ;

    if ( dp[idx][last]!=-1) {
        return dp[idx][last];
    }

    ans = oo ;


    if ( v[idx] == 0 ) {

        ans = G ( idx+1,0)+1;

    }else if ( v[idx] ==1 ) {

        if ( last == 2 ) {
            ans = G ( idx+1 , 0 )+1;
        }else {
            ans = G ( idx+1 ,2);
        }

    }else if ( v[idx] ==2 ) {

         if ( last ==1 ){
            ans =G ( idx+1 , 0 )+1;
        }else {
            ans = G ( idx+1 ,1 );
        }

    }else {

        if (last!=1 ) {
          ans = G ( idx+1 , 1 ) ;
        }

        if (last!=2 ) {
            ans = min(ans , G ( idx+1,2 ) );
        }

    }

    return ans ;




}





void solve() {

    cin >>n ;
    k=n ;
    memset(dp,-1 , sizeof dp ) ;

    ll num ;
    while  (k-- ) {
        cin >> num ;
        v.push_back(num);
    }



     cout <<G()<<endl ;




}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t ;

    while (t--)solve();

    return 0;
}
