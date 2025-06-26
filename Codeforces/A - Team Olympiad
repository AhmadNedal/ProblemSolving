#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    ll n ; cin>>n ;
    vector <ll>v1,v2,v3;
    ll num;
    for (int i=0;i<n;++i) {
        cin >> num ;
        if (num==1){
            v1.push_back(i+1) ;
        }else if ( num == 2){
            v2.push_back(i+1) ;
        }else {
            v3.push_back(i+1) ;
        }
    }

    int idx = min ({v1.size() , v2.size() , v3.size() });
    if ( idx == 0) {
        cout << "0\n";
        return ;
    }
    
    cout << idx << "\n" ;
    for (int i=0;i<idx;++i){
        cout << v1[i] << " "<< v2[i] << " " << v3[i]<<"\n";
    }





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    while (t--)solve();

    return 0;
}
