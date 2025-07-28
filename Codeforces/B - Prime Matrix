        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        #include <limits>
        #define ll long long
        vector<long long> primes;
        const long long  N= 1e5+90;
        vector<bool> isPrime(N , 1 );



     void allprimes () {
        for ( long long i = 2 ; i < 1e5+100 ; ++i ) {

            if ( i%2==0 && i!=2 ){
                    continue ;
            }

            bool bol = true;

            for ( long long j = 3 ; j*j <=i ; j+=2 ){

                if ( i%j ==0 ){
                  bol = false ;
                  break;
                }
            }
            if ( bol ) {
                primes.push_back(i) ;
            }
          }
        }



    void solve() {


       allprimes();
       int row , col ; cin >> row >> col  ;
       int arr[row][col] ;
       int addrow = 1e5 ;
       int arr2[col] ={0};
       
      for ( int i=0 ; i<row ; ++i ){
              int added = 0 ;
           for ( int j=0 ; j<col ; ++j ){
              int num ; cin >> num ;
              int low = *lower_bound(primes.begin(), primes.end(),num);
              arr[i][j] = low - num ;
              added += low - num ;
              arr2[j] +=  low - num ;
              
           }
           addrow = min (addrow , added) ;
      }
        
        int mincol = 1e5 ;
        for ( int i= 0; i < col ;++i) {
            mincol = min(arr2[i], mincol) ;
        }



    cout<<min(mincol ,addrow)<< endl;







  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
          //  cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }

