#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;

void solve(){

    cin>>n>>x;
    v.resize(n);
    for (auto&it : v)cin>>it ;

    sort(v.begin() , v.end() );
    ll maxnum=0 , counter=1,last=0;
    last = v[0];

    if ( n==1 ) {
        cout << "0"<<endl;
        return ;
    }

    for(int i=1;i<n;++i) {

        if(abs(v[i]-v[i-1])<=x){
            counter +=1;
        }else {
            counter=1;
        }

        maxnum = max(maxnum, counter);
    }

    cout << n-maxnum <<endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
