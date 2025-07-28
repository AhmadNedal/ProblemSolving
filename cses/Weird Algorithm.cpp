#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://cses.fi/problemset/task/1068/


void solve() {

    ll n;cin>>n;
    cout << n << " " ;

    while (n>1) {
        if(n==1){
            break;
        }
        if (n%2==1) {
            n = ((n*3)+1) ;
        }else {
            n/=2 ;
        }

        cout << n << " ";

    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
