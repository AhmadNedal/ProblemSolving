#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
vector<long long> primes;
const long long  N= 1e5+90;
vector<bool> isPrime(N , 1 );
 int arr[111] ;
 int number =1001,n;



    void req(int index , int numofbreak,bool lastcon , bool lastgym){

        if ( index == n) {
            number = min  (number , numofbreak ) ;
            return;
        }

        if ( arr[index] == 0 ){
            req ( index+1 , numofbreak+1,false , false ) ;
        }else if (arr[index]==1){
            if ( lastcon ){
                req(index+1,numofbreak+1,false ,false) ;
            }else {
                req(index+1,numofbreak,true , false );
            }
        }else if  (arr[index]==2){

            if (lastgym){
                req ( index+1 , numofbreak+1,false,false);
            }else {
                req(index+1,numofbreak,false ,true ) ;
            }
        }else if ( arr[index]==3){ bool bol =true ;

             if(lastcon && lastgym ){

                req (index+1,numofbreak+1,false ,false ) ;

                bol = false ;

            }

            if ( !lastcon && bol ){
                req(index+1,numofbreak,true , false ) ;

                if(arr[index+1] ==0  ){
                    bol =false ;
                }

            }

            if ( !lastgym && bol  ){
                req (index +1 ,numofbreak,false ,true );
            }
        }
    }



    void solve() {

        cin >> n;
        for(int i=0;i<n;++i){
            cin >>arr[i] ;
        }
        req (0,0,false ,false ) ;
        cout <<number <<endl;




  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
            //cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }
