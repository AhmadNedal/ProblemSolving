#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

ll arr  [100001] ;
ll temp [100001] ;




    void solve() {



        int n;cin >> n ;

        string str="",str2="";

        for ( int i=0;i<n;++i){
            if ( i%2==0) {
                str +="##";
                str2+=".." ;
            }else {
                str2 +="##";
                str+=".." ;
            }
        }


        for ( int i=0;i<n;++i){
            if ( i%2==0) {
                cout << str <<endl <<str <<endl;
            }else {
                cout << str2 <<endl <<str2 <<endl;
            }
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
