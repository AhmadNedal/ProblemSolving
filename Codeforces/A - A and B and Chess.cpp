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

    // ll n,m;cin>>n>>m;
    map <char,int>m;

    m['q']=9,m['r']=5,m['b']=3,m['n']=3,m['p']=1;


    int num =0 ;
    string s;
    for(int i=0;i<8;++i){
        cin>>s;
        for(char it : s )
            if(islower(it))
                num+=m[it];
            else
                num-=m[tolower(it)];


    }

    cout << (num==0? "Draw" : num<0 ? "White" :"Black" )<<endl;




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
