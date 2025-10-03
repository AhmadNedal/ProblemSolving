#include <bits/stdc++.h>
#define ll long long
using namespace std;

//LinkProblem :https://codeforces.com/contest/1076/problem/B


void solve() {

    ll num ; cin>>num;

    if ( num %2==0 ) {
        cout << num/2 <<"\n";
        return ;
    }

    ll num2 = num ;


      for (int i = 2; i <= sqrtl(num); ++i) {
        if (num%i==0) {
            bool isPrime = true;
            for (int j=2;j<=sqrtl(i);++j) {
                if (i%j==0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                num2 = i;
                break ;
            }
        }
    }


    num -= num2 ;

    cout << 1 + num/2 <<"\n";







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1 ;//cin>>t ;
    while(t--)solve();

    return 0;
}
