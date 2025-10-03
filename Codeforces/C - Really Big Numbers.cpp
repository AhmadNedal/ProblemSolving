    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;
    ll isPrime [1000001] = {0} ;

    long long s,n ;

    bool can (long long mid ) {
        ll temp = mid;
        int sum = 0 ;
        while ( temp ) {
            sum +=temp%10 ;
            temp /=10 ;
        }
        return mid-sum >= s ;


    }

    void solve() {

        cin >> n >> s ;

        ll res=n+1,l=9,r=n,mid ;


        while (l<=r){

           mid = (l+r)/2 ;

           if( can(mid) ){
            r = mid-1;
            res = mid;
           }else {
            l = mid+1;
           }


        }


        cout << n-res+1 <<endl;





    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ; //cin >> t ;

        while (t--) {
         solve();
       }


        return 0;
    }
