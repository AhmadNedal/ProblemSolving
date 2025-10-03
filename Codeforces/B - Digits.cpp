#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
int N = 10001;
ll isPrime [1000001] = {0} ;



void solve() {

        ll n,d ; cin >> n >> d ;

        set <int>anser ;

        if ( n>=3 ){
            anser.insert(3) ;
            anser.insert(7) ;
        }

        if ( d==5) {
            anser.insert(5);
        }

        if ( d%3==0 ){
            anser.insert(3) ;
        }

        if ( n==2&&d==7){
           anser.insert(7);
        }


            if ( n >=6 ){
                anser.insert(9);
            }else {
            ll fac =1 ;
            int i=2;
            while ( i<=n ){
                fac *=i ;
                i++;
            }
            if ( (fac*d)%9==0 ){
                anser.insert(9) ;
            }
          }
            anser.insert(1);

            for ( ll numb : anser ){
                cout << numb << " " ;
            }
            cout <<endl;


      }



        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;cin>>t;

            while (t--) {
             solve();
           }

            return 0;

        }




