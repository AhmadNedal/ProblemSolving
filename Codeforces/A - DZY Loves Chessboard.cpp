#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>



void solve() {


   int c,r; cin >> c>>r;
   string str ;
   string arr[c] ;
   string ans [c];

        for ( int i=0;i<c;++i){
            cin >>arr[i];
        }

        bool isEven;
        string str2 ="";
        for (int i=0;i<c;++i) {

                if (i%2==0){
                    isEven= true ;
                }else {
                isEven= false ;
                }

          str2="";
          for(int j=0;j<r;++j) {
                if ( arr[i][j] =='-'){
                    str2+= '-' ;
                    isEven = !isEven ;
                    continue;
                }

               if(isEven){
                  str2+= 'B';
               }else {
                  str2+= 'W' ;
               }
               isEven =!isEven ;
            }

            cout << str2 <<endl;

        }


 }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
             solve();
             return 0;
        }

