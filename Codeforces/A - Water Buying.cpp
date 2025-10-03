#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num;


void solve(){

    ll a,b;
    cin>>n>>a>>b;

    cout<< min ( a*n , b*((n-(n%2))/2) + ((n%2)*a))<<endl;

}

int main(){
    int t=1;cin>>t;

    while (t--)
        solve();

    return 0;
}
