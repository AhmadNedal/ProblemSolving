#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll const MOD = 1e9+7;
int num ,n,ans;


void solve(){
    ll n,m;
    cin>>n>>m;
    vector<int>v(n);

    int x;

    cin>>v[0];

    for(int i=1;i<n;++i){
        cin>>x;
        v[i]=v[i-1]+x;
    }


    int l,r;

    for(int i=0;i<m;i++){

        cin>>l>>r>>x;

        ll mx=(r-l+1)*x;

        if(l-1>0)
            mx+=v[l-2];

        if(r<n)
            mx+=v[n-1]-v[r-1] ;

        cout << (mx%2==0?"NO":"YES") << endl;

    }

}


int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
