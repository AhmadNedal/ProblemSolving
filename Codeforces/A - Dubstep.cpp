#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){

    string s;
    cin>>s;
    bool bol = false;
    for(int i=0;i<s.size();++i){
        if(i<s.size()-2&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            cout << " ";
            bol = true;
            continue;
        }
        bol = false;
        cout << s[i];
    }


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
