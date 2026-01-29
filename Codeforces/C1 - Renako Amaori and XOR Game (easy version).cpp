#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    cin>>n;
    v.resize(n);
    v2.resize(n);

    for(auto&it:v)
        cin>>it;

    for(auto&it:v2)
        cin>>it;



    int last=-1,num=0;

    for(int i=0;i<n;++i){
        if(v[i]!=v2[i]){
            num+=1;
            last=i;
        }
    }


    if(num%2==0){
         cout<<"Tie"<<endl;
         return;
    }


    cout<<(last%2==1?"Mai":"Ajisai")<<endl;



}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
