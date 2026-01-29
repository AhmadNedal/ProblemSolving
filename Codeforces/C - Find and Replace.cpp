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
    cin>>n;
    string s;cin>>s;
    map<int,int>m;

    m[s[0]]=1;
    bool bol = false ;



    for(int i=1;i<s.size();++i){
        if(m[s[i]]){
            if(bol!=(m[s[i]]==1)){
                cout <<"NO"<<endl;
                return;
            }
        }else
            m[s[i]]= bol?1:-1;

        bol=!bol;
    }

    cout << "YES" <<endl;
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
