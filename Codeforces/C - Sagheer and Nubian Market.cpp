#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

ll arr  [100001] ;
ll temp [100001] ;
ll n,s,sum=0,lastsum=0;


bool binary(ll mid){
        sum =0 ;
        for(ll i=0;i<n;++i){
            temp[i]=((i+1)*(mid))+ arr[i] ;
        }

        sort(temp,temp+n);

        for (ll i=0;i<mid;++i){
            sum +=temp[i];
        }

        if (sum<=s){
            lastsum = sum ;
            return true ;
        }

        return false ;
    }



    void solve() {




        cin>>n>>s;
        for ( int i=0;i<n;++i) {
            cin>>arr[i];
        }

        ll l=0,r=n,mid,lastindex=-1;

        if ( n==1 ) {
            if ( arr[0] + 1 <= s ){
                cout << 1 << " " << arr[0]+1 <<endl;
            }else {
                cout << 0 << " " << 0 <<endl;
            }

            return ;

        }

        while ( r >= l ){

            mid=(r+l)/2;
            if (binary(mid)){
                lastindex = mid ;
                l = mid+1 ;
            }else {
                r = mid-1;
            }
        }

        binary ( lastindex ) ;




        cout << lastindex <<" " << sum <<endl;






  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
      //  #ifndef ONLINE_JUDGE
      //      freopen("AhmaD.in", "r", stdin);
      //      freopen("AhmaD.out", "w", stdout);
      //  #endif

            int t=1;
            //cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }
