#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
vector<long long> primes;
const long long  N= 1e5+90;
vector<bool> isPrime(N , 1 );



    void solve() {

        int n ; cin >> n ;
        string str ; cin >>str ;
        int x=0,y=0;

        bool bol = false ;

        for(int i=0;i<str.size();++i){
            if(str[i]=='U'){
                y++;
            }else if (str[i]=='D'){
                y--;
            }else if (str[i]=='R'){
                x++;
            }else {
                x--;
            }

            if (x==1 && y==1) {
                bol =true ;
            }
        }


       if ( bol ) {
        cout <<"YES"<<endl;
       }else {
       cout << "NO"<<endl;
       }









  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
            cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }


