#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {

    ll n,m;cin>>n>>m;

    ll arr[n+2][m+2]={0};
    memset(arr, 0, sizeof(arr));
    
    
    
    for(int i=1;i<n+1;++i) {
        for(int j=1;j<m+1;++j) {
            cin >>arr[i][j];
        }
    }



       for(int i=1;i<n+1;++i){
            for(ll num,j=1;j<m+1;++j){
                num =max({arr[i][j+1], arr[i][j-1],arr[i+1][j],arr[i-1][j]}) ;
               if(arr[i][j]>num){
                   arr[i][j]=num;
               }
            }
        }



    for(int i=1;i<n+1;++i) {
        for(int j=1;j<m+1;++j) {
            cout<<arr[i][j] << " ";
        }
            cout << "\n";
    }



 }


    int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _= 1;
    cin >>_;
    while (_--) {
         solve();
    }

    return 0;
}
