#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link : https://codeforces.com/contest/465/problem/B

ll n ; 
void solve() {

    cin>>n;
    vector<ll>v ;

    ll num =0;
    bool bol2 = false;
    bool bol=true;

    while ( n-- ) {
        cin>>num;

        if(bol &&num==0)continue;

        if(bol2&&num==0)continue;


        if (num==0){
            bol2=true;
        } else {
            bol2=false;
            bol=false;
        }
        v.push_back(num);
    }

    if(v.size()>0&&v[v.size()-1]==0)v.pop_back() ;

    cout << v.size()<<endl ;

}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while (t--)solve();
    return 0;
}
