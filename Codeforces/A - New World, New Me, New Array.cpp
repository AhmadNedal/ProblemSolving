#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n ;

void solve() {

        int k1;
        double b ;
        cin >>n>>k1>>b;
        if (k1<-n*b||k1>n*b){
            cout << "-1\n";
        }else {
            cout << min(n,(int)ceil(abs(k1)/b)) <<endl;
        }
      }


    int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t= 1;
    cin >>t;
    while (t--) {
         solve();
    }



    return 0;
}
