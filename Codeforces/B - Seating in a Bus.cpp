#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

ll arr  [100001] ;
ll temp [100001] ;




    void solve() {

        int n ; cin >> n ;
        int arr[n]={0},arred[n]={0};


        for ( int i =0 ; i < n ; ++i ) {
            cin >> arr[i];
            arr[i] -- ;
        }

        arred[arr[0]] = 1 ;

        bool bo = true;
        for ( int i= 1 ; i < n ; ++i ) {

            if ( arr[i] > 0 && arr[i] < n-1 ){

                if ( arred[arr[i]-1]!=0 || arred[arr[i]+1]!= 0 ){
                    arred[arr[i]] = 1;
                }else {
                    bo = false ;
                    break;
                }

            }else if ( arr[i] == 0 ) {

            if ( arred[1] != 0 ) {
                arred[0] = 1 ;
            }else {
                bo = false;
                break ;
                }

            }else if ( arr[i] == n-1 ) {

                if ( arred[n-2] != 0 ) {
                    arred[n-1] = 1;
                }else {
                    bo = false ;
                    break;
                }

            }
        }

        if ( bo ) {
            cout << "YES"<<endl ;
        }else {
            cout << "NO" <<endl;
        }
}



        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
      //  #ifndef ONLINE_JUDGE
      //      freopen("AhmaD.in", "r", stdin);
      //      freopen("AhmaD.out", "w", stdout);
      //  #endif

            int t=1;
            cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }
