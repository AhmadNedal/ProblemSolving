#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>



    void solve() {


        ll n,m,k ; cin >>n>>m>>k;
        ll q[m];
        ll ans[n+1] = {0};
        for (int i=0;i<m;++i){
            cin>>q[i];
        }

        bool bol1 =false;
        bool bol2 = false ;

        for (ll i=0,num;i<k;++i){
            cin>>num;
            ans[num]=1;
        }

        for (int i=1;i<n+1;++i){

            if (bol1&&ans[i]==0){
                bol2 =true ;
            }

            if (ans[i]==0){
                bol1 =true ;
            }
        }


        string str = "";
        for (int i=0;i<m;++i){

            if ( bol2 ) {
                str +="0";
            }else
            if (ans[q[i]]==0 && bol1){
                str += "1";
            }else if ( bol2 || (ans[q[i]]==1&&bol1)){
                str += "0";
            }else if ( ans[q[i]]==1&&!bol1){
                str += "1";
            }

        }

        cout <<  str<<endl;

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

