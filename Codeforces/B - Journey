#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>


void solve() {

        ll arr[3];
        ll sum=0,n;cin>>n>>arr[0]>>arr[1]>>arr[2];

        sum =arr[0]+arr[1]+arr[2];


        ll counter = (n/sum);
        n-= sum*counter ;
        counter *=3 ;

        for(int i=0;i<3;++i){
            if (n>0){
                n-=arr[i];
                counter ++;
            }
        }


        cout << counter <<endl;



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
