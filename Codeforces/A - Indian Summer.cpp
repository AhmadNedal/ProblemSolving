    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;

    ll isPrime [1000001] = {0} ;


    set <string> s;

    void solve() {


    string str ,str2 ;
    cin >>str >> str2 ;
    str += " " ;
    str += str2 ;
    s.insert(str) ;


    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ; cin >> t ;

        while (t--) {
         solve();
       }

       cout << s.size() <<endl;


        return 0;
    }
