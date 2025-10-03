#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    ll n,m ; cin>>n>>m ;

    string arr[7]={ "" , "1/1","5/6","2/3","1/2","1/3","1/6"} ;

    cout << arr[max(n,m)] <<endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t =1 ; 
    while (t--) {
         solve();
    }

    return 0;
}
