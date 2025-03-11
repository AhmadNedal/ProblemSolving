#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <bool>isPrime(1,true);
ll N = 1;


void sieve() {
    isPrime[0]=isPrime[1]=false ;
    isPrime[2]=true ;
    ll i=0;
    while (i<N) {
        i+=2;
        isPrime[i]=false ;
    }

    for (i=3;i*i<=N;i+2){
        if (isPrime[i]){
             for (ll j=i*i;j<=N;j+=i) {
                isPrime[j] = false;
            }
        }
    }


}


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
