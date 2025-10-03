#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k,m,d;

void solve(){
    cin>>n>>m>>k>>d;

    if( min(n,m)>= (max(n,m)-1)/2 && min(k-n,d-m)>=( max( k-n,d-m)-1)/2)
        cout<<"YES"<<endl;
    else
        cout << "NO"<<endl;


}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
