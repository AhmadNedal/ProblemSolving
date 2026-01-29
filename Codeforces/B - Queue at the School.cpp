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
   cin>>n>>x>>s;

   for(int i=0;i<x;++i)
        for(int j=1;j<n;){
            if(s[j]=='G'&&s[j-1]=='B'){
                s[j]='B';
                s[j-1]='G';
                j+=2;
            }else
                j++;
        }


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
