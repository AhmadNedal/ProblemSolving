#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    string str; cin>>str;

    int open =0 , bol= false;

    for (auto it : str ) {

         if ( bol && open == 0 ) {
            cout << "YES"<<endl;
            return;
         }
         if (it =='('){
                open +=1;
         }else {
            open -=1;
         }
         bol = true;

    }

    cout << "NO" <<endl ;





}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}


