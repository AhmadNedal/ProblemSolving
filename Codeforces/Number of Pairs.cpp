#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/1538/problem/C



void solve() {

      ll n,num,lower,upper; cin>>n>>lower>>upper;
        vector <ll> v ;
        for (ll i=0;i<n;++i) {
            cin>>num;
            v.push_back(num) ;
        }


        sort(v.begin(),v.end());

        ll num2 =0,ans=0 ;
        for (int i=0;i<n;++i){
            if (v[i]>upper) {
                break;
            }

            num = upper - v[i] ;
            ll num2 = num-(upper-lower);
            auto it2 = upper_bound(v.begin() , v.end(),num );
            auto it  = lower_bound(v.begin() , v.end(),num2 );


            int idx = it-v.begin ()  ;
            int idx2 = it2-v.begin ()  ;

            ans += idx2 - idx ;
            if ( v[i] >= num2 && v[i]<= num ) {
                ans -- ;
            }



        }

        cout<<ans/2 <<endl;




}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
