#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
    ll x,n;cin>>n;

    vector<ll>v,v2;

    v.resize(n);

    for(auto&it:v){
        cin>>it;
        v2.push_back(it);
    }

    sort(v2.begin(),v2.end());

    for(auto it : v )
        if(it==v2[v2.size()-1])
            cout << v2[ v2.size()-1 ]-v2[ v2.size()-2] << " ";
        else
            cout << it - v2[ v2.size()-1 ]<< " " ;






}

int main(){
    int t=1;cin>>t;

    while (t--)
        solve();

    return 0;
}
