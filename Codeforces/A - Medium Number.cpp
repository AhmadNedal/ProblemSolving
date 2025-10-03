#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
    int a[3];
    for(int i=0;i<3;++i)cin>>a[i];
    sort(a,a+3);
    cout <<a[1]<<endl;
}

int main(){
    int t=1;cin>>t;

    while (t--)
        solve();

    return 0;
}
