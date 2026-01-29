#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v;
vector<int> v4,v2,v3,dp;

void solve(){

    cin>>n;
    v.resize(n);


    for(auto&it:v)
        cin>>it;

    ans=0;
    if(v[0]!=-1&&v[v.size()-1]!=-1) {
         ans = abs(v[v.size()-1]-v[0]);

        cout <<ans<<endl;

         for(auto it:v)
             cout<<(it==-1?0:it)<<" ";
         cout <<endl;

         return ;
    }


        if(v[0]==-1&&v[v.size()-1]==-1){
            v[0]=0;
            v[v.size()-1]=0;
        }
        else if(v[0]==-1)
            v[0]=v[v.size()-1];
        else if(v[v.size()-1]==-1)
            v[v.size()-1]=v[0];


        cout <<ans<<endl;
        for(auto it:v)
            cout<<(it==-1?0:it)<<" ";
        cout <<endl;

}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
