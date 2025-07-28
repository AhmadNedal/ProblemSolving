#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Link Problem : https://codeforces.com/contest/368/problem/B


void solve() {


    int n; cin>>n;
    int m ; cin>>m;
    set <int> s ;
    vector<int> v(n,0);
    int num;

    for (auto&it:v)cin>>it;


    reverse(v.begin(),v.end()) ;

    for (int i=0;i<v.size();++i) {
        s.insert(v[i]) ;
        v[i]=s.size() ;
    }

    reverse(v.begin(),v.end()) ;

    while(m--) {
        cin>>num;
        cout <<v[num-1]<<endl;
    }






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
