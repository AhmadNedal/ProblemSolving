#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>


    void solve() {



    int n; cin >>n ;
    vector<ll> v,v2;

    for(ll i=0,num;i<n;++i){
       cin>>num;
       v.push_back(num);
       v2.push_back(num);
    }

    bool bol1=false ,bol2=false;
    int num=1,l=-1,r=-1;

    for(int i=1;i<n;++i){

        if (v[i]<v[i-1]){

            if ( bol2 || num==-1){
                cout << "no" <<endl;
                return ;
            }

            if ( !bol1 ){
                l=r=i;
            }else {
                r++;
            }
           bol1=true ;
        }else {
            if ( bol1 ){
                num=-1;
            }
        }



    }

    if ( r ==-1 || l==-1){
        cout << "yes \n1 1" ;
        return ;
    }else if ( r==n-1&&l==1){
        cout << "yes \n1 "<<n ;
        return;
    }

    int right = r ;


    reverse (v.begin()+l-1 , v.begin()+r+1 );

sort ( v2.begin(), v2.end()) ;
    if ( v2 == v) {
        cout << "yes" <<endl;
        cout << l <<" "<< r+1 <<endl;
    }else {
        cout << "no" <<endl;
    }


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
