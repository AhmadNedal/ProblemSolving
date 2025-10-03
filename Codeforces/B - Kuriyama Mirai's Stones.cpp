
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;

        void solve() {
        ll n ;cin >> n ;
        ll arr [n];
        ll arrsort [n];
        for ( int i =0 ; i < n ; ++i ) {
            cin >> arr[i] ;
            arrsort[i] = arr[i] ;
        }
           sort(arrsort, arrsort+n);
        for ( int i=1; i<n ; ++i ) {
            arr[i]+=arr[i-1];
            arrsort[i]+=arrsort[i-1];
        }
        ll m , num , l , r  ; cin >> m ;
        while ( m-- ) {
            cin >> num >> l >> r  ;
            r--;
            l--;
            if ( num ==1 ) {
                    if  (l == 0){
                        cout << arr[r] << endl;
                    }else {
                    cout << (arr[r]-arr[l-1]) <<endl;
                    }
            }else {
                 if  (l == 0){
                        cout << arrsort[r] << endl;
                    }else {
                    cout << (arrsort[r]-arrsort[l-1]) <<endl;
       }  } }
       }


    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ;

        while (t--) {
         solve();
       }
        return 0;
    }
