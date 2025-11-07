#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
vector<int>v;

int rec(int idx){

    if(idx==n)
        return 0;


    int ans =0;
    if(v[idx]-v[idx-1]==num){
        ans = rec(idx+1);
    }else if (v[idx]+1-v[idx-1]==num){
        ans = rec(idx+1)+1;
    }else if ( v[idx]-1-v[idx-1]==num){
        ans = rec(idx+1)+1;
    }else {
        return MOD;
    }





}


void solve(){

    int n,k;
    cin>>n>>k;

    vector<string>v,ans;

    v.resize(n);
    ans.resize(n/k);


    for(auto&it:v)
        cin>>it;


    for(int i=0;i<n;i+=k){

        for(int j=0;j<n;j+=k)
            cout<<v[i][j];

        cout<<endl;

    }



}


int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
