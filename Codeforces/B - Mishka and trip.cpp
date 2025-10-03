#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
vector<long long> primes;
const long long  N= 1e5+90;
vector<bool> isPrime(N , 1 );


    void solve() {

        int n,c ; cin >>n>>c;
        int arr[n];
        ll sum =0 ;
        for (int i=0;i<n;++i){
            cin >>arr[i] ;
            sum+=arr[i] ;
        }


        ll ans=0;

        for (int i=0,capital;i<c;++i){
            cin >>capital;
            capital--;
            sum -= arr[capital] ;
            ans += (arr[capital]*sum) ;
            arr[capital]=0;
        }


        for(int i=0;i<n-1;++i){
            ans += (arr[i]*arr[i+1]) ;
        }

        ans += arr[0] * arr[n-1];
        
        cout << ans <<endl;


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

