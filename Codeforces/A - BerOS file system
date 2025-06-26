#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>



    void solve() {


       string str; cin>>str;
       bool bol = true ;
       string ans = "" ;

            for ( int i=0; i<str.size() ; ++i ){

                if ( str[i] == '/' && bol ){
                        ans+='/';
                        bol = false;
                }else if ( str[i] == '/' && !bol ){
                    continue;
                }else {
                    ans+=str[i] ;
                    bol = true;
                }
            }

            for ( int i = ans.size()-1 ; i > 0 ; --i ) {
                    if (ans[i] != '/') {
                        break;
                    }else {
                    ans[i] = ' ' ;
                }
            }

            cout << ans << endl;

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
