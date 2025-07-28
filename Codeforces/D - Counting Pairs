
        ///*   AhmadNedalll   *///

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

void solve() {

        ll n,x,y,sum=0 ; cin>>n>>x>>y;
        vector <ll> v ;

        for (ll num,i=0;i<n;++i){
            cin >>num;
            sum +=num;
            v.push_back(num);
        }

        sort(v.begin(),v.end());

        ll counter=0,num=0,num1=0 ;

        for(int i=0;i<n;++i) {

            num  = sum-v[i]-x;
            num1 = sum-v[i]-y;

            auto upper = upper_bound(v.begin(), v.end(), num);
            int indexupper = upper-v.begin() ;

            auto lower = lower_bound(v.begin(), v.end(), num1);
            int indexlower = lower-v.begin();

            if ( i <= indexupper-1 && i >= indexlower ){
                counter -=1 ;
            }

            counter += indexupper-indexlower ;

        }

        cout << counter /2 <<endl;

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

