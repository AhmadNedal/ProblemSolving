#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin>>n>>x;

    v.resize(n);

    for(auto&it:v)cin>>it;


    vector <ll>ans;

    for(auto it:v ){
        if(find(ans.begin(), ans.end(), it)==ans.end()){
            ans.insert(ans.begin(),it);
            if ( ans.size()==x+1 ) {
                ans.resize(x);
            }
         }
    }

    cout <<ans.size()<<endl; 
    for(auto it : ans ) {
        cout <<it << " " ;
    }

    cout <<endl;






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
