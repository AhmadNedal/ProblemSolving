#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
const int MAX_N = 1e5 + 1;
//int PrimesNum [3001] ;
//  vector<int> n(t), k(t);
vector<int> primes;
const int N= 1e5+1;
vector<bool> isPrime(N , 1 );

 
void solve() {
 
 
    ll  n,m ; cin >>n>>m ;
    ll arr[n] ;
    cin >> arr[0] ;
    for ( int i = 1 ; i < n; ++i ) {
        cin >>arr[i];
        arr[i]+=arr[i-1];
    }
 
    ll room[m];
 
    for ( int i=0 ; i < m ; ++i )cin>>room[i] ;
 
 
    int index = 0 ;
    while ( index < m ) {
 
        int i=0 ;
        i  = lower_bound(arr , arr+n ,room[index] ) - arr;
        
       if ( i ==0 )
           cout << i +1 <<" " << room[index] <<endl;
       else
           cout << i +1 << " "<< room[index] - arr[i-1]<<endl;
 
        index ++ ;
    }
 
 
}
 
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1 ;
 
    while (t--) {
     solve();
    }
    return 0;
}
