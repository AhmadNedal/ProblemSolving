#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Link Problem : https://codeforces.com/contest/2104/problem/A



void solve() {


    string str;cin>>str ;
    bool bol=true,bol2=false ;
    int n = str.size() ;


    for ( int i=1;i<n;++i) {
        if ( str[i-1]=='A'&&str[i]=='B'&&bol){
            bol = false ;
            i+=1;
        }else if (!bol&&str[i-1]=='B'&&str[i]=='A'){
            bol2 = true;
            break;
        }
    }

    if ( bol2 ){
        cout << "YES"<<endl;
        return ;
    }

    bol=true,bol2=false ;

    for (int i=1;i<n;++i) {
        if ( str[i-1]=='B'&&str[i]=='A'&&bol){
            bol = false ;
            i+=1;
        }else if (!bol&&str[i-1]=='A'&&str[i]=='B'){
            bol2 = true;
            break;
        }
    }


    if ( bol2 ){
        cout << "YES"<<endl;
        return ;
    }


    cout <<"NO"<<endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
