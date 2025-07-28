#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/544/problem/B



void solve() {

 ll n,k; cin>>n>>k;
         ll nn = n ;
         nn*=nn;

         if (nn%2==1){
            nn ++ ;
         }

         if(((nn)/2) < k){
            cout << "NO" <<endl;
            return ;
         }


         cout << "YES"<<endl;

         for (int i=0;i<n;++i){

             bool bol= false ;
             if (i%2==0){
                bol = true;
             }

             for(int j=0;j<n;++j){

                if ( bol ) {
                    if ( j%2==0&&k>0) {
                        cout << "L";
                        k--;
                    }else {
                        cout << "S" ;
                    }
                }else {
                    if ( j%2==1 && k>0) {
                        cout << "L" ;
                        k -- ;
                    }else {
                        cout <<"S" ;
                    }
                }
             }
             cout <<endl ;

         }

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
