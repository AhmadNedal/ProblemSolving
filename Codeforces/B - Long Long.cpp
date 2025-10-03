#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

void solve() {


    ll n ; cin>>n;
 
    ll arr[n];
    bool bol = false ;
    ll counter =0,sum=0 ;
    for(ll i=0;i<n;++i) {
        cin >>arr[i] ;
        if ( arr[i] ==0 ){
            continue;
        }else if (arr[i]<0){
            if ( !bol ){
                counter ++;
                bol = true;
            }
            sum +=(arr[i]*-1) ;
        }else {
            bol = false ;
            sum +=arr[i] ;
 
        }
 
    }
 
    cout <<sum<<" "<<counter<<endl;

 }

        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            int t=1;
            cin>>t;

            while (t--) {
             solve();
           }


            return 0;
        }
