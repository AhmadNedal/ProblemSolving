    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;
    ll isPrime [1000001] = {0} ;


    void solve() {



    int n ; cin >> n;
    int arr[n] ;

    set <int> Set ;
    map<int, int> Map;

    int maxx = 1 ;

    for ( int i =0 ; i < n ; ++ i)  {
        int num ; cin >> num ;

        if (Map.find(num) != Map.end()) {
            int value = Map[num];
           Map[num] = value +1 ;

           maxx = max ( maxx , Map[num] );


        } else {
            Map.insert({num, 1});
        }



    }


    cout << maxx << " " << Map.size() <<endl ;






    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ;// cin >> t ;

        while (t--) {
         solve();
       }


        return 0;
    }
