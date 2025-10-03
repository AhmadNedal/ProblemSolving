#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m,n,year=0 ; cin >>m>>n ;

    while ( m <= n )  {
            m = m*2 +m ;
            n *=2 ;
            year ++ ;
    }

    cout << year <<endl ;


     return 0;
}
