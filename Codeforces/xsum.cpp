#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/371/problem/B

    int  dp[4001];

    ll fac(ll n) {

    int res = 1;

    for (int i = 2; i <= n; i++) {
        res *= i;
    }

    return res;
    }



    void solve() {

        ll n,m;cin>>n>>m;

        ll arr[n][m]={0};
        ll arr2[n][m]={0};
        ll arr3[n][m]={0};

        for(int i=0;i<n;++i) {
          for(int j=0;j<m;++j) {
             cin >>arr[i][j];
             arr2[i][j] = arr[i][j] ;
             arr3[i][j] = arr[i][j] ;
          }
        }

        for(int i=0;i<n;++i) {
          for(int j=0;j<m;++j) {
             if(!(i==0||j==0 )) {
                arr[i][j] +=arr[i-1][j-1] ;
             }
          }
        }

        for(int i=0;i<n;++i) {
          for(int j=0;j<m;++j) {
             if  (!(i==0||j==m-1 )) {
                arr2[i][j] +=arr2[i-1][j+1] ;
             }
          }
        }



        ll ans =0 ;

        for(int i=0;i<n;++i) {
            ll num=0;
          for(int j=0;j<m;++j){
                ll ii=i,jj=j;


                while (ii<n-1&&jj>0 ) {
                    jj--; ii++;
                }
                ll ansx = arr2[ii][jj];

                ii=i,jj=j;
                while (ii<n-1&&jj<m-1 ) {
                    jj++; ii++;
                }
                ll ansy = arr[ii][jj];
                ans = max ( ans ,ansy+ansx-arr3[i][j]) ;

          }
        }

        cout <<ans <<endl;





    }



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _= 1;
    cin >>_;
    while (_--) {
         solve();
    }

    return 0;
}

