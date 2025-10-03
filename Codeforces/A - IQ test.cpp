#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

ll arr  [100001] ;
ll temp [100001] ;




    void solve() {


        int n,firstodd=-1,firsteven=-1,numodd=0,numeven=0; cin >> n;
        int arr[n] ;



        for ( int i=0,num;i<n ;++i){

            cin>>num;

            if(num%2==0 && firsteven==-1){
                firsteven =i+1 ;
            }else if(firstodd==-1&&num%2==1) {
                firstodd=i+1 ;
            }

            if(num%2==0){
                numeven ++ ;
            }else {
            numodd ++;
            }

         }

        if  (numeven > numodd )  {
            cout << firstodd <<endl;
        }else {
        cout << firsteven <<endl ;

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
