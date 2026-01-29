#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){

    string s="qwertyuiopasdfghjkl;zxcvbnm,./";

    map<char,int>m;
    for(int i=0;i<s.size();++i)
        m[s[i]]=i;

    char ch;string t;
    cin>>ch>>t;

    for(auto&it:t)
        it = s [ m[ it]- (ch=='R'?1:-1)  ];


    cout << t <<endl;






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
