#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    ll n ; 
    cin >>n ;
    ll num ;
    map <ll ,ll >m;
    for ( int i=0 ; i < n;++i ) {
        cin >> num;
        m[num]+=1;
    }

    for (auto it:m){
        if(it.second%2==1){
            cout << "YES"<<endl;
            return;
        }
    }


    cout << "NO"<<endl;

}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
