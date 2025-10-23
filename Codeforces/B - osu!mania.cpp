#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;




void solve(){
    cin>>n;
    vector<int>v;
    string s;

    while(n--){
        cin>>s;
        for(int j=0;j<s.size();++j)
            if(s[j]== '#')
                v.push_back(j+1);
    }

    reverse(v.begin(),v.end());

    for(auto it : v)
        cout<<it<< " ";



}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
