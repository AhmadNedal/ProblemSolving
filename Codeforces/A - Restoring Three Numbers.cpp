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


    ll v[4];
    for(auto&it:v)
        cin>>it;

    sort(v,v+4);

    cout <<v[3]-v[1]<< " " << v[3]-v[0] <<  " " << v[3]-v[2]<<endl;





}


int main(){
    int _=1;
    //cin>>_;
    while (_--)
        solve();

    return 0;
}
