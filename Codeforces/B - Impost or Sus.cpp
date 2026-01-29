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
    string s; cin>>s;
    int num=0;
    if ( s[0] == 'u')
        num+=1;
    if ( s[s.size()-1] == 'u')
        num+=1;

    s[0]=s[s.size()-1]='s';


    for(int i=1;i<s.size();++i){
        if(s[i]== s[i-1]&&s[i]=='u'){
            num+=1;
            s[i]='s';
        }
    }

    cout << num <<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    cin>>_;
    while(_--)
        solve();

    return 0;
}
