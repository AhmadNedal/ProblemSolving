#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n ; 

void solve() {

    cin>>n;
    ll arr[n] ;

    for (auto&it:arr)cin>>it ;

    for (int i=0 ; i<n; ++i ) {

        if(arr[i]==i+1)continue;

        if(abs(arr[arr[i]-1]-arr[i])!=1){
            cout<<"NO"<<endl;
            return;
        }
    }


    cout << "YES"<<endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;
    while (t--)solve();

    return 0;
}
