#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>



void solve() {

    int n; cin >> n;
   string str ;
   char ch,ch2;
   bool found =true ;
   string arr[n] ;

        for ( int i=0;i<n;++i){
            cin >>arr[i];
        }

        ch = arr[0][0]; ch2 = arr[0][1] ;

        if ( ch == ch2 ) {
            cout << "NO" <<endl;
            return ;
        }

        for ( int i=0;i<n;++i) {

            for(int j=0;j<n;++j) {

                if (j==i || j==n-i-1){

                    if (ch!=arr[i][j]){
                        found = false ;
                        break;
                    }

                }else {

                    if ( ch2!=arr[i][j] ){
                        found = false ;
                        break ;
                    }
                }
            }


            if ( !found ) {
                break ;
            }


        }


           if ( found ) {
            cout << "YES" <<endl;
           }else {
            cout << "NO"  << endl;
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
            //cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }



