#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Problem link : https://codeforces.com/contest/977/problem/C




void solve() {


    ll n,k; cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;++i)cin>>arr[i];

    sort(arr,arr+n) ;
    
    if(k==0){
       if(arr[0]==1){
           cout << "-1\n";
       }else {
           cout << "1\n"; 
       }
        return;    
    }
    
    if(k==n){
        cout << arr[n-1];
    }else if (arr[k-1]==arr[k])cout <<"-1\n";else {
        cout << arr[k-1]<<"\n";
    }



}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
