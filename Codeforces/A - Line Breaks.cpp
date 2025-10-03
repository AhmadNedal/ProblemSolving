
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;
    ll isPrime [1000001] = {0} ;


    void solve() {

       int n,counter=0,m ; cin>>n>>m;
       bool bol = true;
       for (int i=0 ;i<n ;++i) {
        string str ; cin >>str ;
        if  (str.size()<=m && bol) {
            counter++;
            m-= str.size() ;
        }else {
        bol = false ;
        }
       }

       cout <<counter <<endl;












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
