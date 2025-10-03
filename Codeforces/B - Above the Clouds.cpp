#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,a,b,y;
string s,t;




void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;


    cin>>n;
    cin >>s;
    map <char, int>m;

    m[s[0]]+=1; 
    m[s[n-1]]+=1; 
    
    for (int i=1; i<s.size()-1;++i) {
        m[s[i]]+=1; 
        if(m[s[i]]>1){
            cout <<"yes"<<endl;
            return;
        }
    }
    cout << "no"<<endl;






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
