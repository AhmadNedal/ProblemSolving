#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

    void solve() {


        ll n ; cin >>n;
        vector <ll>v;

        for (ll num,i=0;i<n;++i){
            cin >>num ;
            v.push_back(num) ;
        }

        for (ll i=0,num;i<n;++i){
            cin >>num;

            v[i] = v[i]-num ;
        }

        sort ( v.begin() , v.end ( )) ;
        ll counter =0 ;
        for (ll num,i=0; i < n ;++i ){

            if( v[i]>0 ){
                counter += n-i-1 ;
            }else {

            num = v[i]*-1;
            auto upper = upper_bound(v.begin(), v.end(), num);
            counter +=  n - (upper-v.begin());
            }


        }

        cout << counter <<endl ;
 }

        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
            while (t--) {
             solve();
           }


            return 0;
        }
