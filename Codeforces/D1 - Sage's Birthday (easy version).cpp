#include <bits/stdc++.h>
#define ll long long
using namespace std;

        void solve() {

        ll n; cin >>n ;
        ll arr[n];
        vector <ll>v ;
        for (ll i=0;i<n;++i){
            cin >>arr[i] ;
        }


        ll index=n-1,ii=n/2-1 ;
        bool bol = true ;

        sort(arr, arr+n);

        for(int i=0;i<n;++i){

            if(bol){
                v.push_back(arr[index]);
                index-- ;
            }else {
                v.push_back(arr[ii]);
                ii--;
            }

            bol =!bol ;




        }




        ll counter= 0 ;

        for(int i=1;i<n;i+=2){
            if (i==n-1){
                break;
            }
            if(v[i]<v[i-1]&&v[i]<v[i+1]){
                counter ++;
            }
        }

        cout << counter <<endl;

        for(ll i=0;i<n;++i){
            cout <<v[i] <<" " ;
        }






       }




            int main()
            {

                int t=1;//cin >>t;
                while(t--){
                    solve() ;
                }
                return 0;
            }
