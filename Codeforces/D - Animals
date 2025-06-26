#include <bits/stdc++.h>
#define ll long long
using namespace std;





    void solve() {

    ll n,m;cin>>n>>m;
    ll arr[n];

    for(int i=0;i<n;++i) {
         cin >>arr[i];
         arr[i]*= (n-i);
    }

    sort(arr,arr+n) ;
    ll sum =0 ; 
    ll counter =0 ; 
    
    
    for (auto it : arr ) {
        if(it+sum<=m ){
            counter++; 
            sum+=it; 
        }
    }
    
    cout << counter <<"\n";
    
    




 }


    int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
        freopen("input.txt", "r", stdin) ;
        freopen("output.txt", "w", stdout) ;

        
    int _= 1;
    //cin >>_;
    while (_--) {
         solve();
    }



    return 0;
}
