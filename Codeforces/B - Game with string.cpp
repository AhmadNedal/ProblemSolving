#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){

    stack<char>s;

    string str;
    cin>>str;

    int num =0 ;
    for(auto it : str ) {
        if (!s.empty()&&it == s.top() ){
            s.pop();
            num+=1;
        }else {
            s.push(it);
        }
    }


    cout << (num%2==0? "NO": "YES" ) <<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
