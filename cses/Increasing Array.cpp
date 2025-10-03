#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://cses.fi/problemset/task/1094


void solve() {


     ll n,a=0,b=0,c=0;
        cin>>n;
        cin >> b;

        for(int i=1;i<n;++i){
            cin>>a;
            if (a<b) {
                c+= (b-a) ;
            }

            b = max(b,a) ;
        }

        cout << c <<endl;







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
