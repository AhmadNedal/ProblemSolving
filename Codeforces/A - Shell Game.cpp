#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    int l,r,m;

    cin>>m;

    int num=3;

    while(num--){
        cin>>l>>r;

        if ( l == m )
            m=r;
        else if (r== m )
            m=l;

    }


    cout << m <<endl;





    /*
    2 14
    7 5
    */
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int _=1;
   // cin>>_;
    while (_--)
        solve();

    return 0;
}
