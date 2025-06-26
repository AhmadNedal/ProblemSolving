#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
int N = 10001;
ll isPrime [1000001] = {0} ;
int arr[10001];

void solve() {

  ll  n,k ; cin >> n >> k;
  ll arr[k] ={0} ;
  ll counter =0 ;
    for ( int i,num ; i < n ; ++i ){
       cin >> num ;
       arr[num%k]++ ;
    }
 
 
    counter = arr[0]/2;
 
    if(k%2==0){
       counter +=arr[k/2]/2;
    }
 
    for (int i=1;i<(k+1)/2;++i){
       counter +=(min (arr[i],arr[k-i]));
    }
    
  cout << counter*2 <<endl;
  




  }





    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;//cin>>t;

        while (t--) {
         solve();
       }
        return 0;
    }
