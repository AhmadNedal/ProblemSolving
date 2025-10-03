#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {


    ll n ; cin>>n;
    ll arr[n];

    arr[0]=1;
    arr[n-1]=2;
    int num = n;

    for (int i=1;i<n-1;++i) {
        arr[i]=num;
        num-=1;
    }

    for (auto it : arr)cout << it << " " ;
    

    cout <<endl;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;


    while (t--)solve();

    return 0;
}
