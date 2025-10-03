#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/920/problem/C



void solve() {

         int n; cin >>n ;
        int arr[n+1];
        int com[n+1] ={0};

        for ( int i=1; i<=n ; ++i ){
            cin >>arr[i] ;
        }


        string str ; cin>>str;

        for ( int i=1; i<=n ; ++i ){
            com [i] = com[i-1]+(str[i-1]-'0') ;
        }

        for (int i=1; i<=n ; ++i ){

            if ( arr[i] == i ){
                continue ;
            }else  if ( arr[i] > i ){
                    if ( com[arr[i]-1]-com[i-1] != arr[i]-i ){
                        cout << "No"<<endl;
                        return  ;
                    }
            }else {
                if ( com[i-1] - com[arr[i]-1] != i-arr[i] ){
                    cout << "NO" <<endl;
                    return ;
                }



            }

        }
        cout << "YES" <<endl;







    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
