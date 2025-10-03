#include <bits/stdc++.h>
#define ll long long
using namespace std;


//LinkProblem : https://codeforces.com/contest/2104/problem/B





void solve() {


    ll n;cin>>n;
    vector<ll>v ;
    ll num ;

    for (int i=0;i<n;++i){
        cin>>num ;
        v.push_back(num) ;
    }

    vector<ll> arr(n,0);

    ll maxele=0 ;

    for (int i=0;i<n;++i) {
        maxele=max(maxele,v[i]);
        arr[i]=maxele;
    }

    reverse(v.begin(),v.end()) ;
    reverse(arr.begin(),arr.end()) ;

    for (int i=1;i<n;++i) {
        v[i]+=v[i-1] ;
    }

    cout << arr[0]<<" ";
    for(int i=0;i<n-1;++i) {

        cout <<v[i]+arr[i+1]<<" " ;


    }







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
