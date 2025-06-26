        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        #include <limits>
        #define ll long long
        int N = 10001;
        ll isPrime [1000001] = {0} ;




        void solve() {

            ll n ; cin >> n ;
            vector <ll> v;
            for (int num,i=0;i<n;++i){
                  cin >> num ;
                  v.push_back(num) ;
             }

            sort ( v.begin() , v.end()) ;


            int q ; cin >> q;
            ll num ;
            for ( ll i=0 ; i<q;++i){
                cin >> num  ;


                int l=0,r=n-1, mid , ans=-1;

                while( l <= r ){
                    mid = (r+l)/2;
                    
                    if ( v[mid]> num ) {
                        r=mid-1;
                    }

                    if ( v[mid] <= num ) {
                        l = mid +1 ;
                        ans = mid+1 ;
                    }
                }

                if ( ans == -1 ){
                    cout << "0" <<endl;
                }else {
                cout << ans <<endl;
                }




            }




      }





        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;//cin>>t;

            while (t--) {
             solve();
           }
   
            return 0;
        }

