#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://cses.fi/problemset/task/1069


void solve() {


    string str ; cin>>str ;
    ll num=0,counter= 0 ;
    char ch ='1' ;
    for (int i=0;i<str.size();++i){
        if (str[i] == ch ) {
            counter ++ ;
        }else {
             num = max (num , counter ) ;
            counter =1;
            ch = str[i];

        }
    }
            num = max (num , counter ) ;

    cout << num <<endl;




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
