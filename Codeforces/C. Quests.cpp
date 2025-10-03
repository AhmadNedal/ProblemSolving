#include <bits/stdc++.h>
#define ll long long
using namespace std;


//ProblemLink : https://codeforces.com/contest/1914/problem/C


void solve() {
    ll k ;
    cin>>n>>k;
    ll a[n],c[n];

    for (auto &it:a)cin>>it;
    for (auto &it:c)cin>>it;



    ll maxnum=0,num=0;
    ll add=0,maxx=0;

    for(int i=0;i<n;++i) {

        if (i>=k)break;

        maxx=max(maxx,c[i]);
        maxnum = max(maxnum, (k-i-1)*maxx+add+a[i]);

        add+=a[i];

    }

    cout << maxnum<<endl;





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
