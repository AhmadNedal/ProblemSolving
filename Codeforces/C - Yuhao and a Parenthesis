#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    ll n ; 
    cin >>n;
    int open=0 , anscolse=0 ;
    string str;

    map<int,int> m;
    int num =0 ;

    for ( int i=0 ; i < n;++i) {
        cin >>str;
        open =0 , anscolse =0 ;

        for (auto it : str ) {
            if ( it==')'){
               if ( open > 0 ) {
                    open-=1;
                    continue;
               }else {
                    anscolse +=1;
               }
            }else if ( it=='('){
                open +=1;
            }
        }

        if ( anscolse ==0 && open==0 ) {
            num+=1;
        }else if ( open ==0 ) {
            m[-anscolse]+=1;
        }else if ( anscolse == 0 ) {
            m[open]+=1;
        }

    }


    ll ans =0;
    
    for (auto&it : m) {

        if (it.first==0) {
            ans += it.second/2 ;
            continue;
        }

        if (m[it.first*-1] > 0 && it.second> 0) {
            int pairs = min(it.second,m[it.first*-1]);
            ans += pairs;
            m[it.first*-1] -= pairs;
            it.second -= pairs;
        }

    }

    ans += num/2;
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
