#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}





void solve() {
    ll n ;
    cin >>n ;

    map <ll,ll>m;
    bool vis[n*2+1]={0};
    ll arr[n][n];

    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>arr[i][j];
            m[i+j]=arr[i][j];
            vis[arr[i][j]]=true ;
        }
    }

    for (ll i=1;i<n*2+1;++i) {
        if ( !vis[i] ){
            cout << i << " " ;
            break;
        }
    }

    for (auto [key,value] : m) {
        cout << value << " " ;
    }

    cout << endl ;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
