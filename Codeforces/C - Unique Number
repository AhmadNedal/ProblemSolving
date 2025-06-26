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

        int num ; cin >> num ;
        ll sum =0 ;
        string str = "" ;

        for ( int i=9 ; i>0 ;--i ) {
            if ( (sum+i) <=num ){
                sum +=i;
                char ch = (i+'0');
                str += ch;
            }

        }

        reverse(str.begin(), str.end());

        if ( sum == num )
        cout << str <<endl;
        else cout << "-1" <<endl;

    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ; cin >> t ;

        while (t--) {
         solve();
       }

        return 0;
    }
