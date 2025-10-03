
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;



   void solve() {

            int n,k; cin  >>n>>k;
            int arr[n];

            for ( int i=0; i<n;++i){
                cin >>arr[i];
            }

            bool bol =true;
            int index =1 ;
            for ( int i=0;i<n;++i) {
                bol = true;
                for (int j=0;j<n;++j) {

                    if ( j!=i && (abs(arr[j]-arr[i])%k==0) ){
                        bol = false ;
                        break;
                    }


                }

                if (bol) {
                 index = i+1 ;
                  break;
                }

            }
            if ( bol ) {
                cout << "YES" <<endl ;
                cout << index <<endl;
            }else {
            cout << "No" <<endl; }








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
