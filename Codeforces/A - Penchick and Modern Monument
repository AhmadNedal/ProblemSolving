    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;
    ll isPrime [1000001] = {0} ;



    void solve() {



       int n ; cin >> n;
       set <int> s ;
       int last=0,counter=1,maxx=0,index=0;
       for(int i=0;i<n ;++i){

        int num ; cin >> num ;

        if ( num == last ) {
            counter ++ ;
        }else {
        maxx = max(maxx,counter);
        counter=1;
        }
        last = num ;
        }

        maxx = max(maxx,counter);
        cout << n-maxx <<endl;


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
