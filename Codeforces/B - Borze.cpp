#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;


vector<int>v;
vector<int> v4,v2,v3,dp;

void solve(){

    string s;
    cin>>s;



    for(int i=0;i<s.size();i++)
        if(i<s.size()-1&&s[i]=='-'&&s[i+1]=='-'){
            cout <<2;
            i+=1;
        }else if (i<s.size()-1&&s[i]=='-' && s[i+1]=='.'){
            cout <<1;
            i+=1;
        }else
            cout<<0;



}

int main(){
    int _=1;

    while (_--)
        solve();

    return 0;
}
