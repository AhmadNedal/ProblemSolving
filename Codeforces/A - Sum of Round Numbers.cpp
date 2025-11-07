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

   string ans,s;
   cin>>s;

   vector<string>v;

    for(int i=0;i<s.size();++i){
        if(s[i]!='0'){
            ans="";
            ans+=s[i];
            int j = i+1;

            while(j++<s.size())ans+='0';

            v.push_back(ans);
        }
    }

    cout<<v.size()<<endl;

    for(auto it:v)
        cout << it << endl;


}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
