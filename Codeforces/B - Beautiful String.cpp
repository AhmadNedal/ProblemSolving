#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){

    string s ;
    cin>>n>>s;
    vector<int>v;

    for(int i=0;i<s.size();++i)
        if(s[i]=='0')
            v.push_back(i);


    cout<<v.size()<<endl;

    for(auto it:v)
        cout<<1+it<<" ";

    cout<<endl;

}


int main(){
    int t=1;
cin>>t;
    while (t--)
        solve();

    return 0;
}
