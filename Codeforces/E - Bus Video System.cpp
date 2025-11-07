#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){

    int n,q;
    cin>>n>>q;

    int mx=0,mn=0,num=0,x;

    while(n--){
        cin>>x;
        num+=x;
        mx=max(mx,num);
        mn=min(mn,num);
    }


    cout << max(0,q-mx+1+mn) <<endl;




}


int main(){
    int _=1;
   // cin>>_;
    while (_--)
        solve();

    return 0;
}
