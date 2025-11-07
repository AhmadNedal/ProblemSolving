#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;



void solve(){
    int n , num=0,ans=0;
    string s;cin>>s;

    for(auto it : s )
        if(it=='H'||it=='9'||it=='Q'){
            cout << "YES"<<endl;
            return;
        }

    cout << "NO"<<endl;

}


int main(){
    int _=1;
   // cin>>_;
    while (_--)
        solve();

    return 0;
}
