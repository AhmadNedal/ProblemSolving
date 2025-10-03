#include <bits/stdc++.h>
#define ll long long
using namespace std;

//problemLink : https://codeforces.com/contest/1352/problem/C

void solve() {


    ll n,x; cin>>n>>x;

    cout << (x+n-2)/(n-1)*n-(((x+n-2)/(n-1)*n-(x+n-2)/(n-1))-x+1) <<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
