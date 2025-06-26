        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        #include <limits>
        #define ll long long
        int N = 10001;
        ll isPrime [1000001] = {0} ;



    void solve() {

     long long  n; cin>>n;
     long long  arr[n];
     for ( long long  i=0;i<n;++i) {
        cin >>arr[i];
     }

     sort ( arr, arr+n) ;

     long long  Alice=0,Bob=0,index=n-1;

     for(long long  i=0;i<n;++i){

        if (i%2==0){
            if (arr[index]%2==0){
                Alice+=arr[index];
            }else {
                arr[index]=0;
            }
        }else {
            if (arr[index]%2==1){
                Bob+=arr[index];
            }else {
                arr[index]=0;
            }
        }
        index--;
     }


     if ( Alice > Bob ) {
        cout << "Alice" <<endl;
     }else if ( Alice < Bob ) {
        cout << "Bob"  <<endl;
     }else {
        cout << "Tie"  <<endl;
     }



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
