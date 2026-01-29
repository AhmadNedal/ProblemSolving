#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

vector<pair<ll,pair<ll,ll>>>v;

vector<int> v4,v3;
map<tuple<ll,ll,ll>,bool> dp;


void solve(){
    string s;cin>>s;
    string s2=s;
    bool bol=true,bol2=true;

    for(int i=0;i<s.size();++i){
        if(!isupper(s[i]))bol=false;
        if(i>0&&!isupper(s[i]))bol2=false;
    }

    if(bol2||bol)
        for(auto&it:s)
            if(islower(it))it=toupper(it);
            else it=tolower(it);



    cout<<s<<endl;

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
