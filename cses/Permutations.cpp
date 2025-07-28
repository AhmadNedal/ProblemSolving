#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://cses.fi/problemset/task/1070


void solve() {


     ll n ; cin>>n;

       if ( n==1) {
            cout << "1"<<endl ;
        }else
       if (n==2||n==3) {
        cout <<"NO SOLUTION" <<endl;
       }else if ( n==4 ) {
        cout << "2 4 1 3"<<endl;
       }else {

        for(int i=1;i<n+1;i+=2){
            cout << i << " " ;
        }

        for(int i=2;i<n+1;i+=2){
            cout << i << " " ;
        }
      }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
