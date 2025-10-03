#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ret(tuple<ll, ll, ll> a, tuple<ll, ll, ll> b) {
    return get<0>(a) < get<0>(b);
}


void solve() {
    ll n ; cin>>n;



      for (int i=0;i<=99;i++) {
            for (int j=0;j<= 99;++j) {
                if ((i+j)*(i+j)== n) {
                    cout <<i<< " " <<j<< endl;
                    return ;
                }
            }
    }

    cout << "-1"<<endl;




}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}


