#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Problem Link : https://codeforces.com/contest/1149/problem/A


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}
ll n;

void solve() {

    cin >>n ;
    k=n ;
    memset(dp,-1 , sizeof dp ) ;

    int one= 0, two =0 ;

    ll num;

    for (int i=0; i < n;++i ) {
        cin>>num ;
        if(num==1){
            one ++;
            continue;
        }

        two+=1;

    }


    if (two > 0 ) {
        cout << "2 ";
        two -=1 ;
    }

    if (one > 0 ) {
        cout << "1 ";
        one -=1 ;
    }

    while ( two > 0 ) {
        cout << "2 " ;
        two -=1 ;
    }

    while ( one > 0 ) {
        cout << "1 " ;
        one -=1;
    }


















}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t ;

    while (t--)solve();

    return 0;
}
