
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;




   void solve() {




        ll num ; cin >>num ;
        ll sq = sqrt(num) ;



        if ( isPrime[sq]==0 && (sq*sq)==num && num != 1000000000000 ){
            cout <<"YES"<<endl;
        }else {
        cout <<"NO" <<endl;
        }




    }





    int main()
    {

       isPrime[0] = 1 ;
       isPrime[1] = 1 ;
        for ( long long i=2 ; i <= 1000 ; ++i ){
             for ( long long j=2*i ; j<1000000; j+=i ) {
                 isPrime[j]=1;
             }
         }


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ; cin >> t ;

        while (t--) {
         solve();
       }

        return 0;
    }
